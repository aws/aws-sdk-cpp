/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/s3-transfer/S3Transfer_EXPORTS.h>

namespace Aws {
namespace S3 {
namespace Transfer {

class DownloadRequest;
class DownloadProgressSnapshot;

/**
 * Callback interface for receiving event-driven updates throughout the lifecycle of a download.
 * Subclass and override the events of interest; default implementations are empty so unused
 * callbacks can be ignored. Listeners may be registered on the request or on the manager.
 */
class AWS_S3_TRANSFER_API DownloadProgressListener {
 public:
  virtual ~DownloadProgressListener() = default;

  /**
   * Invoked exactly once when the download begins, before any bytes have been transferred.
   */
  virtual void OnTransferInitiated(const DownloadRequest&, const DownloadProgressSnapshot&) {}

  /**
   * Invoked as bytes are received from S3. Called at least once for a successful transfer
   * and may be called many times depending on object size and I/O buffer sizes.
   */
  virtual void OnBytesTransferred(const DownloadRequest&, const DownloadProgressSnapshot&) {}

  /**
   * Invoked exactly once when the download completes successfully.
   */
  virtual void OnTransferComplete(const DownloadRequest&, const DownloadProgressSnapshot&) {}

  /**
   * Invoked exactly once when the download fails or is cancelled.
   */
  virtual void OnTransferFailed(const DownloadRequest&, const DownloadProgressSnapshot&) {}
};

}
}
}
