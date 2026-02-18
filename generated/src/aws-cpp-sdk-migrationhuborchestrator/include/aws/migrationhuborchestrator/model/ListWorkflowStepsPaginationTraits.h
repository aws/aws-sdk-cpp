/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestratorServiceClientModel.h>
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/migrationhuborchestrator/model/ListWorkflowStepsRequest.h>
#include <aws/migrationhuborchestrator/model/ListWorkflowStepsResult.h>

namespace Aws {
namespace MigrationHubOrchestrator {
namespace Pagination {

template <typename Client = MigrationHubOrchestratorClient>
struct ListWorkflowStepsPaginationTraits {
  using RequestType = Model::ListWorkflowStepsRequest;
  using ResultType = Model::ListWorkflowStepsResult;
  using OutcomeType = Model::ListWorkflowStepsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListWorkflowSteps(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MigrationHubOrchestrator
}  // namespace Aws
