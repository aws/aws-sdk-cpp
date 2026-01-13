/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/repostspace/RepostspaceServiceClientModel.h>
#include <aws/repostspace/Repostspace_EXPORTS.h>
#include <aws/repostspace/model/ListSpacesRequest.h>
#include <aws/repostspace/model/ListSpacesResult.h>

namespace Aws {
namespace repostspace {
namespace Pagination {

template <typename Client = RepostspaceClient>
struct ListSpacesPaginationTraits {
  using RequestType = Model::ListSpacesRequest;
  using ResultType = Model::ListSpacesResult;
  using OutcomeType = Model::ListSpacesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSpaces(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace repostspace
}  // namespace Aws
