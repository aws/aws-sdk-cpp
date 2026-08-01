/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/s3-transfer/S3Transfer_EXPORTS.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/S3Errors.h>
#include <memory>

namespace Aws {
namespace S3 {
namespace Transfer {

/**
 * Describes a single per-file failure encountered during a directory transfer. Passed to the
 * FailurePolicy so it can decide whether the directory operation should keep going or stop.
 *
 * For an upload, key is the derived S3 object key and localPath is the source file on disk. For a
 * download, key is the S3 object key and localPath is the destination file that would have been
 * written. error carries the underlying per-file failure.
 */
struct FailureContext {
  Aws::String key;
  Aws::String localPath;
  Aws::Client::AWSError<Aws::S3::S3Errors> error;
};

/**
 * Policy consulted once per failed file during a directory upload or download. The directory
 * operation invokes ShouldContinue after each file that fails; returning true lets the operation
 * proceed with the remaining files, and returning false makes it stop and cancel any in-flight
 * per-file transfers.
 *
 * A policy instance may be shared across concurrent per-file failures, so ShouldContinue must be
 * safe to call from multiple threads. The two built-in policies below are stateless and therefore
 * trivially thread-safe.
 *
 * Note: this governs per-file failures only. A failure to enumerate the work at all (the local
 * directory cannot be traversed, or the bucket listing fails) always fails the whole directory
 * operation regardless of the policy.
 */
class AWS_S3_TRANSFER_API FailurePolicy {
 public:
  virtual ~FailurePolicy() = default;

  /**
   * @param context the file that failed and why.
   * @return true to continue with the remaining files, false to stop the directory operation.
   */
  virtual bool ShouldContinue(const FailureContext& context) = 0;
};

/**
 * Default policy: the first per-file failure stops the whole directory operation. Any per-file
 * transfers already in flight are cancelled.
 */
class AWS_S3_TRANSFER_API CancelAllFailurePolicy final : public FailurePolicy {
 public:
  bool ShouldContinue(const FailureContext& /*context*/) override { return false; }
};

/**
 * Lenient policy: per-file failures are counted but never stop the operation, so every file is
 * attempted. The failed count is reflected in the directory response.
 */
class AWS_S3_TRANSFER_API ContinueOnFailurePolicy final : public FailurePolicy {
 public:
  bool ShouldContinue(const FailureContext& /*context*/) override { return true; }
};

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
