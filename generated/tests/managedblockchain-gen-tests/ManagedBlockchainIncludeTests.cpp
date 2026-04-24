/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/managedblockchain/ManagedBlockchainClient.h>
#include <aws/managedblockchain/ManagedBlockchainEndpointProvider.h>
#include <aws/managedblockchain/ManagedBlockchainEndpointRules.h>
#include <aws/managedblockchain/ManagedBlockchainErrorMarshaller.h>
#include <aws/managedblockchain/ManagedBlockchainErrors.h>
#include <aws/managedblockchain/ManagedBlockchainRequest.h>
#include <aws/managedblockchain/ManagedBlockchainServiceClientModel.h>
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/model/Accessor.h>
#include <aws/managedblockchain/model/AccessorNetworkType.h>
#include <aws/managedblockchain/model/AccessorStatus.h>
#include <aws/managedblockchain/model/AccessorSummary.h>
#include <aws/managedblockchain/model/AccessorType.h>
#include <aws/managedblockchain/model/ApprovalThresholdPolicy.h>
#include <aws/managedblockchain/model/CreateAccessorRequest.h>
#include <aws/managedblockchain/model/CreateAccessorResult.h>
#include <aws/managedblockchain/model/CreateMemberRequest.h>
#include <aws/managedblockchain/model/CreateMemberResult.h>
#include <aws/managedblockchain/model/CreateNetworkRequest.h>
#include <aws/managedblockchain/model/CreateNetworkResult.h>
#include <aws/managedblockchain/model/CreateNodeRequest.h>
#include <aws/managedblockchain/model/CreateNodeResult.h>
#include <aws/managedblockchain/model/CreateProposalRequest.h>
#include <aws/managedblockchain/model/CreateProposalResult.h>
#include <aws/managedblockchain/model/DeleteAccessorRequest.h>
#include <aws/managedblockchain/model/DeleteAccessorResult.h>
#include <aws/managedblockchain/model/DeleteMemberRequest.h>
#include <aws/managedblockchain/model/DeleteMemberResult.h>
#include <aws/managedblockchain/model/DeleteNodeRequest.h>
#include <aws/managedblockchain/model/DeleteNodeResult.h>
#include <aws/managedblockchain/model/Edition.h>
#include <aws/managedblockchain/model/Framework.h>
#include <aws/managedblockchain/model/GetAccessorRequest.h>
#include <aws/managedblockchain/model/GetAccessorResult.h>
#include <aws/managedblockchain/model/GetMemberRequest.h>
#include <aws/managedblockchain/model/GetMemberResult.h>
#include <aws/managedblockchain/model/GetNetworkRequest.h>
#include <aws/managedblockchain/model/GetNetworkResult.h>
#include <aws/managedblockchain/model/GetNodeRequest.h>
#include <aws/managedblockchain/model/GetNodeResult.h>
#include <aws/managedblockchain/model/GetProposalRequest.h>
#include <aws/managedblockchain/model/GetProposalResult.h>
#include <aws/managedblockchain/model/Invitation.h>
#include <aws/managedblockchain/model/InvitationStatus.h>
#include <aws/managedblockchain/model/InviteAction.h>
#include <aws/managedblockchain/model/ListAccessorsRequest.h>
#include <aws/managedblockchain/model/ListAccessorsResult.h>
#include <aws/managedblockchain/model/ListInvitationsRequest.h>
#include <aws/managedblockchain/model/ListInvitationsResult.h>
#include <aws/managedblockchain/model/ListMembersRequest.h>
#include <aws/managedblockchain/model/ListMembersResult.h>
#include <aws/managedblockchain/model/ListNetworksRequest.h>
#include <aws/managedblockchain/model/ListNetworksResult.h>
#include <aws/managedblockchain/model/ListNodesRequest.h>
#include <aws/managedblockchain/model/ListNodesResult.h>
#include <aws/managedblockchain/model/ListProposalVotesRequest.h>
#include <aws/managedblockchain/model/ListProposalVotesResult.h>
#include <aws/managedblockchain/model/ListProposalsRequest.h>
#include <aws/managedblockchain/model/ListProposalsResult.h>
#include <aws/managedblockchain/model/ListTagsForResourceRequest.h>
#include <aws/managedblockchain/model/ListTagsForResourceResult.h>
#include <aws/managedblockchain/model/LogConfiguration.h>
#include <aws/managedblockchain/model/LogConfigurations.h>
#include <aws/managedblockchain/model/Member.h>
#include <aws/managedblockchain/model/MemberConfiguration.h>
#include <aws/managedblockchain/model/MemberFabricAttributes.h>
#include <aws/managedblockchain/model/MemberFabricConfiguration.h>
#include <aws/managedblockchain/model/MemberFabricLogPublishingConfiguration.h>
#include <aws/managedblockchain/model/MemberFrameworkAttributes.h>
#include <aws/managedblockchain/model/MemberFrameworkConfiguration.h>
#include <aws/managedblockchain/model/MemberLogPublishingConfiguration.h>
#include <aws/managedblockchain/model/MemberStatus.h>
#include <aws/managedblockchain/model/MemberSummary.h>
#include <aws/managedblockchain/model/Network.h>
#include <aws/managedblockchain/model/NetworkEthereumAttributes.h>
#include <aws/managedblockchain/model/NetworkFabricAttributes.h>
#include <aws/managedblockchain/model/NetworkFabricConfiguration.h>
#include <aws/managedblockchain/model/NetworkFrameworkAttributes.h>
#include <aws/managedblockchain/model/NetworkFrameworkConfiguration.h>
#include <aws/managedblockchain/model/NetworkStatus.h>
#include <aws/managedblockchain/model/NetworkSummary.h>
#include <aws/managedblockchain/model/Node.h>
#include <aws/managedblockchain/model/NodeConfiguration.h>
#include <aws/managedblockchain/model/NodeEthereumAttributes.h>
#include <aws/managedblockchain/model/NodeFabricAttributes.h>
#include <aws/managedblockchain/model/NodeFabricLogPublishingConfiguration.h>
#include <aws/managedblockchain/model/NodeFrameworkAttributes.h>
#include <aws/managedblockchain/model/NodeLogPublishingConfiguration.h>
#include <aws/managedblockchain/model/NodeStatus.h>
#include <aws/managedblockchain/model/NodeSummary.h>
#include <aws/managedblockchain/model/Proposal.h>
#include <aws/managedblockchain/model/ProposalActions.h>
#include <aws/managedblockchain/model/ProposalStatus.h>
#include <aws/managedblockchain/model/ProposalSummary.h>
#include <aws/managedblockchain/model/RejectInvitationRequest.h>
#include <aws/managedblockchain/model/RejectInvitationResult.h>
#include <aws/managedblockchain/model/RemoveAction.h>
#include <aws/managedblockchain/model/ResourceNotFoundException.h>
#include <aws/managedblockchain/model/StateDBType.h>
#include <aws/managedblockchain/model/TagResourceRequest.h>
#include <aws/managedblockchain/model/TagResourceResult.h>
#include <aws/managedblockchain/model/ThresholdComparator.h>
#include <aws/managedblockchain/model/TooManyTagsException.h>
#include <aws/managedblockchain/model/UntagResourceRequest.h>
#include <aws/managedblockchain/model/UntagResourceResult.h>
#include <aws/managedblockchain/model/UpdateMemberRequest.h>
#include <aws/managedblockchain/model/UpdateMemberResult.h>
#include <aws/managedblockchain/model/UpdateNodeRequest.h>
#include <aws/managedblockchain/model/UpdateNodeResult.h>
#include <aws/managedblockchain/model/VoteOnProposalRequest.h>
#include <aws/managedblockchain/model/VoteOnProposalResult.h>
#include <aws/managedblockchain/model/VoteSummary.h>
#include <aws/managedblockchain/model/VoteValue.h>
#include <aws/managedblockchain/model/VotingPolicy.h>

using ManagedBlockchainIncludeTest = ::testing::Test;

TEST_F(ManagedBlockchainIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::ManagedBlockchain::ManagedBlockchainClient>("ManagedBlockchainIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
