/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/s3-transfer/S3Transfer_EXPORTS.h>
#include <aws/s3-transfer/ProgressSnapshot.h>

namespace Aws {
namespace S3 {
namespace Transfer {

class UploadRequest;
class DownloadRequest;

/**
 * Callback interface for receiving event-driven updates throughout the lifecycle of a transfer.
 * Subclass and override the events of interest; default implementations are empty so unused
 * callbacks can be ignored. Listeners may be registered on the request or on the manager.
 * Specialized via the UploadProgressListener and DownloadProgressListener subclasses below.
 */
template <typename RequestT, typename SnapshotT>
class ProgressListener {
 public:
  virtual ~ProgressListener() = default;

  /**
   * Invoked exactly once when the transfer begins, before any bytes have been transferred.
   */
  virtual void OnTransferInitiated(const RequestT& /*request*/, const SnapshotT& /*snapshot*/) {}

  /**
   * Invoked as bytes are transferred. Called at least once for a successful transfer
   * and may be called many times depending on object size and I/O buffer sizes.
   */
  virtual void OnBytesTransferred(const RequestT& /*request*/, const SnapshotT& /*snapshot*/) {}

  /**
   * Invoked exactly once when the transfer completes successfully.
   */
  virtual void OnTransferComplete(const RequestT& /*request*/, const SnapshotT& /*snapshot*/) {}

  /**
   * Invoked exactly once when the transfer fails or is cancelled.
   */
  virtual void OnTransferFailed(const RequestT& /*request*/, const SnapshotT& /*snapshot*/) {}
};

/**
 * Callback interface for receiving event-driven updates throughout the lifecycle of an upload.
 * Subclass and override the events of interest; default implementations are empty so unused
 * callbacks can be ignored. Listeners may be registered on the request or on the manager.
 */
class AWS_S3_TRANSFER_API UploadProgressListener
    : public ProgressListener<UploadRequest, UploadProgressSnapshot> {};

/**
 * Callback interface for receiving event-driven updates throughout the lifecycle of a download.
 * Subclass and override the events of interest; default implementations are empty so unused
 * callbacks can be ignored. Listeners may be registered on the request or on the manager.
 */
class AWS_S3_TRANSFER_API DownloadProgressListener
    : public ProgressListener<DownloadRequest, DownloadProgressSnapshot> {};

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
