/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/managedblockchain/model/ListAccessorsPaginationTraits.h>
#include <aws/managedblockchain/model/ListInvitationsPaginationTraits.h>
#include <aws/managedblockchain/model/ListMembersPaginationTraits.h>
#include <aws/managedblockchain/model/ListNetworksPaginationTraits.h>
#include <aws/managedblockchain/model/ListNodesPaginationTraits.h>
#include <aws/managedblockchain/model/ListProposalVotesPaginationTraits.h>
#include <aws/managedblockchain/model/ListProposalsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace ManagedBlockchain {

class ManagedBlockchainClient;

template <typename DerivedClient>
class ManagedBlockchainPaginationBase {
 public:
  /**
   * Create a paginator for ListAccessors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessorsRequest, Pagination::ListAccessorsPaginationTraits<DerivedClient>>
  ListAccessorsPaginator(const Model::ListAccessorsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessorsRequest,
                                             Pagination::ListAccessorsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListInvitations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInvitationsRequest,
                                    Pagination::ListInvitationsPaginationTraits<DerivedClient>>
  ListInvitationsPaginator(const Model::ListInvitationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInvitationsRequest,
                                             Pagination::ListInvitationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListMembers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMembersRequest, Pagination::ListMembersPaginationTraits<DerivedClient>>
  ListMembersPaginator(const Model::ListMembersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMembersRequest,
                                             Pagination::ListMembersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListNetworks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNetworksRequest, Pagination::ListNetworksPaginationTraits<DerivedClient>>
  ListNetworksPaginator(const Model::ListNetworksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNetworksRequest,
                                             Pagination::ListNetworksPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListNodes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNodesRequest, Pagination::ListNodesPaginationTraits<DerivedClient>>
  ListNodesPaginator(const Model::ListNodesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNodesRequest, Pagination::ListNodesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListProposals operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProposalsRequest, Pagination::ListProposalsPaginationTraits<DerivedClient>>
  ListProposalsPaginator(const Model::ListProposalsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProposalsRequest,
                                             Pagination::ListProposalsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListProposalVotes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProposalVotesRequest,
                                    Pagination::ListProposalVotesPaginationTraits<DerivedClient>>
  ListProposalVotesPaginator(const Model::ListProposalVotesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProposalVotesRequest,
                                             Pagination::ListProposalVotesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace ManagedBlockchain
}  // namespace Aws
