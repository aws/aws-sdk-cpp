/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/managedblockchain/ManagedBlockchainClient.h>
#include <aws/managedblockchain/model/ListAccessorsPaginationTraits.h>
#include <aws/managedblockchain/model/ListInvitationsPaginationTraits.h>
#include <aws/managedblockchain/model/ListMembersPaginationTraits.h>
#include <aws/managedblockchain/model/ListNetworksPaginationTraits.h>
#include <aws/managedblockchain/model/ListNodesPaginationTraits.h>
#include <aws/managedblockchain/model/ListProposalVotesPaginationTraits.h>
#include <aws/managedblockchain/model/ListProposalsPaginationTraits.h>

namespace Aws {
namespace ManagedBlockchain {

using ListAccessorsPaginator = Aws::Utils::Pagination::Paginator<ManagedBlockchainClient, Model::ListAccessorsRequest,
                                                                 Pagination::ListAccessorsPaginationTraits<ManagedBlockchainClient>>;
using ListInvitationsPaginator = Aws::Utils::Pagination::Paginator<ManagedBlockchainClient, Model::ListInvitationsRequest,
                                                                   Pagination::ListInvitationsPaginationTraits<ManagedBlockchainClient>>;
using ListMembersPaginator = Aws::Utils::Pagination::Paginator<ManagedBlockchainClient, Model::ListMembersRequest,
                                                               Pagination::ListMembersPaginationTraits<ManagedBlockchainClient>>;
using ListNetworksPaginator = Aws::Utils::Pagination::Paginator<ManagedBlockchainClient, Model::ListNetworksRequest,
                                                                Pagination::ListNetworksPaginationTraits<ManagedBlockchainClient>>;
using ListNodesPaginator = Aws::Utils::Pagination::Paginator<ManagedBlockchainClient, Model::ListNodesRequest,
                                                             Pagination::ListNodesPaginationTraits<ManagedBlockchainClient>>;
using ListProposalsPaginator = Aws::Utils::Pagination::Paginator<ManagedBlockchainClient, Model::ListProposalsRequest,
                                                                 Pagination::ListProposalsPaginationTraits<ManagedBlockchainClient>>;
using ListProposalVotesPaginator =
    Aws::Utils::Pagination::Paginator<ManagedBlockchainClient, Model::ListProposalVotesRequest,
                                      Pagination::ListProposalVotesPaginationTraits<ManagedBlockchainClient>>;

}  // namespace ManagedBlockchain
}  // namespace Aws
