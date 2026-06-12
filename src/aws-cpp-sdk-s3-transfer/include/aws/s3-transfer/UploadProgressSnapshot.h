/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/s3-transfer/S3Transfer_EXPORTS.h>
#include <aws/s3-transfer/ProgressSnapshot.h>
#include <aws/s3-transfer/UploadResponse.h>

namespace Aws {
namespace S3 {
namespace Transfer {

/**
 * Immutable snapshot of upload progress passed to UploadProgressListener callbacks. Captures
 * bytes transferred, total bytes (known up-front for uploads), and the response once available.
 */
class AWS_S3_TRANSFER_API UploadProgressSnapshot final : public ProgressSnapshot<UploadResponse> {
 public:
  using ProgressSnapshot<UploadResponse>::ProgressSnapshot;
};

}
}
}
