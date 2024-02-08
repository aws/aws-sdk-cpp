﻿/**
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
#include <aws/s3-crt/model/CreateSessionRequest.h>
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
#include <aws/s3-crt/model/ListDirectoryBucketsRequest.h>
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
#include <aws/s3-crt/S3ExpressSignerProvider.h>
#include <aws/s3-crt/S3CrtIdentityProviderAdapter.h>

#include <smithy/tracing/TracingUtils.h>

#include <aws/core/Version.h>
#include <aws/core/platform/OSVersionInfo.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <aws/core/Globals.h>
#include <aws/crt/Types.h>
#include <aws/crt/auth/Credentials.h>
#include <aws/crt/http/HttpRequestResponse.h>
#include <aws/crt/http/HttpProxyStrategy.h>
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
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;


namespace Aws
{
  namespace S3Crt
  {
    const char SERVICE_NAME[] = "s3";
    const char ALLOCATION_TAG[] = "S3CrtClient";
  }
}
const char* S3CrtClient::GetServiceName() {return SERVICE_NAME;}
const char* S3CrtClient::GetAllocationTag() {return ALLOCATION_TAG;}

S3CrtClient::S3CrtClient(const S3CrtClient &rhs) :
    BASECLASS(rhs.m_clientConfiguration,
        Aws::MakeShared<Aws::Auth::S3ExpressSignerProvider>(ALLOCATION_TAG,
            rhs.GetCredentialsProvider(),
            rhs.m_clientConfiguration.identityProviderSupplier(*this),
            SERVICE_NAME,
            Aws::Region::ComputeSignerRegion(rhs.m_clientConfiguration.region),
            rhs.m_clientConfiguration.payloadSigningPolicy,
            /*doubleEncodeValue*/ false),
        Aws::MakeShared<S3CrtErrorMarshaller>(ALLOCATION_TAG)),
    Aws::Client::ClientWithAsyncTemplateMethods<S3CrtClient>(),
    m_clientConfiguration(rhs.m_clientConfiguration),
    m_executor(rhs.m_clientConfiguration.executor),
    m_endpointProvider(rhs.m_endpointProvider),
    m_identityProvider(rhs.m_identityProvider){}

S3CrtClient& S3CrtClient::operator=(const S3CrtClient &rhs) {
    m_signerProvider = Aws::MakeShared<Aws::Auth::S3ExpressSignerProvider>(ALLOCATION_TAG,
          rhs.GetCredentialsProvider(),
          rhs.m_clientConfiguration.identityProviderSupplier(*this),
          SERVICE_NAME,
          Aws::Region::ComputeSignerRegion(rhs.m_clientConfiguration.region),
          rhs.m_clientConfiguration.payloadSigningPolicy,
          /*doubleEncodeValue*/ false);
    m_clientConfiguration = rhs.m_clientConfiguration;
    m_executor = rhs.m_executor;
    m_endpointProvider = rhs.m_endpointProvider;
    init(m_clientConfiguration, m_credProvider);
    return *this;
}

S3CrtClient::S3CrtClient(S3CrtClient &&rhs) :
    BASECLASS(rhs.m_clientConfiguration,
        Aws::MakeShared<Aws::Auth::S3ExpressSignerProvider>(ALLOCATION_TAG,
            rhs.GetCredentialsProvider(),
            rhs.m_clientConfiguration.identityProviderSupplier(*this),
            SERVICE_NAME,
            Aws::Region::ComputeSignerRegion(rhs.m_clientConfiguration.region),
            rhs.m_clientConfiguration.payloadSigningPolicy,
            /*doubleEncodeValue*/ false),
            Aws::MakeShared<S3CrtErrorMarshaller>(ALLOCATION_TAG)),
    Aws::Client::ClientWithAsyncTemplateMethods<S3CrtClient>(),
    m_clientConfiguration(std::move(rhs.m_clientConfiguration)),
    m_executor(std::move(rhs.m_clientConfiguration.executor)),
    m_endpointProvider(std::move(rhs.m_endpointProvider)) {}

S3CrtClient& S3CrtClient::operator=(S3CrtClient &&rhs) {
  if (&rhs == this) {
    return *this;
  }
  m_signerProvider = Aws::MakeShared<Aws::Auth::S3ExpressSignerProvider>(ALLOCATION_TAG,
        rhs.GetCredentialsProvider(),
        rhs.m_clientConfiguration.identityProviderSupplier(*this),
        SERVICE_NAME,
        Aws::Region::ComputeSignerRegion(rhs.m_clientConfiguration.region),
        rhs.m_clientConfiguration.payloadSigningPolicy,
        /*doubleEncodeValue*/ false);
  m_clientConfiguration = std::move(rhs.m_clientConfiguration);
  m_executor = std::move(rhs.m_executor);
  m_endpointProvider = std::move(rhs.m_endpointProvider);
  init(m_clientConfiguration, m_credProvider);
  return *this;
}

S3CrtClient::S3CrtClient(const S3Crt::ClientConfiguration& clientConfiguration, Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy signPayloads, bool useVirtualAddressing, Aws::S3Crt::US_EAST_1_REGIONAL_ENDPOINT_OPTION USEast1RegionalEndPointOption, const Aws::Auth::DefaultAWSCredentialsProviderChain& credentialsProvider) :
    BASECLASS(clientConfiguration,
        Aws::MakeShared<Aws::Auth::S3ExpressSignerProvider>(ALLOCATION_TAG,
            Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, credentialsProvider),
            Aws::MakeShared<DefaultS3ExpressIdentityProvider>(ALLOCATION_TAG, *this),
            SERVICE_NAME,
            Aws::Region::ComputeSignerRegion(clientConfiguration.region),
            signPayloads,
            false),
    Aws::MakeShared<S3CrtErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration, signPayloads, useVirtualAddressing, USEast1RegionalEndPointOption),
    m_executor(clientConfiguration.executor), m_credProvider(Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, credentialsProvider)),
    m_identityProvider(Aws::MakeShared<DefaultS3ExpressIdentityProvider>(ALLOCATION_TAG, *this))
{
  init(clientConfiguration, m_credProvider);
}

S3CrtClient::S3CrtClient(const AWSCredentials& credentials, const S3Crt::ClientConfiguration& clientConfiguration, Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy signPayloads, bool useVirtualAddressing, Aws::S3Crt::US_EAST_1_REGIONAL_ENDPOINT_OPTION USEast1RegionalEndPointOption) :
    BASECLASS(clientConfiguration,
        Aws::MakeShared<Aws::Auth::S3ExpressSignerProvider>(ALLOCATION_TAG,
            Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
            Aws::MakeShared<DefaultS3ExpressIdentityProvider>(ALLOCATION_TAG, *this),
            SERVICE_NAME,
            Aws::Region::ComputeSignerRegion(clientConfiguration.region),
            signPayloads,
            false),
    Aws::MakeShared<S3CrtErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration, signPayloads, useVirtualAddressing, USEast1RegionalEndPointOption),
    m_executor(clientConfiguration.executor), m_credProvider(Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials)),
    m_identityProvider(Aws::MakeShared<DefaultS3ExpressIdentityProvider>(ALLOCATION_TAG, *this))
{
  init(clientConfiguration, m_credProvider);
}

S3CrtClient::S3CrtClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const S3Crt::ClientConfiguration& clientConfiguration, Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy signPayloads, bool useVirtualAddressing, Aws::S3Crt::US_EAST_1_REGIONAL_ENDPOINT_OPTION USEast1RegionalEndPointOption) :
    BASECLASS(clientConfiguration,
        Aws::MakeShared<Aws::Auth::S3ExpressSignerProvider>(ALLOCATION_TAG,
            credentialsProvider,
            Aws::MakeShared<DefaultS3ExpressIdentityProvider>(ALLOCATION_TAG, *this),
            SERVICE_NAME,
            Aws::Region::ComputeSignerRegion(clientConfiguration.region),
            signPayloads,
            false),
    Aws::MakeShared<S3CrtErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration, signPayloads, useVirtualAddressing, USEast1RegionalEndPointOption),
    m_executor(clientConfiguration.executor), m_credProvider(credentialsProvider),
    m_identityProvider(Aws::MakeShared<DefaultS3ExpressIdentityProvider>(ALLOCATION_TAG, *this))
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

void S3CrtClient::init(const S3Crt::ClientConfiguration& config,
    const std::shared_ptr<Aws::Auth::AWSCredentialsProvider> credentialsProvider)
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

  m_identityProvider = m_clientConfiguration.identityProviderSupplier(*this);

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

  Aws::Crt::Http::HttpClientConnectionProxyOptions proxyOptions;
  aws_http_proxy_options raw_proxy_options;

  if (!config.proxyHost.empty())
  {
    if (!config.proxyUserName.empty() || !config.proxyPassword.empty())
    {
      Aws::Crt::Http::HttpProxyStrategyBasicAuthConfig basicAuthConfig;
      basicAuthConfig.ConnectionType = Aws::Crt::Http::AwsHttpProxyConnectionType::Tunneling;
      basicAuthConfig.Username = config.proxyUserName.c_str();
      basicAuthConfig.Password = config.proxyPassword.c_str();
      proxyOptions.ProxyStrategy = Aws::Crt::Http::HttpProxyStrategy::CreateBasicHttpProxyStrategy(basicAuthConfig, Aws::get_aws_allocator());
    }

    proxyOptions.HostName = config.proxyHost.c_str();

    if (config.proxyPort != 0)
    {
      proxyOptions.Port = static_cast<uint16_t>(config.proxyPort);
    }
    else
    {
      proxyOptions.Port = config.proxyScheme == Scheme::HTTPS ? 443 : 80;
    }

    if (config.proxyScheme == Scheme::HTTPS)
    {
      Crt::Io::TlsContextOptions contextOptions = Crt::Io::TlsContextOptions::InitDefaultClient();

      if (config.proxySSLKeyPassword.empty() && !config.proxySSLCertPath.empty())
      {
        const char* certPath = config.proxySSLCertPath.empty() ? nullptr : config.proxySSLCertPath.c_str();
        const char* certFile = config.proxySSLKeyPath.empty() ? nullptr : config.proxySSLKeyPath.c_str();
        contextOptions = Crt::Io::TlsContextOptions::InitClientWithMtls(certPath, certFile);
      }
      else if (!config.proxySSLKeyPassword.empty())
      {
        const char* pkcs12CertFile = config.proxySSLKeyPath.empty() ? nullptr : config.proxySSLKeyPath.c_str();
        const char* pkcs12Pwd = config.proxySSLKeyPassword.c_str();
        contextOptions = Crt::Io::TlsContextOptions::InitClientWithMtlsPkcs12(pkcs12CertFile, pkcs12Pwd);
      }

      if (!config.caFile.empty() || !config.caPath.empty())
      {
        const char* caPath = config.caPath.empty() ? nullptr : config.caPath.c_str();
        const char* caFile = config.caFile.empty() ? nullptr : config.caFile.c_str();
        contextOptions.OverrideDefaultTrustStore(caPath, caFile);
      }

      contextOptions.SetVerifyPeer(config.verifySSL);
      Crt::Io::TlsContext context = Crt::Io::TlsContext(contextOptions, Crt::Io::TlsMode::CLIENT);
      proxyOptions.TlsOptions = context.NewConnectionOptions();
    }

    proxyOptions.InitializeRawProxyOptions(raw_proxy_options);
    s3CrtConfig.proxy_options = &raw_proxy_options;
  }

  s3CrtConfig.tls_mode = config.scheme == Aws::Http::Scheme::HTTPS ? AWS_MR_TLS_ENABLED : AWS_MR_TLS_DISABLED;
  s3CrtConfig.throughput_target_gbps = config.throughputTargetGbps;
  m_clientShutdownSem = Aws::MakeShared<Threading::Semaphore>(ALLOCATION_TAG, 0, 1);
  m_wrappedData.data = config.shutdownCallbackUserData;
  m_wrappedData.fn = config.clientShutdownCallback;
  m_wrappedData.clientShutdownSem = m_clientShutdownSem;
  s3CrtConfig.shutdown_callback = CrtClientShutdownCallback;
  s3CrtConfig.shutdown_callback_user_data = static_cast<void*>(&m_wrappedData);
  s3CrtConfig.enable_s3express = !config.disableS3ExpressAuth;
  s3CrtConfig.factory_user_data = static_cast<void *>(m_identityProvider.get());
  s3CrtConfig.s3express_provider_override_factory = S3CrtIdentityProviderAdapter::ProviderFactory;

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
  AWS_LOGSTREAM_TRACE(ALLOCATION_TAG, body->len << " bytes written to response.");

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

  auto& bodyStream = userData->response->GetResponseBody();

  if (meta_request_result->error_response_body)
  {
    // clean up previously received body data.
    bodyStream.seekg(0);
    bodyStream.seekp(0);
    bodyStream.write(reinterpret_cast<char*>(meta_request_result->error_response_body->buffer), static_cast<std::streamsize>(meta_request_result->error_response_body->len));
  } else if (meta_request_result->error_code) {
      // If the response body is empty, the parent class BuildAWSError() does not generate a useful error message ("No response body").
      // Fill in a ClientErrorMessage to prevent BuildAWSError from any further processing, extracting the lower-level error details.
      Aws::StringStream ss;

      ss << aws_error_str(meta_request_result->error_code)
         << " (" << aws_error_lib_name(meta_request_result->error_code) << ": " << aws_error_name(meta_request_result->error_code) << ")";

      userData->response->SetClientErrorMessage(ss.str());
      userData->response->SetClientErrorType(CoreErrors::INTERNAL_FAILURE);
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

static void CopyObjectRequestShutdownCallback(void *user_data)
{
  auto *userData = static_cast<S3CrtClient::CrtRequestCallbackUserData*>(user_data);
  // call user callback and release user_data
  S3Crt::Model::CopyObjectOutcome outcome(userData->s3CrtClient->GenerateXmlOutcome(userData->response));
  userData->copyResponseHandler(userData->s3CrtClient, *(reinterpret_cast<const CopyObjectRequest*>(userData->originalRequest)), std::move(outcome), userData->asyncCallerContext);

  Aws::Delete(userData);
}

void S3CrtClient::CopyObjectAsync(const CopyObjectRequest& request, const CopyObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& handlerContext) const
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
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
      [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
      TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
      *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
  if (!endpointResolutionOutcome.IsSuccess()) {
      handler(this, request, CopyObjectOutcome(Aws::Client::AWSError<CoreErrors>(
          CoreErrors::ENDPOINT_RESOLUTION_FAILURE, "ENDPOINT_RESOLUTION_FAILURE", endpointResolutionOutcome.GetError().GetMessage(), false)), handlerContext);
      return;
  }
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());

  request.SetServiceSpecificParameters(
      [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());

  // make aws_s3_meta_request with callbacks
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
  if (userData != nullptr &&
    userData->request != nullptr &&
    userData->request->GetContentBody() != nullptr &&
    userData->request->GetContentBody()->fail())
  {
    return handler(this, request, CopyObjectOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::INTERNAL_FAILURE, "INTERNAL_FAILURE", "Unable to create s3 meta request", false)), handlerContext);
  }
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
  if (endpointResolutionOutcome.GetResult().GetAttributes() && endpointResolutionOutcome.GetResult().GetAttributes()->authScheme.GetName() == "S3ExpressSigner") {
    signing_config_override.algorithm = aws_signing_algorithm::AWS_SIGNING_ALGORITHM_V4_S3EXPRESS;
  } else {
    signing_config_override.algorithm = aws_signing_algorithm::AWS_SIGNING_ALGORITHM_V4;
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
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetObject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  return TracingUtils::MakeCallWithTiming<CopyObjectOutcome>(
    [&]()-> CopyObjectOutcome {
      Aws::Utils::Threading::Semaphore sem(0, 1);
      CopyObjectOutcome res;

      auto handler = CopyObjectResponseReceivedHandler{[&](const S3CrtClient*, const CopyObjectRequest&, const CopyObjectOutcome& outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext> &) {
        res = std::move(outcome);
        sem.ReleaseAll();
      }};

      S3CrtClient::CopyObjectAsync(request, handler, nullptr);
      sem.WaitOne();
      return res;
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
      [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
      TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
      *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
  if (!endpointResolutionOutcome.IsSuccess()) {
      handler(this, request, GetObjectOutcome(Aws::Client::AWSError<CoreErrors>(
          CoreErrors::ENDPOINT_RESOLUTION_FAILURE, "ENDPOINT_RESOLUTION_FAILURE", endpointResolutionOutcome.GetError().GetMessage(), false)), handlerContext);
      return;
  }
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());

  request.SetServiceSpecificParameters(
      [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());

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
  if (endpointResolutionOutcome.GetResult().GetAttributes() && endpointResolutionOutcome.GetResult().GetAttributes()->authScheme.GetName() == "S3ExpressSigner") {
    signing_config_override.algorithm = aws_signing_algorithm::AWS_SIGNING_ALGORITHM_V4_S3EXPRESS;
  } else {
    signing_config_override.algorithm = aws_signing_algorithm::AWS_SIGNING_ALGORITHM_V4;
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
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetObject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  return TracingUtils::MakeCallWithTiming<GetObjectOutcome>(
    [&]()-> GetObjectOutcome {
      Aws::Utils::Threading::Semaphore sem(0, 1);
      GetObjectOutcome res;

      auto handler = GetObjectResponseReceivedHandler{[&](const S3CrtClient*, const GetObjectRequest&, GetObjectOutcome outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext> &) {
        res = std::move(outcome);
        sem.ReleaseAll();
      }};

      S3CrtClient::GetObjectAsync(request, handler, nullptr);
      sem.WaitOne();
      return res;
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
      [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
      TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
      *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
  if (!endpointResolutionOutcome.IsSuccess()) {
      handler(this, request, PutObjectOutcome(Aws::Client::AWSError<CoreErrors>(
          CoreErrors::ENDPOINT_RESOLUTION_FAILURE, "ENDPOINT_RESOLUTION_FAILURE", endpointResolutionOutcome.GetError().GetMessage(), false)), handlerContext);
      return;
  }
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());

  request.SetServiceSpecificParameters(
      [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          auto isExpress = endpointResolutionOutcome.GetResult().AccessAttributes().value().backend == "S3Express";
          if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
              params.emplace("overrideChecksum", "crc32");
          }
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());

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
  if (endpointResolutionOutcome.GetResult().GetAttributes() && endpointResolutionOutcome.GetResult().GetAttributes()->authScheme.GetName() == "S3ExpressSigner") {
    signing_config_override.algorithm = aws_signing_algorithm::AWS_SIGNING_ALGORITHM_V4_S3EXPRESS;
  } else {
    signing_config_override.algorithm = aws_signing_algorithm::AWS_SIGNING_ALGORITHM_V4;
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
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetObject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  return TracingUtils::MakeCallWithTiming<PutObjectOutcome>(
    [&]()-> PutObjectOutcome {
      Aws::Utils::Threading::Semaphore sem(0, 1);
      PutObjectOutcome res;

      auto handler = PutObjectResponseReceivedHandler{[&](const S3CrtClient*, const PutObjectRequest&, const PutObjectOutcome& outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext> &) {
        res = std::move(outcome);
        sem.ReleaseAll();
      }};

      S3CrtClient::PutObjectAsync(request, handler, nullptr);
      sem.WaitOne();
      return res;
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, AbortMultipartUpload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AbortMultipartUpload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AbortMultipartUploadOutcome>(
    [&]()-> AbortMultipartUploadOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AbortMultipartUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return AbortMultipartUploadOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CompleteMultipartUpload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CompleteMultipartUpload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CompleteMultipartUploadOutcome>(
    [&]()-> CompleteMultipartUploadOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CompleteMultipartUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return CompleteMultipartUploadOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateBucket, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateBucket, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateBucketOutcome>(
    [&]()-> CreateBucketOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return CreateBucketOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateMultipartUpload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateMultipartUpload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateMultipartUploadOutcome>(
    [&]()-> CreateMultipartUploadOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateMultipartUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
      ss.str("?uploads");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return CreateMultipartUploadOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateSessionOutcome S3CrtClient::CreateSession(const CreateSessionRequest& request) const
{
  AWS_OPERATION_GUARD(CreateSession);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSession", "Required field: Bucket, is not set");
    return CreateSessionOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateSessionOutcome>(
    [&]()-> CreateSessionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?session");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return CreateSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteBucket, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBucket, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBucketOutcome>(
    [&]()-> DeleteBucketOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return DeleteBucketOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteBucketAnalyticsConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBucketAnalyticsConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBucketAnalyticsConfigurationOutcome>(
    [&]()-> DeleteBucketAnalyticsConfigurationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketAnalyticsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?analytics");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return DeleteBucketAnalyticsConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteBucketCors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBucketCors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBucketCorsOutcome>(
    [&]()-> DeleteBucketCorsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketCors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?cors");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return DeleteBucketCorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteBucketEncryption, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBucketEncryption, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBucketEncryptionOutcome>(
    [&]()-> DeleteBucketEncryptionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketEncryption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?encryption");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return DeleteBucketEncryptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteBucketIntelligentTieringConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBucketIntelligentTieringConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBucketIntelligentTieringConfigurationOutcome>(
    [&]()-> DeleteBucketIntelligentTieringConfigurationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketIntelligentTieringConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?intelligent-tiering");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return DeleteBucketIntelligentTieringConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteBucketInventoryConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBucketInventoryConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBucketInventoryConfigurationOutcome>(
    [&]()-> DeleteBucketInventoryConfigurationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketInventoryConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?inventory");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return DeleteBucketInventoryConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteBucketLifecycle, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBucketLifecycle, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBucketLifecycleOutcome>(
    [&]()-> DeleteBucketLifecycleOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketLifecycle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?lifecycle");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return DeleteBucketLifecycleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteBucketMetricsConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBucketMetricsConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBucketMetricsConfigurationOutcome>(
    [&]()-> DeleteBucketMetricsConfigurationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketMetricsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?metrics");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return DeleteBucketMetricsConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteBucketOwnershipControls, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBucketOwnershipControls, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBucketOwnershipControlsOutcome>(
    [&]()-> DeleteBucketOwnershipControlsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketOwnershipControls, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?ownershipControls");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return DeleteBucketOwnershipControlsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteBucketPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBucketPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBucketPolicyOutcome>(
    [&]()-> DeleteBucketPolicyOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?policy");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return DeleteBucketPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteBucketReplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBucketReplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBucketReplicationOutcome>(
    [&]()-> DeleteBucketReplicationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketReplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?replication");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return DeleteBucketReplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteBucketTagging, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBucketTagging, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBucketTaggingOutcome>(
    [&]()-> DeleteBucketTaggingOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?tagging");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return DeleteBucketTaggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteBucketWebsite, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBucketWebsite, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBucketWebsiteOutcome>(
    [&]()-> DeleteBucketWebsiteOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketWebsite, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?website");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return DeleteBucketWebsiteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteObject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteObject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteObjectOutcome>(
    [&]()-> DeleteObjectOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return DeleteObjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteObjectTagging, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteObjectTagging, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteObjectTaggingOutcome>(
    [&]()-> DeleteObjectTaggingOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteObjectTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
      ss.str("?tagging");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return DeleteObjectTaggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteObjects, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteObjects, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteObjectsOutcome>(
    [&]()-> DeleteObjectsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteObjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?delete");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          auto isExpress = endpointResolutionOutcome.GetResult().AccessAttributes().value().backend == "S3Express";
          if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
            params.emplace("overrideChecksum", "crc32");
          }
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return DeleteObjectsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeletePublicAccessBlock, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeletePublicAccessBlock, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeletePublicAccessBlockOutcome>(
    [&]()-> DeletePublicAccessBlockOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePublicAccessBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?publicAccessBlock");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return DeletePublicAccessBlockOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetBucketAccelerateConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBucketAccelerateConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBucketAccelerateConfigurationOutcome>(
    [&]()-> GetBucketAccelerateConfigurationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketAccelerateConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?accelerate");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return GetBucketAccelerateConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetBucketAcl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBucketAcl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBucketAclOutcome>(
    [&]()-> GetBucketAclOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketAcl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?acl");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return GetBucketAclOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetBucketAnalyticsConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBucketAnalyticsConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBucketAnalyticsConfigurationOutcome>(
    [&]()-> GetBucketAnalyticsConfigurationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketAnalyticsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?analytics");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return GetBucketAnalyticsConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetBucketCors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBucketCors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBucketCorsOutcome>(
    [&]()-> GetBucketCorsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketCors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?cors");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return GetBucketCorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetBucketEncryption, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBucketEncryption, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBucketEncryptionOutcome>(
    [&]()-> GetBucketEncryptionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketEncryption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?encryption");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return GetBucketEncryptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetBucketIntelligentTieringConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBucketIntelligentTieringConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBucketIntelligentTieringConfigurationOutcome>(
    [&]()-> GetBucketIntelligentTieringConfigurationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketIntelligentTieringConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?intelligent-tiering");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return GetBucketIntelligentTieringConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetBucketInventoryConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBucketInventoryConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBucketInventoryConfigurationOutcome>(
    [&]()-> GetBucketInventoryConfigurationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketInventoryConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?inventory");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return GetBucketInventoryConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetBucketLifecycleConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBucketLifecycleConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBucketLifecycleConfigurationOutcome>(
    [&]()-> GetBucketLifecycleConfigurationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketLifecycleConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?lifecycle");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return GetBucketLifecycleConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetBucketLocation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBucketLocation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBucketLocationOutcome>(
    [&]()-> GetBucketLocationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketLocation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?location");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return GetBucketLocationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetBucketLogging, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBucketLogging, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBucketLoggingOutcome>(
    [&]()-> GetBucketLoggingOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketLogging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?logging");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return GetBucketLoggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetBucketMetricsConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBucketMetricsConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBucketMetricsConfigurationOutcome>(
    [&]()-> GetBucketMetricsConfigurationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketMetricsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?metrics");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return GetBucketMetricsConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetBucketNotificationConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBucketNotificationConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBucketNotificationConfigurationOutcome>(
    [&]()-> GetBucketNotificationConfigurationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketNotificationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?notification");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return GetBucketNotificationConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetBucketOwnershipControls, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBucketOwnershipControls, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBucketOwnershipControlsOutcome>(
    [&]()-> GetBucketOwnershipControlsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketOwnershipControls, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?ownershipControls");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return GetBucketOwnershipControlsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetBucketPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBucketPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBucketPolicyOutcome>(
    [&]()-> GetBucketPolicyOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?policy");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return GetBucketPolicyOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetBucketPolicyStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBucketPolicyStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBucketPolicyStatusOutcome>(
    [&]()-> GetBucketPolicyStatusOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketPolicyStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?policyStatus");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return GetBucketPolicyStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetBucketReplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBucketReplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBucketReplicationOutcome>(
    [&]()-> GetBucketReplicationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketReplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?replication");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return GetBucketReplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetBucketRequestPayment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBucketRequestPayment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBucketRequestPaymentOutcome>(
    [&]()-> GetBucketRequestPaymentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketRequestPayment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?requestPayment");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return GetBucketRequestPaymentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetBucketTagging, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBucketTagging, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBucketTaggingOutcome>(
    [&]()-> GetBucketTaggingOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?tagging");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return GetBucketTaggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetBucketVersioning, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBucketVersioning, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBucketVersioningOutcome>(
    [&]()-> GetBucketVersioningOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketVersioning, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?versioning");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return GetBucketVersioningOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetBucketWebsite, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBucketWebsite, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBucketWebsiteOutcome>(
    [&]()-> GetBucketWebsiteOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketWebsite, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?website");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return GetBucketWebsiteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetObjectAcl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetObjectAcl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetObjectAclOutcome>(
    [&]()-> GetObjectAclOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetObjectAcl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
      ss.str("?acl");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return GetObjectAclOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetObjectAttributes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetObjectAttributes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetObjectAttributesOutcome>(
    [&]()-> GetObjectAttributesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetObjectAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
      ss.str("?attributes");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return GetObjectAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetObjectLegalHold, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetObjectLegalHold, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetObjectLegalHoldOutcome>(
    [&]()-> GetObjectLegalHoldOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetObjectLegalHold, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
      ss.str("?legal-hold");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return GetObjectLegalHoldOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetObjectLockConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetObjectLockConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetObjectLockConfigurationOutcome>(
    [&]()-> GetObjectLockConfigurationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetObjectLockConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?object-lock");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return GetObjectLockConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetObjectRetention, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetObjectRetention, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetObjectRetentionOutcome>(
    [&]()-> GetObjectRetentionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetObjectRetention, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
      ss.str("?retention");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return GetObjectRetentionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetObjectTagging, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetObjectTagging, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetObjectTaggingOutcome>(
    [&]()-> GetObjectTaggingOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetObjectTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
      ss.str("?tagging");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return GetObjectTaggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetObjectTorrent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetObjectTorrent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetObjectTorrentOutcome>(
    [&]()-> GetObjectTorrentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetObjectTorrent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
      ss.str("?torrent");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return GetObjectTorrentOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetPublicAccessBlock, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetPublicAccessBlock, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetPublicAccessBlockOutcome>(
    [&]()-> GetPublicAccessBlockOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPublicAccessBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?publicAccessBlock");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return GetPublicAccessBlockOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, HeadBucket, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, HeadBucket, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<HeadBucketOutcome>(
    [&]()-> HeadBucketOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, HeadBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return HeadBucketOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_HEAD));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, HeadObject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, HeadObject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<HeadObjectOutcome>(
    [&]()-> HeadObjectOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, HeadObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return HeadObjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_HEAD));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListBucketAnalyticsConfigurations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListBucketAnalyticsConfigurations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListBucketAnalyticsConfigurationsOutcome>(
    [&]()-> ListBucketAnalyticsConfigurationsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBucketAnalyticsConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?analytics");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return ListBucketAnalyticsConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListBucketIntelligentTieringConfigurations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListBucketIntelligentTieringConfigurations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListBucketIntelligentTieringConfigurationsOutcome>(
    [&]()-> ListBucketIntelligentTieringConfigurationsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBucketIntelligentTieringConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?intelligent-tiering");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return ListBucketIntelligentTieringConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListBucketInventoryConfigurations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListBucketInventoryConfigurations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListBucketInventoryConfigurationsOutcome>(
    [&]()-> ListBucketInventoryConfigurationsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBucketInventoryConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?inventory");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return ListBucketInventoryConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListBucketMetricsConfigurations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListBucketMetricsConfigurations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListBucketMetricsConfigurationsOutcome>(
    [&]()-> ListBucketMetricsConfigurationsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBucketMetricsConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?metrics");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return ListBucketMetricsConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListBucketsOutcome S3CrtClient::ListBuckets() const
{
  AWS_OPERATION_GUARD(ListBuckets);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListBuckets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListBuckets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListBuckets",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, "ListBuckets" }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListBucketsOutcome>(
    [&]()-> ListBucketsOutcome {

        AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBuckets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
        const Aws::Vector<Aws::Endpoint::EndpointParameter> staticEndpointParameters;
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(staticEndpointParameters); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
            *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, "ListBuckets"}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBuckets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        return ListBucketsOutcome(MakeRequest(endpointResolutionOutcome.GetResult(), "ListBuckets", Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, "ListBuckets"}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDirectoryBucketsOutcome S3CrtClient::ListDirectoryBuckets(const ListDirectoryBucketsRequest& request) const
{
  AWS_OPERATION_GUARD(ListDirectoryBuckets);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDirectoryBuckets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListDirectoryBuckets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDirectoryBuckets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDirectoryBucketsOutcome>(
    [&]()-> ListDirectoryBucketsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDirectoryBuckets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListDirectoryBucketsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListMultipartUploads, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListMultipartUploads, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListMultipartUploadsOutcome>(
    [&]()-> ListMultipartUploadsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMultipartUploads, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?uploads");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return ListMultipartUploadsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListObjectVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListObjectVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListObjectVersionsOutcome>(
    [&]()-> ListObjectVersionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListObjectVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?versions");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return ListObjectVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListObjects, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListObjects, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListObjectsOutcome>(
    [&]()-> ListObjectsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListObjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return ListObjectsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListObjectsV2, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListObjectsV2, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListObjectsV2Outcome>(
    [&]()-> ListObjectsV2Outcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListObjectsV2, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?list-type=2");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return ListObjectsV2Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListParts, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListParts, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListPartsOutcome>(
    [&]()-> ListPartsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListParts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return ListPartsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutBucketAccelerateConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutBucketAccelerateConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutBucketAccelerateConfigurationOutcome>(
    [&]()-> PutBucketAccelerateConfigurationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketAccelerateConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?accelerate");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          auto isExpress = endpointResolutionOutcome.GetResult().AccessAttributes().value().backend == "S3Express";
          if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
            params.emplace("overrideChecksum", "crc32");
          }
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return PutBucketAccelerateConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutBucketAcl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutBucketAcl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutBucketAclOutcome>(
    [&]()-> PutBucketAclOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketAcl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?acl");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          auto isExpress = endpointResolutionOutcome.GetResult().AccessAttributes().value().backend == "S3Express";
          if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
            params.emplace("overrideChecksum", "crc32");
          }
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return PutBucketAclOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutBucketAnalyticsConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutBucketAnalyticsConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutBucketAnalyticsConfigurationOutcome>(
    [&]()-> PutBucketAnalyticsConfigurationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketAnalyticsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?analytics");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return PutBucketAnalyticsConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutBucketCors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutBucketCors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutBucketCorsOutcome>(
    [&]()-> PutBucketCorsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketCors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?cors");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          auto isExpress = endpointResolutionOutcome.GetResult().AccessAttributes().value().backend == "S3Express";
          if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
            params.emplace("overrideChecksum", "crc32");
          }
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return PutBucketCorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutBucketEncryption, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutBucketEncryption, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutBucketEncryptionOutcome>(
    [&]()-> PutBucketEncryptionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketEncryption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?encryption");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          auto isExpress = endpointResolutionOutcome.GetResult().AccessAttributes().value().backend == "S3Express";
          if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
            params.emplace("overrideChecksum", "crc32");
          }
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return PutBucketEncryptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutBucketIntelligentTieringConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutBucketIntelligentTieringConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutBucketIntelligentTieringConfigurationOutcome>(
    [&]()-> PutBucketIntelligentTieringConfigurationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketIntelligentTieringConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?intelligent-tiering");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return PutBucketIntelligentTieringConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutBucketInventoryConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutBucketInventoryConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutBucketInventoryConfigurationOutcome>(
    [&]()-> PutBucketInventoryConfigurationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketInventoryConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?inventory");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return PutBucketInventoryConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutBucketLifecycleConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutBucketLifecycleConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutBucketLifecycleConfigurationOutcome>(
    [&]()-> PutBucketLifecycleConfigurationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketLifecycleConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?lifecycle");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          auto isExpress = endpointResolutionOutcome.GetResult().AccessAttributes().value().backend == "S3Express";
          if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
            params.emplace("overrideChecksum", "crc32");
          }
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return PutBucketLifecycleConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutBucketLogging, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutBucketLogging, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutBucketLoggingOutcome>(
    [&]()-> PutBucketLoggingOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketLogging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?logging");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          auto isExpress = endpointResolutionOutcome.GetResult().AccessAttributes().value().backend == "S3Express";
          if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
            params.emplace("overrideChecksum", "crc32");
          }
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return PutBucketLoggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutBucketMetricsConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutBucketMetricsConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutBucketMetricsConfigurationOutcome>(
    [&]()-> PutBucketMetricsConfigurationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketMetricsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?metrics");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return PutBucketMetricsConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutBucketNotificationConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutBucketNotificationConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutBucketNotificationConfigurationOutcome>(
    [&]()-> PutBucketNotificationConfigurationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketNotificationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?notification");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return PutBucketNotificationConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutBucketOwnershipControls, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutBucketOwnershipControls, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutBucketOwnershipControlsOutcome>(
    [&]()-> PutBucketOwnershipControlsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketOwnershipControls, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?ownershipControls");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return PutBucketOwnershipControlsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutBucketPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutBucketPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutBucketPolicyOutcome>(
    [&]()-> PutBucketPolicyOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?policy");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          auto isExpress = endpointResolutionOutcome.GetResult().AccessAttributes().value().backend == "S3Express";
          if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
            params.emplace("overrideChecksum", "crc32");
          }
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return PutBucketPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutBucketReplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutBucketReplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutBucketReplicationOutcome>(
    [&]()-> PutBucketReplicationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketReplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?replication");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          auto isExpress = endpointResolutionOutcome.GetResult().AccessAttributes().value().backend == "S3Express";
          if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
            params.emplace("overrideChecksum", "crc32");
          }
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return PutBucketReplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutBucketRequestPayment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutBucketRequestPayment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutBucketRequestPaymentOutcome>(
    [&]()-> PutBucketRequestPaymentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketRequestPayment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?requestPayment");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          auto isExpress = endpointResolutionOutcome.GetResult().AccessAttributes().value().backend == "S3Express";
          if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
            params.emplace("overrideChecksum", "crc32");
          }
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return PutBucketRequestPaymentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutBucketTagging, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutBucketTagging, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutBucketTaggingOutcome>(
    [&]()-> PutBucketTaggingOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?tagging");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          auto isExpress = endpointResolutionOutcome.GetResult().AccessAttributes().value().backend == "S3Express";
          if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
            params.emplace("overrideChecksum", "crc32");
          }
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return PutBucketTaggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutBucketVersioning, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutBucketVersioning, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutBucketVersioningOutcome>(
    [&]()-> PutBucketVersioningOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketVersioning, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?versioning");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          auto isExpress = endpointResolutionOutcome.GetResult().AccessAttributes().value().backend == "S3Express";
          if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
            params.emplace("overrideChecksum", "crc32");
          }
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return PutBucketVersioningOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutBucketWebsite, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutBucketWebsite, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutBucketWebsiteOutcome>(
    [&]()-> PutBucketWebsiteOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketWebsite, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?website");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          auto isExpress = endpointResolutionOutcome.GetResult().AccessAttributes().value().backend == "S3Express";
          if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
            params.emplace("overrideChecksum", "crc32");
          }
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return PutBucketWebsiteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutObjectAcl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutObjectAcl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutObjectAclOutcome>(
    [&]()-> PutObjectAclOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutObjectAcl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
      ss.str("?acl");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          auto isExpress = endpointResolutionOutcome.GetResult().AccessAttributes().value().backend == "S3Express";
          if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
            params.emplace("overrideChecksum", "crc32");
          }
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return PutObjectAclOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutObjectLegalHold, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutObjectLegalHold, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutObjectLegalHoldOutcome>(
    [&]()-> PutObjectLegalHoldOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutObjectLegalHold, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
      ss.str("?legal-hold");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          auto isExpress = endpointResolutionOutcome.GetResult().AccessAttributes().value().backend == "S3Express";
          if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
            params.emplace("overrideChecksum", "crc32");
          }
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return PutObjectLegalHoldOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutObjectLockConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutObjectLockConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutObjectLockConfigurationOutcome>(
    [&]()-> PutObjectLockConfigurationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutObjectLockConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?object-lock");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          auto isExpress = endpointResolutionOutcome.GetResult().AccessAttributes().value().backend == "S3Express";
          if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
            params.emplace("overrideChecksum", "crc32");
          }
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return PutObjectLockConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutObjectRetention, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutObjectRetention, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutObjectRetentionOutcome>(
    [&]()-> PutObjectRetentionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutObjectRetention, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
      ss.str("?retention");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          auto isExpress = endpointResolutionOutcome.GetResult().AccessAttributes().value().backend == "S3Express";
          if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
            params.emplace("overrideChecksum", "crc32");
          }
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return PutObjectRetentionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutObjectTagging, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutObjectTagging, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutObjectTaggingOutcome>(
    [&]()-> PutObjectTaggingOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutObjectTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
      ss.str("?tagging");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          auto isExpress = endpointResolutionOutcome.GetResult().AccessAttributes().value().backend == "S3Express";
          if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
            params.emplace("overrideChecksum", "crc32");
          }
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return PutObjectTaggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutPublicAccessBlock, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutPublicAccessBlock, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutPublicAccessBlockOutcome>(
    [&]()-> PutPublicAccessBlockOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutPublicAccessBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      ss.str("?publicAccessBlock");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          auto isExpress = endpointResolutionOutcome.GetResult().AccessAttributes().value().backend == "S3Express";
          if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
            params.emplace("overrideChecksum", "crc32");
          }
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return PutPublicAccessBlockOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, RestoreObject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RestoreObject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RestoreObjectOutcome>(
    [&]()-> RestoreObjectOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RestoreObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
      ss.str("?restore");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          auto isExpress = endpointResolutionOutcome.GetResult().AccessAttributes().value().backend == "S3Express";
          if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
            params.emplace("overrideChecksum", "crc32");
          }
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return RestoreObjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SelectObjectContent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SelectObjectContent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SelectObjectContentOutcome>(
    [&]()-> SelectObjectContentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SelectObjectContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
      ss.str("?select&select-type=2");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
  request.SetResponseStreamFactory(
      [&] { request.GetEventStreamDecoder().Reset(); return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder()); }
  );
      return SelectObjectContentOutcome(MakeRequestWithEventStream(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UploadPart, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UploadPart, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UploadPartOutcome>(
    [&]()-> UploadPartOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UploadPart, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          auto isExpress = endpointResolutionOutcome.GetResult().AccessAttributes().value().backend == "S3Express";
          if (!request.ChecksumAlgorithmHasBeenSet() && isExpress) {
            params.emplace("overrideChecksumDisable", "noop");
          }
          if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
            params.emplace("overrideChecksum", "crc32");
          }
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return UploadPartOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UploadPartCopy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UploadPartCopy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UploadPartCopyOutcome>(
    [&]()-> UploadPartCopyOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UploadPartCopy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
      request.SetServiceSpecificParameters(
        [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
      return UploadPartCopyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, WriteGetObjectResponse, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, WriteGetObjectResponse, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<WriteGetObjectResponseOutcome>(
    [&]()-> WriteGetObjectResponseOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, WriteGetObjectResponse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetRequestRoute() + ".");
      AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), WriteGetObjectResponseOutcome(addPrefixErr.value()));
      endpointResolutionOutcome.GetResult().AddPathSegments("/WriteGetObjectResponse");
      return WriteGetObjectResponseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
    Aws::Map<Aws::String, Aws::String> params;
    params.emplace("bucketName", bucket);
    ServiceSpecificParameters serviceSpecificParameters{params};
    auto serviceParams = Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
    return AWSClient::GeneratePresignedUrl(endpoint, method, customizedHeaders, expirationInSeconds, Aws::Auth::SIGV4_SIGNER,
        nullptr, nullptr, serviceParams);
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
