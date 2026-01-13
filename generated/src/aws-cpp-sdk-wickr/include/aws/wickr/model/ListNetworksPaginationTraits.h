/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wickr/WickrServiceClientModel.h>
#include <aws/wickr/Wickr_EXPORTS.h>
#include <aws/wickr/model/ListNetworksRequest.h>
#include <aws/wickr/model/ListNetworksResult.h>

namespace Aws {
namespace Wickr {
namespace Pagination {

template <typename Client = WickrClient>
struct ListNetworksPaginationTraits {
  using RequestType = Model::ListNetworksRequest;
  using ResultType = Model::ListNetworksResult;
  using OutcomeType = Model::ListNetworksOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListNetworks(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Wickr
}  // namespace Aws
