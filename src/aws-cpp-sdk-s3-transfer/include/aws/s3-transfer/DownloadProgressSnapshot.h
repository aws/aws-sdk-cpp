/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/s3-transfer/S3Transfer_EXPORTS.h>
#include <aws/s3-transfer/ProgressSnapshot.h>
#include <aws/s3-transfer/DownloadResponse.h>

namespace Aws {
namespace S3 {
namespace Transfer {

/**
 * Immutable snapshot of download progress passed to DownloadProgressListener callbacks.
 * Captures bytes transferred, total bytes (known after the GetObject response is received),
 * and the response once available.
 */
class AWS_S3_TRANSFER_API DownloadProgressSnapshot final : public ProgressSnapshot<DownloadResponse> {
 public:
  using ProgressSnapshot<DownloadResponse>::ProgressSnapshot;
};

}
}
}
