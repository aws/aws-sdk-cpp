/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-marketing/PartnerCentralMarketingServiceClientModel.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>
#include <aws/partnercentral-marketing/model/ListCampaignAssetsRequest.h>
#include <aws/partnercentral-marketing/model/ListCampaignAssetsResult.h>

namespace Aws {
namespace PartnerCentralMarketing {
namespace Pagination {

template <typename Client = PartnerCentralMarketingClient>
struct ListCampaignAssetsPaginationTraits {
  using RequestType = Model::ListCampaignAssetsRequest;
  using ResultType = Model::ListCampaignAssetsResult;
  using OutcomeType = Model::ListCampaignAssetsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListCampaignAssets(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace PartnerCentralMarketing
}  // namespace Aws
