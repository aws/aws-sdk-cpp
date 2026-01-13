/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnectServiceClientModel.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/ListGatewayInstancesRequest.h>
#include <aws/mediaconnect/model/ListGatewayInstancesResult.h>

namespace Aws {
namespace MediaConnect {
namespace Pagination {

template <typename Client = MediaConnectClient>
struct ListGatewayInstancesPaginationTraits {
  using RequestType = Model::ListGatewayInstancesRequest;
  using ResultType = Model::ListGatewayInstancesResult;
  using OutcomeType = Model::ListGatewayInstancesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListGatewayInstances(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MediaConnect
}  // namespace Aws
