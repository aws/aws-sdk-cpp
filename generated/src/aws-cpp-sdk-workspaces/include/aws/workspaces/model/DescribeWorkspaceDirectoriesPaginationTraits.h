/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpacesServiceClientModel.h>
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/DescribeWorkspaceDirectoriesRequest.h>
#include <aws/workspaces/model/DescribeWorkspaceDirectoriesResult.h>

namespace Aws {
namespace WorkSpaces {
namespace Pagination {

template <typename Client = WorkSpacesClient>
struct DescribeWorkspaceDirectoriesPaginationTraits {
  using RequestType = Model::DescribeWorkspaceDirectoriesRequest;
  using ResultType = Model::DescribeWorkspaceDirectoriesResult;
  using OutcomeType = Model::DescribeWorkspaceDirectoriesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeWorkspaceDirectories(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace WorkSpaces
}  // namespace Aws
