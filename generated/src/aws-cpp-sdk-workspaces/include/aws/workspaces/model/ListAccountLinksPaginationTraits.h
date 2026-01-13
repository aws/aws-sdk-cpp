/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpacesServiceClientModel.h>
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/ListAccountLinksRequest.h>
#include <aws/workspaces/model/ListAccountLinksResult.h>

namespace Aws {
namespace WorkSpaces {
namespace Pagination {

template <typename Client = WorkSpacesClient>
struct ListAccountLinksPaginationTraits {
  using RequestType = Model::ListAccountLinksRequest;
  using ResultType = Model::ListAccountLinksResult;
  using OutcomeType = Model::ListAccountLinksOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAccountLinks(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace WorkSpaces
}  // namespace Aws
