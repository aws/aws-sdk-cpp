/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/s3-transfer/S3Transfer_EXPORTS.h>
#include <future>
#include <memory>
#include <aws/s3-transfer/UploadResponse.h>
#include <aws/core/utils/memory/AWSMemory.h>


namespace Aws {
namespace S3 {
namespace Transfer {

class UploadHandleImpl;

// Move-only handle for a single in-flight upload.
class AWS_S3_TRANSFER_API UploadHandle final {
public:
  explicit UploadHandle(Aws::UniquePtr<UploadHandleImpl> impl);
  ~UploadHandle();
  UploadHandle(UploadHandle&&) noexcept;
  UploadHandle& operator=(UploadHandle&&) noexcept;

  // Resolves once the transfer finishes, succeeds, or fails.
  std::future<UploadOutcome> CompletionFuture();

  // Returns immediately; the completion future resolves with a failure once the cancel takes effect.
  void Cancel();

private:
  Aws::UniquePtr<UploadHandleImpl> m_impl;
};


}
}
}
