/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/s3-transfer/internal/TransferState.h>
#include <future>
#include <memory>

namespace Aws {
namespace S3 {
namespace Transfer {

class UploadHandleImpl final {
 public:
  std::future<UploadOutcome> future;
  std::shared_ptr<UploadTransferState> state;
};

class DownloadHandleImpl final {
 public:
  std::future<DownloadOutcome> future;
  std::shared_ptr<DownloadTransferState> state;
};

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
