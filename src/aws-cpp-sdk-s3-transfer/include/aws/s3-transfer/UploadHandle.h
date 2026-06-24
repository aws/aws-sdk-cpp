/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/s3-transfer/S3Transfer_EXPORTS.h>
#include <future>
#include <memory>
#include <aws/s3-transfer/UploadResponse.h>


namespace Aws {
namespace S3 {
namespace Transfer {

/**
 * Returned from S3TransferManager::Upload to represent a single in-flight upload. The
 * handle is move-only and owns the underlying transfer state.
 */
class AWS_S3_TRANSFER_API UploadHandle final {
public:
  UploadHandle();
  ~UploadHandle();
  UploadHandle(UploadHandle&&) noexcept;
  UploadHandle& operator=(UploadHandle&&) noexcept;


  /**
   * Returns a future that resolves once the transfer finishes, succeeds, or fails.
   */
  std::future<UploadOutcome> CompletionFuture();

  /**
   * Requests cancellation of the in-flight upload. Returns immediately; the future
   * returned by CompletionFuture will resolve with a failure once the cancel takes effect.
   */
  void Cancel();
};


}
}
}
