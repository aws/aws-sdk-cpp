/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/s3-transfer/S3Transfer_EXPORTS.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/Outcome.h>
#include <aws/s3/S3Errors.h>
#include <aws/s3/model/GetObjectResult.h>
#include <utility>

namespace Aws {
namespace S3 {
namespace Transfer {

/**
 * Response type returned via the DownloadHandle's future once the transfer completes. Wraps the
 * underlying S3 GetObjectResult with whole-object content length and range. The S3 result is set
 * at construction time so a DownloadResponse is never in a half-populated state; access it via
 * GetS3Result().
 */
class AWS_S3_TRANSFER_API DownloadResponse final {
 public:
  // Default constructor exists to satisfy Aws::Utils::Outcome<R, E>, which default-constructs
  // its R on the error path. On the success path the S3 result is always provided via the
  // constructor below; a default-constructed instance is unreachable through DownloadOutcome
  // because Outcome::GetResult() is only meaningful when IsSuccess() is true.
  DownloadResponse() = default;

  explicit DownloadResponse(Aws::S3::Model::GetObjectResult s3Result)
    : m_s3Result(std::move(s3Result)) {}

  inline const Aws::S3::Model::GetObjectResult& GetS3Result() const { return m_s3Result; }

 private:
  Aws::S3::Model::GetObjectResult m_s3Result;
};

using DownloadOutcome = Aws::Utils::Outcome<DownloadResponse, Aws::Client::AWSError<Aws::S3::S3Errors>>;

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
