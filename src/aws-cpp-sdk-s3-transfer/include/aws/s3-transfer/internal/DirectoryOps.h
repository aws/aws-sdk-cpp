/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/s3-transfer/DownloadDirectoryHandle.h>
#include <aws/s3-transfer/DownloadDirectoryRequest.h>
#include <aws/s3-transfer/UploadDirectoryHandle.h>
#include <aws/s3-transfer/UploadDirectoryRequest.h>

namespace Aws {
namespace S3 {
namespace Transfer {

class S3TransferManagerImpl;

namespace Internal {

/**
 * Drives directory upload and download by fanning out to the single-file dispatchers in
 * CrtOperations. Stays in C++ and never touches the CRT S3 API itself: it enumerates the work (a
 * local walk for upload, ListObjectsV2 paging for download), derives keys and paths, honors the
 * concurrency cap and the failure policy, and aggregates progress. The local walk goes through the
 * aws-crt-cpp TraverseDirectory binding; every network call goes through CrtOperations. Internal;
 * not part of the public API.
 *
 * Both entry points return immediately: enumeration and fan-out run on the manager's executor.
 */
class AWS_CORE_LOCAL DirectoryOps final {
 public:
  static UploadDirectoryHandle UploadDirectory(S3TransferManagerImpl& impl,
                                               const UploadDirectoryRequest& request);

  static DownloadDirectoryHandle DownloadDirectory(S3TransferManagerImpl& impl,
                                                   const DownloadDirectoryRequest& request);
};

}  // namespace Internal
}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
