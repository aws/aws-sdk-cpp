/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendationsServiceClientModel.h>
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/model/ListImportFileTaskRequest.h>
#include <aws/migrationhubstrategy/model/ListImportFileTaskResult.h>

namespace Aws {
namespace MigrationHubStrategyRecommendations {
namespace Pagination {

template <typename Client = MigrationHubStrategyRecommendationsClient>
struct ListImportFileTaskPaginationTraits {
  using RequestType = Model::ListImportFileTaskRequest;
  using ResultType = Model::ListImportFileTaskResult;
  using OutcomeType = Model::ListImportFileTaskOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListImportFileTask(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MigrationHubStrategyRecommendations
}  // namespace Aws
