/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/managedblockchain-query/ManagedBlockchainQueryClient.h>
#include <aws/managedblockchain-query/model/ListAssetContractsPaginationTraits.h>
#include <aws/managedblockchain-query/model/ListFilteredTransactionEventsPaginationTraits.h>
#include <aws/managedblockchain-query/model/ListTokenBalancesPaginationTraits.h>
#include <aws/managedblockchain-query/model/ListTransactionEventsPaginationTraits.h>
#include <aws/managedblockchain-query/model/ListTransactionsPaginationTraits.h>

namespace Aws {
namespace ManagedBlockchainQuery {

using ListAssetContractsPaginator =
    Aws::Utils::Pagination::Paginator<ManagedBlockchainQueryClient, Model::ListAssetContractsRequest,
                                      Pagination::ListAssetContractsPaginationTraits<ManagedBlockchainQueryClient>>;
using ListFilteredTransactionEventsPaginator =
    Aws::Utils::Pagination::Paginator<ManagedBlockchainQueryClient, Model::ListFilteredTransactionEventsRequest,
                                      Pagination::ListFilteredTransactionEventsPaginationTraits<ManagedBlockchainQueryClient>>;
using ListTokenBalancesPaginator =
    Aws::Utils::Pagination::Paginator<ManagedBlockchainQueryClient, Model::ListTokenBalancesRequest,
                                      Pagination::ListTokenBalancesPaginationTraits<ManagedBlockchainQueryClient>>;
using ListTransactionEventsPaginator =
    Aws::Utils::Pagination::Paginator<ManagedBlockchainQueryClient, Model::ListTransactionEventsRequest,
                                      Pagination::ListTransactionEventsPaginationTraits<ManagedBlockchainQueryClient>>;
using ListTransactionsPaginator =
    Aws::Utils::Pagination::Paginator<ManagedBlockchainQueryClient, Model::ListTransactionsRequest,
                                      Pagination::ListTransactionsPaginationTraits<ManagedBlockchainQueryClient>>;

}  // namespace ManagedBlockchainQuery
}  // namespace Aws
