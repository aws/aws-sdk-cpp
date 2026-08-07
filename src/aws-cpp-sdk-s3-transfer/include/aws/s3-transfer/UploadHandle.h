/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/s3-transfer/S3Transfer_EXPORTS.h>
#include <aws/s3-transfer/TransferHandle.h>
#include <aws/s3-transfer/UploadResponse.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <memory>
#include <utility>

namespace Aws {
namespace S3 {
namespace Transfer {

class UploadHandleImpl;

// Move-only handle for a single in-flight upload. All behavior lives on the TransferHandle base; this
// only pins the impl/outcome types and the log tag.
class AWS_S3_TRANSFER_API UploadHandle final : public TransferHandle<UploadHandleImpl, UploadOutcome> {
 public:
  explicit UploadHandle(Aws::UniquePtr<UploadHandleImpl> impl)
      : TransferHandle<UploadHandleImpl, UploadOutcome>(std::move(impl), "UploadHandle") {}
};

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
