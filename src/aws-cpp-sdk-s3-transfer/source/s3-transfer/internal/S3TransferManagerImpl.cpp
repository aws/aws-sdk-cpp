/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-transfer/internal/S3TransferManagerImpl.h>
#include <aws/crt/Api.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/threading/PooledThreadExecutor.h>

namespace Aws {
namespace S3 {
namespace Transfer {

static const char* const S3_TRANSFER_LOG_TAG = "S3TransferManagerImpl";

S3TransferManagerImpl::S3TransferManagerImpl(
    const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
    const std::shared_ptr<Aws::S3::Endpoint::S3EndpointProviderBase>& endpointProvider,
    const S3TransferManagerConfiguration& config)
    : m_region(config.region) {
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
    AWS_LOGSTREAM_ERROR(S3_TRANSFER_LOG_TAG, "Failed to create CRT credentials provider delegate.");
    return;
  }

  // Part size and multipart threshold are set explicitly; the CRT's own defaults differ (dynamic
  // part size, threshold == part size).
  Aws::Crt::S3::S3ClientConfig clientConfig(m_credentialsProvider);
  clientConfig.SetRegion(Aws::Crt::String(m_region.c_str()))
      .SetPartSize(config.partSize)
      .SetMultipartUploadThreshold(config.multipartUploadThreshold)
      .SetThroughputTargetGbps(config.throughputTargetGbps);
  if (config.tlsConnectionOptions) {
    clientConfig.SetTlsConnectionOptions(*config.tlsConnectionOptions);
  }

  m_crtClient = Aws::MakeUnique<Aws::Crt::S3::S3Client>(S3_TRANSFER_LOG_TAG, clientConfig);
  if (!m_crtClient || !*m_crtClient) {
    AWS_LOGSTREAM_ERROR(S3_TRANSFER_LOG_TAG,
                        "Failed to construct CRT S3 client, error: "
                            << (m_crtClient ? m_crtClient->LastError() : -1));
    m_crtClient = nullptr;
    return;
  }

  // If the customer injected an endpoint provider, use it as-is; they are responsible for having
  // configured it. Otherwise build a default S3EndpointProvider and seed it with the region built-in
  // (mirrors S3Client's behavior).
  if (endpointProvider) {
    m_endpointProvider = endpointProvider;
  } else {
    auto defaultProvider = Aws::MakeShared<Aws::S3::Endpoint::S3EndpointProvider>(S3_TRANSFER_LOG_TAG);
    defaultProvider->AccessBuiltInParameters().SetStringParameter("Region", m_region);
    m_endpointProvider = defaultProvider;
  }

  // Honor endpointOverride like S3Client / S3CrtClient. Used for VPC endpoints, LocalStack, minio.
  if (!config.endpointOverride.empty()) {
    m_endpointProvider->OverrideEndpoint(config.endpointOverride);
  }

  if (config.executor) {
    m_executor = config.executor;
  } else {
    m_executor = Aws::MakeShared<Aws::Utils::Threading::PooledThreadExecutor>(S3_TRANSFER_LOG_TAG,
                                                                              DEFAULT_EXECUTOR_POOL_SIZE);
  }
}

S3TransferManagerImpl::~S3TransferManagerImpl() = default;

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
