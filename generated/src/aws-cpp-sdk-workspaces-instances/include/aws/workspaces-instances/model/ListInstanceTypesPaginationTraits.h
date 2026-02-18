/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-instances/WorkspacesInstancesServiceClientModel.h>
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/workspaces-instances/model/ListInstanceTypesRequest.h>
#include <aws/workspaces-instances/model/ListInstanceTypesResult.h>

namespace Aws {
namespace WorkspacesInstances {
namespace Pagination {

template <typename Client = WorkspacesInstancesClient>
struct ListInstanceTypesPaginationTraits {
  using RequestType = Model::ListInstanceTypesRequest;
  using ResultType = Model::ListInstanceTypesResult;
  using OutcomeType = Model::ListInstanceTypesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListInstanceTypes(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace WorkspacesInstances
}  // namespace Aws
