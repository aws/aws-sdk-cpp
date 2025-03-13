/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/ManagedBlockchainRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain/model/VoteValue.h>
#include <utility>

namespace Aws
{
namespace ManagedBlockchain
{
namespace Model
{

  /**
   */
  class VoteOnProposalRequest : public ManagedBlockchainRequest
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API VoteOnProposalRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "VoteOnProposal"; }

    AWS_MANAGEDBLOCKCHAIN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The unique identifier of the network. </p>
     */
    inline const Aws::String& GetNetworkId() const { return m_networkId; }
    inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }
    template<typename NetworkIdT = Aws::String>
    void SetNetworkId(NetworkIdT&& value) { m_networkIdHasBeenSet = true; m_networkId = std::forward<NetworkIdT>(value); }
    template<typename NetworkIdT = Aws::String>
    VoteOnProposalRequest& WithNetworkId(NetworkIdT&& value) { SetNetworkId(std::forward<NetworkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier of the proposal. </p>
     */
    inline const Aws::String& GetProposalId() const { return m_proposalId; }
    inline bool ProposalIdHasBeenSet() const { return m_proposalIdHasBeenSet; }
    template<typename ProposalIdT = Aws::String>
    void SetProposalId(ProposalIdT&& value) { m_proposalIdHasBeenSet = true; m_proposalId = std::forward<ProposalIdT>(value); }
    template<typename ProposalIdT = Aws::String>
    VoteOnProposalRequest& WithProposalId(ProposalIdT&& value) { SetProposalId(std::forward<ProposalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the member casting the vote. </p>
     */
    inline const Aws::String& GetVoterMemberId() const { return m_voterMemberId; }
    inline bool VoterMemberIdHasBeenSet() const { return m_voterMemberIdHasBeenSet; }
    template<typename VoterMemberIdT = Aws::String>
    void SetVoterMemberId(VoterMemberIdT&& value) { m_voterMemberIdHasBeenSet = true; m_voterMemberId = std::forward<VoterMemberIdT>(value); }
    template<typename VoterMemberIdT = Aws::String>
    VoteOnProposalRequest& WithVoterMemberId(VoterMemberIdT&& value) { SetVoterMemberId(std::forward<VoterMemberIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The value of the vote. </p>
     */
    inline VoteValue GetVote() const { return m_vote; }
    inline bool VoteHasBeenSet() const { return m_voteHasBeenSet; }
    inline void SetVote(VoteValue value) { m_voteHasBeenSet = true; m_vote = value; }
    inline VoteOnProposalRequest& WithVote(VoteValue value) { SetVote(value); return *this;}
    ///@}
  private:

    Aws::String m_networkId;
    bool m_networkIdHasBeenSet = false;

    Aws::String m_proposalId;
    bool m_proposalIdHasBeenSet = false;

    Aws::String m_voterMemberId;
    bool m_voterMemberIdHasBeenSet = false;

    VoteValue m_vote{VoteValue::NOT_SET};
    bool m_voteHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
