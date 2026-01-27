/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3ServiceClientModel.h>
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/ListDirectoryBucketsRequest.h>
#include <aws/s3/model/ListDirectoryBucketsResult.h>

namespace Aws {
namespace S3 {
class S3Client;
namespace Pagination {

struct ListDirectoryBucketsPaginationTraits {
  using RequestType = Model::ListDirectoryBucketsRequest;
  using ResultType = Model::ListDirectoryBucketsResult;
  using OutcomeType = Model::ListDirectoryBucketsOutcome;
  using ClientType = S3Client;

  template <typename Client = ClientType>
  static OutcomeType Invoke(Client& client, const RequestType& request) {
    return client.ListDirectoryBuckets(request);
  }

  static bool HasMoreResults(const ResultType& result) { return !result.GetContinuationToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) {
    request.SetContinuationToken(result.GetContinuationToken());
  }
};

}  // namespace Pagination
}  // namespace S3
}  // namespace Aws
