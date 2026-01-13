/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSellingServiceClientModel.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/ListOpportunitiesRequest.h>
#include <aws/partnercentral-selling/model/ListOpportunitiesResult.h>

namespace Aws {
namespace PartnerCentralSelling {
namespace Pagination {

template <typename Client = PartnerCentralSellingClient>
struct ListOpportunitiesPaginationTraits {
  using RequestType = Model::ListOpportunitiesRequest;
  using ResultType = Model::ListOpportunitiesResult;
  using OutcomeType = Model::ListOpportunitiesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListOpportunities(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace PartnerCentralSelling
}  // namespace Aws
