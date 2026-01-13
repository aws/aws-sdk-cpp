/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/trustedadvisor/TrustedAdvisorServiceClientModel.h>
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>
#include <aws/trustedadvisor/model/ListRecommendationResourcesRequest.h>
#include <aws/trustedadvisor/model/ListRecommendationResourcesResult.h>

namespace Aws {
namespace TrustedAdvisor {
namespace Pagination {

template <typename Client = TrustedAdvisorClient>
struct ListRecommendationResourcesPaginationTraits {
  using RequestType = Model::ListRecommendationResourcesRequest;
  using ResultType = Model::ListRecommendationResourcesResult;
  using OutcomeType = Model::ListRecommendationResourcesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRecommendationResources(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace TrustedAdvisor
}  // namespace Aws
