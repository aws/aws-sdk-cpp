/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3ServiceClientModel.h>
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/ListObjectsV2Request.h>
#include <aws/s3/model/ListObjectsV2Result.h>

namespace Aws {
namespace S3 {
namespace Pagination {

template <typename Client = S3Client>
struct ListObjectsV2PaginationTraits {
  using RequestType = Model::ListObjectsV2Request;
  using ResultType = Model::ListObjectsV2Result;
  using OutcomeType = Model::ListObjectsV2Outcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListObjectsV2(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextContinuationToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) {
    request.SetContinuationToken(result.GetNextContinuationToken());
  }
};

}  // namespace Pagination
}  // namespace S3
}  // namespace Aws
