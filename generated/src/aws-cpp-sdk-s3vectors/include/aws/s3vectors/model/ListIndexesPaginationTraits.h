/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3vectors/S3VectorsServiceClientModel.h>
#include <aws/s3vectors/S3Vectors_EXPORTS.h>
#include <aws/s3vectors/model/ListIndexesRequest.h>
#include <aws/s3vectors/model/ListIndexesResult.h>

namespace Aws {
namespace S3Vectors {
namespace Pagination {

template <typename Client = S3VectorsClient>
struct ListIndexesPaginationTraits {
  using RequestType = Model::ListIndexesRequest;
  using ResultType = Model::ListIndexesResult;
  using OutcomeType = Model::ListIndexesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListIndexes(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace S3Vectors
}  // namespace Aws
