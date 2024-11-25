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
    AWS_NETWORKMANAGER_API Attachment();
    AWS_NETWORKMANAGER_API Attachment(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Attachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of a core network.</p>
     */
    inline const Aws::String& GetCoreNetworkId() const{ return m_coreNetworkId; }
    inline bool CoreNetworkIdHasBeenSet() const { return m_coreNetworkIdHasBeenSet; }
    inline void SetCoreNetworkId(const Aws::String& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = value; }
    inline void SetCoreNetworkId(Aws::String&& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = std::move(value); }
    inline void SetCoreNetworkId(const char* value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId.assign(value); }
    inline Attachment& WithCoreNetworkId(const Aws::String& value) { SetCoreNetworkId(value); return *this;}
    inline Attachment& WithCoreNetworkId(Aws::String&& value) { SetCoreNetworkId(std::move(value)); return *this;}
    inline Attachment& WithCoreNetworkId(const char* value) { SetCoreNetworkId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of a core network.</p>
     */
    inline const Aws::String& GetCoreNetworkArn() const{ return m_coreNetworkArn; }
    inline bool CoreNetworkArnHasBeenSet() const { return m_coreNetworkArnHasBeenSet; }
    inline void SetCoreNetworkArn(const Aws::String& value) { m_coreNetworkArnHasBeenSet = true; m_coreNetworkArn = value; }
    inline void SetCoreNetworkArn(Aws::String&& value) { m_coreNetworkArnHasBeenSet = true; m_coreNetworkArn = std::move(value); }
    inline void SetCoreNetworkArn(const char* value) { m_coreNetworkArnHasBeenSet = true; m_coreNetworkArn.assign(value); }
    inline Attachment& WithCoreNetworkArn(const Aws::String& value) { SetCoreNetworkArn(value); return *this;}
    inline Attachment& WithCoreNetworkArn(Aws::String&& value) { SetCoreNetworkArn(std::move(value)); return *this;}
    inline Attachment& WithCoreNetworkArn(const char* value) { SetCoreNetworkArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the attachment.</p>
     */
    inline const Aws::String& GetAttachmentId() const{ return m_attachmentId; }
    inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }
    inline void SetAttachmentId(const Aws::String& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = value; }
    inline void SetAttachmentId(Aws::String&& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = std::move(value); }
    inline void SetAttachmentId(const char* value) { m_attachmentIdHasBeenSet = true; m_attachmentId.assign(value); }
    inline Attachment& WithAttachmentId(const Aws::String& value) { SetAttachmentId(value); return *this;}
    inline Attachment& WithAttachmentId(Aws::String&& value) { SetAttachmentId(std::move(value)); return *this;}
    inline Attachment& WithAttachmentId(const char* value) { SetAttachmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the attachment account owner.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const{ return m_ownerAccountId; }
    inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }
    inline void SetOwnerAccountId(const Aws::String& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = value; }
    inline void SetOwnerAccountId(Aws::String&& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = std::move(value); }
    inline void SetOwnerAccountId(const char* value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId.assign(value); }
    inline Attachment& WithOwnerAccountId(const Aws::String& value) { SetOwnerAccountId(value); return *this;}
    inline Attachment& WithOwnerAccountId(Aws::String&& value) { SetOwnerAccountId(std::move(value)); return *this;}
    inline Attachment& WithOwnerAccountId(const char* value) { SetOwnerAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of attachment.</p>
     */
    inline const AttachmentType& GetAttachmentType() const{ return m_attachmentType; }
    inline bool AttachmentTypeHasBeenSet() const { return m_attachmentTypeHasBeenSet; }
    inline void SetAttachmentType(const AttachmentType& value) { m_attachmentTypeHasBeenSet = true; m_attachmentType = value; }
    inline void SetAttachmentType(AttachmentType&& value) { m_attachmentTypeHasBeenSet = true; m_attachmentType = std::move(value); }
    inline Attachment& WithAttachmentType(const AttachmentType& value) { SetAttachmentType(value); return *this;}
    inline Attachment& WithAttachmentType(AttachmentType&& value) { SetAttachmentType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the attachment.</p>
     */
    inline const AttachmentState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const AttachmentState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(AttachmentState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline Attachment& WithState(const AttachmentState& value) { SetState(value); return *this;}
    inline Attachment& WithState(AttachmentState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region where the edge is located. This is returned for all attachment
     * types except a Direct Connect gateway attachment, which instead returns
     * <code>EdgeLocations</code>.</p>
     */
    inline const Aws::String& GetEdgeLocation() const{ return m_edgeLocation; }
    inline bool EdgeLocationHasBeenSet() const { return m_edgeLocationHasBeenSet; }
    inline void SetEdgeLocation(const Aws::String& value) { m_edgeLocationHasBeenSet = true; m_edgeLocation = value; }
    inline void SetEdgeLocation(Aws::String&& value) { m_edgeLocationHasBeenSet = true; m_edgeLocation = std::move(value); }
    inline void SetEdgeLocation(const char* value) { m_edgeLocationHasBeenSet = true; m_edgeLocation.assign(value); }
    inline Attachment& WithEdgeLocation(const Aws::String& value) { SetEdgeLocation(value); return *this;}
    inline Attachment& WithEdgeLocation(Aws::String&& value) { SetEdgeLocation(std::move(value)); return *this;}
    inline Attachment& WithEdgeLocation(const char* value) { SetEdgeLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The edge locations that the Direct Connect gateway is associated with. This
     * is returned only for Direct Connect gateway attachments. All other attachment
     * types retrun <code>EdgeLocation</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEdgeLocations() const{ return m_edgeLocations; }
    inline bool EdgeLocationsHasBeenSet() const { return m_edgeLocationsHasBeenSet; }
    inline void SetEdgeLocations(const Aws::Vector<Aws::String>& value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations = value; }
    inline void SetEdgeLocations(Aws::Vector<Aws::String>&& value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations = std::move(value); }
    inline Attachment& WithEdgeLocations(const Aws::Vector<Aws::String>& value) { SetEdgeLocations(value); return *this;}
    inline Attachment& WithEdgeLocations(Aws::Vector<Aws::String>&& value) { SetEdgeLocations(std::move(value)); return *this;}
    inline Attachment& AddEdgeLocations(const Aws::String& value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations.push_back(value); return *this; }
    inline Attachment& AddEdgeLocations(Aws::String&& value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations.push_back(std::move(value)); return *this; }
    inline Attachment& AddEdgeLocations(const char* value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The attachment resource ARN.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline Attachment& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline Attachment& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline Attachment& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy rule number associated with the attachment.</p>
     */
    inline int GetAttachmentPolicyRuleNumber() const{ return m_attachmentPolicyRuleNumber; }
    inline bool AttachmentPolicyRuleNumberHasBeenSet() const { return m_attachmentPolicyRuleNumberHasBeenSet; }
    inline void SetAttachmentPolicyRuleNumber(int value) { m_attachmentPolicyRuleNumberHasBeenSet = true; m_attachmentPolicyRuleNumber = value; }
    inline Attachment& WithAttachmentPolicyRuleNumber(int value) { SetAttachmentPolicyRuleNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the segment attachment.</p>
     */
    inline const Aws::String& GetSegmentName() const{ return m_segmentName; }
    inline bool SegmentNameHasBeenSet() const { return m_segmentNameHasBeenSet; }
    inline void SetSegmentName(const Aws::String& value) { m_segmentNameHasBeenSet = true; m_segmentName = value; }
    inline void SetSegmentName(Aws::String&& value) { m_segmentNameHasBeenSet = true; m_segmentName = std::move(value); }
    inline void SetSegmentName(const char* value) { m_segmentNameHasBeenSet = true; m_segmentName.assign(value); }
    inline Attachment& WithSegmentName(const Aws::String& value) { SetSegmentName(value); return *this;}
    inline Attachment& WithSegmentName(Aws::String&& value) { SetSegmentName(std::move(value)); return *this;}
    inline Attachment& WithSegmentName(const char* value) { SetSegmentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the network function group.</p>
     */
    inline const Aws::String& GetNetworkFunctionGroupName() const{ return m_networkFunctionGroupName; }
    inline bool NetworkFunctionGroupNameHasBeenSet() const { return m_networkFunctionGroupNameHasBeenSet; }
    inline void SetNetworkFunctionGroupName(const Aws::String& value) { m_networkFunctionGroupNameHasBeenSet = true; m_networkFunctionGroupName = value; }
    inline void SetNetworkFunctionGroupName(Aws::String&& value) { m_networkFunctionGroupNameHasBeenSet = true; m_networkFunctionGroupName = std::move(value); }
    inline void SetNetworkFunctionGroupName(const char* value) { m_networkFunctionGroupNameHasBeenSet = true; m_networkFunctionGroupName.assign(value); }
    inline Attachment& WithNetworkFunctionGroupName(const Aws::String& value) { SetNetworkFunctionGroupName(value); return *this;}
    inline Attachment& WithNetworkFunctionGroupName(Aws::String&& value) { SetNetworkFunctionGroupName(std::move(value)); return *this;}
    inline Attachment& WithNetworkFunctionGroupName(const char* value) { SetNetworkFunctionGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the attachment.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Attachment& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline Attachment& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline Attachment& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline Attachment& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The attachment to move from one segment to another.</p>
     */
    inline const ProposedSegmentChange& GetProposedSegmentChange() const{ return m_proposedSegmentChange; }
    inline bool ProposedSegmentChangeHasBeenSet() const { return m_proposedSegmentChangeHasBeenSet; }
    inline void SetProposedSegmentChange(const ProposedSegmentChange& value) { m_proposedSegmentChangeHasBeenSet = true; m_proposedSegmentChange = value; }
    inline void SetProposedSegmentChange(ProposedSegmentChange&& value) { m_proposedSegmentChangeHasBeenSet = true; m_proposedSegmentChange = std::move(value); }
    inline Attachment& WithProposedSegmentChange(const ProposedSegmentChange& value) { SetProposedSegmentChange(value); return *this;}
    inline Attachment& WithProposedSegmentChange(ProposedSegmentChange&& value) { SetProposedSegmentChange(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes a proposed change to a network function group associated with the
     * attachment.</p>
     */
    inline const ProposedNetworkFunctionGroupChange& GetProposedNetworkFunctionGroupChange() const{ return m_proposedNetworkFunctionGroupChange; }
    inline bool ProposedNetworkFunctionGroupChangeHasBeenSet() const { return m_proposedNetworkFunctionGroupChangeHasBeenSet; }
    inline void SetProposedNetworkFunctionGroupChange(const ProposedNetworkFunctionGroupChange& value) { m_proposedNetworkFunctionGroupChangeHasBeenSet = true; m_proposedNetworkFunctionGroupChange = value; }
    inline void SetProposedNetworkFunctionGroupChange(ProposedNetworkFunctionGroupChange&& value) { m_proposedNetworkFunctionGroupChangeHasBeenSet = true; m_proposedNetworkFunctionGroupChange = std::move(value); }
    inline Attachment& WithProposedNetworkFunctionGroupChange(const ProposedNetworkFunctionGroupChange& value) { SetProposedNetworkFunctionGroupChange(value); return *this;}
    inline Attachment& WithProposedNetworkFunctionGroupChange(ProposedNetworkFunctionGroupChange&& value) { SetProposedNetworkFunctionGroupChange(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the attachment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline Attachment& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline Attachment& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the attachment was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline Attachment& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline Attachment& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the error associated with the attachment request.</p>
     */
    inline const Aws::Vector<AttachmentError>& GetLastModificationErrors() const{ return m_lastModificationErrors; }
    inline bool LastModificationErrorsHasBeenSet() const { return m_lastModificationErrorsHasBeenSet; }
    inline void SetLastModificationErrors(const Aws::Vector<AttachmentError>& value) { m_lastModificationErrorsHasBeenSet = true; m_lastModificationErrors = value; }
    inline void SetLastModificationErrors(Aws::Vector<AttachmentError>&& value) { m_lastModificationErrorsHasBeenSet = true; m_lastModificationErrors = std::move(value); }
    inline Attachment& WithLastModificationErrors(const Aws::Vector<AttachmentError>& value) { SetLastModificationErrors(value); return *this;}
    inline Attachment& WithLastModificationErrors(Aws::Vector<AttachmentError>&& value) { SetLastModificationErrors(std::move(value)); return *this;}
    inline Attachment& AddLastModificationErrors(const AttachmentError& value) { m_lastModificationErrorsHasBeenSet = true; m_lastModificationErrors.push_back(value); return *this; }
    inline Attachment& AddLastModificationErrors(AttachmentError&& value) { m_lastModificationErrorsHasBeenSet = true; m_lastModificationErrors.push_back(std::move(value)); return *this; }
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

    AttachmentType m_attachmentType;
    bool m_attachmentTypeHasBeenSet = false;

    AttachmentState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_edgeLocation;
    bool m_edgeLocationHasBeenSet = false;

    Aws::Vector<Aws::String> m_edgeLocations;
    bool m_edgeLocationsHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    int m_attachmentPolicyRuleNumber;
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

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::Vector<AttachmentError> m_lastModificationErrors;
    bool m_lastModificationErrorsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
