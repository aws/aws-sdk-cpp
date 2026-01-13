/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHubServiceClientModel.h>
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/model/ListAppComponentRecommendationsRequest.h>
#include <aws/resiliencehub/model/ListAppComponentRecommendationsResult.h>

namespace Aws {
namespace ResilienceHub {
namespace Pagination {

template <typename Client = ResilienceHubClient>
struct ListAppComponentRecommendationsPaginationTraits {
  using RequestType = Model::ListAppComponentRecommendationsRequest;
  using ResultType = Model::ListAppComponentRecommendationsResult;
  using OutcomeType = Model::ListAppComponentRecommendationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAppComponentRecommendations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ResilienceHub
}  // namespace Aws
