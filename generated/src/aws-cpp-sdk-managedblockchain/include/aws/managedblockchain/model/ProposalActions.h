/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/managedblockchain/model/InviteAction.h>
#include <aws/managedblockchain/model/RemoveAction.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ManagedBlockchain
{
namespace Model
{

  /**
   * <p> The actions to carry out if a proposal is <code>APPROVED</code>. </p>
   * <p>Applies only to Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ProposalActions">AWS
   * API Reference</a></p>
   */
  class ProposalActions
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API ProposalActions() = default;
    AWS_MANAGEDBLOCKCHAIN_API ProposalActions(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API ProposalActions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The actions to perform for an <code>APPROVED</code> proposal to invite an
     * Amazon Web Services account to create a member and join the network. </p>
     */
    inline const Aws::Vector<InviteAction>& GetInvitations() const { return m_invitations; }
    inline bool InvitationsHasBeenSet() const { return m_invitationsHasBeenSet; }
    template<typename InvitationsT = Aws::Vector<InviteAction>>
    void SetInvitations(InvitationsT&& value) { m_invitationsHasBeenSet = true; m_invitations = std::forward<InvitationsT>(value); }
    template<typename InvitationsT = Aws::Vector<InviteAction>>
    ProposalActions& WithInvitations(InvitationsT&& value) { SetInvitations(std::forward<InvitationsT>(value)); return *this;}
    template<typename InvitationsT = InviteAction>
    ProposalActions& AddInvitations(InvitationsT&& value) { m_invitationsHasBeenSet = true; m_invitations.emplace_back(std::forward<InvitationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The actions to perform for an <code>APPROVED</code> proposal to remove a
     * member from the network, which deletes the member and all associated member
     * resources from the network. </p>
     */
    inline const Aws::Vector<RemoveAction>& GetRemovals() const { return m_removals; }
    inline bool RemovalsHasBeenSet() const { return m_removalsHasBeenSet; }
    template<typename RemovalsT = Aws::Vector<RemoveAction>>
    void SetRemovals(RemovalsT&& value) { m_removalsHasBeenSet = true; m_removals = std::forward<RemovalsT>(value); }
    template<typename RemovalsT = Aws::Vector<RemoveAction>>
    ProposalActions& WithRemovals(RemovalsT&& value) { SetRemovals(std::forward<RemovalsT>(value)); return *this;}
    template<typename RemovalsT = RemoveAction>
    ProposalActions& AddRemovals(RemovalsT&& value) { m_removalsHasBeenSet = true; m_removals.emplace_back(std::forward<RemovalsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<InviteAction> m_invitations;
    bool m_invitationsHasBeenSet = false;

    Aws::Vector<RemoveAction> m_removals;
    bool m_removalsHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
