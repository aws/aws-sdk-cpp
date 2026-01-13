/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnectServiceClientModel.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/ListRouterOutputsRequest.h>
#include <aws/mediaconnect/model/ListRouterOutputsResult.h>

namespace Aws {
namespace MediaConnect {
namespace Pagination {

template <typename Client = MediaConnectClient>
struct ListRouterOutputsPaginationTraits {
  using RequestType = Model::ListRouterOutputsRequest;
  using ResultType = Model::ListRouterOutputsResult;
  using OutcomeType = Model::ListRouterOutputsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRouterOutputs(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MediaConnect
}  // namespace Aws
