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

class AWS_S3_TRANSFER_API DownloadProgressSnapshot final : public ProgressSnapshot<DownloadResponse> {
 public:
  using ProgressSnapshot<DownloadResponse>::ProgressSnapshot;
};

}
}
}
