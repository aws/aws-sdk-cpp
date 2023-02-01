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
    AWS_MANAGEDBLOCKCHAIN_API ProposalActions();
    AWS_MANAGEDBLOCKCHAIN_API ProposalActions(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API ProposalActions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The actions to perform for an <code>APPROVED</code> proposal to invite an
     * Amazon Web Services account to create a member and join the network. </p>
     */
    inline const Aws::Vector<InviteAction>& GetInvitations() const{ return m_invitations; }

    /**
     * <p> The actions to perform for an <code>APPROVED</code> proposal to invite an
     * Amazon Web Services account to create a member and join the network. </p>
     */
    inline bool InvitationsHasBeenSet() const { return m_invitationsHasBeenSet; }

    /**
     * <p> The actions to perform for an <code>APPROVED</code> proposal to invite an
     * Amazon Web Services account to create a member and join the network. </p>
     */
    inline void SetInvitations(const Aws::Vector<InviteAction>& value) { m_invitationsHasBeenSet = true; m_invitations = value; }

    /**
     * <p> The actions to perform for an <code>APPROVED</code> proposal to invite an
     * Amazon Web Services account to create a member and join the network. </p>
     */
    inline void SetInvitations(Aws::Vector<InviteAction>&& value) { m_invitationsHasBeenSet = true; m_invitations = std::move(value); }

    /**
     * <p> The actions to perform for an <code>APPROVED</code> proposal to invite an
     * Amazon Web Services account to create a member and join the network. </p>
     */
    inline ProposalActions& WithInvitations(const Aws::Vector<InviteAction>& value) { SetInvitations(value); return *this;}

    /**
     * <p> The actions to perform for an <code>APPROVED</code> proposal to invite an
     * Amazon Web Services account to create a member and join the network. </p>
     */
    inline ProposalActions& WithInvitations(Aws::Vector<InviteAction>&& value) { SetInvitations(std::move(value)); return *this;}

    /**
     * <p> The actions to perform for an <code>APPROVED</code> proposal to invite an
     * Amazon Web Services account to create a member and join the network. </p>
     */
    inline ProposalActions& AddInvitations(const InviteAction& value) { m_invitationsHasBeenSet = true; m_invitations.push_back(value); return *this; }

    /**
     * <p> The actions to perform for an <code>APPROVED</code> proposal to invite an
     * Amazon Web Services account to create a member and join the network. </p>
     */
    inline ProposalActions& AddInvitations(InviteAction&& value) { m_invitationsHasBeenSet = true; m_invitations.push_back(std::move(value)); return *this; }


    /**
     * <p> The actions to perform for an <code>APPROVED</code> proposal to remove a
     * member from the network, which deletes the member and all associated member
     * resources from the network. </p>
     */
    inline const Aws::Vector<RemoveAction>& GetRemovals() const{ return m_removals; }

    /**
     * <p> The actions to perform for an <code>APPROVED</code> proposal to remove a
     * member from the network, which deletes the member and all associated member
     * resources from the network. </p>
     */
    inline bool RemovalsHasBeenSet() const { return m_removalsHasBeenSet; }

    /**
     * <p> The actions to perform for an <code>APPROVED</code> proposal to remove a
     * member from the network, which deletes the member and all associated member
     * resources from the network. </p>
     */
    inline void SetRemovals(const Aws::Vector<RemoveAction>& value) { m_removalsHasBeenSet = true; m_removals = value; }

    /**
     * <p> The actions to perform for an <code>APPROVED</code> proposal to remove a
     * member from the network, which deletes the member and all associated member
     * resources from the network. </p>
     */
    inline void SetRemovals(Aws::Vector<RemoveAction>&& value) { m_removalsHasBeenSet = true; m_removals = std::move(value); }

    /**
     * <p> The actions to perform for an <code>APPROVED</code> proposal to remove a
     * member from the network, which deletes the member and all associated member
     * resources from the network. </p>
     */
    inline ProposalActions& WithRemovals(const Aws::Vector<RemoveAction>& value) { SetRemovals(value); return *this;}

    /**
     * <p> The actions to perform for an <code>APPROVED</code> proposal to remove a
     * member from the network, which deletes the member and all associated member
     * resources from the network. </p>
     */
    inline ProposalActions& WithRemovals(Aws::Vector<RemoveAction>&& value) { SetRemovals(std::move(value)); return *this;}

    /**
     * <p> The actions to perform for an <code>APPROVED</code> proposal to remove a
     * member from the network, which deletes the member and all associated member
     * resources from the network. </p>
     */
    inline ProposalActions& AddRemovals(const RemoveAction& value) { m_removalsHasBeenSet = true; m_removals.push_back(value); return *this; }

    /**
     * <p> The actions to perform for an <code>APPROVED</code> proposal to remove a
     * member from the network, which deletes the member and all associated member
     * resources from the network. </p>
     */
    inline ProposalActions& AddRemovals(RemoveAction&& value) { m_removalsHasBeenSet = true; m_removals.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<InviteAction> m_invitations;
    bool m_invitationsHasBeenSet = false;

    Aws::Vector<RemoveAction> m_removals;
    bool m_removalsHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
