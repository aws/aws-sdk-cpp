/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/s3-transfer/UploadHandle.h>
#include <aws/s3-transfer/DownloadHandle.h>
#include <aws/s3-transfer/UploadRequest.h>
#include <aws/s3-transfer/DownloadRequest.h>

namespace Aws {
namespace S3 {
namespace Transfer {

class S3TransferManagerImpl;

namespace Internal {

class CrtOperations final {
 public:
  static UploadHandle DispatchUpload(S3TransferManagerImpl& impl, const UploadRequest& request);
  static DownloadHandle DispatchDownload(S3TransferManagerImpl& impl, const DownloadRequest& request);
};

}
}
}
}
