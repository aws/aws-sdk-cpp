/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkflowmonitor/NetworkFlowMonitorServiceClientModel.h>
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/networkflowmonitor/model/GetQueryResultsPerformanceMonitorRequest.h>
#include <aws/networkflowmonitor/model/GetQueryResultsPerformanceMonitorResult.h>

namespace Aws {
namespace NetworkFlowMonitor {
namespace Pagination {

template <typename Client = NetworkFlowMonitorClient>
struct GetQueryResultsPerformanceMonitorPaginationTraits {
  using RequestType = Model::GetQueryResultsPerformanceMonitorRequest;
  using ResultType = Model::GetQueryResultsPerformanceMonitorResult;
  using OutcomeType = Model::GetQueryResultsPerformanceMonitorOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetQueryResultsPerformanceMonitor(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace NetworkFlowMonitor
}  // namespace Aws
