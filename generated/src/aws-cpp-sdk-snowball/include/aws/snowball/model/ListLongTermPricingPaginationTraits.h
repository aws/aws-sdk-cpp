/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/SnowballServiceClientModel.h>
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/model/ListLongTermPricingRequest.h>
#include <aws/snowball/model/ListLongTermPricingResult.h>

namespace Aws {
namespace Snowball {
namespace Pagination {

template <typename Client = SnowballClient>
struct ListLongTermPricingPaginationTraits {
  using RequestType = Model::ListLongTermPricingRequest;
  using ResultType = Model::ListLongTermPricingResult;
  using OutcomeType = Model::ListLongTermPricingOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListLongTermPricing(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Snowball
}  // namespace Aws
