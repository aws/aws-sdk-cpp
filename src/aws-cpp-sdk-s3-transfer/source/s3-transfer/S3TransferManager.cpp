/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
   * SPDX-License-Identifier: Apache-2.0.
   */
#include <aws/s3-transfer/S3TransferManager.h>
#include <aws/core/utils/memory/AWSMemory.h>

namespace Aws {
namespace S3 {
namespace Transfer {
class S3TransferManagerImpl {

};
S3TransferManager::~S3TransferManager() = default;

S3TransferManager::S3TransferManager(const S3TransferManagerConfiguration& ) :
m_impl(Aws::MakeUnique<S3TransferManagerImpl>("S3TransferManager")) {

}

std::shared_ptr<S3TransferManager> S3TransferManager::Create(const S3TransferManagerConfiguration& config) {
  struct MakeSharedEnabler : public S3TransferManager {
    MakeSharedEnabler(const S3TransferManagerConfiguration& config) : S3TransferManager(config) {}
  };
  return Aws::MakeShared<MakeSharedEnabler>("S3TransferManager", config);
}

UploadHandle S3TransferManager::Upload(const UploadRequest&) {
  return UploadHandle();
}

DownloadHandle S3TransferManager::Download(const DownloadRequest&) {
  return DownloadHandle();
}

}
}
}
