/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/trustedadvisor/TrustedAdvisorServiceClientModel.h>
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>
#include <aws/trustedadvisor/model/ListRecommendationsRequest.h>
#include <aws/trustedadvisor/model/ListRecommendationsResult.h>

namespace Aws {
namespace TrustedAdvisor {
namespace Pagination {

template <typename Client = TrustedAdvisorClient>
struct ListRecommendationsPaginationTraits {
  using RequestType = Model::ListRecommendationsRequest;
  using ResultType = Model::ListRecommendationsResult;
  using OutcomeType = Model::ListRecommendationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRecommendations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace TrustedAdvisor
}  // namespace Aws
