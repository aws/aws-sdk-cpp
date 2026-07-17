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
#include <aws/core/platform/FileSystem.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/crt/Api.h>
#include <aws/crt/http/HttpRequestResponse.h>
#include <aws/crt/io/Stream.h>
#include <aws/s3/S3Errors.h>
#include <aws/s3/S3ErrorMarshaller.h>

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

Aws::Client::CoreErrors MapCrtErrorCode(Aws::Crt::S3::S3ErrorCode crtErrorCode) {
  using Aws::Crt::S3::S3ErrorCode;
  switch (crtErrorCode) {
    case S3ErrorCode::MissingContentRangeHeader:
    case S3ErrorCode::MissingContentLengthHeader:
    case S3ErrorCode::MissingETag:
    case S3ErrorCode::MissingUploadId:
      return Aws::Client::CoreErrors::MISSING_PARAMETER;
    case S3ErrorCode::InvalidContentRangeHeader:
    case S3ErrorCode::InvalidContentLengthHeader:
    case S3ErrorCode::InvalidRangeHeader:
    case S3ErrorCode::MultirangeHeaderUnsupported:
    case S3ErrorCode::IncorrectContentLength:
    case S3ErrorCode::InvalidMemoryLimitConfig:
      return Aws::Client::CoreErrors::INVALID_PARAMETER_VALUE;
    case S3ErrorCode::InternalError:
    case S3ErrorCode::ProxyParseFailed:
    case S3ErrorCode::UnsupportedProxyScheme:
    case S3ErrorCode::NonRecoverableAsyncError:
    case S3ErrorCode::MetricDataNotAvailable:
    case S3ErrorCode::ExceedsMemoryLimit:
      return Aws::Client::CoreErrors::INTERNAL_FAILURE;
    case S3ErrorCode::SlowDown:
      return Aws::Client::CoreErrors::SLOW_DOWN;
    case S3ErrorCode::InvalidResponseStatus:
    case S3ErrorCode::ResponseChecksumMismatch:
    case S3ErrorCode::ChecksumCalculationFailed:
    case S3ErrorCode::ListPartsParseFailed:
    case S3ErrorCode::ResumedPartChecksumMismatch:
    case S3ErrorCode::FileModified:
    case S3ErrorCode::InternalPartSizeMismatchRetryingWithRange:
    case S3ErrorCode::RecvFileAlreadyExists:
    case S3ErrorCode::RecvFileNotFound:
      return Aws::Client::CoreErrors::VALIDATION;
    case S3ErrorCode::Canceled:
      return Aws::Client::CoreErrors::USER_CANCELLED;
    case S3ErrorCode::RequestTimeTooSkewed:
      return Aws::Client::CoreErrors::REQUEST_TIME_TOO_SKEWED;
    case S3ErrorCode::S3ExpressCreateSessionFailed:
      return Aws::Client::CoreErrors::CLIENT_SIGNING_FAILURE;
    case S3ErrorCode::RequestTimeout:
      return Aws::Client::CoreErrors::REQUEST_TIMEOUT;
    default:
      return Aws::Client::CoreErrors::INTERNAL_FAILURE;
  }
}

Aws::Client::AWSError<Aws::S3::S3Errors> MapCrtError(const Aws::Crt::S3::S3MetaRequestResult& result) {
  const Aws::Crt::S3::S3ErrorCode crtErrorCode = result.GetErrorCode();
  const bool crtFailed = crtErrorCode != Aws::Crt::S3::S3ErrorCode::Success;
  const bool hasBody = result.errorResponseBody.ptr != nullptr && result.errorResponseBody.len > 0;

  // Transport-layer failure: no HTTP response ever came back.
  if (crtFailed && result.responseStatus == 0) {
    Aws::StringStream ss;
    ss << "crtCode: " << result.errorCode << ", " << Aws::Crt::ErrorDebugString(result.errorCode);
    Aws::Client::AWSError<Aws::S3::S3Errors> error(
        static_cast<Aws::S3::S3Errors>(Aws::Client::CoreErrors::NETWORK_CONNECTION), "", ss.str(), /*isRetryable*/ true);
    error.SetResponseCode(Aws::Http::HttpResponseCode::REQUEST_NOT_MADE);
    return error;
  }

  // Bodyless CRT-side failure (e.g. response checksum mismatch on an otherwise-200 reply).
  if (crtFailed && !hasBody) {
    Aws::StringStream ss;
    ss << Aws::Crt::ErrorDebugString(result.errorCode);
    Aws::Client::AWSError<Aws::S3::S3Errors> error(
        static_cast<Aws::S3::S3Errors>(MapCrtErrorCode(crtErrorCode)), "", ss.str(), /*isRetryable*/ false);
    error.SetResponseCode(static_cast<Aws::Http::HttpResponseCode>(result.responseStatus));
    return error;
  }

  // S3 replied with an XML error body. Parse it directly instead of stuffing bytes into a fake
  // HttpResponse just to reuse S3ErrorMarshaller::BuildAWSError.
  Aws::String bodyStr(reinterpret_cast<const char*>(result.errorResponseBody.ptr), result.errorResponseBody.len);
  auto doc = Aws::Utils::Xml::XmlDocument::CreateFromXmlString(bodyStr);

  Aws::String code;
  Aws::String message;
  Aws::String requestId;
  if (doc.WasParseSuccessful()) {
    auto root = doc.GetRootElement();
    if (root.GetName() != "Error" && !root.FirstChild("Error").IsNull()) {
      root = root.FirstChild("Error");
    }
    if (!root.IsNull()) {
      if (!root.FirstChild("Code").IsNull()) {
        code = Aws::Utils::StringUtils::Trim(root.FirstChild("Code").GetText().c_str());
      }
      if (!root.FirstChild("Message").IsNull()) {
        message = Aws::Utils::StringUtils::Trim(root.FirstChild("Message").GetText().c_str());
      }
      if (!root.FirstChild("RequestId").IsNull()) {
        requestId = root.FirstChild("RequestId").GetText();
      } else if (!root.FirstChild("RequestID").IsNull()) {
        requestId = root.FirstChild("RequestID").GetText();
      }
    }
  }

  Aws::Client::AWSError<Aws::S3::S3Errors> error = Aws::S3::S3ErrorMapper::GetErrorForName(code.c_str());
  error.SetExceptionName(code);
  error.SetMessage(message);
  error.SetRequestId(requestId);
  error.SetResponseCode(static_cast<Aws::Http::HttpResponseCode>(result.responseStatus));

  // Preserve headers so S3ErrorMarshaller::ExtractRegion/ExtractEndpoint (used by region-redirect
  // handling for HeadBucket-style flows) can still find x-amz-bucket-region / location on the
  // returned error. SetXmlPayload is protected on AWSError so the <Region>/<Endpoint> XML-node
  // fallback isn't preserved — TransferManager relies on the header path anyway.
  Aws::Http::HeaderValueCollection headers;
  for (const auto& header : result.errorResponseHeaders) {
    headers.emplace(Aws::Utils::StringUtils::FromByteCursor(header.name),
                    Aws::Utils::StringUtils::FromByteCursor(header.value));
  }
  error.SetResponseHeaders(headers);
  return error;
}

struct ResolvedSigning {
  bool hasOverride = false;
  bool isS3Express = false;
  Aws::String signingRegion;
  Aws::String signingName;
};

template <typename RequestT>
bool ResolveEndpointUri(Aws::S3::Endpoint::S3EndpointProviderBase& provider, const RequestT& s3Request,
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

// Report the bytes remaining from the stream's current get-position to end-of-stream, restoring
// the position before returning. Callers that stream from a pre-seeked position (e.g. seekg(N))
// need this "remaining bytes" semantics — an absolute length would over-report by the initial
// offset, which fails as AWS_ERROR_S3_INCORRECT_CONTENT_LENGTH on the wire. Matches AWSClient's
// AddContentLengthToRequest which measures (size - begin_position).
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
  if (stream.fail() || end == std::streampos(-1) || end < current) {
    stream.clear();
    return false;
  }
  outLength = static_cast<uint64_t>(end - current);
  return true;
}

// Drives a non-seekable stream upload: reads the customer's stream and pushes each chunk to the CRT
// via S3MetaRequest::Write, waiting for each write to complete before the next (the CRT permits only
// one outstanding write). Stops on EOF, write error, stream failure, or cancellation.
void RunAsyncWriteDriver(std::shared_ptr<UploadTransferState> state,
                        std::shared_ptr<Aws::Crt::S3::S3MetaRequest> metaRequest,
                        std::shared_ptr<Aws::IOStream> body) {
  Aws::Utils::Array<uint8_t> buffer(static_cast<size_t>(DEFAULT_PART_SIZE_BYTES));
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

// Fires initiated -> failed on every listener and sets the promise. Used by pre-CRT early-return
// paths so listeners see the same lifecycle they would for a CRT-async failure.
void NotifyEarlyUploadFailure(std::shared_ptr<UploadTransferState> state,
                              Aws::Client::AWSError<Aws::S3::S3Errors> error) {
  const auto snapshot =
      UploadProgressSnapshot(0, state->totalBytes.load(), nullptr, state->totalBytesHasBeenSet.load());
  for (const auto& listener : state->request.GetTransferListeners()) {
    if (!listener) continue;
    listener->OnTransferInitiated(state->request, snapshot);
    listener->OnTransferFailed(state->request, snapshot);
  }
  state->promise.set_value(UploadOutcome(std::move(error)));
}

void NotifyEarlyDownloadFailure(std::shared_ptr<DownloadTransferState> state,
                                Aws::Client::AWSError<Aws::S3::S3Errors> error) {
  const auto snapshot = DownloadProgressSnapshot(0, 0, nullptr, false);
  for (const auto& listener : state->request.GetTransferListeners()) {
    if (!listener) continue;
    listener->OnTransferInitiated(state->request, snapshot);
    listener->OnTransferFailed(state->request, snapshot);
  }
  state->promise.set_value(DownloadOutcome(std::move(error)));
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
      state->totalBytes.store(static_cast<uint64_t>(fileSizeStream.tellg()));
      state->totalBytesHasBeenSet.store(true);
    }
  } else if (body) {
    // Capture the stream's error state before measuring; TryMeasureSeekableStream calls clear(),
    // which would mask a pre-existing failure.
    bodyInBadState = body->fail();
    if (request.ContentLengthHasBeenSet()) {
      state->totalBytes.store(request.GetContentLength());
      state->totalBytesHasBeenSet.store(true);
    }
    uint64_t measured = 0;
    if (TryMeasureSeekableStream(*body, measured) && !state->totalBytesHasBeenSet.load()) {
      state->totalBytes.store(measured);
      state->totalBytesHasBeenSet.store(true);
    }
  }

  auto handleImpl = Aws::MakeUnique<UploadHandleImpl>(CRT_OPERATIONS_LOG_TAG);
  handleImpl->future = state->promise.get_future();
  handleImpl->state = state;

  assert((isFileUpload || body) && "UploadRequest must carry a file path or a stream body");

  {
    const auto& s3Request = request.GetS3Request();
    if (!s3Request.BucketHasBeenSet()) {
      NotifyEarlyUploadFailure(state, Aws::Client::AWSError<Aws::S3::S3Errors>(
          Aws::S3::S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
      return UploadHandle(std::move(handleImpl));
    }
    if (!s3Request.KeyHasBeenSet()) {
      NotifyEarlyUploadFailure(state, Aws::Client::AWSError<Aws::S3::S3Errors>(
          Aws::S3::S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
      return UploadHandle(std::move(handleImpl));
    }
  }

  // Body-source validation: the request's assert-guarded invariants also need a release-path
  // failure so callers see a typed error via the future instead of a silently truncated upload.
  if (!isFileUpload && !body) {
    NotifyEarlyUploadFailure(state, Aws::Client::AWSError<Aws::S3::S3Errors>(
        Aws::S3::S3Errors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER_VALUE",
        "UploadRequest stream body must not be null", false));
    return UploadHandle(std::move(handleImpl));
  }

  // Reject an already-failed body up front; reading from it would silently upload truncated data.
  if (bodyInBadState) {
    NotifyEarlyUploadFailure(state, Aws::Client::AWSError<Aws::S3::S3Errors>(
        Aws::S3::S3Errors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER_VALUE", "Input stream in bad state", false));
    return UploadHandle(std::move(handleImpl));
  }

  const auto& s3Request = request.GetS3Request();
  Aws::Http::URI uri;
  Aws::String endpointError;
  ResolvedSigning signing;
  if (!ResolveEndpointUri(impl.GetEndpointProvider(), s3Request, s3Request.GetKey(), uri, endpointError, &signing)) {
    NotifyEarlyUploadFailure(state, Aws::Client::AWSError<Aws::Client::CoreErrors>(
        Aws::Client::CoreErrors::ENDPOINT_RESOLUTION_FAILURE, "ENDPOINT_RESOLUTION_FAILURE", endpointError, false));
    return UploadHandle(std::move(handleImpl));
  }

  // Async-writes is the unknown-length path; aws-c-s3 rejects it alongside a Content-Length header.
  const bool useAsyncWrites = !isFileUpload && !state->totalBytesHasBeenSet.load();
  std::shared_ptr<Aws::Crt::Io::InputStream> crtBody;
  if (!isFileUpload && !useAsyncWrites) {
    crtBody = Aws::MakeShared<Aws::Crt::Io::StdIOStreamInputStream>(CRT_OPERATIONS_LOG_TAG, body);
  }
  Aws::String explicitContentLength;
  if (request.ContentLengthHasBeenSet()) {
    explicitContentLength = Aws::Utils::StringUtils::to_string(request.GetContentLength());
  } else if (!isFileUpload && state->totalBytesHasBeenSet.load()) {
    explicitContentLength = Aws::Utils::StringUtils::to_string(state->totalBytes.load());
  }
  auto crtRequest = BuildCrtHttpRequest(s3Request, uri, Aws::Http::HttpMethod::HTTP_PUT, crtBody, explicitContentLength,
                                        s3Request.GetContentType());

  for (const auto& listener : request.GetTransferListeners()) {
    if (listener) {
      listener->OnTransferInitiated(request,
                                    UploadProgressSnapshot(0, state->totalBytes.load(), nullptr,
                                                           state->totalBytesHasBeenSet.load()));
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
    // Initiated already fired above; only fire failed here.
    const auto snapshot =
        UploadProgressSnapshot(0, state->totalBytes.load(), nullptr, state->totalBytesHasBeenSet.load());
    for (const auto& listener : request.GetTransferListeners()) {
      if (listener) listener->OnTransferFailed(request, snapshot);
    }
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

  // Callbacks hold weak_ptr<state>; state's only strong ref lives on UploadHandleImpl. This breaks
  // the state <-> S3MetaRequest cycle: when the customer drops the handle, state dies, its dtor
  // drops m_metaRequest, the wrapper's ScopedResource releases the last C-handle ref, and aws-c-s3
  // fires shutdown_callback, which frees callbackData (and the closures inside it).
  std::weak_ptr<UploadTransferState> stateWeak = state;
  options->SetHeadersCallback([stateWeak](const Aws::Crt::Vector<Aws::Crt::Http::HttpHeader>& headers, int responseStatus) -> bool {
    auto state = stateWeak.lock();
    if (!state) return true;
    state->responseHeaders = ToHeaderValueCollection(headers);
    state->responseStatus = responseStatus;
    return true;
  });

  options->SetProgressCallback([stateWeak](uint64_t bytesTransferred, uint64_t /*contentLength*/) {
    auto state = stateWeak.lock();
    if (!state) return;
    const uint64_t soFar = (state->transferredBytes += bytesTransferred);
    for (const auto& listener : state->request.GetTransferListeners()) {
      if (listener) {
        listener->OnBytesTransferred(
            state->request, UploadProgressSnapshot(soFar, state->totalBytes.load(), nullptr,
                                                   state->totalBytesHasBeenSet.load()));
      }
    }
  });

  options->SetFinishCallback([stateWeak](const Aws::Crt::S3::S3MetaRequestResult& result) {
    auto state = stateWeak.lock();
    if (!state) return;
    if (result.GetErrorCode() == Aws::Crt::S3::S3ErrorCode::Success) {
      auto response = Aws::MakeShared<UploadResponse>(
          CRT_OPERATIONS_LOG_TAG,
          Aws::S3::Model::PutObjectResult(
              Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>(
                  Aws::Utils::Xml::XmlDocument(), state->responseHeaders,
                  static_cast<Aws::Http::HttpResponseCode>(state->responseStatus))));
      for (const auto& listener : state->request.GetTransferListeners()) {
        if (listener) {
          const uint64_t total = state->totalBytes.load();
          listener->OnTransferComplete(state->request,
                                       UploadProgressSnapshot(total, total, response, true));
        }
      }
      state->promise.set_value(UploadOutcome(std::move(*response)));
    } else {
      auto error = MapCrtError(result);
      for (const auto& listener : state->request.GetTransferListeners()) {
        if (listener) {
          listener->OnTransferFailed(state->request,
                                     UploadProgressSnapshot(state->transferredBytes.load(), state->totalBytes.load(),
                                                            nullptr, state->totalBytesHasBeenSet.load()));
        }
      }
      state->promise.set_value(UploadOutcome(std::move(error)));
    }
  });

  auto metaRequest = impl.GetCrtClient().MakeMetaRequest(*options);
  if (!metaRequest) {
    // Initiated already fired above; only fire failed here.
    const auto snapshot =
        UploadProgressSnapshot(0, state->totalBytes.load(), nullptr, state->totalBytesHasBeenSet.load());
    for (const auto& listener : request.GetTransferListeners()) {
      if (listener) listener->OnTransferFailed(request, snapshot);
    }
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
    NotifyEarlyDownloadFailure(state, Aws::Client::AWSError<Aws::S3::S3Errors>(
        Aws::S3::S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
    return DownloadHandle(std::move(handleImpl));
  }
  if (!s3Request.KeyHasBeenSet()) {
    NotifyEarlyDownloadFailure(state, Aws::Client::AWSError<Aws::S3::S3Errors>(
        Aws::S3::S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
    return DownloadHandle(std::move(handleImpl));
  }

  // Destination validation: mirror the request's assert-guarded invariants on the release path
  // so callers see a typed error instead of a silent no-op (empty path -> failed rename) or crash
  // (null receiver -> deref in the body callback).
  if (isStreamDownload && !receiver) {
    NotifyEarlyDownloadFailure(state, Aws::Client::AWSError<Aws::S3::S3Errors>(
        Aws::S3::S3Errors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER_VALUE",
        "DownloadRequest data receiver must not be null", false));
    return DownloadHandle(std::move(handleImpl));
  }
  if (!isStreamDownload && state->destinationFilePath.empty()) {
    NotifyEarlyDownloadFailure(state, Aws::Client::AWSError<Aws::S3::S3Errors>(
        Aws::S3::S3Errors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER_VALUE",
        "DownloadRequest destination file path must not be empty", false));
    return DownloadHandle(std::move(handleImpl));
  }

  Aws::Http::URI uri;
  Aws::String endpointError;
  ResolvedSigning signing;
  if (!ResolveEndpointUri(impl.GetEndpointProvider(), s3Request, s3Request.GetKey(), uri, endpointError, &signing)) {
    NotifyEarlyDownloadFailure(state, Aws::Client::AWSError<Aws::Client::CoreErrors>(
        Aws::Client::CoreErrors::ENDPOINT_RESOLUTION_FAILURE, "ENDPOINT_RESOLUTION_FAILURE", endpointError, false));
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
            [receiver](Aws::Crt::ByteCursor body, uint64_t rangeStart, Aws::Crt::S3::S3BufferTicket& ticket) -> bool {
              // The ticket handed to the callback is borrowed; Acquire() an owning reference so the
              // buffer survives past the callback. The bytes come from the body cursor argument;
              // the ticket only owns lifetime.
              receiver->OnDataReceived(S3DownloadBuffer(ticket.Acquire(), body, rangeStart));
              return true;
            }));
  } else {
    options = Aws::Crt::S3::S3GetObjectMetaRequestOptions::Create(
        crtRequest, Aws::Crt::String(state->tempFilePath.c_str()));
  }
  if (!options) {
    // Initiated already fired above; only fire failed here.
    const auto snapshot =
        DownloadProgressSnapshot(0, state->totalBytes.load(), nullptr, state->totalBytesHasBeenSet.load());
    for (const auto& listener : request.GetTransferListeners()) {
      if (listener) listener->OnTransferFailed(request, snapshot);
    }
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

  // See upload dispatch for why callbacks capture weak_ptr instead of shared_ptr.
  std::weak_ptr<DownloadTransferState> stateWeak = state;
  options->SetHeadersCallback([stateWeak](const Aws::Crt::Vector<Aws::Crt::Http::HttpHeader>& headers, int responseStatus) -> bool {
    auto state = stateWeak.lock();
    if (!state) return true;
    state->responseHeaders = ToHeaderValueCollection(headers);
    state->responseStatus = responseStatus;
    return true;
  });

  options->SetProgressCallback([stateWeak](uint64_t bytesTransferred, uint64_t contentLength) {
    auto state = stateWeak.lock();
    if (!state) return;
    // The whole-object size is learned here (not known up-front for downloads).
    if (!state->totalBytesHasBeenSet.load() && contentLength > 0) {
      state->totalBytes.store(contentLength);
      state->totalBytesHasBeenSet.store(true);
    }
    const uint64_t soFar = (state->transferredBytes += bytesTransferred);
    for (const auto& listener : state->request.GetTransferListeners()) {
      if (listener) {
        listener->OnBytesTransferred(
            state->request, DownloadProgressSnapshot(soFar, state->totalBytes.load(), nullptr,
                                                    state->totalBytesHasBeenSet.load()));
      }
    }
  });

  options->SetFinishCallback([stateWeak, isStreamDownload](const Aws::Crt::S3::S3MetaRequestResult& result) {
    auto state = stateWeak.lock();
    if (!state) return;
    if (result.GetErrorCode() == Aws::Crt::S3::S3ErrorCode::Success) {
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
                                         DownloadProgressSnapshot(state->transferredBytes.load(),
                                                                  state->totalBytes.load(), nullptr,
                                                                  state->totalBytesHasBeenSet.load()));
            }
          }
          state->promise.set_value(DownloadOutcome(Aws::Client::AWSError<Aws::S3::S3Errors>(
              Aws::S3::S3Errors::UNKNOWN, "FileRenameFailure",
              "Downloaded data could not be moved to the destination path.", false)));
          return;
        }
      }

      auto response = Aws::MakeShared<DownloadResponse>(
          CRT_OPERATIONS_LOG_TAG,
          Aws::S3::Model::GetObjectResult(
              Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>(
                  Aws::Utils::Stream::ResponseStream(), Aws::Http::HeaderValueCollection(state->responseHeaders),
                  static_cast<Aws::Http::HttpResponseCode>(state->responseStatus))));
      for (const auto& listener : state->request.GetTransferListeners()) {
        if (listener) {
          const uint64_t total = state->totalBytes.load();
          listener->OnTransferComplete(
              state->request,
              DownloadProgressSnapshot(total, total, response, state->totalBytesHasBeenSet.load()));
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
                                     DownloadProgressSnapshot(state->transferredBytes.load(),
                                                              state->totalBytes.load(), nullptr,
                                                              state->totalBytesHasBeenSet.load()));
        }
      }
      state->promise.set_value(DownloadOutcome(std::move(error)));
    }
  });

  auto metaRequest = impl.GetCrtClient().MakeMetaRequest(*options);
  if (!metaRequest) {
    // Initiated already fired above; only fire failed here.
    const auto snapshot =
        DownloadProgressSnapshot(0, state->totalBytes.load(), nullptr, state->totalBytesHasBeenSet.load());
    for (const auto& listener : request.GetTransferListeners()) {
      if (listener) listener->OnTransferFailed(request, snapshot);
    }
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
