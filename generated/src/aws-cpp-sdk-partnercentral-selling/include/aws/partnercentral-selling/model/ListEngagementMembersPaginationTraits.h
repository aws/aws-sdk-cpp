/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSellingServiceClientModel.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/ListEngagementMembersRequest.h>
#include <aws/partnercentral-selling/model/ListEngagementMembersResult.h>

namespace Aws {
namespace PartnerCentralSelling {
namespace Pagination {

template <typename Client = PartnerCentralSellingClient>
struct ListEngagementMembersPaginationTraits {
  using RequestType = Model::ListEngagementMembersRequest;
  using ResultType = Model::ListEngagementMembersResult;
  using OutcomeType = Model::ListEngagementMembersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListEngagementMembers(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace PartnerCentralSelling
}  // namespace Aws
