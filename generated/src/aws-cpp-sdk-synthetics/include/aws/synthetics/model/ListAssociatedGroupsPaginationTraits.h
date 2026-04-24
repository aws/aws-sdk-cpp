/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/SyntheticsServiceClientModel.h>
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/synthetics/model/ListAssociatedGroupsRequest.h>
#include <aws/synthetics/model/ListAssociatedGroupsResult.h>

namespace Aws {
namespace Synthetics {
namespace Pagination {

template <typename Client = SyntheticsClient>
struct ListAssociatedGroupsPaginationTraits {
  using RequestType = Model::ListAssociatedGroupsRequest;
  using ResultType = Model::ListAssociatedGroupsResult;
  using OutcomeType = Model::ListAssociatedGroupsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAssociatedGroups(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Synthetics
}  // namespace Aws
