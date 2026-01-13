/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendationsServiceClientModel.h>
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/model/GetServerDetailsRequest.h>
#include <aws/migrationhubstrategy/model/GetServerDetailsResult.h>

namespace Aws {
namespace MigrationHubStrategyRecommendations {
namespace Pagination {

template <typename Client = MigrationHubStrategyRecommendationsClient>
struct GetServerDetailsPaginationTraits {
  using RequestType = Model::GetServerDetailsRequest;
  using ResultType = Model::GetServerDetailsResult;
  using OutcomeType = Model::GetServerDetailsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetServerDetails(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MigrationHubStrategyRecommendations
}  // namespace Aws
