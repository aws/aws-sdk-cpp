/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-transfer/internal/CrtOperations.h>

namespace Aws {
namespace S3 {
namespace Transfer {
namespace Internal {
// need to fill in proper definitions in future phase

UploadHandle CrtOperations::DispatchUpload(S3TransferManagerImpl&, const UploadRequest&) {
  return UploadHandle();
}

DownloadHandle CrtOperations::DispatchDownload(S3TransferManagerImpl&, const DownloadRequest&) {
  return DownloadHandle();
}

}
}
}
}
