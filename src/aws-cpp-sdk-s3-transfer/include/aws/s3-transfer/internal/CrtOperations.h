/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/s3-transfer/UploadHandle.h>
#include <aws/s3-transfer/DownloadHandle.h>
#include <aws/s3-transfer/UploadRequest.h>
#include <aws/s3-transfer/DownloadRequest.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/S3Errors.h>
#include <aws/s3/model/ListObjectsV2Result.h>

namespace Aws {
namespace S3 {
namespace Transfer {

class S3TransferManagerImpl;

namespace Internal {

/**
 * Bridges TM 2.0 to the aws-crt-cpp S3 wrapper. Stays in C++; does not call
 * aws-c-s3 directly. Internal; not part of the public API.
 */
class AWS_CORE_LOCAL CrtOperations final {
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

  // One page of a bucket listing, or the error that ended it.
  using ListObjectsV2Outcome =
      Aws::Utils::Outcome<Aws::S3::Model::ListObjectsV2Result, Aws::Client::AWSError<Aws::S3::S3Errors>>;

  /**
   * Fetch a single ListObjectsV2 page as a CRT "Default"-type meta request and parse the XML body
   * into a ListObjectsV2Result. This is the only bucket-listing path directory downloads use.
   *
   * Unlike the dispatchers above it is synchronous: it blocks the caller until the page arrives.
   * That is safe because the only caller is the directory orchestrator, which already runs on the
   * manager's executor rather than a customer thread, and it lets paging read as a plain loop.
   *
   * @param impl the manager internals supplying the CRT client and endpoint provider.
   * @param bucket bucket to list.
   * @param prefix key prefix to list under; empty lists the whole bucket.
   * @param continuationToken token from a prior truncated page; empty for the first page.
   */
  static ListObjectsV2Outcome DispatchListObjectsV2(S3TransferManagerImpl& impl, const Aws::String& bucket,
                                                    const Aws::String& prefix,
                                                    const Aws::String& continuationToken);
};

}  // namespace Internal
}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
