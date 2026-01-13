/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain-query/ManagedBlockchainQueryServiceClientModel.h>
#include <aws/managedblockchain-query/ManagedBlockchainQuery_EXPORTS.h>
#include <aws/managedblockchain-query/model/ListFilteredTransactionEventsRequest.h>
#include <aws/managedblockchain-query/model/ListFilteredTransactionEventsResult.h>

namespace Aws {
namespace ManagedBlockchainQuery {
namespace Pagination {

template <typename Client = ManagedBlockchainQueryClient>
struct ListFilteredTransactionEventsPaginationTraits {
  using RequestType = Model::ListFilteredTransactionEventsRequest;
  using ResultType = Model::ListFilteredTransactionEventsResult;
  using OutcomeType = Model::ListFilteredTransactionEventsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListFilteredTransactionEvents(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ManagedBlockchainQuery
}  // namespace Aws
