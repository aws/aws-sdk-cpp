/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/model/ActivityType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/UserMetadata.h>
#include <aws/workdocs/model/Participants.h>
#include <aws/workdocs/model/ResourceMetadata.h>
#include <aws/workdocs/model/CommentMetadata.h>
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
namespace WorkDocs
{
namespace Model
{

  /**
   * <p>Describes the activity information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/Activity">AWS
   * API Reference</a></p>
   */
  class Activity
  {
  public:
    AWS_WORKDOCS_API Activity() = default;
    AWS_WORKDOCS_API Activity(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Activity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The activity type.</p>
     */
    inline ActivityType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ActivityType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Activity& WithType(ActivityType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the action was performed.</p>
     */
    inline const Aws::Utils::DateTime& GetTimeStamp() const { return m_timeStamp; }
    inline bool TimeStampHasBeenSet() const { return m_timeStampHasBeenSet; }
    template<typename TimeStampT = Aws::Utils::DateTime>
    void SetTimeStamp(TimeStampT&& value) { m_timeStampHasBeenSet = true; m_timeStamp = std::forward<TimeStampT>(value); }
    template<typename TimeStampT = Aws::Utils::DateTime>
    Activity& WithTimeStamp(TimeStampT&& value) { SetTimeStamp(std::forward<TimeStampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether an activity is indirect or direct. An indirect activity
     * results from a direct activity performed on a parent resource. For example,
     * sharing a parent folder (the direct activity) shares all of the subfolders and
     * documents within the parent folder (the indirect activity).</p>
     */
    inline bool GetIsIndirectActivity() const { return m_isIndirectActivity; }
    inline bool IsIndirectActivityHasBeenSet() const { return m_isIndirectActivityHasBeenSet; }
    inline void SetIsIndirectActivity(bool value) { m_isIndirectActivityHasBeenSet = true; m_isIndirectActivity = value; }
    inline Activity& WithIsIndirectActivity(bool value) { SetIsIndirectActivity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the organization.</p>
     */
    inline const Aws::String& GetOrganizationId() const { return m_organizationId; }
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
    template<typename OrganizationIdT = Aws::String>
    void SetOrganizationId(OrganizationIdT&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::forward<OrganizationIdT>(value); }
    template<typename OrganizationIdT = Aws::String>
    Activity& WithOrganizationId(OrganizationIdT&& value) { SetOrganizationId(std::forward<OrganizationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who performed the action.</p>
     */
    inline const UserMetadata& GetInitiator() const { return m_initiator; }
    inline bool InitiatorHasBeenSet() const { return m_initiatorHasBeenSet; }
    template<typename InitiatorT = UserMetadata>
    void SetInitiator(InitiatorT&& value) { m_initiatorHasBeenSet = true; m_initiator = std::forward<InitiatorT>(value); }
    template<typename InitiatorT = UserMetadata>
    Activity& WithInitiator(InitiatorT&& value) { SetInitiator(std::forward<InitiatorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of users or groups impacted by this action. This is an optional
     * field and is filled for the following sharing activities: DOCUMENT_SHARED,
     * DOCUMENT_SHARED, DOCUMENT_UNSHARED, FOLDER_SHARED, FOLDER_UNSHARED.</p>
     */
    inline const Participants& GetParticipants() const { return m_participants; }
    inline bool ParticipantsHasBeenSet() const { return m_participantsHasBeenSet; }
    template<typename ParticipantsT = Participants>
    void SetParticipants(ParticipantsT&& value) { m_participantsHasBeenSet = true; m_participants = std::forward<ParticipantsT>(value); }
    template<typename ParticipantsT = Participants>
    Activity& WithParticipants(ParticipantsT&& value) { SetParticipants(std::forward<ParticipantsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata of the resource involved in the user action.</p>
     */
    inline const ResourceMetadata& GetResourceMetadata() const { return m_resourceMetadata; }
    inline bool ResourceMetadataHasBeenSet() const { return m_resourceMetadataHasBeenSet; }
    template<typename ResourceMetadataT = ResourceMetadata>
    void SetResourceMetadata(ResourceMetadataT&& value) { m_resourceMetadataHasBeenSet = true; m_resourceMetadata = std::forward<ResourceMetadataT>(value); }
    template<typename ResourceMetadataT = ResourceMetadata>
    Activity& WithResourceMetadata(ResourceMetadataT&& value) { SetResourceMetadata(std::forward<ResourceMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The original parent of the resource. This is an optional field and is filled
     * for move activities.</p>
     */
    inline const ResourceMetadata& GetOriginalParent() const { return m_originalParent; }
    inline bool OriginalParentHasBeenSet() const { return m_originalParentHasBeenSet; }
    template<typename OriginalParentT = ResourceMetadata>
    void SetOriginalParent(OriginalParentT&& value) { m_originalParentHasBeenSet = true; m_originalParent = std::forward<OriginalParentT>(value); }
    template<typename OriginalParentT = ResourceMetadata>
    Activity& WithOriginalParent(OriginalParentT&& value) { SetOriginalParent(std::forward<OriginalParentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata of the commenting activity. This is an optional field and is filled
     * for commenting activities.</p>
     */
    inline const CommentMetadata& GetCommentMetadata() const { return m_commentMetadata; }
    inline bool CommentMetadataHasBeenSet() const { return m_commentMetadataHasBeenSet; }
    template<typename CommentMetadataT = CommentMetadata>
    void SetCommentMetadata(CommentMetadataT&& value) { m_commentMetadataHasBeenSet = true; m_commentMetadata = std::forward<CommentMetadataT>(value); }
    template<typename CommentMetadataT = CommentMetadata>
    Activity& WithCommentMetadata(CommentMetadataT&& value) { SetCommentMetadata(std::forward<CommentMetadataT>(value)); return *this;}
    ///@}
  private:

    ActivityType m_type{ActivityType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_timeStamp{};
    bool m_timeStampHasBeenSet = false;

    bool m_isIndirectActivity{false};
    bool m_isIndirectActivityHasBeenSet = false;

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    UserMetadata m_initiator;
    bool m_initiatorHasBeenSet = false;

    Participants m_participants;
    bool m_participantsHasBeenSet = false;

    ResourceMetadata m_resourceMetadata;
    bool m_resourceMetadataHasBeenSet = false;

    ResourceMetadata m_originalParent;
    bool m_originalParentHasBeenSet = false;

    CommentMetadata m_commentMetadata;
    bool m_commentMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
