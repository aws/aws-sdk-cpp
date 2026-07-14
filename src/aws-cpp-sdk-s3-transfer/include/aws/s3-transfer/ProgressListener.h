/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/s3-transfer/S3Transfer_EXPORTS.h>

namespace Aws {
namespace S3 {
namespace Transfer {

/**
 * Callback interface for transfer lifecycle events. Subclass and override the events of interest;
 * default implementations are empty. Specialized via UploadProgressListener / DownloadProgressListener.
 */
template <typename RequestT, typename SnapshotT>
class ProgressListener {
 public:
  virtual ~ProgressListener() = default;

  virtual void OnTransferInitiated(const RequestT& /*request*/, const SnapshotT& /*snapshot*/) {}
  virtual void OnBytesTransferred(const RequestT& /*request*/, const SnapshotT& /*snapshot*/) {}
  virtual void OnTransferComplete(const RequestT& /*request*/, const SnapshotT& /*snapshot*/) {}
  virtual void OnTransferFailed(const RequestT& /*request*/, const SnapshotT& /*snapshot*/) {}
};

}
}
}
