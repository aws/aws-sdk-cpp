/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroupsServiceClientModel.h>
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/resource-groups/model/SearchResourcesRequest.h>
#include <aws/resource-groups/model/SearchResourcesResult.h>

namespace Aws {
namespace ResourceGroups {
namespace Pagination {

template <typename Client = ResourceGroupsClient>
struct SearchResourcesPaginationTraits {
  using RequestType = Model::SearchResourcesRequest;
  using ResultType = Model::SearchResourcesResult;
  using OutcomeType = Model::SearchResourcesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->SearchResources(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ResourceGroups
}  // namespace Aws
