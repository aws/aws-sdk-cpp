/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pricing-plan-manager/PricingPlanManagerServiceClientModel.h>
#include <aws/pricing-plan-manager/PricingPlanManager_EXPORTS.h>
#include <aws/pricing-plan-manager/model/ListSubscriptionsRequest.h>
#include <aws/pricing-plan-manager/model/ListSubscriptionsResult.h>

namespace Aws {
namespace PricingPlanManager {
namespace Pagination {

template <typename Client = PricingPlanManagerClient>
struct ListSubscriptionsPaginationTraits {
  using RequestType = Model::ListSubscriptionsRequest;
  using ResultType = Model::ListSubscriptionsResult;
  using OutcomeType = Model::ListSubscriptionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSubscriptions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace PricingPlanManager
}  // namespace Aws
