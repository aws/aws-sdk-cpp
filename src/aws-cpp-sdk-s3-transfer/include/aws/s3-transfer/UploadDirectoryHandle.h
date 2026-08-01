/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/s3-transfer/S3Transfer_EXPORTS.h>
#include <future>
#include <memory>
#include <aws/s3-transfer/UploadDirectoryResponse.h>
#include <aws/core/utils/memory/AWSMemory.h>


namespace Aws {
namespace S3 {
namespace Transfer {

class UploadDirectoryHandleImpl;

// Move-only handle for a single in-flight directory upload.
class AWS_S3_TRANSFER_API UploadDirectoryHandle final {
public:
  explicit UploadDirectoryHandle(Aws::UniquePtr<UploadDirectoryHandleImpl> impl);
  ~UploadDirectoryHandle();
  UploadDirectoryHandle(const UploadDirectoryHandle&) = delete;
  UploadDirectoryHandle& operator=(const UploadDirectoryHandle&) = delete;
  UploadDirectoryHandle(UploadDirectoryHandle&&) noexcept;
  UploadDirectoryHandle& operator=(UploadDirectoryHandle&&) noexcept;

  // Resolves once every file has been attempted, or earlier if the traversal fails or the failure
  // policy stops the operation.
  std::future<UploadDirectoryOutcome> CompletionFuture();

  // Returns immediately; no further files are dispatched and the in-flight per-file uploads are
  // cancelled. The completion future resolves with a failure once the cancel takes effect.
  void Cancel();

private:
  Aws::UniquePtr<UploadDirectoryHandleImpl> m_impl;
};

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
