/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-discovery/MarketplaceDiscoveryServiceClientModel.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/ListListingAttributesRequest.h>
#include <aws/marketplace-discovery/model/ListListingAttributesResult.h>

namespace Aws {
namespace MarketplaceDiscovery {
namespace Pagination {

template <typename Client = MarketplaceDiscoveryClient>
struct ListListingAttributesPaginationTraits {
  using RequestType = Model::ListListingAttributesRequest;
  using ResultType = Model::ListListingAttributesResult;
  using OutcomeType = Model::ListListingAttributesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListListingAttributes(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MarketplaceDiscovery
}  // namespace Aws
