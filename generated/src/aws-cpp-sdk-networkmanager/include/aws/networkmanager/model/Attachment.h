/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/AttachmentType.h>
#include <aws/networkmanager/model/AttachmentState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/model/ProposedSegmentChange.h>
#include <aws/networkmanager/model/ProposedNetworkFunctionGroupChange.h>
#include <aws/core/utils/DateTime.h>
#include <aws/networkmanager/model/Tag.h>
#include <aws/networkmanager/model/AttachmentError.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes a core network attachment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/Attachment">AWS
   * API Reference</a></p>
   */
  class Attachment
  {
  public:
    AWS_NETWORKMANAGER_API Attachment() = default;
    AWS_NETWORKMANAGER_API Attachment(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Attachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of a core network.</p>
     */
    inline const Aws::String& GetCoreNetworkId() const { return m_coreNetworkId; }
    inline bool CoreNetworkIdHasBeenSet() const { return m_coreNetworkIdHasBeenSet; }
    template<typename CoreNetworkIdT = Aws::String>
    void SetCoreNetworkId(CoreNetworkIdT&& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = std::forward<CoreNetworkIdT>(value); }
    template<typename CoreNetworkIdT = Aws::String>
    Attachment& WithCoreNetworkId(CoreNetworkIdT&& value) { SetCoreNetworkId(std::forward<CoreNetworkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of a core network.</p>
     */
    inline const Aws::String& GetCoreNetworkArn() const { return m_coreNetworkArn; }
    inline bool CoreNetworkArnHasBeenSet() const { return m_coreNetworkArnHasBeenSet; }
    template<typename CoreNetworkArnT = Aws::String>
    void SetCoreNetworkArn(CoreNetworkArnT&& value) { m_coreNetworkArnHasBeenSet = true; m_coreNetworkArn = std::forward<CoreNetworkArnT>(value); }
    template<typename CoreNetworkArnT = Aws::String>
    Attachment& WithCoreNetworkArn(CoreNetworkArnT&& value) { SetCoreNetworkArn(std::forward<CoreNetworkArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the attachment.</p>
     */
    inline const Aws::String& GetAttachmentId() const { return m_attachmentId; }
    inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }
    template<typename AttachmentIdT = Aws::String>
    void SetAttachmentId(AttachmentIdT&& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = std::forward<AttachmentIdT>(value); }
    template<typename AttachmentIdT = Aws::String>
    Attachment& WithAttachmentId(AttachmentIdT&& value) { SetAttachmentId(std::forward<AttachmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the attachment account owner.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const { return m_ownerAccountId; }
    inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }
    template<typename OwnerAccountIdT = Aws::String>
    void SetOwnerAccountId(OwnerAccountIdT&& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = std::forward<OwnerAccountIdT>(value); }
    template<typename OwnerAccountIdT = Aws::String>
    Attachment& WithOwnerAccountId(OwnerAccountIdT&& value) { SetOwnerAccountId(std::forward<OwnerAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of attachment.</p>
     */
    inline AttachmentType GetAttachmentType() const { return m_attachmentType; }
    inline bool AttachmentTypeHasBeenSet() const { return m_attachmentTypeHasBeenSet; }
    inline void SetAttachmentType(AttachmentType value) { m_attachmentTypeHasBeenSet = true; m_attachmentType = value; }
    inline Attachment& WithAttachmentType(AttachmentType value) { SetAttachmentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the attachment.</p>
     */
    inline AttachmentState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(AttachmentState value) { m_stateHasBeenSet = true; m_state = value; }
    inline Attachment& WithState(AttachmentState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region where the edge is located. This is returned for all attachment
     * types except a Direct Connect gateway attachment, which instead returns
     * <code>EdgeLocations</code>.</p>
     */
    inline const Aws::String& GetEdgeLocation() const { return m_edgeLocation; }
    inline bool EdgeLocationHasBeenSet() const { return m_edgeLocationHasBeenSet; }
    template<typename EdgeLocationT = Aws::String>
    void SetEdgeLocation(EdgeLocationT&& value) { m_edgeLocationHasBeenSet = true; m_edgeLocation = std::forward<EdgeLocationT>(value); }
    template<typename EdgeLocationT = Aws::String>
    Attachment& WithEdgeLocation(EdgeLocationT&& value) { SetEdgeLocation(std::forward<EdgeLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The edge locations that the Direct Connect gateway is associated with. This
     * is returned only for Direct Connect gateway attachments. All other attachment
     * types retrun <code>EdgeLocation</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEdgeLocations() const { return m_edgeLocations; }
    inline bool EdgeLocationsHasBeenSet() const { return m_edgeLocationsHasBeenSet; }
    template<typename EdgeLocationsT = Aws::Vector<Aws::String>>
    void SetEdgeLocations(EdgeLocationsT&& value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations = std::forward<EdgeLocationsT>(value); }
    template<typename EdgeLocationsT = Aws::Vector<Aws::String>>
    Attachment& WithEdgeLocations(EdgeLocationsT&& value) { SetEdgeLocations(std::forward<EdgeLocationsT>(value)); return *this;}
    template<typename EdgeLocationsT = Aws::String>
    Attachment& AddEdgeLocations(EdgeLocationsT&& value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations.emplace_back(std::forward<EdgeLocationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The attachment resource ARN.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    Attachment& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy rule number associated with the attachment.</p>
     */
    inline int GetAttachmentPolicyRuleNumber() const { return m_attachmentPolicyRuleNumber; }
    inline bool AttachmentPolicyRuleNumberHasBeenSet() const { return m_attachmentPolicyRuleNumberHasBeenSet; }
    inline void SetAttachmentPolicyRuleNumber(int value) { m_attachmentPolicyRuleNumberHasBeenSet = true; m_attachmentPolicyRuleNumber = value; }
    inline Attachment& WithAttachmentPolicyRuleNumber(int value) { SetAttachmentPolicyRuleNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the segment attachment.</p>
     */
    inline const Aws::String& GetSegmentName() const { return m_segmentName; }
    inline bool SegmentNameHasBeenSet() const { return m_segmentNameHasBeenSet; }
    template<typename SegmentNameT = Aws::String>
    void SetSegmentName(SegmentNameT&& value) { m_segmentNameHasBeenSet = true; m_segmentName = std::forward<SegmentNameT>(value); }
    template<typename SegmentNameT = Aws::String>
    Attachment& WithSegmentName(SegmentNameT&& value) { SetSegmentName(std::forward<SegmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the network function group.</p>
     */
    inline const Aws::String& GetNetworkFunctionGroupName() const { return m_networkFunctionGroupName; }
    inline bool NetworkFunctionGroupNameHasBeenSet() const { return m_networkFunctionGroupNameHasBeenSet; }
    template<typename NetworkFunctionGroupNameT = Aws::String>
    void SetNetworkFunctionGroupName(NetworkFunctionGroupNameT&& value) { m_networkFunctionGroupNameHasBeenSet = true; m_networkFunctionGroupName = std::forward<NetworkFunctionGroupNameT>(value); }
    template<typename NetworkFunctionGroupNameT = Aws::String>
    Attachment& WithNetworkFunctionGroupName(NetworkFunctionGroupNameT&& value) { SetNetworkFunctionGroupName(std::forward<NetworkFunctionGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the attachment.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    Attachment& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    Attachment& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The attachment to move from one segment to another.</p>
     */
    inline const ProposedSegmentChange& GetProposedSegmentChange() const { return m_proposedSegmentChange; }
    inline bool ProposedSegmentChangeHasBeenSet() const { return m_proposedSegmentChangeHasBeenSet; }
    template<typename ProposedSegmentChangeT = ProposedSegmentChange>
    void SetProposedSegmentChange(ProposedSegmentChangeT&& value) { m_proposedSegmentChangeHasBeenSet = true; m_proposedSegmentChange = std::forward<ProposedSegmentChangeT>(value); }
    template<typename ProposedSegmentChangeT = ProposedSegmentChange>
    Attachment& WithProposedSegmentChange(ProposedSegmentChangeT&& value) { SetProposedSegmentChange(std::forward<ProposedSegmentChangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes a proposed change to a network function group associated with the
     * attachment.</p>
     */
    inline const ProposedNetworkFunctionGroupChange& GetProposedNetworkFunctionGroupChange() const { return m_proposedNetworkFunctionGroupChange; }
    inline bool ProposedNetworkFunctionGroupChangeHasBeenSet() const { return m_proposedNetworkFunctionGroupChangeHasBeenSet; }
    template<typename ProposedNetworkFunctionGroupChangeT = ProposedNetworkFunctionGroupChange>
    void SetProposedNetworkFunctionGroupChange(ProposedNetworkFunctionGroupChangeT&& value) { m_proposedNetworkFunctionGroupChangeHasBeenSet = true; m_proposedNetworkFunctionGroupChange = std::forward<ProposedNetworkFunctionGroupChangeT>(value); }
    template<typename ProposedNetworkFunctionGroupChangeT = ProposedNetworkFunctionGroupChange>
    Attachment& WithProposedNetworkFunctionGroupChange(ProposedNetworkFunctionGroupChangeT&& value) { SetProposedNetworkFunctionGroupChange(std::forward<ProposedNetworkFunctionGroupChangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the attachment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Attachment& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the attachment was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    Attachment& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the error associated with the attachment request.</p>
     */
    inline const Aws::Vector<AttachmentError>& GetLastModificationErrors() const { return m_lastModificationErrors; }
    inline bool LastModificationErrorsHasBeenSet() const { return m_lastModificationErrorsHasBeenSet; }
    template<typename LastModificationErrorsT = Aws::Vector<AttachmentError>>
    void SetLastModificationErrors(LastModificationErrorsT&& value) { m_lastModificationErrorsHasBeenSet = true; m_lastModificationErrors = std::forward<LastModificationErrorsT>(value); }
    template<typename LastModificationErrorsT = Aws::Vector<AttachmentError>>
    Attachment& WithLastModificationErrors(LastModificationErrorsT&& value) { SetLastModificationErrors(std::forward<LastModificationErrorsT>(value)); return *this;}
    template<typename LastModificationErrorsT = AttachmentError>
    Attachment& AddLastModificationErrors(LastModificationErrorsT&& value) { m_lastModificationErrorsHasBeenSet = true; m_lastModificationErrors.emplace_back(std::forward<LastModificationErrorsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_coreNetworkId;
    bool m_coreNetworkIdHasBeenSet = false;

    Aws::String m_coreNetworkArn;
    bool m_coreNetworkArnHasBeenSet = false;

    Aws::String m_attachmentId;
    bool m_attachmentIdHasBeenSet = false;

    Aws::String m_ownerAccountId;
    bool m_ownerAccountIdHasBeenSet = false;

    AttachmentType m_attachmentType{AttachmentType::NOT_SET};
    bool m_attachmentTypeHasBeenSet = false;

    AttachmentState m_state{AttachmentState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_edgeLocation;
    bool m_edgeLocationHasBeenSet = false;

    Aws::Vector<Aws::String> m_edgeLocations;
    bool m_edgeLocationsHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    int m_attachmentPolicyRuleNumber{0};
    bool m_attachmentPolicyRuleNumberHasBeenSet = false;

    Aws::String m_segmentName;
    bool m_segmentNameHasBeenSet = false;

    Aws::String m_networkFunctionGroupName;
    bool m_networkFunctionGroupNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ProposedSegmentChange m_proposedSegmentChange;
    bool m_proposedSegmentChangeHasBeenSet = false;

    ProposedNetworkFunctionGroupChange m_proposedNetworkFunctionGroupChange;
    bool m_proposedNetworkFunctionGroupChangeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::Vector<AttachmentError> m_lastModificationErrors;
    bool m_lastModificationErrorsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
