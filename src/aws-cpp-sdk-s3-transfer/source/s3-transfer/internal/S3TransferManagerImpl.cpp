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

S3TransferManagerImpl::S3TransferManagerImpl(const S3TransferManagerConfiguration& config)
    : m_region(config.region) {
  Aws::Crt::Auth::CredentialsProviderChainDefaultConfig providerConfig;
  m_credentialsProvider =
      Aws::Crt::Auth::CredentialsProvider::CreateCredentialsProviderChainDefault(providerConfig,
                                                                                  Aws::Crt::ApiAllocator());
  if (!m_credentialsProvider) {
    AWS_LOGSTREAM_ERROR(S3_TRANSFER_LOG_TAG, "Failed to create CRT default credentials provider chain.");
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

  m_endpointProvider = Aws::MakeUnique<Aws::S3::Endpoint::S3EndpointProvider>(S3_TRANSFER_LOG_TAG);
  m_endpointProvider->AccessBuiltInParameters().SetStringParameter("Region", m_region);

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
