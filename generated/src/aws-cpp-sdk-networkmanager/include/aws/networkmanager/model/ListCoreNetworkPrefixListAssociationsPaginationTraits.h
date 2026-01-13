/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManagerServiceClientModel.h>
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/ListCoreNetworkPrefixListAssociationsRequest.h>
#include <aws/networkmanager/model/ListCoreNetworkPrefixListAssociationsResult.h>

namespace Aws {
namespace NetworkManager {
namespace Pagination {

template <typename Client = NetworkManagerClient>
struct ListCoreNetworkPrefixListAssociationsPaginationTraits {
  using RequestType = Model::ListCoreNetworkPrefixListAssociationsRequest;
  using ResultType = Model::ListCoreNetworkPrefixListAssociationsResult;
  using OutcomeType = Model::ListCoreNetworkPrefixListAssociationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListCoreNetworkPrefixListAssociations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace NetworkManager
}  // namespace Aws
