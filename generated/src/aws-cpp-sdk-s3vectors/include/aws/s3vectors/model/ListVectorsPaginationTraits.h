/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3vectors/S3VectorsServiceClientModel.h>
#include <aws/s3vectors/S3Vectors_EXPORTS.h>
#include <aws/s3vectors/model/ListVectorsRequest.h>
#include <aws/s3vectors/model/ListVectorsResult.h>

namespace Aws {
namespace S3Vectors {
namespace Pagination {

template <typename Client = S3VectorsClient>
struct ListVectorsPaginationTraits {
  using RequestType = Model::ListVectorsRequest;
  using ResultType = Model::ListVectorsResult;
  using OutcomeType = Model::ListVectorsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListVectors(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace S3Vectors
}  // namespace Aws
