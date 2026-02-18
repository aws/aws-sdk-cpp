/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PIServiceClientModel.h>
#include <aws/pi/PI_EXPORTS.h>
#include <aws/pi/model/GetResourceMetricsRequest.h>
#include <aws/pi/model/GetResourceMetricsResult.h>

namespace Aws {
namespace PI {
namespace Pagination {

template <typename Client = PIClient>
struct GetResourceMetricsPaginationTraits {
  using RequestType = Model::GetResourceMetricsRequest;
  using ResultType = Model::GetResourceMetricsResult;
  using OutcomeType = Model::GetResourceMetricsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetResourceMetrics(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace PI
}  // namespace Aws
