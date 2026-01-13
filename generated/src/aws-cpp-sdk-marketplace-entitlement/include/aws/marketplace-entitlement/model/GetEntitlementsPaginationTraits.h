/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-entitlement/MarketplaceEntitlementServiceServiceClientModel.h>
#include <aws/marketplace-entitlement/MarketplaceEntitlementService_EXPORTS.h>
#include <aws/marketplace-entitlement/model/GetEntitlementsRequest.h>
#include <aws/marketplace-entitlement/model/GetEntitlementsResult.h>

namespace Aws {
namespace MarketplaceEntitlementService {
namespace Pagination {

template <typename Client = MarketplaceEntitlementServiceClient>
struct GetEntitlementsPaginationTraits {
  using RequestType = Model::GetEntitlementsRequest;
  using ResultType = Model::GetEntitlementsResult;
  using OutcomeType = Model::GetEntitlementsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetEntitlements(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MarketplaceEntitlementService
}  // namespace Aws
