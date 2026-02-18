/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQueryServiceClientModel.h>
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/timestream-query/model/QueryRequest.h>
#include <aws/timestream-query/model/QueryResult.h>

namespace Aws {
namespace TimestreamQuery {
namespace Pagination {

template <typename Client = TimestreamQueryClient>
struct QueryPaginationTraits {
  using RequestType = Model::QueryRequest;
  using ResultType = Model::QueryResult;
  using OutcomeType = Model::QueryOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->Query(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace TimestreamQuery
}  // namespace Aws
