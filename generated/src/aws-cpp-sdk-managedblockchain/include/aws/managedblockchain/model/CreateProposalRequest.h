/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/ManagedBlockchainRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain/model/ProposalActions.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ManagedBlockchain
{
namespace Model
{

  /**
   */
  class CreateProposalRequest : public ManagedBlockchainRequest
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API CreateProposalRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProposal"; }

    AWS_MANAGEDBLOCKCHAIN_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an Amazon Web
     * Services SDK or the CLI.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an Amazon Web
     * Services SDK or the CLI.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an Amazon Web
     * Services SDK or the CLI.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an Amazon Web
     * Services SDK or the CLI.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an Amazon Web
     * Services SDK or the CLI.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an Amazon Web
     * Services SDK or the CLI.</p>
     */
    inline CreateProposalRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an Amazon Web
     * Services SDK or the CLI.</p>
     */
    inline CreateProposalRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an Amazon Web
     * Services SDK or the CLI.</p>
     */
    inline CreateProposalRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p> The unique identifier of the network for which the proposal is made.</p>
     */
    inline const Aws::String& GetNetworkId() const{ return m_networkId; }

    /**
     * <p> The unique identifier of the network for which the proposal is made.</p>
     */
    inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }

    /**
     * <p> The unique identifier of the network for which the proposal is made.</p>
     */
    inline void SetNetworkId(const Aws::String& value) { m_networkIdHasBeenSet = true; m_networkId = value; }

    /**
     * <p> The unique identifier of the network for which the proposal is made.</p>
     */
    inline void SetNetworkId(Aws::String&& value) { m_networkIdHasBeenSet = true; m_networkId = std::move(value); }

    /**
     * <p> The unique identifier of the network for which the proposal is made.</p>
     */
    inline void SetNetworkId(const char* value) { m_networkIdHasBeenSet = true; m_networkId.assign(value); }

    /**
     * <p> The unique identifier of the network for which the proposal is made.</p>
     */
    inline CreateProposalRequest& WithNetworkId(const Aws::String& value) { SetNetworkId(value); return *this;}

    /**
     * <p> The unique identifier of the network for which the proposal is made.</p>
     */
    inline CreateProposalRequest& WithNetworkId(Aws::String&& value) { SetNetworkId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier of the network for which the proposal is made.</p>
     */
    inline CreateProposalRequest& WithNetworkId(const char* value) { SetNetworkId(value); return *this;}


    /**
     * <p>The unique identifier of the member that is creating the proposal. This
     * identifier is especially useful for identifying the member making the proposal
     * when multiple members exist in a single Amazon Web Services account.</p>
     */
    inline const Aws::String& GetMemberId() const{ return m_memberId; }

    /**
     * <p>The unique identifier of the member that is creating the proposal. This
     * identifier is especially useful for identifying the member making the proposal
     * when multiple members exist in a single Amazon Web Services account.</p>
     */
    inline bool MemberIdHasBeenSet() const { return m_memberIdHasBeenSet; }

    /**
     * <p>The unique identifier of the member that is creating the proposal. This
     * identifier is especially useful for identifying the member making the proposal
     * when multiple members exist in a single Amazon Web Services account.</p>
     */
    inline void SetMemberId(const Aws::String& value) { m_memberIdHasBeenSet = true; m_memberId = value; }

    /**
     * <p>The unique identifier of the member that is creating the proposal. This
     * identifier is especially useful for identifying the member making the proposal
     * when multiple members exist in a single Amazon Web Services account.</p>
     */
    inline void SetMemberId(Aws::String&& value) { m_memberIdHasBeenSet = true; m_memberId = std::move(value); }

    /**
     * <p>The unique identifier of the member that is creating the proposal. This
     * identifier is especially useful for identifying the member making the proposal
     * when multiple members exist in a single Amazon Web Services account.</p>
     */
    inline void SetMemberId(const char* value) { m_memberIdHasBeenSet = true; m_memberId.assign(value); }

    /**
     * <p>The unique identifier of the member that is creating the proposal. This
     * identifier is especially useful for identifying the member making the proposal
     * when multiple members exist in a single Amazon Web Services account.</p>
     */
    inline CreateProposalRequest& WithMemberId(const Aws::String& value) { SetMemberId(value); return *this;}

    /**
     * <p>The unique identifier of the member that is creating the proposal. This
     * identifier is especially useful for identifying the member making the proposal
     * when multiple members exist in a single Amazon Web Services account.</p>
     */
    inline CreateProposalRequest& WithMemberId(Aws::String&& value) { SetMemberId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the member that is creating the proposal. This
     * identifier is especially useful for identifying the member making the proposal
     * when multiple members exist in a single Amazon Web Services account.</p>
     */
    inline CreateProposalRequest& WithMemberId(const char* value) { SetMemberId(value); return *this;}


    /**
     * <p>The type of actions proposed, such as inviting a member or removing a member.
     * The types of <code>Actions</code> in a proposal are mutually exclusive. For
     * example, a proposal with <code>Invitations</code> actions cannot also contain
     * <code>Removals</code> actions.</p>
     */
    inline const ProposalActions& GetActions() const{ return m_actions; }

    /**
     * <p>The type of actions proposed, such as inviting a member or removing a member.
     * The types of <code>Actions</code> in a proposal are mutually exclusive. For
     * example, a proposal with <code>Invitations</code> actions cannot also contain
     * <code>Removals</code> actions.</p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p>The type of actions proposed, such as inviting a member or removing a member.
     * The types of <code>Actions</code> in a proposal are mutually exclusive. For
     * example, a proposal with <code>Invitations</code> actions cannot also contain
     * <code>Removals</code> actions.</p>
     */
    inline void SetActions(const ProposalActions& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>The type of actions proposed, such as inviting a member or removing a member.
     * The types of <code>Actions</code> in a proposal are mutually exclusive. For
     * example, a proposal with <code>Invitations</code> actions cannot also contain
     * <code>Removals</code> actions.</p>
     */
    inline void SetActions(ProposalActions&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>The type of actions proposed, such as inviting a member or removing a member.
     * The types of <code>Actions</code> in a proposal are mutually exclusive. For
     * example, a proposal with <code>Invitations</code> actions cannot also contain
     * <code>Removals</code> actions.</p>
     */
    inline CreateProposalRequest& WithActions(const ProposalActions& value) { SetActions(value); return *this;}

    /**
     * <p>The type of actions proposed, such as inviting a member or removing a member.
     * The types of <code>Actions</code> in a proposal are mutually exclusive. For
     * example, a proposal with <code>Invitations</code> actions cannot also contain
     * <code>Removals</code> actions.</p>
     */
    inline CreateProposalRequest& WithActions(ProposalActions&& value) { SetActions(std::move(value)); return *this;}


    /**
     * <p>A description for the proposal that is visible to voting members, for
     * example, "Proposal to add Example Corp. as member."</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the proposal that is visible to voting members, for
     * example, "Proposal to add Example Corp. as member."</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the proposal that is visible to voting members, for
     * example, "Proposal to add Example Corp. as member."</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the proposal that is visible to voting members, for
     * example, "Proposal to add Example Corp. as member."</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the proposal that is visible to voting members, for
     * example, "Proposal to add Example Corp. as member."</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the proposal that is visible to voting members, for
     * example, "Proposal to add Example Corp. as member."</p>
     */
    inline CreateProposalRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the proposal that is visible to voting members, for
     * example, "Proposal to add Example Corp. as member."</p>
     */
    inline CreateProposalRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the proposal that is visible to voting members, for
     * example, "Proposal to add Example Corp. as member."</p>
     */
    inline CreateProposalRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Tags to assign to the proposal. Each tag consists of a key and optional
     * value.</p> <p>When specifying tags during creation, you can specify multiple
     * key-value pairs in a single request, with an overall maximum of 50 tags added to
     * each resource. If the proposal is for a network invitation, the invitation
     * inherits the tags added to the proposal.</p> <p>For more information about tags,
     * see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ethereum-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Ethereum Developer Guide</i>,
     * or <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags to assign to the proposal. Each tag consists of a key and optional
     * value.</p> <p>When specifying tags during creation, you can specify multiple
     * key-value pairs in a single request, with an overall maximum of 50 tags added to
     * each resource. If the proposal is for a network invitation, the invitation
     * inherits the tags added to the proposal.</p> <p>For more information about tags,
     * see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ethereum-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Ethereum Developer Guide</i>,
     * or <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags to assign to the proposal. Each tag consists of a key and optional
     * value.</p> <p>When specifying tags during creation, you can specify multiple
     * key-value pairs in a single request, with an overall maximum of 50 tags added to
     * each resource. If the proposal is for a network invitation, the invitation
     * inherits the tags added to the proposal.</p> <p>For more information about tags,
     * see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ethereum-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Ethereum Developer Guide</i>,
     * or <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags to assign to the proposal. Each tag consists of a key and optional
     * value.</p> <p>When specifying tags during creation, you can specify multiple
     * key-value pairs in a single request, with an overall maximum of 50 tags added to
     * each resource. If the proposal is for a network invitation, the invitation
     * inherits the tags added to the proposal.</p> <p>For more information about tags,
     * see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ethereum-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Ethereum Developer Guide</i>,
     * or <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags to assign to the proposal. Each tag consists of a key and optional
     * value.</p> <p>When specifying tags during creation, you can specify multiple
     * key-value pairs in a single request, with an overall maximum of 50 tags added to
     * each resource. If the proposal is for a network invitation, the invitation
     * inherits the tags added to the proposal.</p> <p>For more information about tags,
     * see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ethereum-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Ethereum Developer Guide</i>,
     * or <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline CreateProposalRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags to assign to the proposal. Each tag consists of a key and optional
     * value.</p> <p>When specifying tags during creation, you can specify multiple
     * key-value pairs in a single request, with an overall maximum of 50 tags added to
     * each resource. If the proposal is for a network invitation, the invitation
     * inherits the tags added to the proposal.</p> <p>For more information about tags,
     * see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ethereum-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Ethereum Developer Guide</i>,
     * or <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline CreateProposalRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags to assign to the proposal. Each tag consists of a key and optional
     * value.</p> <p>When specifying tags during creation, you can specify multiple
     * key-value pairs in a single request, with an overall maximum of 50 tags added to
     * each resource. If the proposal is for a network invitation, the invitation
     * inherits the tags added to the proposal.</p> <p>For more information about tags,
     * see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ethereum-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Ethereum Developer Guide</i>,
     * or <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline CreateProposalRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags to assign to the proposal. Each tag consists of a key and optional
     * value.</p> <p>When specifying tags during creation, you can specify multiple
     * key-value pairs in a single request, with an overall maximum of 50 tags added to
     * each resource. If the proposal is for a network invitation, the invitation
     * inherits the tags added to the proposal.</p> <p>For more information about tags,
     * see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ethereum-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Ethereum Developer Guide</i>,
     * or <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline CreateProposalRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags to assign to the proposal. Each tag consists of a key and optional
     * value.</p> <p>When specifying tags during creation, you can specify multiple
     * key-value pairs in a single request, with an overall maximum of 50 tags added to
     * each resource. If the proposal is for a network invitation, the invitation
     * inherits the tags added to the proposal.</p> <p>For more information about tags,
     * see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ethereum-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Ethereum Developer Guide</i>,
     * or <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline CreateProposalRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags to assign to the proposal. Each tag consists of a key and optional
     * value.</p> <p>When specifying tags during creation, you can specify multiple
     * key-value pairs in a single request, with an overall maximum of 50 tags added to
     * each resource. If the proposal is for a network invitation, the invitation
     * inherits the tags added to the proposal.</p> <p>For more information about tags,
     * see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ethereum-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Ethereum Developer Guide</i>,
     * or <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline CreateProposalRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags to assign to the proposal. Each tag consists of a key and optional
     * value.</p> <p>When specifying tags during creation, you can specify multiple
     * key-value pairs in a single request, with an overall maximum of 50 tags added to
     * each resource. If the proposal is for a network invitation, the invitation
     * inherits the tags added to the proposal.</p> <p>For more information about tags,
     * see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ethereum-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Ethereum Developer Guide</i>,
     * or <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline CreateProposalRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags to assign to the proposal. Each tag consists of a key and optional
     * value.</p> <p>When specifying tags during creation, you can specify multiple
     * key-value pairs in a single request, with an overall maximum of 50 tags added to
     * each resource. If the proposal is for a network invitation, the invitation
     * inherits the tags added to the proposal.</p> <p>For more information about tags,
     * see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ethereum-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Ethereum Developer Guide</i>,
     * or <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline CreateProposalRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags to assign to the proposal. Each tag consists of a key and optional
     * value.</p> <p>When specifying tags during creation, you can specify multiple
     * key-value pairs in a single request, with an overall maximum of 50 tags added to
     * each resource. If the proposal is for a network invitation, the invitation
     * inherits the tags added to the proposal.</p> <p>For more information about tags,
     * see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ethereum-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Ethereum Developer Guide</i>,
     * or <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline CreateProposalRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_networkId;
    bool m_networkIdHasBeenSet = false;

    Aws::String m_memberId;
    bool m_memberIdHasBeenSet = false;

    ProposalActions m_actions;
    bool m_actionsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
