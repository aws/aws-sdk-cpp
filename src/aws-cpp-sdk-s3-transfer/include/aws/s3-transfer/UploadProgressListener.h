/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/s3-transfer/S3Transfer_EXPORTS.h>

namespace Aws {
namespace S3 {
namespace Transfer {

class UploadRequest;
class UploadProgressSnapshot;

/**
 * Callback interface for receiving event-driven updates throughout the lifecycle of an upload.
 * Subclass and override the events of interest; default implementations are empty so unused
 * callbacks can be ignored. Listeners may be registered on the request or on the manager.
 */
class AWS_S3_TRANSFER_API UploadProgressListener {
 public:
  virtual ~UploadProgressListener() = default;

  /**
   * Invoked exactly once when the upload begins, before any bytes have been transferred.
   */
  virtual void OnTransferInitiated(const UploadRequest& /*request*/, const UploadProgressSnapshot& /*snapshot*/) {}

  /**
   * Invoked as bytes are submitted to S3. Called at least once for a successful transfer
   * and may be called many times depending on object size and I/O buffer sizes.
   */
  virtual void OnBytesTransferred(const UploadRequest& /*request*/, const UploadProgressSnapshot& /*snapshot*/) {}

  /**
   * Invoked exactly once when the upload completes successfully.
   */
  virtual void OnTransferComplete(const UploadRequest& /*request*/, const UploadProgressSnapshot& /*snapshot*/) {}

  /**
   * Invoked exactly once when the upload fails or is cancelled.
   */
  virtual void OnTransferFailed(const UploadRequest& /*request*/, const UploadProgressSnapshot& /*snapshot*/) {}
};

}
}
}
