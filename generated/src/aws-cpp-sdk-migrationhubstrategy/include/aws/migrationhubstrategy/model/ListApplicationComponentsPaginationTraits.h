/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendationsServiceClientModel.h>
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/model/ListApplicationComponentsRequest.h>
#include <aws/migrationhubstrategy/model/ListApplicationComponentsResult.h>

namespace Aws {
namespace MigrationHubStrategyRecommendations {
namespace Pagination {

template <typename Client = MigrationHubStrategyRecommendationsClient>
struct ListApplicationComponentsPaginationTraits {
  using RequestType = Model::ListApplicationComponentsRequest;
  using ResultType = Model::ListApplicationComponentsResult;
  using OutcomeType = Model::ListApplicationComponentsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListApplicationComponents(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MigrationHubStrategyRecommendations
}  // namespace Aws
