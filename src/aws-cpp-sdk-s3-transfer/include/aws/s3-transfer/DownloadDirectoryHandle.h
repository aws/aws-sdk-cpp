/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/s3-transfer/S3Transfer_EXPORTS.h>
#include <aws/s3-transfer/TransferHandle.h>
#include <aws/s3-transfer/DownloadDirectoryResponse.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <memory>
#include <utility>

namespace Aws {
namespace S3 {
namespace Transfer {

class DownloadDirectoryHandleImpl;

// Move-only handle for a single in-flight directory download. All behavior lives on the
// TransferHandle base; this only pins the impl/outcome types and the log tag. Its Cancel stops
// further dispatch and cancels the in-flight per-file downloads.
class AWS_S3_TRANSFER_API DownloadDirectoryHandle final
    : public TransferHandle<DownloadDirectoryHandleImpl, DownloadDirectoryOutcome> {
 public:
  explicit DownloadDirectoryHandle(Aws::UniquePtr<DownloadDirectoryHandleImpl> impl)
      : TransferHandle<DownloadDirectoryHandleImpl, DownloadDirectoryOutcome>(
            std::move(impl), "DownloadDirectoryHandle") {}
};

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
