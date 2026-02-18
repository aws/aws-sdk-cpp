/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2ServiceClientModel.h>
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/resource-explorer-2/model/GetResourceExplorerSetupRequest.h>
#include <aws/resource-explorer-2/model/GetResourceExplorerSetupResult.h>

namespace Aws {
namespace ResourceExplorer2 {
namespace Pagination {

template <typename Client = ResourceExplorer2Client>
struct GetResourceExplorerSetupPaginationTraits {
  using RequestType = Model::GetResourceExplorerSetupRequest;
  using ResultType = Model::GetResourceExplorerSetupResult;
  using OutcomeType = Model::GetResourceExplorerSetupOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetResourceExplorerSetup(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ResourceExplorer2
}  // namespace Aws
