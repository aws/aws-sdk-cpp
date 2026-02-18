/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQueryServiceClientModel.h>
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/timestream-query/model/ListTagsForResourceRequest.h>
#include <aws/timestream-query/model/ListTagsForResourceResult.h>

namespace Aws {
namespace TimestreamQuery {
namespace Pagination {

template <typename Client = TimestreamQueryClient>
struct ListTagsForResourcePaginationTraits {
  using RequestType = Model::ListTagsForResourceRequest;
  using ResultType = Model::ListTagsForResourceResult;
  using OutcomeType = Model::ListTagsForResourceOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListTagsForResource(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace TimestreamQuery
}  // namespace Aws
