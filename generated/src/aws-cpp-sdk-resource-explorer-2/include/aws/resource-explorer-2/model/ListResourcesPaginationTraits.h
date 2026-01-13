/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2ServiceClientModel.h>
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/resource-explorer-2/model/ListResourcesRequest.h>
#include <aws/resource-explorer-2/model/ListResourcesResult.h>

namespace Aws {
namespace ResourceExplorer2 {
namespace Pagination {

template <typename Client = ResourceExplorer2Client>
struct ListResourcesPaginationTraits {
  using RequestType = Model::ListResourcesRequest;
  using ResultType = Model::ListResourcesResult;
  using OutcomeType = Model::ListResourcesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListResources(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ResourceExplorer2
}  // namespace Aws
