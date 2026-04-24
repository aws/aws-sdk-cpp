/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchainServiceClientModel.h>
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/model/ListProposalsRequest.h>
#include <aws/managedblockchain/model/ListProposalsResult.h>

namespace Aws {
namespace ManagedBlockchain {
namespace Pagination {

template <typename Client = ManagedBlockchainClient>
struct ListProposalsPaginationTraits {
  using RequestType = Model::ListProposalsRequest;
  using ResultType = Model::ListProposalsResult;
  using OutcomeType = Model::ListProposalsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListProposals(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ManagedBlockchain
}  // namespace Aws
