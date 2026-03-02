/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3CrtServiceClientModel.h>
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/model/ListDirectoryBucketsRequest.h>
#include <aws/s3-crt/model/ListDirectoryBucketsResult.h>

namespace Aws {
namespace S3Crt {
namespace Pagination {

template <typename Client = S3CrtClient>
struct ListDirectoryBucketsPaginationTraits {
  using RequestType = Model::ListDirectoryBucketsRequest;
  using ResultType = Model::ListDirectoryBucketsResult;
  using OutcomeType = Model::ListDirectoryBucketsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDirectoryBuckets(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetContinuationToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) {
    request.SetContinuationToken(result.GetContinuationToken());
  }
};

}  // namespace Pagination
}  // namespace S3Crt
}  // namespace Aws
