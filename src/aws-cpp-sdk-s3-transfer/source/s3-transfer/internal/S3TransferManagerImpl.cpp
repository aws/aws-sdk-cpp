/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-transfer/internal/S3TransferManagerImpl.h>
#include <aws/crt/Api.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/PooledThreadExecutor.h>

namespace Aws {
namespace S3 {
namespace Transfer {

static const char* const S3_TRANSFER_LOG_TAG = "S3TransferManagerImpl";

S3TransferManagerImpl::S3TransferManagerImpl(
    const S3TransferManagerConfiguration& config,
    const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
    const std::shared_ptr<Aws::S3::Endpoint::S3EndpointProviderBase>& endpointProvider)
    : m_config(config) {
  // If the customer injected an endpoint provider, use it as-is; they are responsible for having
  // configured it. Otherwise build a default S3EndpointProvider (mirrors S3Client's behavior).
  if (endpointProvider) {
    m_endpointProvider = endpointProvider;
  } else {
    m_endpointProvider = Aws::MakeShared<Aws::S3::Endpoint::S3EndpointProvider>(S3_TRANSFER_LOG_TAG);
  }

  if (m_config.crtClient) {
    m_crtClient = m_config.crtClient;
    m_customerSuppliedCrtClient = true;
  } else {
    // Bridge the SDK credentials provider into a CRT provider via a delegate that fetches
    // credentials from the SDK side on demand; empty credentials become an anonymous CRT identity.
    // Matches S3CrtClient's construction path.
    m_credentialsProvider = Aws::Crt::Auth::CredentialsProvider::CreateCredentialsProviderDelegate(
        Aws::Crt::Auth::CredentialsProviderDelegateConfig{
            [credentialsProvider]() -> std::shared_ptr<Aws::Crt::Auth::Credentials> {
              if (credentialsProvider == nullptr) {
                return Aws::MakeShared<Aws::Crt::Auth::Credentials>(S3_TRANSFER_LOG_TAG);
              }
              Aws::Auth::AWSCredentials sdkCreds = credentialsProvider->GetAWSCredentials();
              if (sdkCreds.GetAWSAccessKeyId().empty() && sdkCreds.GetAWSSecretKey().empty()) {
                return Aws::MakeShared<Aws::Crt::Auth::Credentials>(S3_TRANSFER_LOG_TAG);
              }
              return Aws::MakeShared<Aws::Crt::Auth::Credentials>(
                  S3_TRANSFER_LOG_TAG,
                  Aws::Crt::ByteCursorFromCString(sdkCreds.GetAWSAccessKeyId().c_str()),
                  Aws::Crt::ByteCursorFromCString(sdkCreds.GetAWSSecretKey().c_str()),
                  Aws::Crt::ByteCursorFromCString(sdkCreds.GetSessionToken().c_str()),
                  sdkCreds.GetExpiration().Millis());
            }},
        Aws::Crt::ApiAllocator());
    if (!m_credentialsProvider) {
      m_initError = Aws::Client::AWSError<Aws::S3::S3Errors>(
          static_cast<Aws::S3::S3Errors>(Aws::Client::CoreErrors::NOT_INITIALIZED), "NOT_INITIALIZED",
          "Failed to create CRT credentials provider delegate.", false);
      AWS_LOGSTREAM_ERROR(S3_TRANSFER_LOG_TAG,
                          "Failed to create CRT credentials provider delegate. Upload()/Download() "
                          "will fail immediately with the initialization error.");
      m_isInitialized.store(false);
      return;
    }

    // Part size and multipart threshold are set explicitly; the CRT's own defaults differ
    // (dynamic part size, threshold == part size).
    Aws::Crt::S3::S3ClientConfig clientConfig(m_credentialsProvider);
    clientConfig.SetRegion(Aws::Crt::String(m_config.region.c_str()))
        .SetPartSize(m_config.partSize)
        .SetMultipartUploadThreshold(m_config.multipartUploadThreshold)
        .SetThroughputTargetGbps(m_config.throughputTargetGbps);
    if (m_config.tlsConnectionOptions) {
      clientConfig.SetTlsConnectionOptions(*m_config.tlsConnectionOptions);
    }

    m_crtClient = Aws::MakeShared<Aws::Crt::S3::S3Client>(S3_TRANSFER_LOG_TAG, clientConfig);
    if (!m_crtClient || !*m_crtClient) {
      const int lastError = m_crtClient ? m_crtClient->LastError() : -1;
      Aws::StringStream reason;
      reason << "Failed to construct CRT S3 client, error: " << lastError;
      m_initError = Aws::Client::AWSError<Aws::S3::S3Errors>(
          static_cast<Aws::S3::S3Errors>(Aws::Client::CoreErrors::NOT_INITIALIZED), "NOT_INITIALIZED",
          reason.str(), false);
      AWS_LOGSTREAM_ERROR(S3_TRANSFER_LOG_TAG,
                          reason.str() << ". Upload()/Download() will fail immediately with the "
                          "initialization error.");
      m_crtClient = nullptr;
      m_isInitialized.store(false);
      return;
    }
  }

  // Seed the endpoint provider's built-in parameters from our config; mirrors AwsSmithyClient's
  // base-class init path. Propagates region, dual-stack, FIPS, endpoint override, and every S3-
  // specific knob (useVirtualAddressing, useArnRegion, disableMultiRegionAccessPoints, etc.).
  m_endpointProvider->InitBuiltInParameters(m_config);

  if (m_config.executor) {
    m_executor = m_config.executor;
  } else {
    m_executor = Aws::MakeShared<Aws::Utils::Threading::PooledThreadExecutor>(S3_TRANSFER_LOG_TAG,
                                                                              DEFAULT_EXECUTOR_POOL_SIZE);
  }

  Aws::Client::UserAgent userAgent(m_config, "", "S3TransferManager");
  m_userAgent = userAgent.SerializeWithFeatures({Aws::Client::UserAgentFeature::S3_TRANSFER});
}

S3TransferManagerImpl::~S3TransferManagerImpl() = default;

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
