/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-marketing/PartnerCentralMarketingServiceClientModel.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>
#include <aws/partnercentral-marketing/model/ListCampaignsRequest.h>
#include <aws/partnercentral-marketing/model/ListCampaignsResult.h>

namespace Aws {
namespace PartnerCentralMarketing {
namespace Pagination {

template <typename Client = PartnerCentralMarketingClient>
struct ListCampaignsPaginationTraits {
  using RequestType = Model::ListCampaignsRequest;
  using ResultType = Model::ListCampaignsResult;
  using OutcomeType = Model::ListCampaignsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListCampaigns(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace PartnerCentralMarketing
}  // namespace Aws
