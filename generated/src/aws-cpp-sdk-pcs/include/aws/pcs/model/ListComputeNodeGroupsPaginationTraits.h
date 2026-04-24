/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCSServiceClientModel.h>
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/pcs/model/ListComputeNodeGroupsRequest.h>
#include <aws/pcs/model/ListComputeNodeGroupsResult.h>

namespace Aws {
namespace PCS {
namespace Pagination {

template <typename Client = PCSClient>
struct ListComputeNodeGroupsPaginationTraits {
  using RequestType = Model::ListComputeNodeGroupsRequest;
  using ResultType = Model::ListComputeNodeGroupsResult;
  using OutcomeType = Model::ListComputeNodeGroupsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListComputeNodeGroups(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace PCS
}  // namespace Aws
