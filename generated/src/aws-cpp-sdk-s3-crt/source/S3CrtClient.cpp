/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/event/EventStream.h>
#include <aws/core/platform/Environment.h>

#include <aws/s3-crt/S3CrtClient.h>
#include <aws/s3-crt/S3CrtErrorMarshaller.h>
#include <aws/s3-crt/S3CrtEndpointProvider.h>
#include <aws/s3-crt/model/AbortMultipartUploadRequest.h>
#include <aws/s3-crt/model/CompleteMultipartUploadRequest.h>
#include <aws/s3-crt/model/CopyObjectRequest.h>
#include <aws/s3-crt/model/CreateBucketRequest.h>
#include <aws/s3-crt/model/CreateMultipartUploadRequest.h>
#include <aws/s3-crt/model/DeleteBucketRequest.h>
#include <aws/s3-crt/model/DeleteBucketAnalyticsConfigurationRequest.h>
#include <aws/s3-crt/model/DeleteBucketCorsRequest.h>
#include <aws/s3-crt/model/DeleteBucketEncryptionRequest.h>
#include <aws/s3-crt/model/DeleteBucketIntelligentTieringConfigurationRequest.h>
#include <aws/s3-crt/model/DeleteBucketInventoryConfigurationRequest.h>
#include <aws/s3-crt/model/DeleteBucketLifecycleRequest.h>
#include <aws/s3-crt/model/DeleteBucketMetricsConfigurationRequest.h>
#include <aws/s3-crt/model/DeleteBucketOwnershipControlsRequest.h>
#include <aws/s3-crt/model/DeleteBucketPolicyRequest.h>
#include <aws/s3-crt/model/DeleteBucketReplicationRequest.h>
#include <aws/s3-crt/model/DeleteBucketTaggingRequest.h>
#include <aws/s3-crt/model/DeleteBucketWebsiteRequest.h>
#include <aws/s3-crt/model/DeleteObjectRequest.h>
#include <aws/s3-crt/model/DeleteObjectTaggingRequest.h>
#include <aws/s3-crt/model/DeleteObjectsRequest.h>
#include <aws/s3-crt/model/DeletePublicAccessBlockRequest.h>
#include <aws/s3-crt/model/GetBucketAccelerateConfigurationRequest.h>
#include <aws/s3-crt/model/GetBucketAclRequest.h>
#include <aws/s3-crt/model/GetBucketAnalyticsConfigurationRequest.h>
#include <aws/s3-crt/model/GetBucketCorsRequest.h>
#include <aws/s3-crt/model/GetBucketEncryptionRequest.h>
#include <aws/s3-crt/model/GetBucketIntelligentTieringConfigurationRequest.h>
#include <aws/s3-crt/model/GetBucketInventoryConfigurationRequest.h>
#include <aws/s3-crt/model/GetBucketLifecycleConfigurationRequest.h>
#include <aws/s3-crt/model/GetBucketLocationRequest.h>
#include <aws/s3-crt/model/GetBucketLoggingRequest.h>
#include <aws/s3-crt/model/GetBucketMetricsConfigurationRequest.h>
#include <aws/s3-crt/model/GetBucketNotificationConfigurationRequest.h>
#include <aws/s3-crt/model/GetBucketOwnershipControlsRequest.h>
#include <aws/s3-crt/model/GetBucketPolicyRequest.h>
#include <aws/s3-crt/model/GetBucketPolicyStatusRequest.h>
#include <aws/s3-crt/model/GetBucketReplicationRequest.h>
#include <aws/s3-crt/model/GetBucketRequestPaymentRequest.h>
#include <aws/s3-crt/model/GetBucketTaggingRequest.h>
#include <aws/s3-crt/model/GetBucketVersioningRequest.h>
#include <aws/s3-crt/model/GetBucketWebsiteRequest.h>
#include <aws/s3-crt/model/GetObjectRequest.h>
#include <aws/s3-crt/model/GetObjectAclRequest.h>
#include <aws/s3-crt/model/GetObjectAttributesRequest.h>
#include <aws/s3-crt/model/GetObjectLegalHoldRequest.h>
#include <aws/s3-crt/model/GetObjectLockConfigurationRequest.h>
#include <aws/s3-crt/model/GetObjectRetentionRequest.h>
#include <aws/s3-crt/model/GetObjectTaggingRequest.h>
#include <aws/s3-crt/model/GetObjectTorrentRequest.h>
#include <aws/s3-crt/model/GetPublicAccessBlockRequest.h>
#include <aws/s3-crt/model/HeadBucketRequest.h>
#include <aws/s3-crt/model/HeadObjectRequest.h>
#include <aws/s3-crt/model/ListBucketAnalyticsConfigurationsRequest.h>
#include <aws/s3-crt/model/ListBucketIntelligentTieringConfigurationsRequest.h>
#include <aws/s3-crt/model/ListBucketInventoryConfigurationsRequest.h>
#include <aws/s3-crt/model/ListBucketMetricsConfigurationsRequest.h>
#include <aws/s3-crt/model/ListMultipartUploadsRequest.h>
#include <aws/s3-crt/model/ListObjectVersionsRequest.h>
#include <aws/s3-crt/model/ListObjectsRequest.h>
#include <aws/s3-crt/model/ListObjectsV2Request.h>
#include <aws/s3-crt/model/ListPartsRequest.h>
#include <aws/s3-crt/model/PutBucketAccelerateConfigurationRequest.h>
#include <aws/s3-crt/model/PutBucketAclRequest.h>
#include <aws/s3-crt/model/PutBucketAnalyticsConfigurationRequest.h>
#include <aws/s3-crt/model/PutBucketCorsRequest.h>
#include <aws/s3-crt/model/PutBucketEncryptionRequest.h>
#include <aws/s3-crt/model/PutBucketIntelligentTieringConfigurationRequest.h>
#include <aws/s3-crt/model/PutBucketInventoryConfigurationRequest.h>
#include <aws/s3-crt/model/PutBucketLifecycleConfigurationRequest.h>
#include <aws/s3-crt/model/PutBucketLoggingRequest.h>
#include <aws/s3-crt/model/PutBucketMetricsConfigurationRequest.h>
#include <aws/s3-crt/model/PutBucketNotificationConfigurationRequest.h>
#include <aws/s3-crt/model/PutBucketOwnershipControlsRequest.h>
#include <aws/s3-crt/model/PutBucketPolicyRequest.h>
#include <aws/s3-crt/model/PutBucketReplicationRequest.h>
#include <aws/s3-crt/model/PutBucketRequestPaymentRequest.h>
#include <aws/s3-crt/model/PutBucketTaggingRequest.h>
#include <aws/s3-crt/model/PutBucketVersioningRequest.h>
#include <aws/s3-crt/model/PutBucketWebsiteRequest.h>
#include <aws/s3-crt/model/PutObjectRequest.h>
#include <aws/s3-crt/model/PutObjectAclRequest.h>
#include <aws/s3-crt/model/PutObjectLegalHoldRequest.h>
#include <aws/s3-crt/model/PutObjectLockConfigurationRequest.h>
#include <aws/s3-crt/model/PutObjectRetentionRequest.h>
#include <aws/s3-crt/model/PutObjectTaggingRequest.h>
#include <aws/s3-crt/model/PutPublicAccessBlockRequest.h>
#include <aws/s3-crt/model/RestoreObjectRequest.h>
#include <aws/s3-crt/model/SelectObjectContentRequest.h>
#include <aws/s3-crt/model/UploadPartRequest.h>
#include <aws/s3-crt/model/UploadPartCopyRequest.h>
#include <aws/s3-crt/model/WriteGetObjectResponseRequest.h>
#include <aws/core/Version.h>
#include <aws/core/platform/OSVersionInfo.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <aws/core/Globals.h>
#include <aws/crt/Types.h>
#include <aws/crt/auth/Credentials.h>
#include <aws/crt/http/HttpRequestResponse.h>
#include <aws/crt/io/Stream.h>
#include <aws/crt/io/Uri.h>
#include <aws/http/request_response.h>
#include <aws/common/string.h>

using namespace Aws::Utils;

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::S3Crt;
using namespace Aws::S3Crt::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;


const char* S3CrtClient::SERVICE_NAME = "s3";
const char* S3CrtClient::ALLOCATION_TAG = "S3CrtClient";


S3CrtClient::S3CrtClient(const S3Crt::ClientConfiguration& clientConfiguration, Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy signPayloads, bool useVirtualAddressing, Aws::S3Crt::US_EAST_1_REGIONAL_ENDPOINT_OPTION USEast1RegionalEndPointOption, const Aws::Auth::DefaultAWSCredentialsProviderChain& credentialsProvider) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, credentialsProvider),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region), signPayloads, false),
    Aws::MakeShared<S3CrtErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration, signPayloads, useVirtualAddressing, USEast1RegionalEndPointOption),
    m_executor(clientConfiguration.executor), m_credProvider(Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, credentialsProvider))
{
  init(clientConfiguration, m_credProvider);
}

S3CrtClient::S3CrtClient(const AWSCredentials& credentials, const S3Crt::ClientConfiguration& clientConfiguration, Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy signPayloads, bool useVirtualAddressing, Aws::S3Crt::US_EAST_1_REGIONAL_ENDPOINT_OPTION USEast1RegionalEndPointOption) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region), signPayloads, false),
    Aws::MakeShared<S3CrtErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration, signPayloads, useVirtualAddressing, USEast1RegionalEndPointOption),
    m_executor(clientConfiguration.executor), m_credProvider(Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials))
{
  init(clientConfiguration, m_credProvider);
}

S3CrtClient::S3CrtClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const S3Crt::ClientConfiguration& clientConfiguration, Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy signPayloads, bool useVirtualAddressing, Aws::S3Crt::US_EAST_1_REGIONAL_ENDPOINT_OPTION USEast1RegionalEndPointOption) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region), signPayloads, false),
    Aws::MakeShared<S3CrtErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration, signPayloads, useVirtualAddressing, USEast1RegionalEndPointOption),
    m_executor(clientConfiguration.executor), m_credProvider(credentialsProvider)
{
  init(clientConfiguration, m_credProvider);
}

S3CrtClient::~S3CrtClient()
{
  aws_s3_client_release(m_s3CrtClient);
  if(m_clientShutdownSem)
  {
    m_clientShutdownSem->WaitOne(); // Wait aws_s3_client shutdown
  }
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<S3CrtEndpointProviderBase>& S3CrtClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void S3CrtClient::init(const S3Crt::ClientConfiguration& config, const std::shared_ptr<Aws::Auth::AWSCredentialsProvider> credentialsProvider)
{
  AWSClient::SetServiceClientName("S3");
  m_endpointProvider = Aws::MakeShared<S3CrtEndpointProvider>(ALLOCATION_TAG);
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);

  // initialize aws_s3_client;
  aws_s3_client_config s3CrtConfig;
  AWS_ZERO_STRUCT(s3CrtConfig);
  s3CrtConfig.region = Aws::Crt::ByteCursorFromCString(config.region.c_str());
  s3CrtConfig.connect_timeout_ms = config.connectTimeoutMs;

  // Download flow-control configuration:
  s3CrtConfig.enable_read_backpressure = (config.downloadMemoryUsageWindow > 0);
  s3CrtConfig.initial_read_window = config.downloadMemoryUsageWindow;

  aws_s3_tcp_keep_alive_options tcp_keep_alive_options;
  if (config.enableTcpKeepAlive) {
    uint16_t configKeepAliveS = static_cast<uint16_t>(std::min(static_cast<unsigned long>(std::numeric_limits<uint16_t>::max()), config.tcpKeepAliveIntervalMs / 1000ul));
    static const uint16_t MAX_CRT_KEEP_ALIVE = 15; // seconds
    const uint16_t keep_intvl = std::max(MAX_CRT_KEEP_ALIVE, configKeepAliveS);

    AWS_ZERO_STRUCT(tcp_keep_alive_options);
    tcp_keep_alive_options.keep_alive_interval_sec = keep_intvl;
    tcp_keep_alive_options.keep_alive_timeout_sec = keep_intvl;

    s3CrtConfig.tcp_keep_alive_options = &tcp_keep_alive_options;
  }

  aws_http_connection_monitoring_options tcp_monitoring_options;
  if (config.lowSpeedLimit) {
    // Use the same monitor interval default as used by the curl client, but allow override via requestTimeoutMs:
    uint32_t configMonitoringS = static_cast<uint32_t>(std::min(static_cast<unsigned long>(std::numeric_limits<uint32_t>::max()), config.requestTimeoutMs / 1000ul));
    static const uint32_t MAX_CRT_MONITORING = 3; // seconds
    const uint32_t monitor_intvl = std::max(MAX_CRT_MONITORING, configMonitoringS);

    AWS_ZERO_STRUCT(tcp_monitoring_options);
    tcp_monitoring_options.minimum_throughput_bytes_per_second = config.lowSpeedLimit;
    tcp_monitoring_options.allowable_throughput_failure_interval_seconds = monitor_intvl;

    s3CrtConfig.monitoring_options = &tcp_monitoring_options;
  }

  Aws::Crt::Io::ClientBootstrap* clientBootstrap = config.clientBootstrap ? config.clientBootstrap.get() : Aws::GetDefaultClientBootstrap();
  s3CrtConfig.client_bootstrap = clientBootstrap->GetUnderlyingHandle();

  m_crtCredProvider = Aws::Crt::Auth::CredentialsProvider::CreateCredentialsProviderDelegate({
     std::bind([](const std::shared_ptr<AWSCredentialsProvider>& provider) {
         if (provider == nullptr) {
             AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "No provider provided, using anonymous provider")
             return Aws::MakeShared<Aws::Crt::Auth::Credentials>(ALLOCATION_TAG);
         }
         AWSCredentials credentials = provider->GetAWSCredentials();
         if (credentials.GetAWSAccessKeyId().empty() && credentials.GetAWSSecretKey().empty()) {
             return Aws::MakeShared<Aws::Crt::Auth::Credentials>(ALLOCATION_TAG);
         }
         return Aws::MakeShared<Aws::Crt::Auth::Credentials>(ALLOCATION_TAG,
             *Aws::MakeShared<Aws::Crt::ByteCursor>(ALLOCATION_TAG, Aws::Crt::ByteCursorFromCString(credentials.GetAWSAccessKeyId().c_str())),
             *Aws::MakeShared<Aws::Crt::ByteCursor>(ALLOCATION_TAG, Aws::Crt::ByteCursorFromCString(credentials.GetAWSSecretKey().c_str())),
             *Aws::MakeShared<Aws::Crt::ByteCursor>(ALLOCATION_TAG, Aws::Crt::ByteCursorFromCString(credentials.GetSessionToken().c_str())),
             credentials.GetExpiration().Millis());
     }, credentialsProvider)
  });

  aws_s3_init_default_signing_config(&m_s3CrtSigningConfig, Aws::Crt::ByteCursorFromCString(config.region.c_str()), m_crtCredProvider->GetUnderlyingHandle());
  m_s3CrtSigningConfig.flags.use_double_uri_encode = false;
  s3CrtConfig.signing_config = &m_s3CrtSigningConfig;

  static const size_t DEFAULT_PART_SIZE = 5 * 1024 * 1024; // 5MB
  s3CrtConfig.part_size = config.partSize < DEFAULT_PART_SIZE ? DEFAULT_PART_SIZE : config.partSize;

  Aws::UniquePtr<Aws::Crt::Io::TlsConnectionOptions> pTlsConnectionOptions;
  if (config.tlsConnectionOptions)
  {
    pTlsConnectionOptions = Aws::MakeUnique<Aws::Crt::Io::TlsConnectionOptions>(ALLOCATION_TAG, *config.tlsConnectionOptions);
    if (!config.caPath.empty() || !config.caFile.empty())
    {
      AWS_LOGSTREAM_WARN(ALLOCATION_TAG, "caPath or caFile on client configuration are ignored in case of user-configured TlsConnectionOptions provided");
    }
  }

  if (!pTlsConnectionOptions)
  {
    Aws::Crt::Io::TlsContextOptions crtTlsContextOptions = Aws::Crt::Io::TlsContextOptions::InitDefaultClient();
    if (!config.caPath.empty() || !config.caFile.empty())
    {
      const char *caPath = config.caPath.empty() ? nullptr : config.caPath.c_str();
      const char *caFile = config.caFile.empty() ? nullptr : config.caFile.c_str();
      if(!crtTlsContextOptions.OverrideDefaultTrustStore(caPath, caFile)) {
        AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize S3 Crt client: failed to set caPath/caFile");
        m_isInitialized = false;
        return;
      }
    }
    Aws::Crt::Io::TlsContext crtTlsContext(crtTlsContextOptions, Aws::Crt::Io::TlsMode::CLIENT);
    pTlsConnectionOptions = Aws::MakeUnique<Aws::Crt::Io::TlsConnectionOptions>(ALLOCATION_TAG, crtTlsContext.NewConnectionOptions());
  }

  aws_tls_connection_options nonConstTlsOptions;
  AWS_ZERO_STRUCT(nonConstTlsOptions);
  if (pTlsConnectionOptions)
  {
    ResolveEndpointOutcome endpointOutcome = m_endpointProvider->ResolveEndpoint({});
    if (!endpointOutcome.IsSuccess())
    {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize S3 Crt client: failed to resolve base URI: " << endpointOutcome.GetError().GetMessage());
      m_isInitialized = false;
      return;
    }
    Aws::Crt::ByteCursor serverName = Aws::Crt::ByteCursorFromCString(endpointOutcome.GetResult().GetURI().GetAuthority().c_str());
    pTlsConnectionOptions->SetServerName(serverName);
    aws_tls_connection_options_copy(&nonConstTlsOptions, pTlsConnectionOptions->GetUnderlyingHandle());
    s3CrtConfig.tls_connection_options = &nonConstTlsOptions;
  }
  else
  {
    s3CrtConfig.tls_connection_options = nullptr;
  }

  s3CrtConfig.tls_mode = config.scheme == Aws::Http::Scheme::HTTPS ? AWS_MR_TLS_ENABLED : AWS_MR_TLS_DISABLED;
  s3CrtConfig.throughput_target_gbps = config.throughputTargetGbps;
  m_clientShutdownSem = Aws::MakeShared<Threading::Semaphore>(ALLOCATION_TAG, 0, 1);
  m_wrappedData.data = config.shutdownCallbackUserData;
  m_wrappedData.fn = config.clientShutdownCallback;
  m_wrappedData.clientShutdownSem = m_clientShutdownSem;
  s3CrtConfig.shutdown_callback = CrtClientShutdownCallback;
  s3CrtConfig.shutdown_callback_user_data = static_cast<void*>(&m_wrappedData);

  m_s3CrtClient = aws_s3_client_new(Aws::get_aws_allocator(), &s3CrtConfig);
  if (pTlsConnectionOptions)
  {
    aws_tls_connection_options_clean_up(&nonConstTlsOptions);
  }
  if (!m_s3CrtClient)
  {
    AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to allocate aws_s3_client instance, abort.");
    m_isInitialized = false;
  }
}

void S3CrtClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}

static const int SUCCESS_RESPONSE_MIN = 200;
static const int SUCCESS_RESPONSE_MAX = 299;

static int S3CrtRequestHeadersCallback(struct aws_s3_meta_request *meta_request, const struct aws_http_headers *headers,
    int response_status, void *user_data)
{
  AWS_UNREFERENCED_PARAM(meta_request);
  auto *userData = static_cast<S3CrtClient::CrtRequestCallbackUserData*>(user_data);
  size_t headersCount = aws_http_headers_count(headers);
  for (size_t i = 0; i < headersCount; i++)
  {
    struct aws_http_header header;
    aws_http_headers_get_index(headers, i, &header);
    userData->response->AddHeader(StringUtils::FromByteCursor(header.name), StringUtils::FromByteCursor(header.value));
  }
  userData->response->SetResponseCode(static_cast<HttpResponseCode>(response_status));
  return AWS_OP_SUCCESS;
}

static int S3CrtRequestGetBodyCallback(struct aws_s3_meta_request *meta_request, const struct aws_byte_cursor *body, uint64_t range_start, void *user_data)
{
  AWS_UNREFERENCED_PARAM(range_start);

  auto *userData = static_cast<S3CrtClient::CrtRequestCallbackUserData*>(user_data);
  auto& bodyStream = userData->response->GetResponseBody();

  bodyStream.write(reinterpret_cast<char*>(body->ptr), static_cast<std::streamsize>(body->len));
  if (userData->request->IsEventStreamRequest())
  {
    bodyStream.flush();
  }

  // Replenish flow-control window (no-op if enable_read_backpressure is not set):
  aws_s3_meta_request_increment_read_window(meta_request, body->len);

  // data sent handler and continuation handler will be supported later when aws_c_s3 support it.
  auto& receivedHandler = userData->request->GetDataReceivedEventHandler();
  if (receivedHandler)
  {
      receivedHandler(userData->request.get(), userData->response.get(), static_cast<long long>(body->len));
  }
  AWS_LOGSTREAM_TRACE(S3CrtClient::ALLOCATION_TAG, body->len << " bytes written to response.");

  return AWS_OP_SUCCESS;
}

static void S3CrtRequestFinishCallback(struct aws_s3_meta_request *meta_request,
    const struct aws_s3_meta_request_result *meta_request_result, void *user_data)
{
  AWS_UNREFERENCED_PARAM(meta_request);
  auto *userData = static_cast<S3CrtClient::CrtRequestCallbackUserData*>(user_data);

  if (meta_request_result->error_code != AWS_ERROR_SUCCESS && meta_request_result->response_status == 0) {
    /* client side error */
    userData->response->SetClientErrorType(CoreErrors::NETWORK_CONNECTION);
    Aws::StringStream ss;
    ss << "crtCode: " << meta_request_result->error_code
      << ", " << aws_error_name(meta_request_result->error_code)
      << " - " << aws_error_str(meta_request_result->error_code);
    userData->response->SetClientErrorMessage(ss.str());
    userData->response->SetResponseCode(HttpResponseCode::REQUEST_NOT_MADE);
  } else {
    userData->response->SetResponseCode(static_cast<HttpResponseCode>(meta_request_result->response_status));
  }

  if (meta_request_result->error_response_headers)
  {
    size_t headersCount = aws_http_headers_count(meta_request_result->error_response_headers);
    for (size_t i = 0; i < headersCount; i++)
    {
      struct aws_http_header header;
      aws_http_headers_get_index(meta_request_result->error_response_headers, i, &header);
      userData->response->AddHeader(StringUtils::FromByteCursor(header.name), StringUtils::FromByteCursor(header.value));
    }
  }

  if (meta_request_result->error_code || meta_request_result->response_status != static_cast<int>(Aws::Http::HttpResponseCode::OK))
  {
    AWS_LOGSTREAM_ERROR(S3CrtClient::ALLOCATION_TAG, "S3CrtClient received error response for s3_meta_request with response code: " << meta_request_result->response_status
      << ", with error_code: " << meta_request_result->error_code);
  }

  auto& bodyStream = userData->response->GetResponseBody();

  if (meta_request_result->error_response_body)
  {
    // clean up previously received body data.
    bodyStream.seekg(0);
    bodyStream.seekp(0);
    bodyStream.write(reinterpret_cast<char*>(meta_request_result->error_response_body->buffer), static_cast<std::streamsize>(meta_request_result->error_response_body->len));
  }

  aws_s3_meta_request_release(meta_request);
}

Aws::Client::XmlOutcome S3CrtClient::GenerateXmlOutcome(const std::shared_ptr<HttpResponse>& response) const
{
  Aws::Client::HttpResponseOutcome httpOutcome;
  if (AWSClient::DoesResponseGenerateError(response))
  {
    AWS_LOGSTREAM_DEBUG(ALLOCATION_TAG, "Request returned error. Attempting to generate appropriate error codes from response");
    auto error = BuildAWSError(response);
    httpOutcome = HttpResponseOutcome(std::move(error));
  }
  else
  {
    httpOutcome = HttpResponseOutcome(std::move(response));
  }

  if (!httpOutcome.IsSuccess())
  {
      return XmlOutcome(std::move(httpOutcome));
  }

  if (httpOutcome.GetResult()->GetResponseBody().tellp() > 0)
  {
      XmlDocument xmlDoc = XmlDocument::CreateFromXmlStream(httpOutcome.GetResult()->GetResponseBody());

      if (!xmlDoc.WasParseSuccessful())
      {
          AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Xml parsing for error failed with message " << xmlDoc.GetErrorMessage().c_str());
          return AWSError<CoreErrors>(CoreErrors::UNKNOWN, "Xml Parse Error", xmlDoc.GetErrorMessage(), false);
      }

      return XmlOutcome(AmazonWebServiceResult<XmlDocument>(std::move(xmlDoc),
          httpOutcome.GetResult()->GetHeaders(), httpOutcome.GetResult()->GetResponseCode()));
  }

  return XmlOutcome(AmazonWebServiceResult<XmlDocument>(XmlDocument(), httpOutcome.GetResult()->GetHeaders()));
}

Aws::Client::StreamOutcome S3CrtClient::GenerateStreamOutcome(const std::shared_ptr<Http::HttpResponse>& response) const
{
  Aws::Client::HttpResponseOutcome httpOutcome;
  if (AWSClient::DoesResponseGenerateError(response))
  {
    AWS_LOGSTREAM_DEBUG(ALLOCATION_TAG, "Request returned error. Attempting to generate appropriate error codes from response");
    auto error = BuildAWSError(response);
    httpOutcome = HttpResponseOutcome(std::move(error));
  }
  else
  {
    httpOutcome = HttpResponseOutcome(std::move(response));
  }

  if (httpOutcome.IsSuccess())
  {
      return StreamOutcome(AmazonWebServiceResult<Stream::ResponseStream>(
          httpOutcome.GetResult()->SwapResponseStreamOwnership(),
          httpOutcome.GetResult()->GetHeaders(), httpOutcome.GetResult()->GetResponseCode()));
  }

  return StreamOutcome(std::move(httpOutcome));
}

void S3CrtClient::InitCommonCrtRequestOption(CrtRequestCallbackUserData *userData,
                                             aws_s3_meta_request_options *options,
                                             const Aws::AmazonWebServiceRequest *request,
                                             const Aws::Http::URI &uri,
                                             Aws::Http::HttpMethod method) const
{
  std::shared_ptr<HttpRequest> httpRequest(nullptr);
  if (request)
  {
    httpRequest = CreateHttpRequest(uri, method, request->GetResponseStreamFactory());
    BuildHttpRequest(*request, httpRequest);
  }
  else
  {
    httpRequest = CreateHttpRequest(uri, method, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
  }

  std::shared_ptr<HttpResponse> httpResponse = Aws::MakeShared<Aws::Http::Standard::StandardHttpResponse>(ALLOCATION_TAG, httpRequest);

  userData->s3CrtClient = this;
  userData->originalRequest = request;
  userData->request = httpRequest;
  userData->response = httpResponse;

  options->user_data = static_cast<void*>(userData);
  options->headers_callback = S3CrtRequestHeadersCallback;
  options->body_callback = S3CrtRequestGetBodyCallback;
  options->finish_callback = S3CrtRequestFinishCallback;
  const auto endpointStr = uri.GetURIString();
  const auto endpointCursor{ aws_byte_cursor_from_array(endpointStr.c_str(), endpointStr.size()) };
  aws_uri_init_parse(options->endpoint, Aws::get_aws_allocator(), &endpointCursor);
}

static void GetObjectRequestShutdownCallback(void *user_data)
{
  auto *userData = static_cast<S3CrtClient::CrtRequestCallbackUserData*>(user_data);
  // call user callback and release user_data
  S3Crt::Model::GetObjectOutcome outcome(userData->s3CrtClient->GenerateStreamOutcome(userData->response));
  userData->getResponseHandler(userData->s3CrtClient, *(reinterpret_cast<const GetObjectRequest*>(userData->originalRequest)), std::move(outcome), userData->asyncCallerContext);

  Aws::Delete(userData);
}

void S3CrtClient::GetObjectAsync(const GetObjectRequest& request, const GetObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& handlerContext) const
{
  if (!m_endpointProvider) {
    return handler(this, request, GetObjectOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::INTERNAL_FAILURE, "INTERNAL_FAILURE", "Endpoint provider is not initialized", false)), handlerContext);
  }
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObject", "Required field: Bucket, is not set");
    return handler(this, request, GetObjectOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false)), handlerContext);
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObject", "Required field: Key, is not set");
    return handler(this, request, GetObjectOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false)), handlerContext);
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  if (!endpointResolutionOutcome.IsSuccess()) {
    handler(this, request, GetObjectOutcome(Aws::Client::AWSError<CoreErrors>(
        CoreErrors::ENDPOINT_RESOLUTION_FAILURE, "ENDPOINT_RESOLUTION_FAILURE", endpointResolutionOutcome.GetError().GetMessage(), false)), handlerContext);
    return;
  }
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());

  // make aws_s3_meta_request with callbacks
  CrtRequestCallbackUserData *userData = Aws::New<CrtRequestCallbackUserData>(ALLOCATION_TAG);
  aws_s3_meta_request_options options;
  AWS_ZERO_STRUCT(options);
  aws_uri endpoint;
  AWS_ZERO_STRUCT(endpoint);
  options.endpoint = &endpoint;
  std::unique_ptr<aws_uri, void(*)(aws_uri*)> endpointCleanup { options.endpoint, &aws_uri_clean_up };

  userData->getResponseHandler = handler;
  userData->asyncCallerContext = handlerContext;
  InitCommonCrtRequestOption(userData, &options, &request, endpointResolutionOutcome.GetResult().GetURI(), Aws::Http::HttpMethod::HTTP_GET);
  if (userData != nullptr &&
    userData->request != nullptr &&
    userData->request->GetContentBody() != nullptr &&
    userData->request->GetContentBody()->fail())
  {
    return handler(this, request, GetObjectOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER_VALUE", "Output stream in bad state", false)), handlerContext);
  }
  options.shutdown_callback = GetObjectRequestShutdownCallback;
  options.type = AWS_S3_META_REQUEST_TYPE_GET_OBJECT;
  struct aws_signing_config_aws signing_config_override = m_s3CrtSigningConfig;
  if (endpointResolutionOutcome.GetResult().GetAttributes() && endpointResolutionOutcome.GetResult().GetAttributes()->authScheme.GetSigningRegion()) {
    signing_config_override.region = Aws::Crt::ByteCursorFromCString(endpointResolutionOutcome.GetResult().GetAttributes()->authScheme.GetSigningRegion()->c_str());
  }
  if (endpointResolutionOutcome.GetResult().GetAttributes() && endpointResolutionOutcome.GetResult().GetAttributes()->authScheme.GetSigningRegionSet()) {
    signing_config_override.region = Aws::Crt::ByteCursorFromCString(endpointResolutionOutcome.GetResult().GetAttributes()->authScheme.GetSigningRegionSet()->c_str());
  }
  if (endpointResolutionOutcome.GetResult().GetAttributes() && endpointResolutionOutcome.GetResult().GetAttributes()->authScheme.GetSigningName()) {
    signing_config_override.service = Aws::Crt::ByteCursorFromCString(endpointResolutionOutcome.GetResult().GetAttributes()->authScheme.GetSigningName()->c_str());
  }
  options.signing_config = &signing_config_override;

  std::shared_ptr<Aws::Crt::Http::HttpRequest> crtHttpRequest = userData->request->ToCrtHttpRequest();
  options.message= crtHttpRequest->GetUnderlyingMessage();
  userData->crtHttpRequest = crtHttpRequest;

  if (aws_s3_client_make_meta_request(m_s3CrtClient, &options) == nullptr)
  {
    return handler(this, request, GetObjectOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::INTERNAL_FAILURE, "INTERNAL_FAILURE", "Unable to create s3 meta request", false)), handlerContext);
  }
}

GetObjectOutcome S3CrtClient::GetObject(const GetObjectRequest& request) const
{
  AWS_OPERATION_GUARD(GetObject);
  Aws::Utils::Threading::Semaphore sem(0, 1);
  GetObjectOutcome res;

  auto handler = GetObjectResponseReceivedHandler{[&](const S3CrtClient*, const GetObjectRequest&, GetObjectOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext> &) {
      res = std::move(outcome);
      sem.ReleaseAll();
  }};

  S3CrtClient::GetObjectAsync(request, handler, nullptr);
  sem.WaitOne();
  return res;
}

static void PutObjectRequestShutdownCallback(void *user_data)
{
  auto *userData = static_cast<S3CrtClient::CrtRequestCallbackUserData*>(user_data);
  // call user callback and release user_data
  S3Crt::Model::PutObjectOutcome outcome(userData->s3CrtClient->GenerateXmlOutcome(userData->response));
  userData->putResponseHandler(userData->s3CrtClient, *(reinterpret_cast<const PutObjectRequest*>(userData->originalRequest)), std::move(outcome), userData->asyncCallerContext);

  Aws::Delete(userData);
}

void S3CrtClient::PutObjectAsync(const PutObjectRequest& request, const PutObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& handlerContext) const
{
  if (!m_endpointProvider) {
    return handler(this, request, PutObjectOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::INTERNAL_FAILURE, "INTERNAL_FAILURE", "Endpoint provider is not initialized", false)), handlerContext);
  }
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObject", "Required field: Bucket, is not set");
    return handler(this, request, PutObjectOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false)), handlerContext);
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObject", "Required field: Key, is not set");
    return handler(this, request, PutObjectOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false)), handlerContext);
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  if (!endpointResolutionOutcome.IsSuccess()) {
    handler(this, request, PutObjectOutcome(Aws::Client::AWSError<CoreErrors>(
        CoreErrors::ENDPOINT_RESOLUTION_FAILURE, "ENDPOINT_RESOLUTION_FAILURE", endpointResolutionOutcome.GetError().GetMessage(), false)), handlerContext);
    return;
  }
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());

  // make aws_s3_meta_request with callbacks
  CrtRequestCallbackUserData *userData = Aws::New<CrtRequestCallbackUserData>(ALLOCATION_TAG);
  aws_s3_meta_request_options options;
  AWS_ZERO_STRUCT(options);
  aws_uri endpoint;
  AWS_ZERO_STRUCT(endpoint);
  options.endpoint = &endpoint;
  std::unique_ptr<aws_uri, void(*)(aws_uri*)> endpointCleanup { options.endpoint, &aws_uri_clean_up };

  userData->putResponseHandler = handler;
  userData->asyncCallerContext = handlerContext;
  InitCommonCrtRequestOption(userData, &options, &request, endpointResolutionOutcome.GetResult().GetURI(), Aws::Http::HttpMethod::HTTP_PUT);
  if (userData != nullptr &&
    userData->request != nullptr &&
    userData->request->GetContentBody() != nullptr &&
    userData->request->GetContentBody()->fail())
  {
    return handler(this, request, PutObjectOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER_VALUE", "Input stream in bad state", false)), handlerContext);
  }
  options.shutdown_callback = PutObjectRequestShutdownCallback;
  options.type = AWS_S3_META_REQUEST_TYPE_PUT_OBJECT;
  struct aws_signing_config_aws signing_config_override = m_s3CrtSigningConfig;
  if (endpointResolutionOutcome.GetResult().GetAttributes() && endpointResolutionOutcome.GetResult().GetAttributes()->authScheme.GetSigningRegion()) {
    signing_config_override.region = Aws::Crt::ByteCursorFromCString(endpointResolutionOutcome.GetResult().GetAttributes()->authScheme.GetSigningRegion()->c_str());
  }
  if (endpointResolutionOutcome.GetResult().GetAttributes() && endpointResolutionOutcome.GetResult().GetAttributes()->authScheme.GetSigningRegionSet()) {
    signing_config_override.region = Aws::Crt::ByteCursorFromCString(endpointResolutionOutcome.GetResult().GetAttributes()->authScheme.GetSigningRegionSet()->c_str());
  }
  if (endpointResolutionOutcome.GetResult().GetAttributes() && endpointResolutionOutcome.GetResult().GetAttributes()->authScheme.GetSigningName()) {
    signing_config_override.service = Aws::Crt::ByteCursorFromCString(endpointResolutionOutcome.GetResult().GetAttributes()->authScheme.GetSigningName()->c_str());
  }
  options.signing_config = &signing_config_override;

  std::shared_ptr<Aws::Crt::Http::HttpRequest> crtHttpRequest = userData->request->ToCrtHttpRequest();
  options.message= crtHttpRequest->GetUnderlyingMessage();
  userData->crtHttpRequest = crtHttpRequest;

  if (aws_s3_client_make_meta_request(m_s3CrtClient, &options) == nullptr)
  {
    return handler(this, request, PutObjectOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::INTERNAL_FAILURE, "INTERNAL_FAILURE", "Unable to create s3 meta request", false)), handlerContext);
  }
}

PutObjectOutcome S3CrtClient::PutObject(const PutObjectRequest& request) const
{
  AWS_OPERATION_GUARD(PutObject);
  Aws::Utils::Threading::Semaphore sem(0, 1);
  PutObjectOutcome res;

  auto handler = PutObjectResponseReceivedHandler{[&](const S3CrtClient*, const PutObjectRequest&, const PutObjectOutcome& outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext> &) {
      res = std::move(outcome);
      sem.ReleaseAll();
  }};

  S3CrtClient::PutObjectAsync(request, handler, nullptr);
  sem.WaitOne();
  return res;
}

AbortMultipartUploadOutcome S3CrtClient::AbortMultipartUpload(const AbortMultipartUploadRequest& request) const
{
  AWS_OPERATION_GUARD(AbortMultipartUpload);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AbortMultipartUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AbortMultipartUpload", "Required field: Bucket, is not set");
    return AbortMultipartUploadOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AbortMultipartUpload", "Required field: Key, is not set");
    return AbortMultipartUploadOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  if (!request.UploadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AbortMultipartUpload", "Required field: UploadId, is not set");
    return AbortMultipartUploadOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UploadId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AbortMultipartUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  return AbortMultipartUploadOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

CompleteMultipartUploadOutcome S3CrtClient::CompleteMultipartUpload(const CompleteMultipartUploadRequest& request) const
{
  AWS_OPERATION_GUARD(CompleteMultipartUpload);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CompleteMultipartUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CompleteMultipartUpload", "Required field: Bucket, is not set");
    return CompleteMultipartUploadOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CompleteMultipartUpload", "Required field: Key, is not set");
    return CompleteMultipartUploadOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  if (!request.UploadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CompleteMultipartUpload", "Required field: UploadId, is not set");
    return CompleteMultipartUploadOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UploadId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CompleteMultipartUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  return CompleteMultipartUploadOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

static void CopyObjectRequestShutdownCallback(void *user_data)
{
  auto *userData = static_cast<S3CrtClient::CrtRequestCallbackUserData*>(user_data);
  S3Crt::Model::CopyObjectOutcome outcome(userData->s3CrtClient->GenerateXmlOutcome(userData->response));

  userData->copyResponseHandler(userData->s3CrtClient, *(reinterpret_cast<const CopyObjectRequest*>(userData->originalRequest)), std::move(outcome), userData->asyncCallerContext);
  Aws::Delete(userData);
}

void S3CrtClient::CopyObjectAsync(const Model::CopyObjectRequest& request, const CopyObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& handlerContext) const
{
  if (!m_endpointProvider) {
    return handler(this, request, CopyObjectOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::INTERNAL_FAILURE, "INTERNAL_FAILURE", "Endpoint provider is not initialized", false)), handlerContext);
  }
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CopyObject", "Required field: Bucket, is not set");
    return handler(this, request, CopyObjectOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false)), handlerContext);
  }
  if (!request.CopySourceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CopyObject", "Required field: CopySource, is not set");
    return handler(this, request, CopyObjectOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CopySource]", false)), handlerContext);
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CopyObject", "Required field: Key, is not set");
    return handler(this, request, CopyObjectOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false)), handlerContext);
  }

  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  if (!endpointResolutionOutcome.IsSuccess()) {
    handler(this, request, CopyObjectOutcome(Aws::Client::AWSError<CoreErrors>(
        CoreErrors::ENDPOINT_RESOLUTION_FAILURE, "ENDPOINT_RESOLUTION_FAILURE", endpointResolutionOutcome.GetError().GetMessage(), false)), handlerContext);
    return;
  }
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());

  CrtRequestCallbackUserData *userData = Aws::New<CrtRequestCallbackUserData>(ALLOCATION_TAG);
  aws_s3_meta_request_options options;
  AWS_ZERO_STRUCT(options);
  aws_uri endpoint;
  AWS_ZERO_STRUCT(endpoint);
  options.endpoint = &endpoint;
  std::unique_ptr<aws_uri, void(*)(aws_uri*)> endpointCleanup { options.endpoint, &aws_uri_clean_up };

  userData->copyResponseHandler = handler;
  userData->asyncCallerContext = handlerContext;
  InitCommonCrtRequestOption(userData, &options, &request, endpointResolutionOutcome.GetResult().GetURI(), Aws::Http::HttpMethod::HTTP_PUT);
  options.shutdown_callback = CopyObjectRequestShutdownCallback;
  options.type = AWS_S3_META_REQUEST_TYPE_COPY_OBJECT;

  struct aws_signing_config_aws signing_config_override = m_s3CrtSigningConfig;
  if (endpointResolutionOutcome.GetResult().GetAttributes() && endpointResolutionOutcome.GetResult().GetAttributes()->authScheme.GetSigningRegion()) {
    signing_config_override.region = Aws::Crt::ByteCursorFromCString(endpointResolutionOutcome.GetResult().GetAttributes()->authScheme.GetSigningRegion()->c_str());
  }
  if (endpointResolutionOutcome.GetResult().GetAttributes() && endpointResolutionOutcome.GetResult().GetAttributes()->authScheme.GetSigningRegionSet()) {
    signing_config_override.region = Aws::Crt::ByteCursorFromCString(endpointResolutionOutcome.GetResult().GetAttributes()->authScheme.GetSigningRegionSet()->c_str());
  }
  if (endpointResolutionOutcome.GetResult().GetAttributes() && endpointResolutionOutcome.GetResult().GetAttributes()->authScheme.GetSigningName()) {
    signing_config_override.service = Aws::Crt::ByteCursorFromCString(endpointResolutionOutcome.GetResult().GetAttributes()->authScheme.GetSigningName()->c_str());
  }
  options.signing_config = &signing_config_override;

  std::shared_ptr<Aws::Crt::Http::HttpRequest> crtHttpRequest = userData->request->ToCrtHttpRequest();
  options.message= crtHttpRequest->GetUnderlyingMessage();
  userData->crtHttpRequest = crtHttpRequest;

  if (aws_s3_client_make_meta_request(m_s3CrtClient, &options) == nullptr)
  {
    return handler(this, request, CopyObjectOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::INTERNAL_FAILURE, "INTERNAL_FAILURE", "Unable to create s3 meta request", false)), handlerContext);
  }
}

CopyObjectOutcome S3CrtClient::CopyObject(const CopyObjectRequest& request) const
{
  AWS_OPERATION_GUARD(CopyObject);
  Aws::Utils::Threading::Semaphore sem(0, 1);
  CopyObjectOutcome res;

  auto handler = CopyObjectResponseReceivedHandler{[&](const S3CrtClient*, const CopyObjectRequest&, CopyObjectOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext> &) {
      res = std::move(outcome);
      sem.ReleaseAll();
  }};

  S3CrtClient::CopyObjectAsync(request, handler, nullptr);
  sem.WaitOne();
  return res;
}

CreateBucketOutcome S3CrtClient::CreateBucket(const CreateBucketRequest& request) const
{
  AWS_OPERATION_GUARD(CreateBucket);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateBucket", "Required field: Bucket, is not set");
    return CreateBucketOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateBucketOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

CreateMultipartUploadOutcome S3CrtClient::CreateMultipartUpload(const CreateMultipartUploadRequest& request) const
{
  AWS_OPERATION_GUARD(CreateMultipartUpload);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMultipartUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateMultipartUpload", "Required field: Bucket, is not set");
    return CreateMultipartUploadOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateMultipartUpload", "Required field: Key, is not set");
    return CreateMultipartUploadOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateMultipartUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  ss.str("?uploads");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return CreateMultipartUploadOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteBucketOutcome S3CrtClient::DeleteBucket(const DeleteBucketRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteBucket);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucket", "Required field: Bucket, is not set");
    return DeleteBucketOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteBucketOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteBucketAnalyticsConfigurationOutcome S3CrtClient::DeleteBucketAnalyticsConfiguration(const DeleteBucketAnalyticsConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteBucketAnalyticsConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketAnalyticsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketAnalyticsConfiguration", "Required field: Bucket, is not set");
    return DeleteBucketAnalyticsConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketAnalyticsConfiguration", "Required field: Id, is not set");
    return DeleteBucketAnalyticsConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketAnalyticsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?analytics");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return DeleteBucketAnalyticsConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteBucketCorsOutcome S3CrtClient::DeleteBucketCors(const DeleteBucketCorsRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteBucketCors);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketCors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketCors", "Required field: Bucket, is not set");
    return DeleteBucketCorsOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketCors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?cors");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return DeleteBucketCorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteBucketEncryptionOutcome S3CrtClient::DeleteBucketEncryption(const DeleteBucketEncryptionRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteBucketEncryption);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketEncryption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketEncryption", "Required field: Bucket, is not set");
    return DeleteBucketEncryptionOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketEncryption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?encryption");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return DeleteBucketEncryptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteBucketIntelligentTieringConfigurationOutcome S3CrtClient::DeleteBucketIntelligentTieringConfiguration(const DeleteBucketIntelligentTieringConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteBucketIntelligentTieringConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketIntelligentTieringConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketIntelligentTieringConfiguration", "Required field: Bucket, is not set");
    return DeleteBucketIntelligentTieringConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketIntelligentTieringConfiguration", "Required field: Id, is not set");
    return DeleteBucketIntelligentTieringConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketIntelligentTieringConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?intelligent-tiering");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return DeleteBucketIntelligentTieringConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteBucketInventoryConfigurationOutcome S3CrtClient::DeleteBucketInventoryConfiguration(const DeleteBucketInventoryConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteBucketInventoryConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketInventoryConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketInventoryConfiguration", "Required field: Bucket, is not set");
    return DeleteBucketInventoryConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketInventoryConfiguration", "Required field: Id, is not set");
    return DeleteBucketInventoryConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketInventoryConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?inventory");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return DeleteBucketInventoryConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteBucketLifecycleOutcome S3CrtClient::DeleteBucketLifecycle(const DeleteBucketLifecycleRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteBucketLifecycle);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketLifecycle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketLifecycle", "Required field: Bucket, is not set");
    return DeleteBucketLifecycleOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketLifecycle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?lifecycle");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return DeleteBucketLifecycleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteBucketMetricsConfigurationOutcome S3CrtClient::DeleteBucketMetricsConfiguration(const DeleteBucketMetricsConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteBucketMetricsConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketMetricsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketMetricsConfiguration", "Required field: Bucket, is not set");
    return DeleteBucketMetricsConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketMetricsConfiguration", "Required field: Id, is not set");
    return DeleteBucketMetricsConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketMetricsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?metrics");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return DeleteBucketMetricsConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteBucketOwnershipControlsOutcome S3CrtClient::DeleteBucketOwnershipControls(const DeleteBucketOwnershipControlsRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteBucketOwnershipControls);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketOwnershipControls, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketOwnershipControls", "Required field: Bucket, is not set");
    return DeleteBucketOwnershipControlsOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketOwnershipControls, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?ownershipControls");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return DeleteBucketOwnershipControlsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteBucketPolicyOutcome S3CrtClient::DeleteBucketPolicy(const DeleteBucketPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteBucketPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketPolicy", "Required field: Bucket, is not set");
    return DeleteBucketPolicyOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?policy");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return DeleteBucketPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteBucketReplicationOutcome S3CrtClient::DeleteBucketReplication(const DeleteBucketReplicationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteBucketReplication);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketReplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketReplication", "Required field: Bucket, is not set");
    return DeleteBucketReplicationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketReplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?replication");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return DeleteBucketReplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteBucketTaggingOutcome S3CrtClient::DeleteBucketTagging(const DeleteBucketTaggingRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteBucketTagging);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketTagging", "Required field: Bucket, is not set");
    return DeleteBucketTaggingOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?tagging");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return DeleteBucketTaggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteBucketWebsiteOutcome S3CrtClient::DeleteBucketWebsite(const DeleteBucketWebsiteRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteBucketWebsite);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketWebsite, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketWebsite", "Required field: Bucket, is not set");
    return DeleteBucketWebsiteOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketWebsite, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?website");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return DeleteBucketWebsiteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteObjectOutcome S3CrtClient::DeleteObject(const DeleteObjectRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteObject);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteObject", "Required field: Bucket, is not set");
    return DeleteObjectOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteObject", "Required field: Key, is not set");
    return DeleteObjectOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  return DeleteObjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteObjectTaggingOutcome S3CrtClient::DeleteObjectTagging(const DeleteObjectTaggingRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteObjectTagging);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteObjectTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteObjectTagging", "Required field: Bucket, is not set");
    return DeleteObjectTaggingOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteObjectTagging", "Required field: Key, is not set");
    return DeleteObjectTaggingOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteObjectTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  ss.str("?tagging");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return DeleteObjectTaggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteObjectsOutcome S3CrtClient::DeleteObjects(const DeleteObjectsRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteObjects);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteObjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteObjects", "Required field: Bucket, is not set");
    return DeleteObjectsOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteObjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?delete");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return DeleteObjectsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeletePublicAccessBlockOutcome S3CrtClient::DeletePublicAccessBlock(const DeletePublicAccessBlockRequest& request) const
{
  AWS_OPERATION_GUARD(DeletePublicAccessBlock);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePublicAccessBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePublicAccessBlock", "Required field: Bucket, is not set");
    return DeletePublicAccessBlockOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePublicAccessBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?publicAccessBlock");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return DeletePublicAccessBlockOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

GetBucketAccelerateConfigurationOutcome S3CrtClient::GetBucketAccelerateConfiguration(const GetBucketAccelerateConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(GetBucketAccelerateConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketAccelerateConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketAccelerateConfiguration", "Required field: Bucket, is not set");
    return GetBucketAccelerateConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketAccelerateConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?accelerate");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetBucketAccelerateConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketAclOutcome S3CrtClient::GetBucketAcl(const GetBucketAclRequest& request) const
{
  AWS_OPERATION_GUARD(GetBucketAcl);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketAcl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketAcl", "Required field: Bucket, is not set");
    return GetBucketAclOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketAcl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?acl");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetBucketAclOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketAnalyticsConfigurationOutcome S3CrtClient::GetBucketAnalyticsConfiguration(const GetBucketAnalyticsConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(GetBucketAnalyticsConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketAnalyticsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketAnalyticsConfiguration", "Required field: Bucket, is not set");
    return GetBucketAnalyticsConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketAnalyticsConfiguration", "Required field: Id, is not set");
    return GetBucketAnalyticsConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketAnalyticsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?analytics");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetBucketAnalyticsConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketCorsOutcome S3CrtClient::GetBucketCors(const GetBucketCorsRequest& request) const
{
  AWS_OPERATION_GUARD(GetBucketCors);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketCors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketCors", "Required field: Bucket, is not set");
    return GetBucketCorsOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketCors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?cors");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetBucketCorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketEncryptionOutcome S3CrtClient::GetBucketEncryption(const GetBucketEncryptionRequest& request) const
{
  AWS_OPERATION_GUARD(GetBucketEncryption);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketEncryption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketEncryption", "Required field: Bucket, is not set");
    return GetBucketEncryptionOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketEncryption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?encryption");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetBucketEncryptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketIntelligentTieringConfigurationOutcome S3CrtClient::GetBucketIntelligentTieringConfiguration(const GetBucketIntelligentTieringConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(GetBucketIntelligentTieringConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketIntelligentTieringConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketIntelligentTieringConfiguration", "Required field: Bucket, is not set");
    return GetBucketIntelligentTieringConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketIntelligentTieringConfiguration", "Required field: Id, is not set");
    return GetBucketIntelligentTieringConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketIntelligentTieringConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?intelligent-tiering");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetBucketIntelligentTieringConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketInventoryConfigurationOutcome S3CrtClient::GetBucketInventoryConfiguration(const GetBucketInventoryConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(GetBucketInventoryConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketInventoryConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketInventoryConfiguration", "Required field: Bucket, is not set");
    return GetBucketInventoryConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketInventoryConfiguration", "Required field: Id, is not set");
    return GetBucketInventoryConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketInventoryConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?inventory");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetBucketInventoryConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketLifecycleConfigurationOutcome S3CrtClient::GetBucketLifecycleConfiguration(const GetBucketLifecycleConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(GetBucketLifecycleConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketLifecycleConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketLifecycleConfiguration", "Required field: Bucket, is not set");
    return GetBucketLifecycleConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketLifecycleConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?lifecycle");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetBucketLifecycleConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketLocationOutcome S3CrtClient::GetBucketLocation(const GetBucketLocationRequest& request) const
{
  AWS_OPERATION_GUARD(GetBucketLocation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketLocation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketLocation", "Required field: Bucket, is not set");
    return GetBucketLocationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketLocation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?location");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetBucketLocationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketLoggingOutcome S3CrtClient::GetBucketLogging(const GetBucketLoggingRequest& request) const
{
  AWS_OPERATION_GUARD(GetBucketLogging);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketLogging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketLogging", "Required field: Bucket, is not set");
    return GetBucketLoggingOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketLogging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?logging");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetBucketLoggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketMetricsConfigurationOutcome S3CrtClient::GetBucketMetricsConfiguration(const GetBucketMetricsConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(GetBucketMetricsConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketMetricsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketMetricsConfiguration", "Required field: Bucket, is not set");
    return GetBucketMetricsConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketMetricsConfiguration", "Required field: Id, is not set");
    return GetBucketMetricsConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketMetricsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?metrics");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetBucketMetricsConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketNotificationConfigurationOutcome S3CrtClient::GetBucketNotificationConfiguration(const GetBucketNotificationConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(GetBucketNotificationConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketNotificationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketNotificationConfiguration", "Required field: Bucket, is not set");
    return GetBucketNotificationConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketNotificationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?notification");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetBucketNotificationConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketOwnershipControlsOutcome S3CrtClient::GetBucketOwnershipControls(const GetBucketOwnershipControlsRequest& request) const
{
  AWS_OPERATION_GUARD(GetBucketOwnershipControls);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketOwnershipControls, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketOwnershipControls", "Required field: Bucket, is not set");
    return GetBucketOwnershipControlsOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketOwnershipControls, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?ownershipControls");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetBucketOwnershipControlsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketPolicyOutcome S3CrtClient::GetBucketPolicy(const GetBucketPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(GetBucketPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketPolicy", "Required field: Bucket, is not set");
    return GetBucketPolicyOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?policy");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetBucketPolicyOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketPolicyStatusOutcome S3CrtClient::GetBucketPolicyStatus(const GetBucketPolicyStatusRequest& request) const
{
  AWS_OPERATION_GUARD(GetBucketPolicyStatus);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketPolicyStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketPolicyStatus", "Required field: Bucket, is not set");
    return GetBucketPolicyStatusOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketPolicyStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?policyStatus");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetBucketPolicyStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketReplicationOutcome S3CrtClient::GetBucketReplication(const GetBucketReplicationRequest& request) const
{
  AWS_OPERATION_GUARD(GetBucketReplication);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketReplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketReplication", "Required field: Bucket, is not set");
    return GetBucketReplicationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketReplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?replication");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetBucketReplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketRequestPaymentOutcome S3CrtClient::GetBucketRequestPayment(const GetBucketRequestPaymentRequest& request) const
{
  AWS_OPERATION_GUARD(GetBucketRequestPayment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketRequestPayment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketRequestPayment", "Required field: Bucket, is not set");
    return GetBucketRequestPaymentOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketRequestPayment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?requestPayment");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetBucketRequestPaymentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketTaggingOutcome S3CrtClient::GetBucketTagging(const GetBucketTaggingRequest& request) const
{
  AWS_OPERATION_GUARD(GetBucketTagging);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketTagging", "Required field: Bucket, is not set");
    return GetBucketTaggingOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?tagging");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetBucketTaggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketVersioningOutcome S3CrtClient::GetBucketVersioning(const GetBucketVersioningRequest& request) const
{
  AWS_OPERATION_GUARD(GetBucketVersioning);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketVersioning, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketVersioning", "Required field: Bucket, is not set");
    return GetBucketVersioningOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketVersioning, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?versioning");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetBucketVersioningOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketWebsiteOutcome S3CrtClient::GetBucketWebsite(const GetBucketWebsiteRequest& request) const
{
  AWS_OPERATION_GUARD(GetBucketWebsite);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketWebsite, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketWebsite", "Required field: Bucket, is not set");
    return GetBucketWebsiteOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketWebsite, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?website");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetBucketWebsiteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetObjectAclOutcome S3CrtClient::GetObjectAcl(const GetObjectAclRequest& request) const
{
  AWS_OPERATION_GUARD(GetObjectAcl);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetObjectAcl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectAcl", "Required field: Bucket, is not set");
    return GetObjectAclOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectAcl", "Required field: Key, is not set");
    return GetObjectAclOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetObjectAcl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  ss.str("?acl");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetObjectAclOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetObjectAttributesOutcome S3CrtClient::GetObjectAttributes(const GetObjectAttributesRequest& request) const
{
  AWS_OPERATION_GUARD(GetObjectAttributes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetObjectAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectAttributes", "Required field: Bucket, is not set");
    return GetObjectAttributesOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectAttributes", "Required field: Key, is not set");
    return GetObjectAttributesOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  if (!request.ObjectAttributesHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectAttributes", "Required field: ObjectAttributes, is not set");
    return GetObjectAttributesOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ObjectAttributes]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetObjectAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  ss.str("?attributes");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetObjectAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetObjectLegalHoldOutcome S3CrtClient::GetObjectLegalHold(const GetObjectLegalHoldRequest& request) const
{
  AWS_OPERATION_GUARD(GetObjectLegalHold);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetObjectLegalHold, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectLegalHold", "Required field: Bucket, is not set");
    return GetObjectLegalHoldOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectLegalHold", "Required field: Key, is not set");
    return GetObjectLegalHoldOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetObjectLegalHold, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  ss.str("?legal-hold");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetObjectLegalHoldOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetObjectLockConfigurationOutcome S3CrtClient::GetObjectLockConfiguration(const GetObjectLockConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(GetObjectLockConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetObjectLockConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectLockConfiguration", "Required field: Bucket, is not set");
    return GetObjectLockConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetObjectLockConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?object-lock");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetObjectLockConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetObjectRetentionOutcome S3CrtClient::GetObjectRetention(const GetObjectRetentionRequest& request) const
{
  AWS_OPERATION_GUARD(GetObjectRetention);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetObjectRetention, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectRetention", "Required field: Bucket, is not set");
    return GetObjectRetentionOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectRetention", "Required field: Key, is not set");
    return GetObjectRetentionOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetObjectRetention, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  ss.str("?retention");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetObjectRetentionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetObjectTaggingOutcome S3CrtClient::GetObjectTagging(const GetObjectTaggingRequest& request) const
{
  AWS_OPERATION_GUARD(GetObjectTagging);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetObjectTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectTagging", "Required field: Bucket, is not set");
    return GetObjectTaggingOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectTagging", "Required field: Key, is not set");
    return GetObjectTaggingOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetObjectTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  ss.str("?tagging");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetObjectTaggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetObjectTorrentOutcome S3CrtClient::GetObjectTorrent(const GetObjectTorrentRequest& request) const
{
  AWS_OPERATION_GUARD(GetObjectTorrent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetObjectTorrent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectTorrent", "Required field: Bucket, is not set");
    return GetObjectTorrentOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectTorrent", "Required field: Key, is not set");
    return GetObjectTorrentOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetObjectTorrent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  ss.str("?torrent");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetObjectTorrentOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetPublicAccessBlockOutcome S3CrtClient::GetPublicAccessBlock(const GetPublicAccessBlockRequest& request) const
{
  AWS_OPERATION_GUARD(GetPublicAccessBlock);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPublicAccessBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPublicAccessBlock", "Required field: Bucket, is not set");
    return GetPublicAccessBlockOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPublicAccessBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?publicAccessBlock");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return GetPublicAccessBlockOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

HeadBucketOutcome S3CrtClient::HeadBucket(const HeadBucketRequest& request) const
{
  AWS_OPERATION_GUARD(HeadBucket);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, HeadBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("HeadBucket", "Required field: Bucket, is not set");
    return HeadBucketOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, HeadBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return HeadBucketOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_HEAD));
}

HeadObjectOutcome S3CrtClient::HeadObject(const HeadObjectRequest& request) const
{
  AWS_OPERATION_GUARD(HeadObject);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, HeadObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("HeadObject", "Required field: Bucket, is not set");
    return HeadObjectOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("HeadObject", "Required field: Key, is not set");
    return HeadObjectOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, HeadObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  return HeadObjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_HEAD));
}

ListBucketAnalyticsConfigurationsOutcome S3CrtClient::ListBucketAnalyticsConfigurations(const ListBucketAnalyticsConfigurationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListBucketAnalyticsConfigurations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBucketAnalyticsConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBucketAnalyticsConfigurations", "Required field: Bucket, is not set");
    return ListBucketAnalyticsConfigurationsOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBucketAnalyticsConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?analytics");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return ListBucketAnalyticsConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListBucketIntelligentTieringConfigurationsOutcome S3CrtClient::ListBucketIntelligentTieringConfigurations(const ListBucketIntelligentTieringConfigurationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListBucketIntelligentTieringConfigurations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBucketIntelligentTieringConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBucketIntelligentTieringConfigurations", "Required field: Bucket, is not set");
    return ListBucketIntelligentTieringConfigurationsOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBucketIntelligentTieringConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?intelligent-tiering");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return ListBucketIntelligentTieringConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListBucketInventoryConfigurationsOutcome S3CrtClient::ListBucketInventoryConfigurations(const ListBucketInventoryConfigurationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListBucketInventoryConfigurations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBucketInventoryConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBucketInventoryConfigurations", "Required field: Bucket, is not set");
    return ListBucketInventoryConfigurationsOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBucketInventoryConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?inventory");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return ListBucketInventoryConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListBucketMetricsConfigurationsOutcome S3CrtClient::ListBucketMetricsConfigurations(const ListBucketMetricsConfigurationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListBucketMetricsConfigurations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBucketMetricsConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBucketMetricsConfigurations", "Required field: Bucket, is not set");
    return ListBucketMetricsConfigurationsOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBucketMetricsConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?metrics");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return ListBucketMetricsConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListBucketsOutcome S3CrtClient::ListBuckets() const
{
  AWS_OPERATION_GUARD(ListBuckets);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBuckets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  const Aws::Vector<Aws::Endpoint::EndpointParameter> staticEndpointParameters;
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(staticEndpointParameters);
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBuckets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListBucketsOutcome(MakeRequest(endpointResolutionOutcome.GetResult(), "ListBuckets", Aws::Http::HttpMethod::HTTP_GET));
}

ListMultipartUploadsOutcome S3CrtClient::ListMultipartUploads(const ListMultipartUploadsRequest& request) const
{
  AWS_OPERATION_GUARD(ListMultipartUploads);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMultipartUploads, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListMultipartUploads", "Required field: Bucket, is not set");
    return ListMultipartUploadsOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMultipartUploads, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?uploads");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return ListMultipartUploadsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListObjectVersionsOutcome S3CrtClient::ListObjectVersions(const ListObjectVersionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListObjectVersions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListObjectVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListObjectVersions", "Required field: Bucket, is not set");
    return ListObjectVersionsOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListObjectVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?versions");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return ListObjectVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListObjectsOutcome S3CrtClient::ListObjects(const ListObjectsRequest& request) const
{
  AWS_OPERATION_GUARD(ListObjects);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListObjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListObjects", "Required field: Bucket, is not set");
    return ListObjectsOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListObjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListObjectsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListObjectsV2Outcome S3CrtClient::ListObjectsV2(const ListObjectsV2Request& request) const
{
  AWS_OPERATION_GUARD(ListObjectsV2);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListObjectsV2, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListObjectsV2", "Required field: Bucket, is not set");
    return ListObjectsV2Outcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListObjectsV2, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?list-type=2");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return ListObjectsV2Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListPartsOutcome S3CrtClient::ListParts(const ListPartsRequest& request) const
{
  AWS_OPERATION_GUARD(ListParts);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListParts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListParts", "Required field: Bucket, is not set");
    return ListPartsOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListParts", "Required field: Key, is not set");
    return ListPartsOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  if (!request.UploadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListParts", "Required field: UploadId, is not set");
    return ListPartsOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UploadId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListParts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  return ListPartsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

PutBucketAccelerateConfigurationOutcome S3CrtClient::PutBucketAccelerateConfiguration(const PutBucketAccelerateConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(PutBucketAccelerateConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketAccelerateConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketAccelerateConfiguration", "Required field: Bucket, is not set");
    return PutBucketAccelerateConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketAccelerateConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?accelerate");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutBucketAccelerateConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutBucketAclOutcome S3CrtClient::PutBucketAcl(const PutBucketAclRequest& request) const
{
  AWS_OPERATION_GUARD(PutBucketAcl);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketAcl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketAcl", "Required field: Bucket, is not set");
    return PutBucketAclOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketAcl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?acl");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutBucketAclOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutBucketAnalyticsConfigurationOutcome S3CrtClient::PutBucketAnalyticsConfiguration(const PutBucketAnalyticsConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(PutBucketAnalyticsConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketAnalyticsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketAnalyticsConfiguration", "Required field: Bucket, is not set");
    return PutBucketAnalyticsConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketAnalyticsConfiguration", "Required field: Id, is not set");
    return PutBucketAnalyticsConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketAnalyticsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?analytics");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutBucketAnalyticsConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutBucketCorsOutcome S3CrtClient::PutBucketCors(const PutBucketCorsRequest& request) const
{
  AWS_OPERATION_GUARD(PutBucketCors);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketCors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketCors", "Required field: Bucket, is not set");
    return PutBucketCorsOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketCors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?cors");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutBucketCorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutBucketEncryptionOutcome S3CrtClient::PutBucketEncryption(const PutBucketEncryptionRequest& request) const
{
  AWS_OPERATION_GUARD(PutBucketEncryption);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketEncryption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketEncryption", "Required field: Bucket, is not set");
    return PutBucketEncryptionOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketEncryption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?encryption");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutBucketEncryptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutBucketIntelligentTieringConfigurationOutcome S3CrtClient::PutBucketIntelligentTieringConfiguration(const PutBucketIntelligentTieringConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(PutBucketIntelligentTieringConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketIntelligentTieringConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketIntelligentTieringConfiguration", "Required field: Bucket, is not set");
    return PutBucketIntelligentTieringConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketIntelligentTieringConfiguration", "Required field: Id, is not set");
    return PutBucketIntelligentTieringConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketIntelligentTieringConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?intelligent-tiering");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutBucketIntelligentTieringConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutBucketInventoryConfigurationOutcome S3CrtClient::PutBucketInventoryConfiguration(const PutBucketInventoryConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(PutBucketInventoryConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketInventoryConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketInventoryConfiguration", "Required field: Bucket, is not set");
    return PutBucketInventoryConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketInventoryConfiguration", "Required field: Id, is not set");
    return PutBucketInventoryConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketInventoryConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?inventory");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutBucketInventoryConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutBucketLifecycleConfigurationOutcome S3CrtClient::PutBucketLifecycleConfiguration(const PutBucketLifecycleConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(PutBucketLifecycleConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketLifecycleConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketLifecycleConfiguration", "Required field: Bucket, is not set");
    return PutBucketLifecycleConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketLifecycleConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?lifecycle");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutBucketLifecycleConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutBucketLoggingOutcome S3CrtClient::PutBucketLogging(const PutBucketLoggingRequest& request) const
{
  AWS_OPERATION_GUARD(PutBucketLogging);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketLogging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketLogging", "Required field: Bucket, is not set");
    return PutBucketLoggingOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketLogging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?logging");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutBucketLoggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutBucketMetricsConfigurationOutcome S3CrtClient::PutBucketMetricsConfiguration(const PutBucketMetricsConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(PutBucketMetricsConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketMetricsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketMetricsConfiguration", "Required field: Bucket, is not set");
    return PutBucketMetricsConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketMetricsConfiguration", "Required field: Id, is not set");
    return PutBucketMetricsConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketMetricsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?metrics");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutBucketMetricsConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutBucketNotificationConfigurationOutcome S3CrtClient::PutBucketNotificationConfiguration(const PutBucketNotificationConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(PutBucketNotificationConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketNotificationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketNotificationConfiguration", "Required field: Bucket, is not set");
    return PutBucketNotificationConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketNotificationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?notification");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutBucketNotificationConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutBucketOwnershipControlsOutcome S3CrtClient::PutBucketOwnershipControls(const PutBucketOwnershipControlsRequest& request) const
{
  AWS_OPERATION_GUARD(PutBucketOwnershipControls);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketOwnershipControls, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketOwnershipControls", "Required field: Bucket, is not set");
    return PutBucketOwnershipControlsOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketOwnershipControls, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?ownershipControls");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutBucketOwnershipControlsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutBucketPolicyOutcome S3CrtClient::PutBucketPolicy(const PutBucketPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(PutBucketPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketPolicy", "Required field: Bucket, is not set");
    return PutBucketPolicyOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?policy");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutBucketPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutBucketReplicationOutcome S3CrtClient::PutBucketReplication(const PutBucketReplicationRequest& request) const
{
  AWS_OPERATION_GUARD(PutBucketReplication);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketReplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketReplication", "Required field: Bucket, is not set");
    return PutBucketReplicationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketReplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?replication");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutBucketReplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutBucketRequestPaymentOutcome S3CrtClient::PutBucketRequestPayment(const PutBucketRequestPaymentRequest& request) const
{
  AWS_OPERATION_GUARD(PutBucketRequestPayment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketRequestPayment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketRequestPayment", "Required field: Bucket, is not set");
    return PutBucketRequestPaymentOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketRequestPayment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?requestPayment");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutBucketRequestPaymentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutBucketTaggingOutcome S3CrtClient::PutBucketTagging(const PutBucketTaggingRequest& request) const
{
  AWS_OPERATION_GUARD(PutBucketTagging);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketTagging", "Required field: Bucket, is not set");
    return PutBucketTaggingOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?tagging");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutBucketTaggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutBucketVersioningOutcome S3CrtClient::PutBucketVersioning(const PutBucketVersioningRequest& request) const
{
  AWS_OPERATION_GUARD(PutBucketVersioning);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketVersioning, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketVersioning", "Required field: Bucket, is not set");
    return PutBucketVersioningOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketVersioning, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?versioning");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutBucketVersioningOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutBucketWebsiteOutcome S3CrtClient::PutBucketWebsite(const PutBucketWebsiteRequest& request) const
{
  AWS_OPERATION_GUARD(PutBucketWebsite);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketWebsite, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketWebsite", "Required field: Bucket, is not set");
    return PutBucketWebsiteOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketWebsite, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?website");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutBucketWebsiteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutObjectAclOutcome S3CrtClient::PutObjectAcl(const PutObjectAclRequest& request) const
{
  AWS_OPERATION_GUARD(PutObjectAcl);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutObjectAcl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObjectAcl", "Required field: Bucket, is not set");
    return PutObjectAclOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObjectAcl", "Required field: Key, is not set");
    return PutObjectAclOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutObjectAcl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  ss.str("?acl");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutObjectAclOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutObjectLegalHoldOutcome S3CrtClient::PutObjectLegalHold(const PutObjectLegalHoldRequest& request) const
{
  AWS_OPERATION_GUARD(PutObjectLegalHold);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutObjectLegalHold, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObjectLegalHold", "Required field: Bucket, is not set");
    return PutObjectLegalHoldOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObjectLegalHold", "Required field: Key, is not set");
    return PutObjectLegalHoldOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutObjectLegalHold, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  ss.str("?legal-hold");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutObjectLegalHoldOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutObjectLockConfigurationOutcome S3CrtClient::PutObjectLockConfiguration(const PutObjectLockConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(PutObjectLockConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutObjectLockConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObjectLockConfiguration", "Required field: Bucket, is not set");
    return PutObjectLockConfigurationOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutObjectLockConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?object-lock");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutObjectLockConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutObjectRetentionOutcome S3CrtClient::PutObjectRetention(const PutObjectRetentionRequest& request) const
{
  AWS_OPERATION_GUARD(PutObjectRetention);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutObjectRetention, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObjectRetention", "Required field: Bucket, is not set");
    return PutObjectRetentionOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObjectRetention", "Required field: Key, is not set");
    return PutObjectRetentionOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutObjectRetention, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  ss.str("?retention");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutObjectRetentionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutObjectTaggingOutcome S3CrtClient::PutObjectTagging(const PutObjectTaggingRequest& request) const
{
  AWS_OPERATION_GUARD(PutObjectTagging);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutObjectTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObjectTagging", "Required field: Bucket, is not set");
    return PutObjectTaggingOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObjectTagging", "Required field: Key, is not set");
    return PutObjectTaggingOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutObjectTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  ss.str("?tagging");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutObjectTaggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutPublicAccessBlockOutcome S3CrtClient::PutPublicAccessBlock(const PutPublicAccessBlockRequest& request) const
{
  AWS_OPERATION_GUARD(PutPublicAccessBlock);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutPublicAccessBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutPublicAccessBlock", "Required field: Bucket, is not set");
    return PutPublicAccessBlockOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutPublicAccessBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  ss.str("?publicAccessBlock");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutPublicAccessBlockOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

RestoreObjectOutcome S3CrtClient::RestoreObject(const RestoreObjectRequest& request) const
{
  AWS_OPERATION_GUARD(RestoreObject);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RestoreObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RestoreObject", "Required field: Bucket, is not set");
    return RestoreObjectOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RestoreObject", "Required field: Key, is not set");
    return RestoreObjectOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RestoreObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  ss.str("?restore");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return RestoreObjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

SelectObjectContentOutcome S3CrtClient::SelectObjectContent(SelectObjectContentRequest& request) const
{
  AWS_OPERATION_GUARD(SelectObjectContent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SelectObjectContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SelectObjectContent", "Required field: Bucket, is not set");
    return SelectObjectContentOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SelectObjectContent", "Required field: Key, is not set");
    return SelectObjectContentOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SelectObjectContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  ss.str("?select&select-type=2");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  request.SetResponseStreamFactory(
      [&] { request.GetEventStreamDecoder().Reset(); return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder()); }
  );
  return SelectObjectContentOutcome(MakeRequestWithEventStream(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

UploadPartOutcome S3CrtClient::UploadPart(const UploadPartRequest& request) const
{
  AWS_OPERATION_GUARD(UploadPart);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UploadPart, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadPart", "Required field: Bucket, is not set");
    return UploadPartOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadPart", "Required field: Key, is not set");
    return UploadPartOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  if (!request.PartNumberHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadPart", "Required field: PartNumber, is not set");
    return UploadPartOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PartNumber]", false));
  }
  if (!request.UploadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadPart", "Required field: UploadId, is not set");
    return UploadPartOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UploadId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UploadPart, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  return UploadPartOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

UploadPartCopyOutcome S3CrtClient::UploadPartCopy(const UploadPartCopyRequest& request) const
{
  AWS_OPERATION_GUARD(UploadPartCopy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UploadPartCopy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadPartCopy", "Required field: Bucket, is not set");
    return UploadPartCopyOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.CopySourceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadPartCopy", "Required field: CopySource, is not set");
    return UploadPartCopyOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CopySource]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadPartCopy", "Required field: Key, is not set");
    return UploadPartCopyOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  if (!request.PartNumberHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadPartCopy", "Required field: PartNumber, is not set");
    return UploadPartCopyOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PartNumber]", false));
  }
  if (!request.UploadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadPartCopy", "Required field: UploadId, is not set");
    return UploadPartCopyOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UploadId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UploadPartCopy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  return UploadPartCopyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

WriteGetObjectResponseOutcome S3CrtClient::WriteGetObjectResponse(const WriteGetObjectResponseRequest& request) const
{
  AWS_OPERATION_GUARD(WriteGetObjectResponse);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, WriteGetObjectResponse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RequestRouteHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("WriteGetObjectResponse", "Required field: RequestRoute, is not set");
    return WriteGetObjectResponseOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RequestRoute]", false));
  }
  if (!request.RequestTokenHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("WriteGetObjectResponse", "Required field: RequestToken, is not set");
    return WriteGetObjectResponseOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RequestToken]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, WriteGetObjectResponse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetRequestRoute() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), WriteGetObjectResponseOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/WriteGetObjectResponse");
  return WriteGetObjectResponseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}



#include<aws/core/utils/HashingUtils.h>
Aws::String S3CrtClient::GeneratePresignedUrl(const Aws::String& bucket,
                                              const Aws::String& key,
                                              Aws::Http::HttpMethod method,
                                              uint64_t expirationInSeconds)
{
    return GeneratePresignedUrl(bucket, key, method, {}, expirationInSeconds);
}

Aws::String S3CrtClient::GeneratePresignedUrl(const Aws::String& bucket,
                                              const Aws::String& key,
                                              Aws::Http::HttpMethod method,
                                              const Http::HeaderValueCollection& customizedHeaders,
                                              uint64_t expirationInSeconds)
{
    if (!m_endpointProvider)
    {
        AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Presigned URL generating failed. Endpoint provider is not initialized.");
        return {};
    }
    ResolveEndpointOutcome computeEndpointOutcome = m_endpointProvider->ResolveEndpoint({{Aws::String("Bucket"), bucket}});
    if (!computeEndpointOutcome.IsSuccess())
    {
        AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Presigned URL generating failed. Encountered error: " << computeEndpointOutcome.GetError().GetMessage());
        return {};
    }
    Aws::Endpoint::AWSEndpoint& endpoint = computeEndpointOutcome.GetResult();
    endpoint.AddPathSegments(key);
    return AWSClient::GeneratePresignedUrl(endpoint, method, customizedHeaders, expirationInSeconds);
}

Aws::String S3CrtClient::GeneratePresignedUrlWithSSES3(const Aws::String& bucket,
                                                       const Aws::String& key,
                                                       Aws::Http::HttpMethod method,
                                                       uint64_t expirationInSeconds)
{
    Aws::Http::HeaderValueCollection headers;
    headers.emplace(Aws::S3Crt::SSEHeaders::SERVER_SIDE_ENCRYPTION, Aws::S3Crt::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3Crt::Model::ServerSideEncryption::AES256));
    return GeneratePresignedUrl(bucket, key, method, headers, expirationInSeconds);
}

Aws::String S3CrtClient::GeneratePresignedUrlWithSSES3(const Aws::String& bucket,
                                                       const Aws::String& key,
                                                       Aws::Http::HttpMethod method,
                                                       Http::HeaderValueCollection customizedHeaders,
                                                       uint64_t expirationInSeconds)
{
    customizedHeaders.emplace(Aws::S3Crt::SSEHeaders::SERVER_SIDE_ENCRYPTION, Aws::S3Crt::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3Crt::Model::ServerSideEncryption::AES256));
    return GeneratePresignedUrl(bucket, key, method, customizedHeaders, expirationInSeconds);
}

Aws::String S3CrtClient::GeneratePresignedUrlWithSSEKMS(const Aws::String& bucket,
                                                        const Aws::String& key,
                                                        Aws::Http::HttpMethod method,
                                                        const Aws::String& kmsMasterKeyId,
                                                        uint64_t expirationInSeconds)
{
    Aws::Http::HeaderValueCollection headers;
    headers.emplace(Aws::S3Crt::SSEHeaders::SERVER_SIDE_ENCRYPTION, Aws::S3Crt::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3Crt::Model::ServerSideEncryption::aws_kms));
    headers.emplace(Aws::S3Crt::SSEHeaders::SERVER_SIDE_ENCRYPTION_AWS_KMS_KEY_ID, kmsMasterKeyId);
    return GeneratePresignedUrl(bucket, key, method, headers, expirationInSeconds);
}

Aws::String S3CrtClient::GeneratePresignedUrlWithSSEKMS(const Aws::String& bucket,
                                                        const Aws::String& key,
                                                        Aws::Http::HttpMethod method,
                                                        Http::HeaderValueCollection customizedHeaders,
                                                        const Aws::String& kmsMasterKeyId,
                                                        uint64_t expirationInSeconds)
{
    customizedHeaders.emplace(Aws::S3Crt::SSEHeaders::SERVER_SIDE_ENCRYPTION, Aws::S3Crt::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3Crt::Model::ServerSideEncryption::aws_kms));
    customizedHeaders.emplace(Aws::S3Crt::SSEHeaders::SERVER_SIDE_ENCRYPTION_AWS_KMS_KEY_ID, kmsMasterKeyId);
    return GeneratePresignedUrl(bucket, key, method, customizedHeaders, expirationInSeconds);
}

Aws::String S3CrtClient::GeneratePresignedUrlWithSSEC(const Aws::String& bucket,
                                                      const Aws::String& key,
                                                      Aws::Http::HttpMethod method,
                                                      const Aws::String& base64EncodedAES256Key,
                                                      uint64_t expirationInSeconds)
{
    Aws::Http::HeaderValueCollection headers;
    headers.emplace(Aws::S3Crt::SSEHeaders::SERVER_SIDE_ENCRYPTION_CUSTOMER_ALGORITHM, Aws::S3Crt::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3Crt::Model::ServerSideEncryption::AES256));
    headers.emplace(Aws::S3Crt::SSEHeaders::SERVER_SIDE_ENCRYPTION_CUSTOMER_KEY, base64EncodedAES256Key);
    Aws::Utils::ByteBuffer buffer = Aws::Utils::HashingUtils::Base64Decode(base64EncodedAES256Key);
    Aws::String strBuffer(reinterpret_cast<char*>(buffer.GetUnderlyingData()), buffer.GetLength());
    headers.emplace(Aws::S3Crt::SSEHeaders::SERVER_SIDE_ENCRYPTION_CUSTOMER_KEY_MD5, Aws::Utils::HashingUtils::Base64Encode(Aws::Utils::HashingUtils::CalculateMD5(strBuffer)));
    return GeneratePresignedUrl(bucket, key, method, headers, expirationInSeconds);
}

Aws::String S3CrtClient::GeneratePresignedUrlWithSSEC(const Aws::String& bucket,
                                                      const Aws::String& key,
                                                      Aws::Http::HttpMethod method,
                                                      Http::HeaderValueCollection customizedHeaders,
                                                      const Aws::String& base64EncodedAES256Key,
                                                      uint64_t expirationInSeconds)
{
    customizedHeaders.emplace(Aws::S3Crt::SSEHeaders::SERVER_SIDE_ENCRYPTION_CUSTOMER_ALGORITHM, Aws::S3Crt::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3Crt::Model::ServerSideEncryption::AES256));
    customizedHeaders.emplace(Aws::S3Crt::SSEHeaders::SERVER_SIDE_ENCRYPTION_CUSTOMER_KEY, base64EncodedAES256Key);
    Aws::Utils::ByteBuffer buffer = Aws::Utils::HashingUtils::Base64Decode(base64EncodedAES256Key);
    Aws::String strBuffer(reinterpret_cast<char*>(buffer.GetUnderlyingData()), buffer.GetLength());
    customizedHeaders.emplace(Aws::S3Crt::SSEHeaders::SERVER_SIDE_ENCRYPTION_CUSTOMER_KEY_MD5, Aws::Utils::HashingUtils::Base64Encode(Aws::Utils::HashingUtils::CalculateMD5(strBuffer)));
    return GeneratePresignedUrl(bucket, key, method, customizedHeaders, expirationInSeconds);
}


bool S3CrtClient::MultipartUploadSupported() const
{
    return true;
}
