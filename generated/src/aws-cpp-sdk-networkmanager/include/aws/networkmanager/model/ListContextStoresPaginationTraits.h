/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManagerServiceClientModel.h>
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/ListContextStoresRequest.h>
#include <aws/networkmanager/model/ListContextStoresResult.h>

namespace Aws {
namespace NetworkManager {
namespace Pagination {

template <typename Client = NetworkManagerClient>
struct ListContextStoresPaginationTraits {
  using RequestType = Model::ListContextStoresRequest;
  using ResultType = Model::ListContextStoresResult;
  using OutcomeType = Model::ListContextStoresOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListContextStores(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace NetworkManager
}  // namespace Aws
