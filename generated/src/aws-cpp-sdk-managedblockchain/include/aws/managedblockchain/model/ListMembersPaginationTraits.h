/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchainServiceClientModel.h>
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/model/ListMembersRequest.h>
#include <aws/managedblockchain/model/ListMembersResult.h>

namespace Aws {
namespace ManagedBlockchain {
namespace Pagination {

template <typename Client = ManagedBlockchainClient>
struct ListMembersPaginationTraits {
  using RequestType = Model::ListMembersRequest;
  using ResultType = Model::ListMembersResult;
  using OutcomeType = Model::ListMembersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListMembers(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ManagedBlockchain
}  // namespace Aws
