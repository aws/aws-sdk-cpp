/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-benefits/PartnerCentralBenefitsServiceClientModel.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefits_EXPORTS.h>
#include <aws/partnercentral-benefits/model/ListBenefitAllocationsRequest.h>
#include <aws/partnercentral-benefits/model/ListBenefitAllocationsResult.h>

namespace Aws {
namespace PartnerCentralBenefits {
namespace Pagination {

template <typename Client = PartnerCentralBenefitsClient>
struct ListBenefitAllocationsPaginationTraits {
  using RequestType = Model::ListBenefitAllocationsRequest;
  using ResultType = Model::ListBenefitAllocationsResult;
  using OutcomeType = Model::ListBenefitAllocationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListBenefitAllocations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace PartnerCentralBenefits
}  // namespace Aws
