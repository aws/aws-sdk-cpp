/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-marketing/PartnerCentralMarketingServiceClientModel.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>
#include <aws/partnercentral-marketing/model/ListSocialConnectionsRequest.h>
#include <aws/partnercentral-marketing/model/ListSocialConnectionsResult.h>

namespace Aws {
namespace PartnerCentralMarketing {
namespace Pagination {

template <typename Client = PartnerCentralMarketingClient>
struct ListSocialConnectionsPaginationTraits {
  using RequestType = Model::ListSocialConnectionsRequest;
  using ResultType = Model::ListSocialConnectionsResult;
  using OutcomeType = Model::ListSocialConnectionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSocialConnections(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace PartnerCentralMarketing
}  // namespace Aws
