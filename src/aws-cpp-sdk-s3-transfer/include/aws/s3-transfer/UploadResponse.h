/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/s3-transfer/S3Transfer_EXPORTS.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/Outcome.h>
#include <aws/s3/S3Errors.h>
#include <aws/s3/model/PutObjectResult.h>
#include <utility>

namespace Aws {
namespace S3 {
namespace Transfer {

/**
 * Response type returned via the UploadHandle's future once the transfer completes. Wraps
 * the underlying S3 PutObjectResult, populated from either the single PutObject response
 * or the CompleteMultipartUpload response depending on the path taken.
 */
class AWS_S3_TRANSFER_API UploadResponse {
 public:
  inline const Aws::S3::Model::PutObjectResult& GetS3Result() const { return m_s3Result; }
  inline bool S3ResultHasBeenSet() const { return m_s3ResultHasBeenSet; }
  template <typename S3ResultT = Aws::S3::Model::PutObjectResult>
  void SetS3Result(S3ResultT&& s3Result) {
    m_s3ResultHasBeenSet = true;
    m_s3Result = std::forward<S3ResultT>(s3Result);
  }
  template <typename S3ResultT = Aws::S3::Model::PutObjectResult>
  UploadResponse& WithS3Result(S3ResultT&& s3Result) {
    SetS3Result(std::forward<S3ResultT>(s3Result));
    return *this;
  }

 private:
  Aws::S3::Model::PutObjectResult m_s3Result;
  bool m_s3ResultHasBeenSet = false;
};

typedef Aws::Utils::Outcome<UploadResponse, Aws::Client::AWSError<Aws::S3::S3Errors>> UploadOutcome;

}
}
}
