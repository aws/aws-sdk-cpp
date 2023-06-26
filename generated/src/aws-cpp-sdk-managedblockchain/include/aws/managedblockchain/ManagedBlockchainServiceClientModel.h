/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/managedblockchain/ManagedBlockchainErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/managedblockchain/ManagedBlockchainEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ManagedBlockchainClient header */
#include <aws/managedblockchain/model/CreateAccessorResult.h>
#include <aws/managedblockchain/model/CreateMemberResult.h>
#include <aws/managedblockchain/model/CreateNetworkResult.h>
#include <aws/managedblockchain/model/CreateNodeResult.h>
#include <aws/managedblockchain/model/CreateProposalResult.h>
#include <aws/managedblockchain/model/DeleteAccessorResult.h>
#include <aws/managedblockchain/model/DeleteMemberResult.h>
#include <aws/managedblockchain/model/DeleteNodeResult.h>
#include <aws/managedblockchain/model/GetAccessorResult.h>
#include <aws/managedblockchain/model/GetMemberResult.h>
#include <aws/managedblockchain/model/GetNetworkResult.h>
#include <aws/managedblockchain/model/GetNodeResult.h>
#include <aws/managedblockchain/model/GetProposalResult.h>
#include <aws/managedblockchain/model/ListAccessorsResult.h>
#include <aws/managedblockchain/model/ListInvitationsResult.h>
#include <aws/managedblockchain/model/ListMembersResult.h>
#include <aws/managedblockchain/model/ListNetworksResult.h>
#include <aws/managedblockchain/model/ListNodesResult.h>
#include <aws/managedblockchain/model/ListProposalVotesResult.h>
#include <aws/managedblockchain/model/ListProposalsResult.h>
#include <aws/managedblockchain/model/ListTagsForResourceResult.h>
#include <aws/managedblockchain/model/RejectInvitationResult.h>
#include <aws/managedblockchain/model/TagResourceResult.h>
#include <aws/managedblockchain/model/UntagResourceResult.h>
#include <aws/managedblockchain/model/UpdateMemberResult.h>
#include <aws/managedblockchain/model/UpdateNodeResult.h>
#include <aws/managedblockchain/model/VoteOnProposalResult.h>
/* End of service model headers required in ManagedBlockchainClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace ManagedBlockchain
  {
    using ManagedBlockchainClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ManagedBlockchainEndpointProviderBase = Aws::ManagedBlockchain::Endpoint::ManagedBlockchainEndpointProviderBase;
    using ManagedBlockchainEndpointProvider = Aws::ManagedBlockchain::Endpoint::ManagedBlockchainEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ManagedBlockchainClient header */
      class CreateAccessorRequest;
      class CreateMemberRequest;
      class CreateNetworkRequest;
      class CreateNodeRequest;
      class CreateProposalRequest;
      class DeleteAccessorRequest;
      class DeleteMemberRequest;
      class DeleteNodeRequest;
      class GetAccessorRequest;
      class GetMemberRequest;
      class GetNetworkRequest;
      class GetNodeRequest;
      class GetProposalRequest;
      class ListAccessorsRequest;
      class ListInvitationsRequest;
      class ListMembersRequest;
      class ListNetworksRequest;
      class ListNodesRequest;
      class ListProposalVotesRequest;
      class ListProposalsRequest;
      class ListTagsForResourceRequest;
      class RejectInvitationRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateMemberRequest;
      class UpdateNodeRequest;
      class VoteOnProposalRequest;
      /* End of service model forward declarations required in ManagedBlockchainClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateAccessorResult, ManagedBlockchainError> CreateAccessorOutcome;
      typedef Aws::Utils::Outcome<CreateMemberResult, ManagedBlockchainError> CreateMemberOutcome;
      typedef Aws::Utils::Outcome<CreateNetworkResult, ManagedBlockchainError> CreateNetworkOutcome;
      typedef Aws::Utils::Outcome<CreateNodeResult, ManagedBlockchainError> CreateNodeOutcome;
      typedef Aws::Utils::Outcome<CreateProposalResult, ManagedBlockchainError> CreateProposalOutcome;
      typedef Aws::Utils::Outcome<DeleteAccessorResult, ManagedBlockchainError> DeleteAccessorOutcome;
      typedef Aws::Utils::Outcome<DeleteMemberResult, ManagedBlockchainError> DeleteMemberOutcome;
      typedef Aws::Utils::Outcome<DeleteNodeResult, ManagedBlockchainError> DeleteNodeOutcome;
      typedef Aws::Utils::Outcome<GetAccessorResult, ManagedBlockchainError> GetAccessorOutcome;
      typedef Aws::Utils::Outcome<GetMemberResult, ManagedBlockchainError> GetMemberOutcome;
      typedef Aws::Utils::Outcome<GetNetworkResult, ManagedBlockchainError> GetNetworkOutcome;
      typedef Aws::Utils::Outcome<GetNodeResult, ManagedBlockchainError> GetNodeOutcome;
      typedef Aws::Utils::Outcome<GetProposalResult, ManagedBlockchainError> GetProposalOutcome;
      typedef Aws::Utils::Outcome<ListAccessorsResult, ManagedBlockchainError> ListAccessorsOutcome;
      typedef Aws::Utils::Outcome<ListInvitationsResult, ManagedBlockchainError> ListInvitationsOutcome;
      typedef Aws::Utils::Outcome<ListMembersResult, ManagedBlockchainError> ListMembersOutcome;
      typedef Aws::Utils::Outcome<ListNetworksResult, ManagedBlockchainError> ListNetworksOutcome;
      typedef Aws::Utils::Outcome<ListNodesResult, ManagedBlockchainError> ListNodesOutcome;
      typedef Aws::Utils::Outcome<ListProposalVotesResult, ManagedBlockchainError> ListProposalVotesOutcome;
      typedef Aws::Utils::Outcome<ListProposalsResult, ManagedBlockchainError> ListProposalsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, ManagedBlockchainError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<RejectInvitationResult, ManagedBlockchainError> RejectInvitationOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, ManagedBlockchainError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, ManagedBlockchainError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateMemberResult, ManagedBlockchainError> UpdateMemberOutcome;
      typedef Aws::Utils::Outcome<UpdateNodeResult, ManagedBlockchainError> UpdateNodeOutcome;
      typedef Aws::Utils::Outcome<VoteOnProposalResult, ManagedBlockchainError> VoteOnProposalOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateAccessorOutcome> CreateAccessorOutcomeCallable;
      typedef std::future<CreateMemberOutcome> CreateMemberOutcomeCallable;
      typedef std::future<CreateNetworkOutcome> CreateNetworkOutcomeCallable;
      typedef std::future<CreateNodeOutcome> CreateNodeOutcomeCallable;
      typedef std::future<CreateProposalOutcome> CreateProposalOutcomeCallable;
      typedef std::future<DeleteAccessorOutcome> DeleteAccessorOutcomeCallable;
      typedef std::future<DeleteMemberOutcome> DeleteMemberOutcomeCallable;
      typedef std::future<DeleteNodeOutcome> DeleteNodeOutcomeCallable;
      typedef std::future<GetAccessorOutcome> GetAccessorOutcomeCallable;
      typedef std::future<GetMemberOutcome> GetMemberOutcomeCallable;
      typedef std::future<GetNetworkOutcome> GetNetworkOutcomeCallable;
      typedef std::future<GetNodeOutcome> GetNodeOutcomeCallable;
      typedef std::future<GetProposalOutcome> GetProposalOutcomeCallable;
      typedef std::future<ListAccessorsOutcome> ListAccessorsOutcomeCallable;
      typedef std::future<ListInvitationsOutcome> ListInvitationsOutcomeCallable;
      typedef std::future<ListMembersOutcome> ListMembersOutcomeCallable;
      typedef std::future<ListNetworksOutcome> ListNetworksOutcomeCallable;
      typedef std::future<ListNodesOutcome> ListNodesOutcomeCallable;
      typedef std::future<ListProposalVotesOutcome> ListProposalVotesOutcomeCallable;
      typedef std::future<ListProposalsOutcome> ListProposalsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<RejectInvitationOutcome> RejectInvitationOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateMemberOutcome> UpdateMemberOutcomeCallable;
      typedef std::future<UpdateNodeOutcome> UpdateNodeOutcomeCallable;
      typedef std::future<VoteOnProposalOutcome> VoteOnProposalOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ManagedBlockchainClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ManagedBlockchainClient*, const Model::CreateAccessorRequest&, const Model::CreateAccessorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAccessorResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::CreateMemberRequest&, const Model::CreateMemberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMemberResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::CreateNetworkRequest&, const Model::CreateNetworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNetworkResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::CreateNodeRequest&, const Model::CreateNodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNodeResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::CreateProposalRequest&, const Model::CreateProposalOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProposalResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::DeleteAccessorRequest&, const Model::DeleteAccessorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccessorResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::DeleteMemberRequest&, const Model::DeleteMemberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMemberResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::DeleteNodeRequest&, const Model::DeleteNodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNodeResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::GetAccessorRequest&, const Model::GetAccessorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccessorResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::GetMemberRequest&, const Model::GetMemberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMemberResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::GetNetworkRequest&, const Model::GetNetworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetNetworkResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::GetNodeRequest&, const Model::GetNodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetNodeResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::GetProposalRequest&, const Model::GetProposalOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProposalResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::ListAccessorsRequest&, const Model::ListAccessorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccessorsResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::ListInvitationsRequest&, const Model::ListInvitationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInvitationsResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::ListMembersRequest&, const Model::ListMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMembersResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::ListNetworksRequest&, const Model::ListNetworksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNetworksResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::ListNodesRequest&, const Model::ListNodesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNodesResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::ListProposalVotesRequest&, const Model::ListProposalVotesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProposalVotesResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::ListProposalsRequest&, const Model::ListProposalsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProposalsResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::RejectInvitationRequest&, const Model::RejectInvitationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectInvitationResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::UpdateMemberRequest&, const Model::UpdateMemberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMemberResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::UpdateNodeRequest&, const Model::UpdateNodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateNodeResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::VoteOnProposalRequest&, const Model::VoteOnProposalOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > VoteOnProposalResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ManagedBlockchain
} // namespace Aws
