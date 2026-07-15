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
 * Response type returned via the DownloadHandle's future once the transfer completes. Wraps
 * the underlying S3 GetObjectResult with whole-object content length and range, regardless
 * of how many ranged GETs were issued internally.
 */
class AWS_S3_TRANSFER_API DownloadResponse final {
 public:
  inline const Aws::S3::Model::GetObjectResult& GetS3Result() const { return m_s3Result; }
  inline bool S3ResultHasBeenSet() const { return m_s3ResultHasBeenSet; }
  template <typename GetObjectResultT = Aws::S3::Model::GetObjectResult>
  void SetS3Result(GetObjectResultT&& getS3Result) {
    m_s3ResultHasBeenSet = true;
    m_s3Result = std::forward<GetObjectResultT>(getS3Result);
  }

 private:
  Aws::S3::Model::GetObjectResult m_s3Result;
  bool m_s3ResultHasBeenSet = false;
};

using DownloadOutcome = Aws::Utils::Outcome<DownloadResponse, Aws::Client::AWSError<Aws::S3::S3Errors>>;

}
}
}
