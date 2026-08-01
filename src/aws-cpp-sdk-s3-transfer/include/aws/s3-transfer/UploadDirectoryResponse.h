/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/s3-transfer/S3Transfer_EXPORTS.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/Outcome.h>
#include <aws/s3/S3Errors.h>
#include <cstdint>

namespace Aws {
namespace S3 {
namespace Transfer {

/**
 * Response type returned via the UploadDirectoryHandle's future once the directory upload
 * completes. Per the S3 Transfer Manager SEP this is a summary: how many objects uploaded and how
 * many failed. Per-file failures are surfaced individually through the request's FailurePolicy
 * while the operation runs; this response is the final tally.
 *
 * The counts are set at construction time so a response is never in a half-populated state.
 */
class AWS_S3_TRANSFER_API UploadDirectoryResponse final {
 public:
  // Default constructor exists to satisfy Aws::Utils::Outcome<R, E>, which default-constructs
  // its R on the error path. On the success path the counts are always provided via the
  // constructor below; a default-constructed instance is unreachable through
  // UploadDirectoryOutcome because Outcome::GetResult() is only meaningful when IsSuccess().
  UploadDirectoryResponse() = default;

  UploadDirectoryResponse(uint64_t objectsUploaded, uint64_t objectsFailed)
      : m_objectsUploaded(objectsUploaded), m_objectsFailed(objectsFailed) {}

  inline uint64_t GetObjectsUploaded() const { return m_objectsUploaded; }
  inline uint64_t GetObjectsFailed() const { return m_objectsFailed; }

 private:
  uint64_t m_objectsUploaded = 0;
  uint64_t m_objectsFailed = 0;
};

using UploadDirectoryOutcome =
    Aws::Utils::Outcome<UploadDirectoryResponse, Aws::Client::AWSError<Aws::S3::S3Errors>>;

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
