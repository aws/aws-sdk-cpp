/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroupsServiceClientModel.h>
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/resource-groups/model/ListGroupResourcesRequest.h>
#include <aws/resource-groups/model/ListGroupResourcesResult.h>

namespace Aws {
namespace ResourceGroups {
namespace Pagination {

template <typename Client = ResourceGroupsClient>
struct ListGroupResourcesPaginationTraits {
  using RequestType = Model::ListGroupResourcesRequest;
  using ResultType = Model::ListGroupResourcesResult;
  using OutcomeType = Model::ListGroupResourcesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListGroupResources(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ResourceGroups
}  // namespace Aws
