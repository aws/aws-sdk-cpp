/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraphServiceClientModel.h>
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/neptune-graph/model/ListPrivateGraphEndpointsRequest.h>
#include <aws/neptune-graph/model/ListPrivateGraphEndpointsResult.h>

namespace Aws {
namespace NeptuneGraph {
namespace Pagination {

template <typename Client = NeptuneGraphClient>
struct ListPrivateGraphEndpointsPaginationTraits {
  using RequestType = Model::ListPrivateGraphEndpointsRequest;
  using ResultType = Model::ListPrivateGraphEndpointsResult;
  using OutcomeType = Model::ListPrivateGraphEndpointsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListPrivateGraphEndpoints(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace NeptuneGraph
}  // namespace Aws
