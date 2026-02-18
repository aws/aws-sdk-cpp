/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroupsServiceClientModel.h>
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/resource-groups/model/ListGroupingStatusesRequest.h>
#include <aws/resource-groups/model/ListGroupingStatusesResult.h>

namespace Aws {
namespace ResourceGroups {
namespace Pagination {

template <typename Client = ResourceGroupsClient>
struct ListGroupingStatusesPaginationTraits {
  using RequestType = Model::ListGroupingStatusesRequest;
  using ResultType = Model::ListGroupingStatusesResult;
  using OutcomeType = Model::ListGroupingStatusesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListGroupingStatuses(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ResourceGroups
}  // namespace Aws
