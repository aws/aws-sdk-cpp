/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChainServiceClientModel.h>
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/supplychain/model/ListDataIntegrationFlowExecutionsRequest.h>
#include <aws/supplychain/model/ListDataIntegrationFlowExecutionsResult.h>

namespace Aws {
namespace SupplyChain {
namespace Pagination {

template <typename Client = SupplyChainClient>
struct ListDataIntegrationFlowExecutionsPaginationTraits {
  using RequestType = Model::ListDataIntegrationFlowExecutionsRequest;
  using ResultType = Model::ListDataIntegrationFlowExecutionsResult;
  using OutcomeType = Model::ListDataIntegrationFlowExecutionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDataIntegrationFlowExecutions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SupplyChain
}  // namespace Aws
