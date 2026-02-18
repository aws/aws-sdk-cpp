/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rtbfabric/RTBFabricServiceClientModel.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/ListRequesterGatewaysRequest.h>
#include <aws/rtbfabric/model/ListRequesterGatewaysResult.h>

namespace Aws {
namespace RTBFabric {
namespace Pagination {

template <typename Client = RTBFabricClient>
struct ListRequesterGatewaysPaginationTraits {
  using RequestType = Model::ListRequesterGatewaysRequest;
  using ResultType = Model::ListRequesterGatewaysResult;
  using OutcomeType = Model::ListRequesterGatewaysOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRequesterGateways(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace RTBFabric
}  // namespace Aws
