/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/s3-transfer/S3Transfer_EXPORTS.h>
#include <aws/s3-transfer/ProgressListener.h>
#include <aws/s3-transfer/DownloadRequest.h>
#include <aws/s3-transfer/FailurePolicy.h>
#include <aws/s3-transfer/UploadDirectoryRequest.h>  // DEFAULT_DIRECTORY_MAX_CONCURRENCY
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3/model/Object.h>
#include <cstdint>
#include <functional>
#include <memory>
#include <utility>

namespace Aws {
namespace S3 {
namespace Transfer {

/**
 * Request type for S3TransferManager::DownloadDirectory. Every object under s3Prefix becomes a file
 * whose path relative to destinationDirectory mirrors the object key with s3Prefix stripped, per the
 * SEP path-derivation rules. Bucket and destination directory are required at construction time so
 * an unusable request cannot be built; everything else is optional and set through the chainable
 * setters below.
 *
 * Placeholder "folder" objects — zero-byte keys ending in '/' — are skipped, as are keys that would
 * resolve outside destinationDirectory.
 */
class AWS_S3_TRANSFER_API DownloadDirectoryRequest final {
 public:
  /**
   * Invoked on each listed object; return true to download it, false to skip it. Unset means
   * download everything.
   */
  using ObjectFilter = std::function<bool(const Aws::S3::Model::Object&)>;

  /**
   * Invoked on each per-file DownloadRequest the directory download derives, before it is
   * dispatched. Lets the caller set checksum mode, request payer, SSE-C parameters, and so on per
   * file using the same setters a single-file download uses. Bucket, key, and destination path are
   * already set; the request is handed over by reference so the callback mutates it in place.
   */
  using DownloadRequestTransformer = std::function<void(DownloadRequest&)>;

  DownloadDirectoryRequest(
      Aws::String bucket,
      Aws::String destinationDirectory,
      Aws::Vector<std::shared_ptr<DownloadDirectoryProgressListener>> transferListeners = {});

  const Aws::String& GetBucket() const { return m_bucket; }
  const Aws::String& GetDestinationDirectory() const { return m_destinationDirectory; }
  const Aws::Vector<std::shared_ptr<DownloadDirectoryProgressListener>>& GetTransferListeners() const {
    return m_transferListeners;
  }

  /**
   * The prefix to list under, and the prefix stripped from each key when deriving its local path.
   * Empty by default, so the whole bucket is downloaded mirroring the full key layout.
   */
  const Aws::String& GetS3Prefix() const { return m_s3Prefix; }
  DownloadDirectoryRequest& SetS3Prefix(Aws::String v);

  // Empty unless the caller installed one, in which case every listed object passes through it.
  const ObjectFilter& GetFilter() const { return m_filter; }
  DownloadDirectoryRequest& SetFilter(ObjectFilter v);

  // Empty unless the caller installed one, in which case each derived request passes through it.
  const DownloadRequestTransformer& GetDownloadRequestTransformer() const {
    return m_downloadRequestTransformer;
  }
  DownloadDirectoryRequest& SetDownloadRequestTransformer(DownloadRequestTransformer v);

  /**
   * How many per-file downloads may be in flight at once. Defaults to
   * DEFAULT_DIRECTORY_MAX_CONCURRENCY; a value of zero is treated as one.
   */
  uint64_t GetMaxConcurrency() const { return m_maxConcurrency; }
  DownloadDirectoryRequest& SetMaxConcurrency(uint64_t v);

  /**
   * Consulted after each per-file failure to decide whether the operation continues. Null means the
   * default, CancelAllFailurePolicy, under which the first failure stops the operation.
   */
  const std::shared_ptr<FailurePolicy>& GetFailurePolicy() const { return m_failurePolicy; }
  DownloadDirectoryRequest& SetFailurePolicy(std::shared_ptr<FailurePolicy> v);

 private:
  Aws::String m_bucket;
  Aws::String m_destinationDirectory;
  Aws::String m_s3Prefix;
  Aws::Vector<std::shared_ptr<DownloadDirectoryProgressListener>> m_transferListeners;
  ObjectFilter m_filter;
  DownloadRequestTransformer m_downloadRequestTransformer;
  std::shared_ptr<FailurePolicy> m_failurePolicy;
  uint64_t m_maxConcurrency = DEFAULT_DIRECTORY_MAX_CONCURRENCY;
};

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
