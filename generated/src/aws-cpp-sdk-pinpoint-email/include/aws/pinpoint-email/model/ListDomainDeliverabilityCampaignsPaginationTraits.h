/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmailServiceClientModel.h>
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/model/ListDomainDeliverabilityCampaignsRequest.h>
#include <aws/pinpoint-email/model/ListDomainDeliverabilityCampaignsResult.h>

namespace Aws {
namespace PinpointEmail {
namespace Pagination {

template <typename Client = PinpointEmailClient>
struct ListDomainDeliverabilityCampaignsPaginationTraits {
  using RequestType = Model::ListDomainDeliverabilityCampaignsRequest;
  using ResultType = Model::ListDomainDeliverabilityCampaignsResult;
  using OutcomeType = Model::ListDomainDeliverabilityCampaignsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDomainDeliverabilityCampaigns(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace PinpointEmail
}  // namespace Aws
