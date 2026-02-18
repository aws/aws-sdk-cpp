/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkflowmonitor/NetworkFlowMonitorServiceClientModel.h>
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/networkflowmonitor/model/ListScopesRequest.h>
#include <aws/networkflowmonitor/model/ListScopesResult.h>

namespace Aws {
namespace NetworkFlowMonitor {
namespace Pagination {

template <typename Client = NetworkFlowMonitorClient>
struct ListScopesPaginationTraits {
  using RequestType = Model::ListScopesRequest;
  using ResultType = Model::ListScopesResult;
  using OutcomeType = Model::ListScopesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListScopes(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace NetworkFlowMonitor
}  // namespace Aws
