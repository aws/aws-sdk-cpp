/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnectServiceClientModel.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/ListDestinationEndpointsRequest.h>
#include <aws/mediaconnect/model/ListDestinationEndpointsResult.h>

namespace Aws {
namespace MediaConnect {
namespace Pagination {

template <typename Client = MediaConnectClient>
struct ListDestinationEndpointsPaginationTraits {
  using RequestType = Model::ListDestinationEndpointsRequest;
  using ResultType = Model::ListDestinationEndpointsResult;
  using OutcomeType = Model::ListDestinationEndpointsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDestinationEndpoints(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MediaConnect
}  // namespace Aws
