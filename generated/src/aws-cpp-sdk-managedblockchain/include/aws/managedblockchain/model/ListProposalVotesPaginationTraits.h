/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchainServiceClientModel.h>
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/model/ListProposalVotesRequest.h>
#include <aws/managedblockchain/model/ListProposalVotesResult.h>

namespace Aws {
namespace ManagedBlockchain {
namespace Pagination {

template <typename Client = ManagedBlockchainClient>
struct ListProposalVotesPaginationTraits {
  using RequestType = Model::ListProposalVotesRequest;
  using ResultType = Model::ListProposalVotesResult;
  using OutcomeType = Model::ListProposalVotesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListProposalVotes(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ManagedBlockchain
}  // namespace Aws
