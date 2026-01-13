/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-instances/WorkspacesInstancesServiceClientModel.h>
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/workspaces-instances/model/ListWorkspaceInstancesRequest.h>
#include <aws/workspaces-instances/model/ListWorkspaceInstancesResult.h>

namespace Aws {
namespace WorkspacesInstances {
namespace Pagination {

template <typename Client = WorkspacesInstancesClient>
struct ListWorkspaceInstancesPaginationTraits {
  using RequestType = Model::ListWorkspaceInstancesRequest;
  using ResultType = Model::ListWorkspaceInstancesResult;
  using OutcomeType = Model::ListWorkspaceInstancesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListWorkspaceInstances(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace WorkspacesInstances
}  // namespace Aws
