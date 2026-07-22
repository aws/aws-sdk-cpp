/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/s3-transfer/S3Transfer_EXPORTS.h>
#include <aws/s3-transfer/S3TransferManagerConfiguration.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/S3EndpointProvider.h>
#include <aws/s3/S3Errors.h>
#include <aws/crt/s3/S3.h>
#include <aws/crt/auth/Credentials.h>
#include <aws/core/utils/threading/Executor.h>
#include <atomic>
#include <cstdint>
#include <memory>

namespace Aws {
namespace S3 {
namespace Transfer {

constexpr size_t DEFAULT_EXECUTOR_POOL_SIZE = 8;

// Precondition: Aws::InitAPI() must be called before construction.
class AWS_CORE_LOCAL S3TransferManagerImpl final {
 public:
  // Sole real constructor; the public overloads adapt their credentials shape into the
  // AWSCredentialsProvider taken here.
  S3TransferManagerImpl(const S3TransferManagerConfiguration& config,
                        const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider =
                            Aws::MakeShared<Aws::Auth::DefaultAWSCredentialsProviderChain>("S3TransferManagerImpl"),
                        const std::shared_ptr<Aws::S3::Endpoint::S3EndpointProviderBase>& endpointProvider =
                            Aws::MakeShared<Aws::S3::Endpoint::S3EndpointProvider>("S3TransferManagerImpl"));
  ~S3TransferManagerImpl();

  S3TransferManagerImpl(const S3TransferManagerImpl&) = delete;
  S3TransferManagerImpl& operator=(const S3TransferManagerImpl&) = delete;
  S3TransferManagerImpl(S3TransferManagerImpl&&) = delete;
  S3TransferManagerImpl& operator=(S3TransferManagerImpl&&) = delete;

  Aws::Crt::S3::S3Client& GetCrtClient() const { return *m_crtClient; }
  Aws::S3::Endpoint::S3EndpointProviderBase& GetEndpointProvider() const { return *m_endpointProvider; }
  const S3TransferManagerConfiguration& GetConfig() const { return m_config; }
  const std::shared_ptr<Aws::Crt::Auth::ICredentialsProvider>& GetCredentialsProvider() const {
    return m_credentialsProvider;
  }
  bool IsCustomerSuppliedCrtClient() const { return m_customerSuppliedCrtClient; }
  // Ctor sets to false on any construction failure and stashes the specific reason in
  // m_initError. S3TransferManager::Create() inspects this to gate object handoff — a customer
  // never receives a borked S3TransferManager.
  bool IsInitialized() const { return m_isInitialized.load(); }
  const Aws::Client::AWSError<Aws::S3::S3Errors>& GetInitializationError() const { return m_initError; }
  Aws::Utils::Threading::Executor& GetExecutor() const { return *m_executor; }
  const Aws::String& GetUserAgentString() const { return m_userAgent; }

 private:
  S3TransferManagerConfiguration m_config;
  std::shared_ptr<Aws::Crt::Auth::ICredentialsProvider> m_credentialsProvider;
  std::shared_ptr<Aws::S3::Endpoint::S3EndpointProviderBase> m_endpointProvider;
  std::shared_ptr<Aws::Crt::S3::S3Client> m_crtClient;
  std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  std::atomic<bool> m_isInitialized{true};
  Aws::Client::AWSError<Aws::S3::S3Errors> m_initError;
  bool m_customerSuppliedCrtClient = false;
  Aws::String m_userAgent;
};

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
