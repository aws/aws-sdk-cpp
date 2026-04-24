/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/SyntheticsServiceClientModel.h>
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/synthetics/model/ListGroupResourcesRequest.h>
#include <aws/synthetics/model/ListGroupResourcesResult.h>

namespace Aws {
namespace Synthetics {
namespace Pagination {

template <typename Client = SyntheticsClient>
struct ListGroupResourcesPaginationTraits {
  using RequestType = Model::ListGroupResourcesRequest;
  using ResultType = Model::ListGroupResourcesResult;
  using OutcomeType = Model::ListGroupResourcesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListGroupResources(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Synthetics
}  // namespace Aws
