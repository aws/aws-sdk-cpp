/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatchServiceClientModel.h>
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/model/ListManagedInsightRulesRequest.h>
#include <aws/monitoring/model/ListManagedInsightRulesResult.h>

namespace Aws {
namespace CloudWatch {
namespace Pagination {

template <typename Client = CloudWatchClient>
struct ListManagedInsightRulesPaginationTraits {
  using RequestType = Model::ListManagedInsightRulesRequest;
  using ResultType = Model::ListManagedInsightRulesResult;
  using OutcomeType = Model::ListManagedInsightRulesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListManagedInsightRules(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CloudWatch
}  // namespace Aws
