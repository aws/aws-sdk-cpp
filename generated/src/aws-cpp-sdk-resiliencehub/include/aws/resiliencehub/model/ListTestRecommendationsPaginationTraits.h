/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHubServiceClientModel.h>
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/model/ListTestRecommendationsRequest.h>
#include <aws/resiliencehub/model/ListTestRecommendationsResult.h>

namespace Aws {
namespace ResilienceHub {
namespace Pagination {

template <typename Client = ResilienceHubClient>
struct ListTestRecommendationsPaginationTraits {
  using RequestType = Model::ListTestRecommendationsRequest;
  using ResultType = Model::ListTestRecommendationsResult;
  using OutcomeType = Model::ListTestRecommendationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListTestRecommendations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ResilienceHub
}  // namespace Aws
