/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestratorServiceClientModel.h>
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/migrationhuborchestrator/model/ListPluginsRequest.h>
#include <aws/migrationhuborchestrator/model/ListPluginsResult.h>

namespace Aws {
namespace MigrationHubOrchestrator {
namespace Pagination {

template <typename Client = MigrationHubOrchestratorClient>
struct ListPluginsPaginationTraits {
  using RequestType = Model::ListPluginsRequest;
  using ResultType = Model::ListPluginsResult;
  using OutcomeType = Model::ListPluginsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListPlugins(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MigrationHubOrchestrator
}  // namespace Aws
