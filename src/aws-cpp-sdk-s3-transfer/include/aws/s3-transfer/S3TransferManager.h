/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/s3-transfer/S3Transfer_EXPORTS.h>
#include <aws/s3-transfer/S3TransferManagerConfiguration.h>
#include <aws/s3-transfer/UploadRequest.h>
#include <aws/s3-transfer/DownloadRequest.h>
#include <aws/s3-transfer/UploadHandle.h>
#include <aws/s3-transfer/DownloadHandle.h>
#include <aws/core/utils/memory/AWSMemory.h>
namespace Aws {
namespace S3 {
namespace Transfer {

class S3TransferManagerImpl;

/**
 * Customers construct an instance directly. The manager owns the underlying CRT client; it is
 * neither copyable nor movable.
 */
class AWS_S3_TRANSFER_API S3TransferManager final {
 public:
  explicit S3TransferManager(const S3TransferManagerConfiguration& config);
  ~S3TransferManager();

  S3TransferManager(const S3TransferManager&) = delete;
  S3TransferManager& operator=(const S3TransferManager&) = delete;
  S3TransferManager(S3TransferManager&&) noexcept = delete;
  S3TransferManager& operator=(S3TransferManager&&) noexcept = delete;

  /**
   * Begin uploading the object described by request. Returns immediately with a handle that can be
   * used to wait for completion or to cancel the in-flight transfer.
   */
  UploadHandle Upload(const UploadRequest& request);

  /**
   * Begin downloading the object described by request. Returns immediately with a handle that can
   * be used to wait for completion or to cancel the in-flight transfer.
   */
  DownloadHandle Download(const DownloadRequest& request);

 private:
  Aws::UniquePtr<S3TransferManagerImpl> m_impl;
};

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws



