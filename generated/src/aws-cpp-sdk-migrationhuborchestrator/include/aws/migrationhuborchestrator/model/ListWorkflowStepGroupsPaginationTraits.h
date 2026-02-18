/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestratorServiceClientModel.h>
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/migrationhuborchestrator/model/ListWorkflowStepGroupsRequest.h>
#include <aws/migrationhuborchestrator/model/ListWorkflowStepGroupsResult.h>

namespace Aws {
namespace MigrationHubOrchestrator {
namespace Pagination {

template <typename Client = MigrationHubOrchestratorClient>
struct ListWorkflowStepGroupsPaginationTraits {
  using RequestType = Model::ListWorkflowStepGroupsRequest;
  using ResultType = Model::ListWorkflowStepGroupsResult;
  using OutcomeType = Model::ListWorkflowStepGroupsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListWorkflowStepGroups(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MigrationHubOrchestrator
}  // namespace Aws
