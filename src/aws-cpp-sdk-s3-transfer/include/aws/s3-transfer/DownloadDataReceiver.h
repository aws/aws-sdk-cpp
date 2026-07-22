/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/s3-transfer/S3Transfer_EXPORTS.h>
#include <aws/s3-transfer/S3DownloadBuffer.h>

namespace Aws {
namespace S3 {
namespace Transfer {

/**
 * Callback interface for zero-copy downloads. The transfer manager delivers each part of the
 * object to OnDataReceived as it arrives, in object order. The buffer is move-only; move it out
 * (e.g. auto held = std::move(buffer)) to retain the bytes past this call.
 */
class AWS_S3_TRANSFER_API DownloadDataReceiver {
 public:
  virtual ~DownloadDataReceiver() = default;
  virtual void OnDataReceived(S3DownloadBuffer buffer) = 0;
};

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
