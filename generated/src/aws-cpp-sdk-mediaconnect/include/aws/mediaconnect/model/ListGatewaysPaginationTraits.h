/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnectServiceClientModel.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/ListGatewaysRequest.h>
#include <aws/mediaconnect/model/ListGatewaysResult.h>

namespace Aws {
namespace MediaConnect {
namespace Pagination {

template <typename Client = MediaConnectClient>
struct ListGatewaysPaginationTraits {
  using RequestType = Model::ListGatewaysRequest;
  using ResultType = Model::ListGatewaysResult;
  using OutcomeType = Model::ListGatewaysOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListGateways(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MediaConnect
}  // namespace Aws
