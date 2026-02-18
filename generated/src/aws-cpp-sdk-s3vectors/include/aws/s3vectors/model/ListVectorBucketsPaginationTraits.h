/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3vectors/S3VectorsServiceClientModel.h>
#include <aws/s3vectors/S3Vectors_EXPORTS.h>
#include <aws/s3vectors/model/ListVectorBucketsRequest.h>
#include <aws/s3vectors/model/ListVectorBucketsResult.h>

namespace Aws {
namespace S3Vectors {
namespace Pagination {

template <typename Client = S3VectorsClient>
struct ListVectorBucketsPaginationTraits {
  using RequestType = Model::ListVectorBucketsRequest;
  using ResultType = Model::ListVectorBucketsResult;
  using OutcomeType = Model::ListVectorBucketsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListVectorBuckets(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace S3Vectors
}  // namespace Aws
