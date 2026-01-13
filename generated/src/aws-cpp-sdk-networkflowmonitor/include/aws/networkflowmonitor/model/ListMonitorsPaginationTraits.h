/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkflowmonitor/NetworkFlowMonitorServiceClientModel.h>
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/networkflowmonitor/model/ListMonitorsRequest.h>
#include <aws/networkflowmonitor/model/ListMonitorsResult.h>

namespace Aws {
namespace NetworkFlowMonitor {
namespace Pagination {

template <typename Client = NetworkFlowMonitorClient>
struct ListMonitorsPaginationTraits {
  using RequestType = Model::ListMonitorsRequest;
  using ResultType = Model::ListMonitorsResult;
  using OutcomeType = Model::ListMonitorsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListMonitors(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace NetworkFlowMonitor
}  // namespace Aws
