/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/s3-transfer/S3Transfer_EXPORTS.h>
#include <aws/s3-transfer/S3TransferManagerConfiguration.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/S3EndpointProvider.h>
#include <aws/crt/s3/S3.h>
#include <aws/crt/auth/Credentials.h>
#include <aws/core/utils/threading/Executor.h>
#include <cstdint>
#include <memory>

namespace Aws {
namespace S3 {
namespace Transfer {

constexpr size_t DEFAULT_EXECUTOR_POOL_SIZE = 8;

// Precondition: Aws::InitAPI() must be called before construction.
class S3TransferManagerImpl final {
 public:
  explicit S3TransferManagerImpl(const S3TransferManagerConfiguration& config);
  ~S3TransferManagerImpl();

  S3TransferManagerImpl(const S3TransferManagerImpl&) = delete;
  S3TransferManagerImpl& operator=(const S3TransferManagerImpl&) = delete;
  S3TransferManagerImpl(S3TransferManagerImpl&&) = delete;
  S3TransferManagerImpl& operator=(S3TransferManagerImpl&&) = delete;

  Aws::Crt::S3::S3Client& GetCrtClient() const { return *m_crtClient; }
  Aws::S3::Endpoint::S3EndpointProvider& GetEndpointProvider() const { return *m_endpointProvider; }
  const Aws::String& GetRegion() const { return m_region; }
  const std::shared_ptr<Aws::Crt::Auth::ICredentialsProvider>& GetCredentialsProvider() const {
    return m_credentialsProvider;
  }
  bool IsValid() const { return m_crtClient != nullptr && static_cast<bool>(*m_crtClient); }
  Aws::Utils::Threading::Executor& GetExecutor() const { return *m_executor; }

 private:
  Aws::String m_region;
  std::shared_ptr<Aws::Crt::Auth::ICredentialsProvider> m_credentialsProvider;
  Aws::UniquePtr<Aws::S3::Endpoint::S3EndpointProvider> m_endpointProvider;
  Aws::UniquePtr<Aws::Crt::S3::S3Client> m_crtClient;
  std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
};

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
