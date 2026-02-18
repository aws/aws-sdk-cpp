/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraphServiceClientModel.h>
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/neptune-graph/model/ListGraphsRequest.h>
#include <aws/neptune-graph/model/ListGraphsResult.h>

namespace Aws {
namespace NeptuneGraph {
namespace Pagination {

template <typename Client = NeptuneGraphClient>
struct ListGraphsPaginationTraits {
  using RequestType = Model::ListGraphsRequest;
  using ResultType = Model::ListGraphsResult;
  using OutcomeType = Model::ListGraphsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListGraphs(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace NeptuneGraph
}  // namespace Aws
