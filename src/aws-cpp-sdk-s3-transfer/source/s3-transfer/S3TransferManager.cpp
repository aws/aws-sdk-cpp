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

UploadHandle S3TransferManager::Upload(const UploadRequest&) {
  return UploadHandle();
}

DownloadHandle S3TransferManager::Download(const DownloadRequest&) {
  return DownloadHandle();
}

}
}
}
