/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-benefits/PartnerCentralBenefitsServiceClientModel.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefits_EXPORTS.h>
#include <aws/partnercentral-benefits/model/ListBenefitApplicationsRequest.h>
#include <aws/partnercentral-benefits/model/ListBenefitApplicationsResult.h>

namespace Aws {
namespace PartnerCentralBenefits {
namespace Pagination {

template <typename Client = PartnerCentralBenefitsClient>
struct ListBenefitApplicationsPaginationTraits {
  using RequestType = Model::ListBenefitApplicationsRequest;
  using ResultType = Model::ListBenefitApplicationsResult;
  using OutcomeType = Model::ListBenefitApplicationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListBenefitApplications(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace PartnerCentralBenefits
}  // namespace Aws
