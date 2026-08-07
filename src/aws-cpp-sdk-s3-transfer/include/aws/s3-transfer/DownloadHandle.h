/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/s3-transfer/S3Transfer_EXPORTS.h>
#include <aws/s3-transfer/TransferHandle.h>
#include <aws/s3-transfer/DownloadResponse.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <memory>
#include <utility>

namespace Aws {
namespace S3 {
namespace Transfer {

class DownloadHandleImpl;

// Move-only handle for a single in-flight download. All behavior lives on the TransferHandle base;
// this only pins the impl/outcome types and the log tag.
class AWS_S3_TRANSFER_API DownloadHandle final
    : public TransferHandle<DownloadHandleImpl, DownloadOutcome> {
 public:
  explicit DownloadHandle(Aws::UniquePtr<DownloadHandleImpl> impl)
      : TransferHandle<DownloadHandleImpl, DownloadOutcome>(std::move(impl), "DownloadHandle") {}
};

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
