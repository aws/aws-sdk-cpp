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
    AWS_MANAGEDBLOCKCHAIN_API VoteOnProposalRequest();

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
    inline const Aws::String& GetNetworkId() const{ return m_networkId; }
    inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }
    inline void SetNetworkId(const Aws::String& value) { m_networkIdHasBeenSet = true; m_networkId = value; }
    inline void SetNetworkId(Aws::String&& value) { m_networkIdHasBeenSet = true; m_networkId = std::move(value); }
    inline void SetNetworkId(const char* value) { m_networkIdHasBeenSet = true; m_networkId.assign(value); }
    inline VoteOnProposalRequest& WithNetworkId(const Aws::String& value) { SetNetworkId(value); return *this;}
    inline VoteOnProposalRequest& WithNetworkId(Aws::String&& value) { SetNetworkId(std::move(value)); return *this;}
    inline VoteOnProposalRequest& WithNetworkId(const char* value) { SetNetworkId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier of the proposal. </p>
     */
    inline const Aws::String& GetProposalId() const{ return m_proposalId; }
    inline bool ProposalIdHasBeenSet() const { return m_proposalIdHasBeenSet; }
    inline void SetProposalId(const Aws::String& value) { m_proposalIdHasBeenSet = true; m_proposalId = value; }
    inline void SetProposalId(Aws::String&& value) { m_proposalIdHasBeenSet = true; m_proposalId = std::move(value); }
    inline void SetProposalId(const char* value) { m_proposalIdHasBeenSet = true; m_proposalId.assign(value); }
    inline VoteOnProposalRequest& WithProposalId(const Aws::String& value) { SetProposalId(value); return *this;}
    inline VoteOnProposalRequest& WithProposalId(Aws::String&& value) { SetProposalId(std::move(value)); return *this;}
    inline VoteOnProposalRequest& WithProposalId(const char* value) { SetProposalId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the member casting the vote. </p>
     */
    inline const Aws::String& GetVoterMemberId() const{ return m_voterMemberId; }
    inline bool VoterMemberIdHasBeenSet() const { return m_voterMemberIdHasBeenSet; }
    inline void SetVoterMemberId(const Aws::String& value) { m_voterMemberIdHasBeenSet = true; m_voterMemberId = value; }
    inline void SetVoterMemberId(Aws::String&& value) { m_voterMemberIdHasBeenSet = true; m_voterMemberId = std::move(value); }
    inline void SetVoterMemberId(const char* value) { m_voterMemberIdHasBeenSet = true; m_voterMemberId.assign(value); }
    inline VoteOnProposalRequest& WithVoterMemberId(const Aws::String& value) { SetVoterMemberId(value); return *this;}
    inline VoteOnProposalRequest& WithVoterMemberId(Aws::String&& value) { SetVoterMemberId(std::move(value)); return *this;}
    inline VoteOnProposalRequest& WithVoterMemberId(const char* value) { SetVoterMemberId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The value of the vote. </p>
     */
    inline const VoteValue& GetVote() const{ return m_vote; }
    inline bool VoteHasBeenSet() const { return m_voteHasBeenSet; }
    inline void SetVote(const VoteValue& value) { m_voteHasBeenSet = true; m_vote = value; }
    inline void SetVote(VoteValue&& value) { m_voteHasBeenSet = true; m_vote = std::move(value); }
    inline VoteOnProposalRequest& WithVote(const VoteValue& value) { SetVote(value); return *this;}
    inline VoteOnProposalRequest& WithVote(VoteValue&& value) { SetVote(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_networkId;
    bool m_networkIdHasBeenSet = false;

    Aws::String m_proposalId;
    bool m_proposalIdHasBeenSet = false;

    Aws::String m_voterMemberId;
    bool m_voterMemberIdHasBeenSet = false;

    VoteValue m_vote;
    bool m_voteHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
