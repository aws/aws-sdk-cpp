/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain/model/ProposalActions.h>
#include <aws/managedblockchain/model/ProposalStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Properties of a proposal on a Managed Blockchain network.</p> <p>Applies only
   * to Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/Proposal">AWS
   * API Reference</a></p>
   */
  class Proposal
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API Proposal() = default;
    AWS_MANAGEDBLOCKCHAIN_API Proposal(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API Proposal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the proposal.</p>
     */
    inline const Aws::String& GetProposalId() const { return m_proposalId; }
    inline bool ProposalIdHasBeenSet() const { return m_proposalIdHasBeenSet; }
    template<typename ProposalIdT = Aws::String>
    void SetProposalId(ProposalIdT&& value) { m_proposalIdHasBeenSet = true; m_proposalId = std::forward<ProposalIdT>(value); }
    template<typename ProposalIdT = Aws::String>
    Proposal& WithProposalId(ProposalIdT&& value) { SetProposalId(std::forward<ProposalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the network for which the proposal is made.</p>
     */
    inline const Aws::String& GetNetworkId() const { return m_networkId; }
    inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }
    template<typename NetworkIdT = Aws::String>
    void SetNetworkId(NetworkIdT&& value) { m_networkIdHasBeenSet = true; m_networkId = std::forward<NetworkIdT>(value); }
    template<typename NetworkIdT = Aws::String>
    Proposal& WithNetworkId(NetworkIdT&& value) { SetNetworkId(std::forward<NetworkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the proposal.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Proposal& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actions to perform on the network if the proposal is
     * <code>APPROVED</code>.</p>
     */
    inline const ProposalActions& GetActions() const { return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    template<typename ActionsT = ProposalActions>
    void SetActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions = std::forward<ActionsT>(value); }
    template<typename ActionsT = ProposalActions>
    Proposal& WithActions(ActionsT&& value) { SetActions(std::forward<ActionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the member that created the proposal.</p>
     */
    inline const Aws::String& GetProposedByMemberId() const { return m_proposedByMemberId; }
    inline bool ProposedByMemberIdHasBeenSet() const { return m_proposedByMemberIdHasBeenSet; }
    template<typename ProposedByMemberIdT = Aws::String>
    void SetProposedByMemberId(ProposedByMemberIdT&& value) { m_proposedByMemberIdHasBeenSet = true; m_proposedByMemberId = std::forward<ProposedByMemberIdT>(value); }
    template<typename ProposedByMemberIdT = Aws::String>
    Proposal& WithProposedByMemberId(ProposedByMemberIdT&& value) { SetProposedByMemberId(std::forward<ProposedByMemberIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the member that created the proposal.</p>
     */
    inline const Aws::String& GetProposedByMemberName() const { return m_proposedByMemberName; }
    inline bool ProposedByMemberNameHasBeenSet() const { return m_proposedByMemberNameHasBeenSet; }
    template<typename ProposedByMemberNameT = Aws::String>
    void SetProposedByMemberName(ProposedByMemberNameT&& value) { m_proposedByMemberNameHasBeenSet = true; m_proposedByMemberName = std::forward<ProposedByMemberNameT>(value); }
    template<typename ProposedByMemberNameT = Aws::String>
    Proposal& WithProposedByMemberName(ProposedByMemberNameT&& value) { SetProposedByMemberName(std::forward<ProposedByMemberNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the proposal. Values are as follows:</p> <ul> <li> <p>
     * <code>IN_PROGRESS</code> - The proposal is active and open for member
     * voting.</p> </li> <li> <p> <code>APPROVED</code> - The proposal was approved
     * with sufficient <code>YES</code> votes among members according to the
     * <code>VotingPolicy</code> specified for the <code>Network</code>. The specified
     * proposal actions are carried out.</p> </li> <li> <p> <code>REJECTED</code> - The
     * proposal was rejected with insufficient <code>YES</code> votes among members
     * according to the <code>VotingPolicy</code> specified for the
     * <code>Network</code>. The specified <code>ProposalActions</code> aren't carried
     * out.</p> </li> <li> <p> <code>EXPIRED</code> - Members didn't cast the number of
     * votes required to determine the proposal outcome before the proposal expired.
     * The specified <code>ProposalActions</code> aren't carried out.</p> </li> <li>
     * <p> <code>ACTION_FAILED</code> - One or more of the specified
     * <code>ProposalActions</code> in a proposal that was approved couldn't be
     * completed because of an error. The <code>ACTION_FAILED</code> status occurs even
     * if only one ProposalAction fails and other actions are successful.</p> </li>
     * </ul>
     */
    inline ProposalStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ProposalStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Proposal& WithStatus(ProposalStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date and time that the proposal was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    Proposal& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date and time that the proposal expires. This is the
     * <code>CreationDate</code> plus the <code>ProposalDurationInHours</code> that is
     * specified in the <code>ProposalThresholdPolicy</code>. After this date and time,
     * if members haven't cast enough votes to determine the outcome according to the
     * voting policy, the proposal is <code>EXPIRED</code> and <code>Actions</code>
     * aren't carried out. </p>
     */
    inline const Aws::Utils::DateTime& GetExpirationDate() const { return m_expirationDate; }
    inline bool ExpirationDateHasBeenSet() const { return m_expirationDateHasBeenSet; }
    template<typename ExpirationDateT = Aws::Utils::DateTime>
    void SetExpirationDate(ExpirationDateT&& value) { m_expirationDateHasBeenSet = true; m_expirationDate = std::forward<ExpirationDateT>(value); }
    template<typename ExpirationDateT = Aws::Utils::DateTime>
    Proposal& WithExpirationDate(ExpirationDateT&& value) { SetExpirationDate(std::forward<ExpirationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current total of <code>YES</code> votes cast on the proposal by members.
     * </p>
     */
    inline int GetYesVoteCount() const { return m_yesVoteCount; }
    inline bool YesVoteCountHasBeenSet() const { return m_yesVoteCountHasBeenSet; }
    inline void SetYesVoteCount(int value) { m_yesVoteCountHasBeenSet = true; m_yesVoteCount = value; }
    inline Proposal& WithYesVoteCount(int value) { SetYesVoteCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current total of <code>NO</code> votes cast on the proposal by members.
     * </p>
     */
    inline int GetNoVoteCount() const { return m_noVoteCount; }
    inline bool NoVoteCountHasBeenSet() const { return m_noVoteCountHasBeenSet; }
    inline void SetNoVoteCount(int value) { m_noVoteCountHasBeenSet = true; m_noVoteCount = value; }
    inline Proposal& WithNoVoteCount(int value) { SetNoVoteCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of votes remaining to be cast on the proposal by members. In
     * other words, the number of members minus the sum of <code>YES</code> votes and
     * <code>NO</code> votes. </p>
     */
    inline int GetOutstandingVoteCount() const { return m_outstandingVoteCount; }
    inline bool OutstandingVoteCountHasBeenSet() const { return m_outstandingVoteCountHasBeenSet; }
    inline void SetOutstandingVoteCount(int value) { m_outstandingVoteCountHasBeenSet = true; m_outstandingVoteCount = value; }
    inline Proposal& WithOutstandingVoteCount(int value) { SetOutstandingVoteCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags assigned to the proposal. Each tag consists of a key and optional
     * value.</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ethereum-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Ethereum Developer Guide</i>,
     * or <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    Proposal& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    Proposal& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the proposal. For more information about
     * ARNs and their format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Proposal& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_proposalId;
    bool m_proposalIdHasBeenSet = false;

    Aws::String m_networkId;
    bool m_networkIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ProposalActions m_actions;
    bool m_actionsHasBeenSet = false;

    Aws::String m_proposedByMemberId;
    bool m_proposedByMemberIdHasBeenSet = false;

    Aws::String m_proposedByMemberName;
    bool m_proposedByMemberNameHasBeenSet = false;

    ProposalStatus m_status{ProposalStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_expirationDate{};
    bool m_expirationDateHasBeenSet = false;

    int m_yesVoteCount{0};
    bool m_yesVoteCountHasBeenSet = false;

    int m_noVoteCount{0};
    bool m_noVoteCountHasBeenSet = false;

    int m_outstandingVoteCount{0};
    bool m_outstandingVoteCountHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
