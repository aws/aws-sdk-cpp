/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUMServiceClientModel.h>
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/rum/model/ListAppMonitorsRequest.h>
#include <aws/rum/model/ListAppMonitorsResult.h>

namespace Aws {
namespace CloudWatchRUM {
namespace Pagination {

template <typename Client = CloudWatchRUMClient>
struct ListAppMonitorsPaginationTraits {
  using RequestType = Model::ListAppMonitorsRequest;
  using ResultType = Model::ListAppMonitorsResult;
  using OutcomeType = Model::ListAppMonitorsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAppMonitors(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CloudWatchRUM
}  // namespace Aws
