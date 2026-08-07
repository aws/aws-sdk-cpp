/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/s3-transfer/S3Transfer_EXPORTS.h>
#include <aws/s3-transfer/ProgressListener.h>
#include <aws/s3-transfer/FailurePolicy.h>
#include <aws/s3-transfer/UploadRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <cstdint>
#include <functional>
#include <memory>
#include <utility>

namespace Aws {
namespace S3 {
namespace Transfer {

/**
 * Default cap on how many per-file uploads a directory upload keeps in flight at once, per the S3
 * Transfer Manager SEP. This bounds the transfer manager's own fan-out and is independent of the
 * CRT's internal request queue.
 */
constexpr uint64_t DEFAULT_DIRECTORY_MAX_CONCURRENCY = 100;

/**
 * Request type for S3TransferManager::UploadDirectory. Every file under sourceDirectory becomes an
 * object whose key is the file's path relative to sourceDirectory, joined under s3Prefix, per the
 * SEP key-derivation rules. Bucket and source directory are required at construction time so an
 * unusable request cannot be built; everything else is optional and set through the chainable
 * setters below.
 *
 * Empty subdirectories produce no objects, since only regular files become objects.
 */
class AWS_S3_TRANSFER_API UploadDirectoryRequest final {
 public:
  /**
   * Invoked on each per-file UploadRequest the directory upload derives, before it is dispatched.
   * Lets the caller set storage class, metadata, ACLs, checksums, and so on per file using the same
   * setters a single-file upload uses. Bucket, key, and source path are already set; the request is
   * handed over by reference so the callback mutates it in place.
   */
  using UploadRequestTransformer = std::function<void(UploadRequest&)>;

  UploadDirectoryRequest(Aws::String bucket,
                         Aws::String sourceDirectory,
                         Aws::Vector<std::shared_ptr<UploadDirectoryProgressListener>> transferListeners = {});

  const Aws::String& GetBucket() const { return m_bucket; }
  const Aws::String& GetSourceDirectory() const { return m_sourceDirectory; }
  const Aws::Vector<std::shared_ptr<UploadDirectoryProgressListener>>& GetTransferListeners() const {
    return m_transferListeners;
  }

  /**
   * Key prefix prepended to every derived object key, joined to the file's relative path with a
   * single '/' regardless of whether the prefix already ends in one. Empty by default, so keys
   * mirror the directory layout at the bucket root.
   */
  const Aws::String& GetS3Prefix() const { return m_s3Prefix; }
  UploadDirectoryRequest& SetS3Prefix(Aws::String v);

  /**
   * Whether to descend into symbolic links. False by default, in which case a symlink is neither
   * descended into nor uploaded. When true, link targets are traversed and a directory cycle fails
   * the operation rather than looping.
   */
  bool GetFollowSymbolicLinks() const { return m_followSymbolicLinks; }
  UploadDirectoryRequest& SetFollowSymbolicLinks(bool v);

  /**
   * How deep to descend, where files directly inside sourceDirectory are depth 1. Zero, the
   * default, means unlimited.
   */
  uint32_t GetMaxDepth() const { return m_maxDepth; }
  UploadDirectoryRequest& SetMaxDepth(uint32_t v);

  /**
   * How many per-file uploads may be in flight at once. Defaults to
   * DEFAULT_DIRECTORY_MAX_CONCURRENCY; a value of zero is treated as one.
   */
  uint64_t GetMaxConcurrency() const { return m_maxConcurrency; }
  UploadDirectoryRequest& SetMaxConcurrency(uint64_t v);

  // Empty unless the caller installed one, in which case each derived request passes through it.
  const UploadRequestTransformer& GetUploadRequestTransformer() const { return m_uploadRequestTransformer; }
  UploadDirectoryRequest& SetUploadRequestTransformer(UploadRequestTransformer v);

  /**
   * Consulted after each per-file failure to decide whether the operation continues. Null means the
   * default, CancelAllFailurePolicy, under which the first failure stops the operation.
   */
  const std::shared_ptr<FailurePolicy>& GetFailurePolicy() const { return m_failurePolicy; }
  UploadDirectoryRequest& SetFailurePolicy(std::shared_ptr<FailurePolicy> v);

 private:
  Aws::String m_bucket;
  Aws::String m_sourceDirectory;
  Aws::String m_s3Prefix;
  Aws::Vector<std::shared_ptr<UploadDirectoryProgressListener>> m_transferListeners;
  UploadRequestTransformer m_uploadRequestTransformer;
  std::shared_ptr<FailurePolicy> m_failurePolicy;
  uint64_t m_maxConcurrency = DEFAULT_DIRECTORY_MAX_CONCURRENCY;
  uint32_t m_maxDepth = 0;
  bool m_followSymbolicLinks = false;
};

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
