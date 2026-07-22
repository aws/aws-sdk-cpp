/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/s3-transfer/S3TransferManager.h>
#include <aws/s3-transfer/internal/S3TransferManagerImpl.h>
#include <aws/s3-transfer/internal/CrtOperations.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/memory/AWSMemory.h>

namespace Aws {
namespace S3 {
namespace Transfer {

static const char* const S3_TRANSFER_MANAGER_ALLOCATION_TAG = "S3TransferManager";

S3TransferManager::~S3TransferManager() = default;

S3TransferManager::S3TransferManager(const S3TransferManagerConfiguration& config,
                                     std::shared_ptr<Aws::S3::Endpoint::S3EndpointProviderBase> endpointProvider)
    : m_impl(Aws::MakeUnique<S3TransferManagerImpl>(
          S3_TRANSFER_MANAGER_ALLOCATION_TAG, config,
          Aws::MakeShared<Aws::Auth::DefaultAWSCredentialsProviderChain>(S3_TRANSFER_MANAGER_ALLOCATION_TAG),
          endpointProvider)) {}

S3TransferManager::S3TransferManager(const Aws::Auth::AWSCredentials& credentials,
                                     std::shared_ptr<Aws::S3::Endpoint::S3EndpointProviderBase> endpointProvider,
                                     const S3TransferManagerConfiguration& config)
    : m_impl(Aws::MakeUnique<S3TransferManagerImpl>(
          S3_TRANSFER_MANAGER_ALLOCATION_TAG, config,
          Aws::MakeShared<Aws::Auth::SimpleAWSCredentialsProvider>(S3_TRANSFER_MANAGER_ALLOCATION_TAG, credentials),
          endpointProvider)) {}

S3TransferManager::S3TransferManager(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<Aws::S3::Endpoint::S3EndpointProviderBase> endpointProvider,
                                     const S3TransferManagerConfiguration& config)
    : m_impl(Aws::MakeUnique<S3TransferManagerImpl>(
          S3_TRANSFER_MANAGER_ALLOCATION_TAG, config, credentialsProvider, endpointProvider)) {}

bool S3TransferManager::IsInitialized() const { return m_impl->IsInitialized(); }

const Aws::Client::AWSError<Aws::S3::S3Errors>& S3TransferManager::GetInitializationError() const {
  return m_impl->GetInitializationError();
}

UploadHandle S3TransferManager::Upload(const UploadRequest& request) {
  return Internal::CrtOperations::DispatchUpload(*m_impl, request);
}

DownloadHandle S3TransferManager::Download(const DownloadRequest& request) {
  return Internal::CrtOperations::DispatchDownload(*m_impl, request);
}

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
