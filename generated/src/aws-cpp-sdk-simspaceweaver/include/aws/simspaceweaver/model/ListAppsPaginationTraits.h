/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/simspaceweaver/SimSpaceWeaverServiceClientModel.h>
#include <aws/simspaceweaver/SimSpaceWeaver_EXPORTS.h>
#include <aws/simspaceweaver/model/ListAppsRequest.h>
#include <aws/simspaceweaver/model/ListAppsResult.h>

namespace Aws {
namespace SimSpaceWeaver {
namespace Pagination {

template <typename Client = SimSpaceWeaverClient>
struct ListAppsPaginationTraits {
  using RequestType = Model::ListAppsRequest;
  using ResultType = Model::ListAppsResult;
  using OutcomeType = Model::ListAppsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListApps(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SimSpaceWeaver
}  // namespace Aws
