/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSellingServiceClientModel.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/ListSolutionsRequest.h>
#include <aws/partnercentral-selling/model/ListSolutionsResult.h>

namespace Aws {
namespace PartnerCentralSelling {
namespace Pagination {

template <typename Client = PartnerCentralSellingClient>
struct ListSolutionsPaginationTraits {
  using RequestType = Model::ListSolutionsRequest;
  using ResultType = Model::ListSolutionsResult;
  using OutcomeType = Model::ListSolutionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSolutions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace PartnerCentralSelling
}  // namespace Aws
