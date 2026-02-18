/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroupsServiceClientModel.h>
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/resource-groups/model/ListTagSyncTasksRequest.h>
#include <aws/resource-groups/model/ListTagSyncTasksResult.h>

namespace Aws {
namespace ResourceGroups {
namespace Pagination {

template <typename Client = ResourceGroupsClient>
struct ListTagSyncTasksPaginationTraits {
  using RequestType = Model::ListTagSyncTasksRequest;
  using ResultType = Model::ListTagSyncTasksResult;
  using OutcomeType = Model::ListTagSyncTasksOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListTagSyncTasks(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ResourceGroups
}  // namespace Aws
