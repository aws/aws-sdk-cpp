/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3Client.h>
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/ListDirectoryBucketsRequest.h>
#include <aws/s3/model/ListDirectoryBucketsResult.h>

namespace Aws {
namespace S3 {
namespace Pagination {

struct ListDirectoryBucketsPaginationTraits {
  using RequestType = Model::ListDirectoryBucketsRequest;
  using ResultType = Model::ListDirectoryBucketsResult;
  using OutcomeType = Model::ListDirectoryBucketsOutcome;
  using ClientType = S3Client;

  static OutcomeType Invoke(ClientType& client, const RequestType& request) { return client.ListDirectoryBuckets(request); }

  static bool HasMoreResults(const ResultType& result) { return result.GetIsTruncated(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) {
    request.SetContinuationToken(result.GetContinuationToken());
  }
};

}  // namespace Pagination
}  // namespace S3
}  // namespace Aws
