/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PIServiceClientModel.h>
#include <aws/pi/PI_EXPORTS.h>
#include <aws/pi/model/ListAvailableResourceMetricsRequest.h>
#include <aws/pi/model/ListAvailableResourceMetricsResult.h>

namespace Aws {
namespace PI {
namespace Pagination {

template <typename Client = PIClient>
struct ListAvailableResourceMetricsPaginationTraits {
  using RequestType = Model::ListAvailableResourceMetricsRequest;
  using ResultType = Model::ListAvailableResourceMetricsResult;
  using OutcomeType = Model::ListAvailableResourceMetricsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAvailableResourceMetrics(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace PI
}  // namespace Aws
