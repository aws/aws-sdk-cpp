/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-marketing/PartnerCentralMarketingServiceClientModel.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>
#include <aws/partnercentral-marketing/model/SearchCampaignTemplatesRequest.h>
#include <aws/partnercentral-marketing/model/SearchCampaignTemplatesResult.h>

namespace Aws {
namespace PartnerCentralMarketing {
namespace Pagination {

template <typename Client = PartnerCentralMarketingClient>
struct SearchCampaignTemplatesPaginationTraits {
  using RequestType = Model::SearchCampaignTemplatesRequest;
  using ResultType = Model::SearchCampaignTemplatesResult;
  using OutcomeType = Model::SearchCampaignTemplatesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->SearchCampaignTemplates(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace PartnerCentralMarketing
}  // namespace Aws
