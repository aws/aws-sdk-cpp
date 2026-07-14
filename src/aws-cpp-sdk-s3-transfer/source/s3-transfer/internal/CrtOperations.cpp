/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-transfer/internal/CrtOperations.h>
#include <aws/s3-transfer/internal/S3TransferManagerImpl.h>
#include <aws/s3-transfer/internal/HandleImpls.h>
#include <aws/s3-transfer/internal/TransferState.h>
#include <aws/s3-transfer/S3DownloadBuffer.h>

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpRequest.h>
#include <aws/core/http/URI.h>
#include <aws/core/http/standard/StandardHttpRequest.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <aws/core/platform/FileSystem.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/crt/http/HttpRequestResponse.h>
#include <aws/crt/io/Stream.h>
#include <aws/s3/S3Errors.h>
#include <aws/s3/S3ErrorMarshaller.h>
#include <aws/s3/s3.h>

#include <algorithm>
#include <cassert>
#include <fstream>
#include <future>
#include <utility>

namespace Aws {
namespace S3 {
namespace Transfer {
namespace Internal {

static const char* const CRT_OPERATIONS_LOG_TAG = "CrtOperations";

namespace {

Aws::Client::CoreErrors MapCrtErrorCode(int crtErrorCode) {
  switch (crtErrorCode) {
    case AWS_ERROR_S3_MISSING_CONTENT_RANGE_HEADER:
    case AWS_ERROR_S3_MISSING_CONTENT_LENGTH_HEADER:
    case AWS_ERROR_S3_MISSING_ETAG:
    case AWS_ERROR_S3_MISSING_UPLOAD_ID:
      return Aws::Client::CoreErrors::MISSING_PARAMETER;
    case AWS_ERROR_S3_INVALID_CONTENT_RANGE_HEADER:
    case AWS_ERROR_S3_INVALID_CONTENT_LENGTH_HEADER:
    case AWS_ERROR_S3_INVALID_RANGE_HEADER:
    case AWS_ERROR_S3_MULTIRANGE_HEADER_UNSUPPORTED:
    case AWS_ERROR_S3_INCORRECT_CONTENT_LENGTH:
    case AWS_ERROR_S3_INVALID_MEMORY_LIMIT_CONFIG:
      return Aws::Client::CoreErrors::INVALID_PARAMETER_VALUE;
    case AWS_ERROR_S3_INTERNAL_ERROR:
    case AWS_ERROR_S3_PROXY_PARSE_FAILED:
    case AWS_ERROR_S3_UNSUPPORTED_PROXY_SCHEME:
    case AWS_ERROR_S3_NON_RECOVERABLE_ASYNC_ERROR:
    case AWS_ERROR_S3_METRIC_DATA_NOT_AVAILABLE:
    case AWS_ERROR_S3_EXCEEDS_MEMORY_LIMIT:
      return Aws::Client::CoreErrors::INTERNAL_FAILURE;
    case AWS_ERROR_S3_SLOW_DOWN:
      return Aws::Client::CoreErrors::SLOW_DOWN;
    case AWS_ERROR_S3_INVALID_RESPONSE_STATUS:
    case AWS_ERROR_S3_RESPONSE_CHECKSUM_MISMATCH:
    case AWS_ERROR_S3_CHECKSUM_CALCULATION_FAILED:
    case AWS_ERROR_S3_LIST_PARTS_PARSE_FAILED:
    case AWS_ERROR_S3_RESUMED_PART_CHECKSUM_MISMATCH:
    case AWS_ERROR_S3_FILE_MODIFIED:
    case AWS_ERROR_S3_INTERNAL_PART_SIZE_MISMATCH_RETRYING_WITH_RANGE:
    case AWS_ERROR_S3_RECV_FILE_ALREADY_EXISTS:
    case AWS_ERROR_S3_RECV_FILE_NOT_FOUND:
      return Aws::Client::CoreErrors::VALIDATION;
    case AWS_ERROR_S3_CANCELED:
      return Aws::Client::CoreErrors::USER_CANCELLED;
    case AWS_ERROR_S3_REQUEST_TIME_TOO_SKEWED:
      return Aws::Client::CoreErrors::REQUEST_TIME_TOO_SKEWED;
    case AWS_ERROR_S3EXPRESS_CREATE_SESSION_FAILED:
      return Aws::Client::CoreErrors::CLIENT_SIGNING_FAILURE;
    case AWS_ERROR_S3_REQUEST_TIMEOUT:
      return Aws::Client::CoreErrors::REQUEST_TIMEOUT;
    default:
      return Aws::Client::CoreErrors::INTERNAL_FAILURE;
  }
}

Aws::Client::AWSError<Aws::S3::S3Errors> MapCrtError(const Aws::Crt::S3::S3MetaRequestResult& result) {
  auto httpRequest = Aws::MakeShared<Aws::Http::Standard::StandardHttpRequest>(
      CRT_OPERATIONS_LOG_TAG, Aws::Http::URI("/"), Aws::Http::HttpMethod::HTTP_GET);
  // StandardHttpResponse's constructor eagerly invokes the request's response-stream factory to
  // materialize its body stream; without this the factory is empty and aborts under -fno-exceptions.
  httpRequest->SetResponseStreamFactory(Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
  std::shared_ptr<Aws::Http::HttpResponse> response =
      Aws::MakeShared<Aws::Http::Standard::StandardHttpResponse>(CRT_OPERATIONS_LOG_TAG, httpRequest);

  if (result.errorCode != AWS_ERROR_SUCCESS && result.responseStatus == 0) {
    response->SetClientErrorType(Aws::Client::CoreErrors::NETWORK_CONNECTION);
    Aws::StringStream ss;
    ss << "crtCode: " << result.errorCode << ", " << aws_error_name(result.errorCode) << " - "
       << aws_error_str(result.errorCode);
    response->SetClientErrorMessage(ss.str());
    response->SetResponseCode(Aws::Http::HttpResponseCode::REQUEST_NOT_MADE);
  } else {
    response->SetResponseCode(static_cast<Aws::Http::HttpResponseCode>(result.responseStatus));
  }

  // Copy the borrowed error headers/body out of CRT memory (valid only during this callback).
  for (const auto& header : result.errorResponseHeaders) {
    response->AddHeader(Aws::Utils::StringUtils::FromByteCursor(header.name),
                        Aws::Utils::StringUtils::FromByteCursor(header.value));
  }
  if (result.errorResponseBody.ptr != nullptr && result.errorResponseBody.len > 0) {
    response->GetResponseBody().write(reinterpret_cast<const char*>(result.errorResponseBody.ptr),
                                      static_cast<std::streamsize>(result.errorResponseBody.len));
  } else if (result.errorCode != AWS_ERROR_SUCCESS) {
    // Bodyless CRT-side failure (e.g. response checksum mismatch): supply a typed client error so
    // the marshaller produces a precise error instead of "No response body".
    Aws::StringStream ss;
    ss << aws_error_str(result.errorCode) << " (" << aws_error_lib_name(result.errorCode) << ": "
       << aws_error_name(result.errorCode) << ")";
    response->SetClientErrorMessage(ss.str());
    response->SetClientErrorType(MapCrtErrorCode(result.errorCode));
  }

  return Aws::Client::S3ErrorMarshaller().BuildAWSError(response);
}

struct ResolvedSigning {
  bool hasOverride = false;
  bool isS3Express = false;
  Aws::String signingRegion;
  Aws::String signingName;
};

template <typename RequestT>
bool ResolveEndpointUri(Aws::S3::Endpoint::S3EndpointProvider& provider, const RequestT& s3Request,
                        const Aws::String& key, Aws::Http::URI& outUri, Aws::String& outError,
                        ResolvedSigning* outSigning = nullptr) {
  auto outcome = provider.ResolveEndpoint(s3Request.GetEndpointContextParams());
  if (!outcome.IsSuccess()) {
    outError = outcome.GetError().GetMessage();
    AWS_LOGSTREAM_ERROR(CRT_OPERATIONS_LOG_TAG, "Endpoint resolution failed: " << outError);
    return false;
  }
  Aws::Endpoint::AWSEndpoint endpoint = outcome.GetResultWithOwnership();
  endpoint.AddPathSegments(key);  // plural: splits on '/' so prefixed keys map correctly
  outUri = endpoint.GetURI();

  const auto& attributes = endpoint.GetAttributes();
  if (outSigning && attributes) {
    if (attributes->authScheme.GetSigningRegion()) {
      outSigning->signingRegion = *attributes->authScheme.GetSigningRegion();
    } else if (attributes->authScheme.GetSigningRegionSet()) {
      outSigning->signingRegion = *attributes->authScheme.GetSigningRegionSet();
    }
    if (attributes->authScheme.GetSigningName()) {
      outSigning->signingName = *attributes->authScheme.GetSigningName();
    }
    outSigning->isS3Express = attributes->authScheme.GetName() == "S3ExpressSigner";
    outSigning->hasOverride =
        outSigning->isS3Express || !outSigning->signingRegion.empty() || !outSigning->signingName.empty();
  }
  return true;
}

void ConfigureEndpointSigning(Aws::Crt::S3::S3MetaRequestOptions& options, const ResolvedSigning& signing,
                              S3TransferManagerImpl& impl) {
  if (!signing.hasOverride) {
    return;
  }
  options.SetSigningConfigFromEndpoint(
      Aws::Crt::String(impl.GetRegion().c_str()), Aws::Crt::String(signing.signingRegion.c_str()),
      Aws::Crt::String(signing.signingName.c_str()), signing.isS3Express, impl.GetCredentialsProvider());
}

// Build a CRT HTTP message from an S3 model request. Reads request-specific headers rather than
// GetHeaders() (which injects XML/api-version cruft inappropriate for a CRT PUT/GET) and clears the
// body: aws-c-s3 rejects a request with more than one body source, and single-file upload/download
// carry their body via send_filepath / async writes / recv_filepath, never on the message.
template <typename RequestT>
std::shared_ptr<Aws::Crt::Http::HttpRequest> BuildCrtHttpRequest(
    const RequestT& s3Request, const Aws::Http::URI& uri, Aws::Http::HttpMethod method,
    const std::shared_ptr<Aws::Crt::Io::InputStream>& body = nullptr, const Aws::String& contentLength = {},
    const Aws::String& contentType = {}) {
  auto httpRequest = Aws::Http::CreateHttpRequest(uri, method, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);

  for (const auto& header : s3Request.GetRequestSpecificHeaders()) {
    httpRequest->SetHeaderValue(header.first, header.second);
  }
  // Content-Type is carried on the streaming base rather than in GetRequestSpecificHeaders(); forward
  // it explicitly so a caller-set type is not dropped.
  if (!contentType.empty()) {
    httpRequest->SetHeaderValue(Aws::Http::CONTENT_TYPE_HEADER, contentType);
  }
  if (!contentLength.empty()) {
    httpRequest->SetContentLength(contentLength);
  }
  s3Request.AddQueryStringParameters(httpRequest->GetUri());

  auto crtRequest = httpRequest->ToCrtHttpRequest();
  if (crtRequest) {
    crtRequest->SetBody(body);
  }
  return crtRequest;
}

// Report the stream's byte length if it is seekable, restoring the read position before returning.
// Returns false and leaves the stream usable if the stream cannot report a position.
bool TryMeasureSeekableStream(Aws::IOStream& stream, uint64_t& outLength) {
  const std::streampos current = stream.tellg();
  if (current == std::streampos(-1)) {
    stream.clear();
    return false;
  }
  stream.seekg(0, std::ios_base::end);
  const std::streampos end = stream.tellg();
  stream.seekg(current);
  if (stream.fail() || end == std::streampos(-1)) {
    stream.clear();
    return false;
  }
  outLength = static_cast<uint64_t>(end);
  return true;
}

// Drives a non-seekable stream upload: reads the customer's stream and pushes each chunk to the CRT
// via S3MetaRequest::Write, waiting for each write to complete before the next (the CRT permits only
// one outstanding write). Stops on EOF, write error, stream failure, or cancellation.
void RunAsyncWriteDriver(std::shared_ptr<UploadTransferState> state,
                        std::shared_ptr<Aws::Crt::S3::S3MetaRequest> metaRequest,
                        std::shared_ptr<Aws::IOStream> body) {
  Aws::Utils::Array<uint8_t> buffer(static_cast<size_t>(SEP_DEFAULT_PART_SIZE_BYTES));
  bool eof = false;
  while (!eof) {
    if (state->canceled.load()) {
      return;
    }

    body->read(reinterpret_cast<char*>(buffer.GetUnderlyingData()),
               static_cast<std::streamsize>(buffer.GetLength()));
    const std::streamsize got = body->gcount();

    if (body->bad()) {
      metaRequest->Cancel();
      return;
    }
    eof = body->eof();

    Aws::Crt::ByteCursor cursor;
    cursor.len = static_cast<size_t>(got);
    cursor.ptr = buffer.GetUnderlyingData();

    const int errorCode = metaRequest->Write(cursor, eof).get();
    if (errorCode != 0) {
      return;
    }
  }
}

// Lowercase keys because the generated S3 result deserializers look headers up by lowercase name.
Aws::Http::HeaderValueCollection ToHeaderValueCollection(const Aws::Crt::Vector<Aws::Crt::Http::HttpHeader>& headers) {
  Aws::Http::HeaderValueCollection out;
  for (const auto& header : headers) {
    Aws::String name = Aws::Utils::StringUtils::FromByteCursor(header.name);
    Aws::String value = Aws::Utils::StringUtils::FromByteCursor(header.value);
    out.emplace(Aws::Utils::StringUtils::ToLower(name.c_str()), std::move(value));
  }
  return out;
}

// Returns false for algorithms the CRT enum does not expose (e.g. MD5), so the caller can skip
// configuring a trailer checksum instead of sending a header without a matching trailer.
bool MapChecksumAlgorithm(Aws::S3::Model::ChecksumAlgorithm sdkAlgorithm,
                          Aws::Crt::S3::S3ChecksumAlgorithm& crtAlgorithm) {
  switch (sdkAlgorithm) {
    case Aws::S3::Model::ChecksumAlgorithm::CRC32:
      crtAlgorithm = Aws::Crt::S3::S3ChecksumAlgorithm::Crc32;
      return true;
    case Aws::S3::Model::ChecksumAlgorithm::CRC32C:
      crtAlgorithm = Aws::Crt::S3::S3ChecksumAlgorithm::Crc32c;
      return true;
    case Aws::S3::Model::ChecksumAlgorithm::SHA1:
      crtAlgorithm = Aws::Crt::S3::S3ChecksumAlgorithm::Sha1;
      return true;
    case Aws::S3::Model::ChecksumAlgorithm::SHA256:
      crtAlgorithm = Aws::Crt::S3::S3ChecksumAlgorithm::Sha256;
      return true;
    case Aws::S3::Model::ChecksumAlgorithm::CRC64NVME:
      crtAlgorithm = Aws::Crt::S3::S3ChecksumAlgorithm::Crc64Nvme;
      return true;
    case Aws::S3::Model::ChecksumAlgorithm::SHA512:
      crtAlgorithm = Aws::Crt::S3::S3ChecksumAlgorithm::Sha512;
      return true;
    case Aws::S3::Model::ChecksumAlgorithm::XXHASH64:
      crtAlgorithm = Aws::Crt::S3::S3ChecksumAlgorithm::XXHash64;
      return true;
    case Aws::S3::Model::ChecksumAlgorithm::XXHASH3:
      crtAlgorithm = Aws::Crt::S3::S3ChecksumAlgorithm::XXHash3_64;
      return true;
    case Aws::S3::Model::ChecksumAlgorithm::XXHASH128:
      crtAlgorithm = Aws::Crt::S3::S3ChecksumAlgorithm::XXHash3_128;
      return true;
    default:
      return false;
  }
}

}  // namespace

UploadHandle CrtOperations::DispatchUpload(S3TransferManagerImpl& impl, const UploadRequest& request) {
  auto state = Aws::MakeShared<UploadTransferState>(CRT_OPERATIONS_LOG_TAG, request);

  // Body source is file path (CRT reads via send_filepath), seekable stream (CRT reads attached
  // body), or non-seekable stream (we push chunks via async writes on a background thread).
  const Aws::String& sourceFilePath = request.GetSourceFilePath();
  const std::shared_ptr<Aws::IOStream> body = request.GetBody();
  const bool isFileUpload = !sourceFilePath.empty();
  bool bodyInBadState = false;

  if (isFileUpload) {
    Aws::IFStream fileSizeStream(sourceFilePath.c_str(), std::ios_base::binary | std::ios_base::ate);
    if (fileSizeStream.good()) {
      state->totalBytes = static_cast<uint64_t>(fileSizeStream.tellg());
      state->totalBytesHasBeenSet = true;
    }
  } else if (body) {
    // Capture the stream's error state before measuring; TryMeasureSeekableStream calls clear(),
    // which would mask a pre-existing failure.
    bodyInBadState = body->fail();
    if (request.ContentLengthHasBeenSet()) {
      state->totalBytes = request.GetContentLength();
      state->totalBytesHasBeenSet = true;
    }
    uint64_t measured = 0;
    if (TryMeasureSeekableStream(*body, measured) && !state->totalBytesHasBeenSet) {
      state->totalBytes = measured;
      state->totalBytesHasBeenSet = true;
    }
  }

  auto handleImpl = Aws::MakeUnique<UploadHandleImpl>(CRT_OPERATIONS_LOG_TAG);
  handleImpl->future = state->promise.get_future();
  handleImpl->state = state;

  assert((isFileUpload || body) && "UploadRequest must carry a file path or a stream body");

  {
    const auto& s3Request = request.GetS3Request();
    if (!s3Request.BucketHasBeenSet()) {
      state->promise.set_value(UploadOutcome(Aws::Client::AWSError<Aws::S3::S3Errors>(
          Aws::S3::S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false)));
      return UploadHandle(std::move(handleImpl));
    }
    if (!s3Request.KeyHasBeenSet()) {
      state->promise.set_value(UploadOutcome(Aws::Client::AWSError<Aws::S3::S3Errors>(
          Aws::S3::S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false)));
      return UploadHandle(std::move(handleImpl));
    }
  }

  // Reject an already-failed body up front; reading from it would silently upload truncated data.
  if (bodyInBadState) {
    state->promise.set_value(UploadOutcome(Aws::Client::AWSError<Aws::S3::S3Errors>(
        Aws::S3::S3Errors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER_VALUE", "Input stream in bad state", false)));
    return UploadHandle(std::move(handleImpl));
  }

  const auto& s3Request = request.GetS3Request();
  Aws::Http::URI uri;
  Aws::String endpointError;
  ResolvedSigning signing;
  if (!ResolveEndpointUri(impl.GetEndpointProvider(), s3Request, s3Request.GetKey(), uri, endpointError, &signing)) {
    state->promise.set_value(UploadOutcome(Aws::Client::AWSError<Aws::Client::CoreErrors>(
        Aws::Client::CoreErrors::ENDPOINT_RESOLUTION_FAILURE, "ENDPOINT_RESOLUTION_FAILURE", endpointError, false)));
    return UploadHandle(std::move(handleImpl));
  }

  // Async-writes is the unknown-length path; aws-c-s3 rejects it alongside a Content-Length header.
  const bool useAsyncWrites = !isFileUpload && !state->totalBytesHasBeenSet;
  std::shared_ptr<Aws::Crt::Io::InputStream> crtBody;
  if (!isFileUpload && !useAsyncWrites) {
    crtBody = Aws::MakeShared<Aws::Crt::Io::StdIOStreamInputStream>(CRT_OPERATIONS_LOG_TAG, body);
  }
  const Aws::String explicitContentLength =
      request.ContentLengthHasBeenSet() ? Aws::Utils::StringUtils::to_string(request.GetContentLength()) : Aws::String();
  auto crtRequest = BuildCrtHttpRequest(s3Request, uri, Aws::Http::HttpMethod::HTTP_PUT, crtBody, explicitContentLength,
                                        s3Request.GetContentType());

  for (const auto& listener : request.GetTransferListeners()) {
    if (listener) {
      listener->OnTransferInitiated(request,
                                    UploadProgressSnapshot(0, state->totalBytes, nullptr, state->totalBytesHasBeenSet));
    }
  }

  Aws::Crt::ScopedResource<Aws::Crt::S3::S3MetaRequestOptions> options;
  if (isFileUpload) {
    options = Aws::Crt::S3::S3PutObjectMetaRequestOptions::Create(crtRequest, Aws::Crt::String(sourceFilePath.c_str()));
  } else if (!useAsyncWrites) {
    options = Aws::Crt::S3::S3PutObjectMetaRequestOptions::Create(crtRequest);
  } else {
    options = Aws::Crt::S3::S3PutObjectMetaRequestOptions::CreateWithAsyncWrites(crtRequest);
  }
  if (!options) {
    state->promise.set_value(UploadOutcome(Aws::Client::AWSError<Aws::S3::S3Errors>(
        Aws::S3::S3Errors::UNKNOWN, "MetaRequestOptionsAllocationFailure",
        "Failed to allocate CRT meta request options.", false)));
    return UploadHandle(std::move(handleImpl));
  }

  ConfigureEndpointSigning(*options, signing, impl);

  // If the request asks for a checksum, drive it through the CRT trailer path. Skip when the caller
  // already supplied a precomputed x-amz-checksum-* header, so we don't ask the CRT to compute a
  // conflicting trailer checksum.
  const auto& requestHeaders = s3Request.GetHeaders();
  const bool hasPrecomputedChecksum =
      std::any_of(requestHeaders.begin(), requestHeaders.end(), [](const Aws::Http::HeaderValuePair& header) {
        return header.first.find("x-amz-checksum-") != Aws::String::npos;
      });
  if (s3Request.ChecksumAlgorithmHasBeenSet() && !hasPrecomputedChecksum) {
    Aws::Crt::S3::S3ChecksumAlgorithm crtAlgorithm;
    if (MapChecksumAlgorithm(s3Request.GetChecksumAlgorithm(), crtAlgorithm)) {
      Aws::Crt::S3::S3ChecksumConfig checksumConfig;
      checksumConfig.SetLocation(Aws::Crt::S3::S3ChecksumLocation::Trailer).SetChecksumAlgorithm(crtAlgorithm);
      options->SetChecksumConfig(checksumConfig);
    } else {
      AWS_LOGSTREAM_ERROR(CRT_OPERATIONS_LOG_TAG,
                          "Could not map checksum algorithm to a CRT algorithm; upload will proceed without a "
                          "trailing checksum and S3 may reject it.");
    }
  }

  options->SetHeadersCallback([state](const Aws::Crt::Vector<Aws::Crt::Http::HttpHeader>& headers, int responseStatus) -> int {
    state->responseHeaders = ToHeaderValueCollection(headers);
    state->responseStatus = responseStatus;
    return AWS_OP_SUCCESS;
  });

  options->SetProgressCallback([state](uint64_t bytesTransferred, uint64_t /*contentLength*/) {
    const uint64_t soFar = (state->transferredBytes += bytesTransferred);
    for (const auto& listener : state->request.GetTransferListeners()) {
      if (listener) {
        listener->OnBytesTransferred(
            state->request, UploadProgressSnapshot(soFar, state->totalBytes, nullptr, state->totalBytesHasBeenSet));
      }
    }
  });

  options->SetFinishCallback([state](const Aws::Crt::S3::S3MetaRequestResult& result) {
    if (result.errorCode == AWS_ERROR_SUCCESS) {
      auto response = Aws::MakeShared<UploadResponse>(CRT_OPERATIONS_LOG_TAG);
      response->SetS3Result(Aws::S3::Model::PutObjectResult(
          Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>(
              Aws::Utils::Xml::XmlDocument(), state->responseHeaders,
              static_cast<Aws::Http::HttpResponseCode>(state->responseStatus))));
      for (const auto& listener : state->request.GetTransferListeners()) {
        if (listener) {
          listener->OnTransferComplete(state->request,
                                       UploadProgressSnapshot(state->totalBytes, state->totalBytes, response, true));
        }
      }
      state->promise.set_value(UploadOutcome(std::move(*response)));
    } else {
      auto error = MapCrtError(result);
      for (const auto& listener : state->request.GetTransferListeners()) {
        if (listener) {
          listener->OnTransferFailed(state->request,
                                     UploadProgressSnapshot(state->transferredBytes.load(), state->totalBytes, nullptr,
                                                            state->totalBytesHasBeenSet));
        }
      }
      state->promise.set_value(UploadOutcome(std::move(error)));
    }
  });

  auto metaRequest = impl.GetCrtClient().MakeMetaRequest(*options);
  if (!metaRequest) {
    state->promise.set_value(UploadOutcome(Aws::Client::AWSError<Aws::S3::S3Errors>(
        Aws::S3::S3Errors::INTERNAL_FAILURE, "INTERNAL_FAILURE", "Unable to create s3 meta request", false)));
    return UploadHandle(std::move(handleImpl));
  }
  // Publish under the lock; if Cancel() already raced ahead, this cancels immediately.
  state->PublishMetaRequest(metaRequest);

  if (useAsyncWrites) {
    impl.GetExecutor().Submit([state, metaRequest, body]() { RunAsyncWriteDriver(state, metaRequest, body); });
  }

  return UploadHandle(std::move(handleImpl));
}

DownloadHandle CrtOperations::DispatchDownload(S3TransferManagerImpl& impl, const DownloadRequest& request) {
  auto state = Aws::MakeShared<DownloadTransferState>(CRT_OPERATIONS_LOG_TAG, request);

  // A DownloadDataReceiver selects the zero-copy stream path: the CRT delivers each part via a body
  // callback and the receiver reads it in place, so there is no destination file to write or rename.
  const std::shared_ptr<DownloadDataReceiver>& receiver = request.GetDownloadDataReceiver();
  const bool isStreamDownload = receiver != nullptr;

  if (!isStreamDownload) {
    state->destinationFilePath = request.GetDestinationFilePath();
    // Temp file is a sibling of the destination (same filesystem) so the final rename is atomic.
    state->tempFilePath =
        state->destinationFilePath + ".s3tmp." + Aws::String(Aws::Utils::UUID::RandomUUID());
  }

  auto handleImpl = Aws::MakeUnique<DownloadHandleImpl>(CRT_OPERATIONS_LOG_TAG);
  handleImpl->future = state->promise.get_future();
  handleImpl->state = state;

  const auto& s3Request = request.GetS3Request();

  if (!s3Request.BucketHasBeenSet()) {
    state->promise.set_value(DownloadOutcome(Aws::Client::AWSError<Aws::S3::S3Errors>(
        Aws::S3::S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false)));
    return DownloadHandle(std::move(handleImpl));
  }
  if (!s3Request.KeyHasBeenSet()) {
    state->promise.set_value(DownloadOutcome(Aws::Client::AWSError<Aws::S3::S3Errors>(
        Aws::S3::S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false)));
    return DownloadHandle(std::move(handleImpl));
  }

  Aws::Http::URI uri;
  Aws::String endpointError;
  ResolvedSigning signing;
  if (!ResolveEndpointUri(impl.GetEndpointProvider(), s3Request, s3Request.GetKey(), uri, endpointError, &signing)) {
    state->promise.set_value(DownloadOutcome(Aws::Client::AWSError<Aws::Client::CoreErrors>(
        Aws::Client::CoreErrors::ENDPOINT_RESOLUTION_FAILURE, "ENDPOINT_RESOLUTION_FAILURE", endpointError, false)));
    return DownloadHandle(std::move(handleImpl));
  }

  auto crtRequest = BuildCrtHttpRequest(s3Request, uri, Aws::Http::HttpMethod::HTTP_GET);

  for (const auto& listener : request.GetTransferListeners()) {
    if (listener) {
      listener->OnTransferInitiated(request, DownloadProgressSnapshot(0, 0, nullptr, false));
    }
  }

  Aws::Crt::ScopedResource<Aws::Crt::S3::S3MetaRequestOptions> options;
  if (isStreamDownload) {
    options = Aws::Crt::S3::S3GetObjectMetaRequestOptions::Create(
        crtRequest,
        Aws::Crt::S3::S3MetaRequestOptions::BodyCallbackEx(
            [receiver](Aws::Crt::ByteCursor body, uint64_t rangeStart, Aws::Crt::S3::S3BufferTicket& ticket) -> int {
              // The ticket handed to the callback is borrowed; Acquire() an owning reference so the
              // buffer survives past the callback. The bytes come from the body cursor argument;
              // the ticket only owns lifetime.
              receiver->OnDataReceived(S3DownloadBuffer(ticket.Acquire(), body, rangeStart));
              return AWS_OP_SUCCESS;
            }));
  } else {
    options = Aws::Crt::S3::S3GetObjectMetaRequestOptions::Create(
        crtRequest, Aws::Crt::String(state->tempFilePath.c_str()));
  }
  if (!options) {
    state->promise.set_value(DownloadOutcome(Aws::Client::AWSError<Aws::S3::S3Errors>(
        Aws::S3::S3Errors::UNKNOWN, "MetaRequestOptionsAllocationFailure",
        "Failed to allocate CRT meta request options.", false)));
    return DownloadHandle(std::move(handleImpl));
  }

  ConfigureEndpointSigning(*options, signing, impl);

  // location MUST be None for a GET: leaving it Trailer (the S3ChecksumConfig default) causes
  // aws-c-s3 to sign the bodyless GET with x-amz-content-sha256: STREAMING-UNSIGNED-PAYLOAD-TRAILER,
  // which S3 rejects as invalid.
  if (s3Request.ChecksumModeHasBeenSet() && s3Request.GetChecksumMode() == Aws::S3::Model::ChecksumMode::ENABLED) {
    Aws::Crt::S3::S3ChecksumConfig checksumConfig;
    checksumConfig.SetLocation(Aws::Crt::S3::S3ChecksumLocation::None).SetValidateResponseChecksum(true);
    options->SetChecksumConfig(checksumConfig);
  }

  options->SetHeadersCallback([state](const Aws::Crt::Vector<Aws::Crt::Http::HttpHeader>& headers, int responseStatus) -> int {
    state->responseHeaders = ToHeaderValueCollection(headers);
    state->responseStatus = responseStatus;
    return AWS_OP_SUCCESS;
  });

  options->SetProgressCallback([state](uint64_t bytesTransferred, uint64_t contentLength) {
    // The whole-object size is learned here (not known up-front for downloads).
    if (!state->totalBytesHasBeenSet && contentLength > 0) {
      state->totalBytes = contentLength;
      state->totalBytesHasBeenSet = true;
    }
    const uint64_t soFar = (state->transferredBytes += bytesTransferred);
    for (const auto& listener : state->request.GetTransferListeners()) {
      if (listener) {
        listener->OnBytesTransferred(
            state->request, DownloadProgressSnapshot(soFar, state->totalBytes, nullptr, state->totalBytesHasBeenSet));
      }
    }
  });

  options->SetFinishCallback([state, isStreamDownload](const Aws::Crt::S3::S3MetaRequestResult& result) {
    if (result.errorCode == AWS_ERROR_SUCCESS) {
      // File path only: promote the temp file to the customer's destination. On Windows, MoveFileW
      // won't overwrite, so remove an existing destination first (small non-atomic window); POSIX
      // rename is atomic.
      if (!isStreamDownload) {
#ifdef _WIN32
        Aws::FileSystem::RemoveFileIfExists(state->destinationFilePath.c_str());
#endif
        if (!Aws::FileSystem::RelocateFileOrDirectory(state->tempFilePath.c_str(),
                                                      state->destinationFilePath.c_str())) {
          Aws::FileSystem::RemoveFileIfExists(state->tempFilePath.c_str());
          for (const auto& listener : state->request.GetTransferListeners()) {
            if (listener) {
              listener->OnTransferFailed(state->request,
                                         DownloadProgressSnapshot(state->transferredBytes.load(), state->totalBytes,
                                                                  nullptr, state->totalBytesHasBeenSet));
            }
          }
          state->promise.set_value(DownloadOutcome(Aws::Client::AWSError<Aws::S3::S3Errors>(
              Aws::S3::S3Errors::UNKNOWN, "FileRenameFailure",
              "Downloaded data could not be moved to the destination path.", false)));
          return;
        }
      }

      auto response = Aws::MakeShared<DownloadResponse>(CRT_OPERATIONS_LOG_TAG);
      response->SetS3Result(Aws::S3::Model::GetObjectResult(
          Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>(
              Aws::Utils::Stream::ResponseStream(), Aws::Http::HeaderValueCollection(state->responseHeaders),
              static_cast<Aws::Http::HttpResponseCode>(state->responseStatus))));
      for (const auto& listener : state->request.GetTransferListeners()) {
        if (listener) {
          listener->OnTransferComplete(
              state->request,
              DownloadProgressSnapshot(state->totalBytes, state->totalBytes, response, state->totalBytesHasBeenSet));
        }
      }
      state->promise.set_value(DownloadOutcome(std::move(*response)));
    } else {
      // aws-c-s3 does not delete recv_filepath on failure unless recv_file_delete_on_failure is set;
      // we don't set it, so clean up the temp file ourselves.
      if (!isStreamDownload) {
        Aws::FileSystem::RemoveFileIfExists(state->tempFilePath.c_str());
      }
      auto error = MapCrtError(result);
      for (const auto& listener : state->request.GetTransferListeners()) {
        if (listener) {
          listener->OnTransferFailed(state->request,
                                     DownloadProgressSnapshot(state->transferredBytes.load(), state->totalBytes,
                                                              nullptr, state->totalBytesHasBeenSet));
        }
      }
      state->promise.set_value(DownloadOutcome(std::move(error)));
    }
  });

  auto metaRequest = impl.GetCrtClient().MakeMetaRequest(*options);
  if (!metaRequest) {
    state->promise.set_value(DownloadOutcome(Aws::Client::AWSError<Aws::S3::S3Errors>(
        Aws::S3::S3Errors::INTERNAL_FAILURE, "INTERNAL_FAILURE", "Unable to create s3 meta request", false)));
    return DownloadHandle(std::move(handleImpl));
  }
  state->PublishMetaRequest(metaRequest);

  return DownloadHandle(std::move(handleImpl));
}

}  // namespace Internal
}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
