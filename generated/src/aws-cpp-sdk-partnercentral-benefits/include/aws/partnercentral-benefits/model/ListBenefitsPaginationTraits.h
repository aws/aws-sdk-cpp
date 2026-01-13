/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-benefits/PartnerCentralBenefitsServiceClientModel.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefits_EXPORTS.h>
#include <aws/partnercentral-benefits/model/ListBenefitsRequest.h>
#include <aws/partnercentral-benefits/model/ListBenefitsResult.h>

namespace Aws {
namespace PartnerCentralBenefits {
namespace Pagination {

template <typename Client = PartnerCentralBenefitsClient>
struct ListBenefitsPaginationTraits {
  using RequestType = Model::ListBenefitsRequest;
  using ResultType = Model::ListBenefitsResult;
  using OutcomeType = Model::ListBenefitsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListBenefits(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace PartnerCentralBenefits
}  // namespace Aws
