/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManagerServiceClientModel.h>
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/ListCoreNetworkRoutingInformationRequest.h>
#include <aws/networkmanager/model/ListCoreNetworkRoutingInformationResult.h>

namespace Aws {
namespace NetworkManager {
namespace Pagination {

template <typename Client = NetworkManagerClient>
struct ListCoreNetworkRoutingInformationPaginationTraits {
  using RequestType = Model::ListCoreNetworkRoutingInformationRequest;
  using ResultType = Model::ListCoreNetworkRoutingInformationResult;
  using OutcomeType = Model::ListCoreNetworkRoutingInformationOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListCoreNetworkRoutingInformation(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace NetworkManager
}  // namespace Aws
