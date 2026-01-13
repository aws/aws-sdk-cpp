/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSellingServiceClientModel.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/ListEngagementsRequest.h>
#include <aws/partnercentral-selling/model/ListEngagementsResult.h>

namespace Aws {
namespace PartnerCentralSelling {
namespace Pagination {

template <typename Client = PartnerCentralSellingClient>
struct ListEngagementsPaginationTraits {
  using RequestType = Model::ListEngagementsRequest;
  using ResultType = Model::ListEngagementsResult;
  using OutcomeType = Model::ListEngagementsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListEngagements(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace PartnerCentralSelling
}  // namespace Aws
