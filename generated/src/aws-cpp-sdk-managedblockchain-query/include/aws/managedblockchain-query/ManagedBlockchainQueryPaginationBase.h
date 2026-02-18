/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/managedblockchain-query/model/ListAssetContractsPaginationTraits.h>
#include <aws/managedblockchain-query/model/ListFilteredTransactionEventsPaginationTraits.h>
#include <aws/managedblockchain-query/model/ListTokenBalancesPaginationTraits.h>
#include <aws/managedblockchain-query/model/ListTransactionEventsPaginationTraits.h>
#include <aws/managedblockchain-query/model/ListTransactionsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace ManagedBlockchainQuery {

class ManagedBlockchainQueryClient;

template <typename DerivedClient>
class ManagedBlockchainQueryPaginationBase {
 public:
  /**
   * Create a paginator for ListAssetContracts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssetContractsRequest,
                                    Pagination::ListAssetContractsPaginationTraits<DerivedClient>>
  ListAssetContractsPaginator(const Model::ListAssetContractsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssetContractsRequest,
                                             Pagination::ListAssetContractsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListFilteredTransactionEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFilteredTransactionEventsRequest,
                                    Pagination::ListFilteredTransactionEventsPaginationTraits<DerivedClient>>
  ListFilteredTransactionEventsPaginator(const Model::ListFilteredTransactionEventsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFilteredTransactionEventsRequest,
                                             Pagination::ListFilteredTransactionEventsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTokenBalances operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTokenBalancesRequest,
                                    Pagination::ListTokenBalancesPaginationTraits<DerivedClient>>
  ListTokenBalancesPaginator(const Model::ListTokenBalancesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTokenBalancesRequest,
                                             Pagination::ListTokenBalancesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTransactionEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTransactionEventsRequest,
                                    Pagination::ListTransactionEventsPaginationTraits<DerivedClient>>
  ListTransactionEventsPaginator(const Model::ListTransactionEventsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTransactionEventsRequest,
                                             Pagination::ListTransactionEventsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTransactions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTransactionsRequest,
                                    Pagination::ListTransactionsPaginationTraits<DerivedClient>>
  ListTransactionsPaginator(const Model::ListTransactionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTransactionsRequest,
                                             Pagination::ListTransactionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }
};
}  // namespace ManagedBlockchainQuery
}  // namespace Aws
