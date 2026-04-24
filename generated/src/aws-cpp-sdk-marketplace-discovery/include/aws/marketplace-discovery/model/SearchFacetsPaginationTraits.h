/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-discovery/MarketplaceDiscoveryServiceClientModel.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/SearchFacetsRequest.h>
#include <aws/marketplace-discovery/model/SearchFacetsResult.h>

namespace Aws {
namespace MarketplaceDiscovery {
namespace Pagination {

template <typename Client = MarketplaceDiscoveryClient>
struct SearchFacetsPaginationTraits {
  using RequestType = Model::SearchFacetsRequest;
  using ResultType = Model::SearchFacetsResult;
  using OutcomeType = Model::SearchFacetsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->SearchFacets(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MarketplaceDiscovery
}  // namespace Aws
