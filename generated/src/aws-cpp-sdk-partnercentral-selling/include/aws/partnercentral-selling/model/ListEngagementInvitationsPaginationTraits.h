/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSellingServiceClientModel.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/ListEngagementInvitationsRequest.h>
#include <aws/partnercentral-selling/model/ListEngagementInvitationsResult.h>

namespace Aws {
namespace PartnerCentralSelling {
namespace Pagination {

template <typename Client = PartnerCentralSellingClient>
struct ListEngagementInvitationsPaginationTraits {
  using RequestType = Model::ListEngagementInvitationsRequest;
  using ResultType = Model::ListEngagementInvitationsResult;
  using OutcomeType = Model::ListEngagementInvitationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListEngagementInvitations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace PartnerCentralSelling
}  // namespace Aws
