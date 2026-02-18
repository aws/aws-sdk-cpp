/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChainServiceClientModel.h>
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/supplychain/model/ListDataIntegrationEventsRequest.h>
#include <aws/supplychain/model/ListDataIntegrationEventsResult.h>

namespace Aws {
namespace SupplyChain {
namespace Pagination {

template <typename Client = SupplyChainClient>
struct ListDataIntegrationEventsPaginationTraits {
  using RequestType = Model::ListDataIntegrationEventsRequest;
  using ResultType = Model::ListDataIntegrationEventsResult;
  using OutcomeType = Model::ListDataIntegrationEventsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDataIntegrationEvents(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SupplyChain
}  // namespace Aws
