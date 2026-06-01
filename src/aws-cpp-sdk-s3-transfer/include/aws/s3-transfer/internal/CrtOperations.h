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

/**
   * Bridges TM 2.0 to the aws-crt-cpp S3 wrapper. Stays in C++; does not call
   * aws-c-s3 directly. Internal; not part of the public API.
  */
class CrtOperations final {

 public:
  /**
   * Dispatch an upload as a CRT meta request. Returns a handle bound to the
   * in-flight request.
   */
  static UploadHandle DispatchUpload(S3TransferManagerImpl& impl, const UploadRequest& request);

  /**
   * Dispatch a download as a CRT meta request. Returns a handle bound to the
   * in-flight request.
   */
  static DownloadHandle DispatchDownload(S3TransferManagerImpl& impl, const DownloadRequest& request);
};

}
}
}
}
