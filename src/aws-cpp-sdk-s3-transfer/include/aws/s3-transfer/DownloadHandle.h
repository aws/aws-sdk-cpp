/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/s3-transfer/S3Transfer_EXPORTS.h>
#include <future>
#include <memory>
#include <aws/s3-transfer/DownloadResponse.h>
#include <aws/core/utils/memory/AWSMemory.h>


namespace Aws {
namespace S3 {
namespace Transfer {

class DownloadHandleImpl;

// Move-only handle for a single in-flight download.
class AWS_S3_TRANSFER_API DownloadHandle final {
public:
  explicit DownloadHandle(Aws::UniquePtr<DownloadHandleImpl> impl);
  ~DownloadHandle();
  DownloadHandle(DownloadHandle&&) noexcept;
  DownloadHandle& operator=(DownloadHandle&&) noexcept;

  // Resolves once the transfer finishes, succeeds, or fails.
  std::future<DownloadOutcome> CompletionFuture();

  // Returns immediately; the completion future resolves with a failure once the cancel takes effect.
  void Cancel();

private:
  Aws::UniquePtr<DownloadHandleImpl> m_impl;
};


}
}
}
