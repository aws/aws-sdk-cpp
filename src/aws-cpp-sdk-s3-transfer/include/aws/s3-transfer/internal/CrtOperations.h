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
 * Translates TM 2.0 request types into aws-c-s3 meta request options, dispatches
 * the meta request, and routes CRT callbacks back into TM 2.0 listener events.
 * Internal to the s3-transfer package; not part of the public API.
 */
class CrtOperations {
  // need to fill in proper definitions in future phase
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
