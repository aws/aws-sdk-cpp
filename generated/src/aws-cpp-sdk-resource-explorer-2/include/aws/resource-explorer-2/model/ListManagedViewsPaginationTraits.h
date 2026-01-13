/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2ServiceClientModel.h>
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/resource-explorer-2/model/ListManagedViewsRequest.h>
#include <aws/resource-explorer-2/model/ListManagedViewsResult.h>

namespace Aws {
namespace ResourceExplorer2 {
namespace Pagination {

template <typename Client = ResourceExplorer2Client>
struct ListManagedViewsPaginationTraits {
  using RequestType = Model::ListManagedViewsRequest;
  using ResultType = Model::ListManagedViewsResult;
  using OutcomeType = Model::ListManagedViewsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListManagedViews(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ResourceExplorer2
}  // namespace Aws
