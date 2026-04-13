/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-discovery/MarketplaceDiscoveryServiceClientModel.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/ListFulfillmentOptionsRequest.h>
#include <aws/marketplace-discovery/model/ListFulfillmentOptionsResult.h>

namespace Aws {
namespace MarketplaceDiscovery {
namespace Pagination {

template <typename Client = MarketplaceDiscoveryClient>
struct ListFulfillmentOptionsPaginationTraits {
  using RequestType = Model::ListFulfillmentOptionsRequest;
  using ResultType = Model::ListFulfillmentOptionsResult;
  using OutcomeType = Model::ListFulfillmentOptionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListFulfillmentOptions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MarketplaceDiscovery
}  // namespace Aws
