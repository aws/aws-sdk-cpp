/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-transfer/internal/CrtOperations.h>
#include <aws/s3-transfer/internal/S3TransferManagerImpl.h>
#include <aws/s3-transfer/internal/HandleImpls.h>
#include <aws/s3-transfer/internal/TransferState.h>
#include <aws/s3-transfer/internal/UploadRequestImpl.h>
#include <aws/s3-transfer/internal/DownloadRequestImpl.h>
#include <aws/s3-transfer/S3DownloadBuffer.h>

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpRequest.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/crt/Api.h>
#include <aws/crt/http/HttpRequestResponse.h>
#include <aws/crt/io/Stream.h>
#include <aws/s3/S3Errors.h>
#include <aws/s3/S3ErrorMarshaller.h>

#include <cassert>
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

// SEP checksum validation drops error bodies on non-2xx GETs; recover RequestId from headers. Returns
// nothing when the header is absent, which is distinct from a header S3 sent with an empty value.
Aws::Crt::Optional<Aws::String> ExtractHeader(const Aws::Crt::Vector<Aws::Crt::Http::HttpHeader>& headers,
                                              const char* name) {
  for (const auto& header : headers) {
    const Aws::String key = Aws::Utils::StringUtils::FromByteCursor(header.name);
    if (Aws::Utils::StringUtils::CaselessCompare(key.c_str(), name)) {
      return Aws::Utils::StringUtils::FromByteCursor(header.value);
    }
  }
  return {};
}

Aws::Http::HeaderValueCollection ToHeaderCollection(const Aws::Crt::Vector<Aws::Crt::Http::HttpHeader>& headers) {
  Aws::Http::HeaderValueCollection out;
  for (const auto& header : headers) {
    out.emplace(Aws::Utils::StringUtils::FromByteCursor(header.name),
                Aws::Utils::StringUtils::FromByteCursor(header.value));
  }
  return out;
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

  // Bodyless failure: InvalidResponseStatus maps by HTTP status; everything else by CRT code.
  if (crtFailed && !hasBody) {
    Aws::StringStream ss;
    ss << Aws::Crt::ErrorDebugString(result.errorCode);

    Aws::Client::AWSError<Aws::S3::S3Errors> error;
    if (crtErrorCode == Aws::Crt::S3::S3ErrorCode::InvalidResponseStatus) {
      error = Aws::Client::CoreErrorsMapper::GetErrorForHttpResponseCode(
          static_cast<Aws::Http::HttpResponseCode>(result.responseStatus));
      error.SetMessage(ss.str());
    } else {
      error = Aws::Client::AWSError<Aws::S3::S3Errors>(
          static_cast<Aws::S3::S3Errors>(MapCrtErrorCode(crtErrorCode)), "", ss.str(),
          /*isRetryable*/ false);
    }
    error.SetResponseCode(static_cast<Aws::Http::HttpResponseCode>(result.responseStatus));
    // Only overwrite the request ID when S3 sent the header; an absent one must not blank it.
    const Aws::Crt::Optional<Aws::String> requestId = ExtractHeader(result.errorResponseHeaders, "x-amz-request-id");
    if (requestId) {
      error.SetRequestId(requestId.value());
    }
    error.SetResponseHeaders(ToHeaderCollection(result.errorResponseHeaders));
    return error;
  }

  // S3 replied with an XML error body; parse it directly.
  const Aws::String bodyStr = Aws::Utils::StringUtils::FromByteCursor(result.errorResponseBody);
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

  // Preserve headers so region-redirect handling can read x-amz-bucket-region / location.
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
bool ResolveEndpointUri(const std::shared_ptr<Aws::S3::Endpoint::S3EndpointProviderBase>& provider,
                        const RequestT& s3Request, const Aws::String& key, Aws::Http::URI& outUri,
                        Aws::String& outError, ResolvedSigning* outSigning = nullptr) {
  auto outcome = provider->ResolveEndpoint(s3Request.GetEndpointContextParams());
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
      Aws::Crt::String(impl.GetConfig().region.c_str()), Aws::Crt::String(signing.signingRegion.c_str()),
      Aws::Crt::String(signing.signingName.c_str()), signing.isS3Express, impl.GetCredentialsProvider());
}

// Set per request too, so the sizes hold for a client the transfer manager did not build.
void ConfigureTransferSizing(Aws::Crt::S3::S3MetaRequestOptions& options, S3TransferManagerImpl& impl) {
  options.SetPartSize(impl.GetConfig().partSize);
  options.SetMultipartUploadThreshold(impl.GetConfig().multipartUploadThreshold);
}

// Build a CRT HTTP message; uses request-specific headers (not GetHeaders(), which adds XML cruft).
template <typename RequestT>
std::shared_ptr<Aws::Crt::Http::HttpRequest> BuildCrtHttpRequest(
    const RequestT& s3Request, const Aws::Http::URI& uri, Aws::Http::HttpMethod method,
    const Aws::String& userAgent,
    const std::shared_ptr<Aws::Crt::Io::InputStream>& body = nullptr, const Aws::String& contentLength = {},
    const Aws::String& contentType = {}) {
  auto httpRequest = Aws::Http::CreateHttpRequest(uri, method, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);

  for (const auto& header : s3Request.GetRequestSpecificHeaders()) {
    httpRequest->SetHeaderValue(header.first, header.second);
  }
  // Content-Type isn't in GetRequestSpecificHeaders(); forward explicitly.
  if (!contentType.empty()) {
    httpRequest->SetHeaderValue(Aws::Http::CONTENT_TYPE_HEADER, contentType);
  }
  if (!contentLength.empty()) {
    httpRequest->SetContentLength(contentLength);
  }
  if (!userAgent.empty()) {
    httpRequest->SetUserAgent(userAgent);
  }
  s3Request.AddQueryStringParameters(httpRequest->GetUri());

  auto crtRequest = httpRequest->ToCrtHttpRequest();
  if (crtRequest) {
    crtRequest->SetBody(body);
  }
  return crtRequest;
}

// Lowercase keys; S3 result deserializers look headers up by lowercase name.
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

// The helpers below take the state as the shared_ptr their callers already hold, so no call site has
// to unwrap it. Dispatch creates it before any callback exists and the callbacks keep it alive, so
// each asserts non-null rather than handling it.

// Invokes one listener callback on every registered listener, skipping null entries. `event` is a
// pointer to the ProgressListener member to call, e.g. &UploadProgressListener::OnTransferComplete.
template <typename StateT, typename ListenerT, typename RequestT, typename SnapshotT>
void NotifyListeners(const std::shared_ptr<StateT>& state,
                     void (ListenerT::*event)(const RequestT&, const SnapshotT&), const SnapshotT& snapshot) {
  assert(state && "NotifyListeners requires a live transfer state");
  for (const auto& listener : state->request.GetTransferListeners()) {
    if (listener) {
      (listener.get()->*event)(state->request, snapshot);
    }
  }
}

// A response carrying the reply's headers and status. Called once per consumer — the listeners and
// the completion future each get their own — so neither can observe the other's being moved from.
// There is no body to duplicate: an upload never has one, and a download's went to the receiver or
// straight to the destination file.
UploadResponse MakeUploadResponse(const std::shared_ptr<UploadTransferState>& state) {
  assert(state && "MakeUploadResponse requires a live transfer state");
  return UploadResponse(Aws::S3::Model::PutObjectResult(
      Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>(
          Aws::Utils::Xml::XmlDocument(), state->responseHeaders,
          static_cast<Aws::Http::HttpResponseCode>(state->responseStatus))));
}

DownloadResponse MakeDownloadResponse(const std::shared_ptr<DownloadTransferState>& state) {
  assert(state && "MakeDownloadResponse requires a live transfer state");
  return DownloadResponse(Aws::S3::Model::GetObjectResult(
      Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>(
          Aws::Utils::Stream::ResponseStream(), Aws::Http::HeaderValueCollection(state->responseHeaders),
          static_cast<Aws::Http::HttpResponseCode>(state->responseStatus))));
}

// The transfer as it stands. totalBytes stays unset until the CRT reports the object size, which a
// snapshot represents as a zero total alongside a false known-size flag.
UploadProgressSnapshot MakeUploadSnapshot(const std::shared_ptr<UploadTransferState>& state,
                                          uint64_t transferredBytes,
                                          const std::shared_ptr<UploadResponse>& response = nullptr) {
  assert(state && "MakeUploadSnapshot requires a live transfer state");
  return UploadProgressSnapshot(transferredBytes, state->totalBytes ? *state->totalBytes : 0, response,
                                state->totalBytes.has_value());
}

DownloadProgressSnapshot MakeDownloadSnapshot(const std::shared_ptr<DownloadTransferState>& state,
                                              uint64_t transferredBytes,
                                              const std::shared_ptr<DownloadResponse>& response = nullptr) {
  assert(state && "MakeDownloadSnapshot requires a live transfer state");
  return DownloadProgressSnapshot(transferredBytes, state->totalBytes ? *state->totalBytes : 0, response,
                                  state->totalBytes.has_value());
}

// Fires failed and sets the promise, for paths that fail once initiated has already fired.
void FailUploadAfterInitiated(const std::shared_ptr<UploadTransferState>& state,
                              Aws::Client::AWSError<Aws::S3::S3Errors> error) {
  NotifyListeners(state, &UploadProgressListener::OnTransferFailed,
                  MakeUploadSnapshot(state, state->transferredBytes.load()));
  state->promise.set_value(UploadOutcome(std::move(error)));
}

void FailDownloadAfterInitiated(const std::shared_ptr<DownloadTransferState>& state,
                                Aws::Client::AWSError<Aws::S3::S3Errors> error) {
  NotifyListeners(state, &DownloadProgressListener::OnTransferFailed,
                  MakeDownloadSnapshot(state, state->transferredBytes.load()));
  state->promise.set_value(DownloadOutcome(std::move(error)));
}

// Fires initiated -> failed and sets the promise. For pre-CRT early-return paths.
void NotifyEarlyUploadFailure(const std::shared_ptr<UploadTransferState>& state,
                              Aws::Client::AWSError<Aws::S3::S3Errors> error) {
  const auto snapshot = MakeUploadSnapshot(state, 0);
  NotifyListeners(state, &UploadProgressListener::OnTransferInitiated, snapshot);
  NotifyListeners(state, &UploadProgressListener::OnTransferFailed, snapshot);
  state->promise.set_value(UploadOutcome(std::move(error)));
}

void NotifyEarlyDownloadFailure(const std::shared_ptr<DownloadTransferState>& state,
                                Aws::Client::AWSError<Aws::S3::S3Errors> error) {
  const auto snapshot = MakeDownloadSnapshot(state, 0);
  NotifyListeners(state, &DownloadProgressListener::OnTransferInitiated, snapshot);
  NotifyListeners(state, &DownloadProgressListener::OnTransferFailed, snapshot);
  state->promise.set_value(DownloadOutcome(std::move(error)));
}

}  // namespace

UploadHandle CrtOperations::DispatchUpload(S3TransferManagerImpl& impl, const UploadRequest& request) {
  auto state = Aws::MakeShared<UploadTransferState>(CRT_OPERATIONS_LOG_TAG, request);

  auto handleImpl = Aws::MakeUnique<UploadHandleImpl>(CRT_OPERATIONS_LOG_TAG);
  handleImpl->future = state->promise.get_future();
  handleImpl->state = state;

  // Fail fast if the manager never initialized; error surfaces via the handle's future.
  if (!impl.IsInitialized()) {
    NotifyEarlyUploadFailure(state, impl.GetInitializationError());
    return UploadHandle(std::move(handleImpl));
  }

  {
    Internal::OptionalError prepareError = state->request.PrepareTransferState(state);
    if (prepareError) {
      NotifyEarlyUploadFailure(state, prepareError.value());
      return UploadHandle(std::move(handleImpl));
    }
  }

  const auto& s3Request = state->request.GetS3Request();

  Aws::Http::URI uri;
  Aws::String endpointError;
  ResolvedSigning signing;
  if (!ResolveEndpointUri(impl.GetEndpointProvider(), s3Request, s3Request.GetKey(), uri, endpointError, &signing)) {
    NotifyEarlyUploadFailure(state, Aws::Client::AWSError<Aws::Client::CoreErrors>(
        Aws::Client::CoreErrors::ENDPOINT_RESOLUTION_FAILURE, "ENDPOINT_RESOLUTION_FAILURE", endpointError, false));
    return UploadHandle(std::move(handleImpl));
  }

  // A file upload hands the CRT a path and it reads the file itself; a stream needs an adapter.
  std::shared_ptr<Aws::Crt::Io::InputStream> crtBody;
  if (state->request.IsStreamUpload()) {
    crtBody = Aws::MakeShared<Aws::Crt::Io::StdIOStreamInputStream>(CRT_OPERATIONS_LOG_TAG,
                                                                   s3Request.GetBody());
    if (!crtBody) {
      NotifyEarlyUploadFailure(state, Aws::Client::AWSError<Aws::S3::S3Errors>(
          Aws::S3::S3Errors::INTERNAL_FAILURE, "INTERNAL_FAILURE",
          "Failed to allocate CRT input stream adapter for upload body", false));
      return UploadHandle(std::move(handleImpl));
    }
  }

  Aws::String explicitContentLength;
  if (state->request.IsStreamUpload() && state->totalBytes) {
    explicitContentLength = Aws::Utils::StringUtils::to_string(*state->totalBytes);
  }
  auto crtRequest = BuildCrtHttpRequest(s3Request, uri, Aws::Http::HttpMethod::HTTP_PUT, impl.GetUserAgentString(),
                                        crtBody, explicitContentLength, s3Request.GetContentType());
  if (!crtRequest) {
    NotifyEarlyUploadFailure(state, Aws::Client::AWSError<Aws::S3::S3Errors>(
        Aws::S3::S3Errors::INTERNAL_FAILURE, "INTERNAL_FAILURE",
        "Failed to build CRT HTTP request for upload", false));
    return UploadHandle(std::move(handleImpl));
  }

  NotifyListeners(state, &UploadProgressListener::OnTransferInitiated, MakeUploadSnapshot(state, 0));

  // The source path is empty for a stream upload; supplying it is what makes the CRT read the file.
  const auto& sourceFilePath = state->request.GetSourceFilePath();
  auto options = sourceFilePath.empty()
                     ? Aws::Crt::S3::S3PutObjectMetaRequestOptions::Create(crtRequest)
                     : Aws::Crt::S3::S3PutObjectMetaRequestOptions::Create(
                           crtRequest, Aws::Crt::String(sourceFilePath.c_str()));
  if (!options) {
    // Initiated already fired above; only fire failed here.
    FailUploadAfterInitiated(state, Aws::Client::AWSError<Aws::S3::S3Errors>(
        Aws::S3::S3Errors::UNKNOWN, "MetaRequestOptionsAllocationFailure",
        "Failed to allocate CRT meta request options.", false));
    return UploadHandle(std::move(handleImpl));
  }

  ConfigureEndpointSigning(*options, signing, impl);
  ConfigureTransferSizing(*options, impl);

  // Drive checksums through the CRT trailer path. Set even when the caller precomputed a checksum:
  // the CRT only looks for one in the headers when a config is present.
  if (s3Request.ChecksumAlgorithmHasBeenSet()) {
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

  // Held strongly: the state owns nothing that owns these callbacks, so there is no cycle to break.
  options->SetHeadersCallback([state](const Aws::Crt::Vector<Aws::Crt::Http::HttpHeader>& headers, int responseStatus) -> bool {
    state->responseHeaders = ToHeaderValueCollection(headers);
    state->responseStatus = responseStatus;
    return true;
  });

  options->SetProgressCallback([state](uint64_t bytesTransferred, uint64_t contentLength) {
    // File uploads learn their size here (CRT stats the file); stream uploads with a customer-
    // declared length already populated it in PrepareTransferState.
    if (!state->totalBytes && contentLength > 0) {
      state->totalBytes = contentLength;
    }
    const uint64_t soFar = (state->transferredBytes += bytesTransferred);
    NotifyListeners(state, &UploadProgressListener::OnBytesTransferred, MakeUploadSnapshot(state, soFar));
  });

  options->SetFinishCallback([state](const Aws::Crt::S3::S3MetaRequestResult& result) {
    if (result.GetErrorCode() == Aws::Crt::S3::S3ErrorCode::Success) {
      // A listener may retain the snapshot's response, so the future gets a separate one rather than
      // taking the value out of the shared object.
      const uint64_t total = state->totalBytes ? *state->totalBytes : 0;
      NotifyListeners(
          state, &UploadProgressListener::OnTransferComplete,
          UploadProgressSnapshot(total, total,
                                 Aws::MakeShared<UploadResponse>(CRT_OPERATIONS_LOG_TAG, MakeUploadResponse(state)),
                                 true));  // total known on success
      state->promise.set_value(UploadOutcome(MakeUploadResponse(state)));
    } else {
      auto error = MapCrtError(result);
      NotifyListeners(state, &UploadProgressListener::OnTransferFailed,
                      MakeUploadSnapshot(state, state->transferredBytes.load()));
      state->promise.set_value(UploadOutcome(std::move(error)));
    }
  });

  auto metaRequest = impl.GetCrtClient()->MakeMetaRequest(*options);
  if (!metaRequest) {
    // Initiated already fired above; only fire failed here.
    FailUploadAfterInitiated(state, Aws::Client::AWSError<Aws::S3::S3Errors>(
        Aws::S3::S3Errors::INTERNAL_FAILURE, "INTERNAL_FAILURE", "Unable to create s3 meta request", false));
    return UploadHandle(std::move(handleImpl));
  }
  // Set before the handle is handed out, so Cancel() can never observe it unset.
  handleImpl->metaRequest = std::move(metaRequest);

  return UploadHandle(std::move(handleImpl));
}

DownloadHandle CrtOperations::DispatchDownload(S3TransferManagerImpl& impl, const DownloadRequest& request) {
  auto state = Aws::MakeShared<DownloadTransferState>(CRT_OPERATIONS_LOG_TAG, request);

  auto handleImpl = Aws::MakeUnique<DownloadHandleImpl>(CRT_OPERATIONS_LOG_TAG);
  handleImpl->future = state->promise.get_future();
  handleImpl->state = state;

  // Fail fast if the manager never initialized; error surfaces via the handle's future.
  if (!impl.IsInitialized()) {
    NotifyEarlyDownloadFailure(state, impl.GetInitializationError());
    return DownloadHandle(std::move(handleImpl));
  }

  {
    Internal::OptionalError validationError = state->request.Validate();
    if (validationError) {
      NotifyEarlyDownloadFailure(state, validationError.value());
      return DownloadHandle(std::move(handleImpl));
    }
  }

  const auto& s3Request = state->request.GetS3Request();

  Aws::Http::URI uri;
  Aws::String endpointError;
  ResolvedSigning signing;
  if (!ResolveEndpointUri(impl.GetEndpointProvider(), s3Request, s3Request.GetKey(), uri, endpointError, &signing)) {
    NotifyEarlyDownloadFailure(state, Aws::Client::AWSError<Aws::Client::CoreErrors>(
        Aws::Client::CoreErrors::ENDPOINT_RESOLUTION_FAILURE, "ENDPOINT_RESOLUTION_FAILURE", endpointError, false));
    return DownloadHandle(std::move(handleImpl));
  }

  auto crtRequest = BuildCrtHttpRequest(s3Request, uri, Aws::Http::HttpMethod::HTTP_GET, impl.GetUserAgentString());
  if (!crtRequest) {
    NotifyEarlyDownloadFailure(state, Aws::Client::AWSError<Aws::S3::S3Errors>(
        Aws::S3::S3Errors::INTERNAL_FAILURE, "INTERNAL_FAILURE",
        "Failed to build CRT HTTP request for download", false));
    return DownloadHandle(std::move(handleImpl));
  }

  NotifyListeners(state, &DownloadProgressListener::OnTransferInitiated,
                  DownloadProgressSnapshot(0, 0, nullptr, false));

  // A file download hands the CRT a temp path to write; a receiver-backed one takes body callbacks.
  // The receiver is copied into the callback so it outlives a request that gets moved away.
  std::shared_ptr<DownloadDataReceiver> receiver = state->request.GetDataReceiver();
  auto options =
      receiver ? Aws::Crt::S3::S3GetObjectMetaRequestOptions::Create(
                     crtRequest,
                     Aws::Crt::S3::S3MetaRequestOptions::BodyCallbackEx(
                         [receiver](Aws::Crt::ByteCursor body, uint64_t rangeStart,
                                    Aws::Crt::S3::S3BufferTicket& ticket) -> bool {
                           // Acquire() so the buffer outlives the callback.
                           receiver->OnDataReceived(S3DownloadBuffer(ticket.Acquire(), body, rangeStart));
                           return true;
                         }))
               : Aws::Crt::S3::S3GetObjectMetaRequestOptions::Create(
                     crtRequest, Aws::Crt::String(state->request.GetTempFilePath().c_str()));
  if (!options) {
    // Initiated already fired above; only fire failed here.
    FailDownloadAfterInitiated(state, Aws::Client::AWSError<Aws::S3::S3Errors>(
        Aws::S3::S3Errors::UNKNOWN, "MetaRequestOptionsAllocationFailure",
        "Failed to allocate CRT meta request options.", false));
    return DownloadHandle(std::move(handleImpl));
  }

  ConfigureEndpointSigning(*options, signing, impl);
  ConfigureTransferSizing(*options, impl);

  // Location MUST be None on GET; Trailer (the default) causes S3 to reject the bodyless request.
  const bool perRequestEnabled = s3Request.ChecksumModeHasBeenSet() &&
                                 s3Request.GetChecksumMode() == Aws::S3::Model::ChecksumMode::ENABLED;
  const bool clientLevelEnabled = impl.GetConfig().checksumConfig.responseChecksumValidation ==
                                  Aws::Client::ResponseChecksumValidation::WHEN_SUPPORTED;
  if (perRequestEnabled || clientLevelEnabled) {
    Aws::Crt::S3::S3ChecksumConfig checksumConfig;
    checksumConfig.SetLocation(Aws::Crt::S3::S3ChecksumLocation::None).SetValidateResponseChecksum(true);
    options->SetChecksumConfig(checksumConfig);
  }

  // See upload dispatch for why the callbacks can hold the state strongly.
  options->SetHeadersCallback([state](const Aws::Crt::Vector<Aws::Crt::Http::HttpHeader>& headers, int responseStatus) -> bool {
    state->responseHeaders = ToHeaderValueCollection(headers);
    state->responseStatus = responseStatus;
    return true;
  });

  options->SetProgressCallback([state](uint64_t bytesTransferred, uint64_t contentLength) {
    // Whole-object size is learned here (not known up-front for downloads).
    if (!state->totalBytes && contentLength > 0) {
      state->totalBytes = contentLength;
    }
    const uint64_t soFar = (state->transferredBytes += bytesTransferred);
    NotifyListeners(state, &DownloadProgressListener::OnBytesTransferred, MakeDownloadSnapshot(state, soFar));
  });

  options->SetFinishCallback([state](const Aws::Crt::S3::S3MetaRequestResult& result) {
    if (result.GetErrorCode() == Aws::Crt::S3::S3ErrorCode::Success) {
      Internal::OptionalError finalizeError = state->request.FinalizeOnSuccess(state);
      if (finalizeError) {
        NotifyListeners(state, &DownloadProgressListener::OnTransferFailed,
                        MakeDownloadSnapshot(state, state->transferredBytes.load()));
        state->promise.set_value(DownloadOutcome(finalizeError.value()));
        return;
      }

      // A listener may retain the snapshot's response, so the future gets a separate one rather than
      // taking the value out of the shared object. GetObjectResult is move-only, so a copy is not an
      // option here either way.
      const uint64_t total = state->totalBytes ? *state->totalBytes : 0;
      NotifyListeners(
          state, &DownloadProgressListener::OnTransferComplete,
          MakeDownloadSnapshot(
              state, total,
              Aws::MakeShared<DownloadResponse>(CRT_OPERATIONS_LOG_TAG, MakeDownloadResponse(state))));
      state->promise.set_value(DownloadOutcome(MakeDownloadResponse(state)));
    } else {
      auto error = MapCrtError(result);
      // The download already failed; if wiping the temp file also failed, fold that into the message
      // so the customer learns a partial file was left behind rather than losing it silently.
      Internal::OptionalError cleanupError = state->request.CleanupOnFailure(state);
      if (cleanupError) {
        error.SetMessage(error.GetMessage() + " (" + cleanupError.value().GetMessage() + ")");
      }
      NotifyListeners(state, &DownloadProgressListener::OnTransferFailed,
                      MakeDownloadSnapshot(state, state->transferredBytes.load()));
      state->promise.set_value(DownloadOutcome(std::move(error)));
    }
  });

  auto metaRequest = impl.GetCrtClient()->MakeMetaRequest(*options);
  if (!metaRequest) {
    // Initiated already fired above; only fire failed here.
    FailDownloadAfterInitiated(state, Aws::Client::AWSError<Aws::S3::S3Errors>(
        Aws::S3::S3Errors::INTERNAL_FAILURE, "INTERNAL_FAILURE", "Unable to create s3 meta request", false));
    return DownloadHandle(std::move(handleImpl));
  }
  handleImpl->metaRequest = std::move(metaRequest);

  return DownloadHandle(std::move(handleImpl));
}

}  // namespace Internal
}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
