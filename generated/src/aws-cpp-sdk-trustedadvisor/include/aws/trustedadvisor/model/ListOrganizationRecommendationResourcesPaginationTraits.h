/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/trustedadvisor/TrustedAdvisorServiceClientModel.h>
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>
#include <aws/trustedadvisor/model/ListOrganizationRecommendationResourcesRequest.h>
#include <aws/trustedadvisor/model/ListOrganizationRecommendationResourcesResult.h>

namespace Aws {
namespace TrustedAdvisor {
namespace Pagination {

template <typename Client = TrustedAdvisorClient>
struct ListOrganizationRecommendationResourcesPaginationTraits {
  using RequestType = Model::ListOrganizationRecommendationResourcesRequest;
  using ResultType = Model::ListOrganizationRecommendationResourcesResult;
  using OutcomeType = Model::ListOrganizationRecommendationResourcesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListOrganizationRecommendationResources(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace TrustedAdvisor
}  // namespace Aws
