/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/s3-transfer/S3Transfer_EXPORTS.h>
#include <future>
#include <memory>
#include <aws/s3-transfer/DownloadResponse.h>


namespace Aws {
namespace S3 {
namespace Transfer {

/**
 * Returned from S3TransferManager::Download to represent a single in-flight download. The
 * handle is move-only and owns the underlying transfer state.
 */
class AWS_S3_TRANSFER_API DownloadHandle final {
public:
  DownloadHandle();
  ~DownloadHandle();
  DownloadHandle(DownloadHandle&&) noexcept;
  DownloadHandle& operator=(DownloadHandle&&) noexcept;

  /**
   * Returns a future that resolves once the transfer finishes, succeeds, or fails.
   */
  std::future<DownloadOutcome> CompletionFuture();

  /**
   * Requests cancellation of the in-flight download. Returns immediately; the future
   * returned by CompletionFuture will resolve with a failure once the cancel takes effect.
   */
  void Cancel();
};


}
}
}
