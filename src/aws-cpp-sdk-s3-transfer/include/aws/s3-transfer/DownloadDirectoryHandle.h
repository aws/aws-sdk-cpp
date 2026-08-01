/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/s3-transfer/S3Transfer_EXPORTS.h>
#include <future>
#include <memory>
#include <aws/s3-transfer/DownloadDirectoryResponse.h>
#include <aws/core/utils/memory/AWSMemory.h>


namespace Aws {
namespace S3 {
namespace Transfer {

class DownloadDirectoryHandleImpl;

// Move-only handle for a single in-flight directory download.
class AWS_S3_TRANSFER_API DownloadDirectoryHandle final {
public:
  explicit DownloadDirectoryHandle(Aws::UniquePtr<DownloadDirectoryHandleImpl> impl);
  ~DownloadDirectoryHandle();
  DownloadDirectoryHandle(const DownloadDirectoryHandle&) = delete;
  DownloadDirectoryHandle& operator=(const DownloadDirectoryHandle&) = delete;
  DownloadDirectoryHandle(DownloadDirectoryHandle&&) noexcept;
  DownloadDirectoryHandle& operator=(DownloadDirectoryHandle&&) noexcept;

  // Resolves once every object has been attempted, or earlier if the listing fails or the failure
  // policy stops the operation.
  std::future<DownloadDirectoryOutcome> CompletionFuture();

  // Returns immediately; no further objects are dispatched and the in-flight per-file downloads are
  // cancelled. The completion future resolves with a failure once the cancel takes effect.
  void Cancel();

private:
  Aws::UniquePtr<DownloadDirectoryHandleImpl> m_impl;
};

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
