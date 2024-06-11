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
    AWS_WORKDOCS_API Activity();
    AWS_WORKDOCS_API Activity(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Activity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The activity type.</p>
     */
    inline const ActivityType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ActivityType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ActivityType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Activity& WithType(const ActivityType& value) { SetType(value); return *this;}
    inline Activity& WithType(ActivityType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the action was performed.</p>
     */
    inline const Aws::Utils::DateTime& GetTimeStamp() const{ return m_timeStamp; }
    inline bool TimeStampHasBeenSet() const { return m_timeStampHasBeenSet; }
    inline void SetTimeStamp(const Aws::Utils::DateTime& value) { m_timeStampHasBeenSet = true; m_timeStamp = value; }
    inline void SetTimeStamp(Aws::Utils::DateTime&& value) { m_timeStampHasBeenSet = true; m_timeStamp = std::move(value); }
    inline Activity& WithTimeStamp(const Aws::Utils::DateTime& value) { SetTimeStamp(value); return *this;}
    inline Activity& WithTimeStamp(Aws::Utils::DateTime&& value) { SetTimeStamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether an activity is indirect or direct. An indirect activity
     * results from a direct activity performed on a parent resource. For example,
     * sharing a parent folder (the direct activity) shares all of the subfolders and
     * documents within the parent folder (the indirect activity).</p>
     */
    inline bool GetIsIndirectActivity() const{ return m_isIndirectActivity; }
    inline bool IsIndirectActivityHasBeenSet() const { return m_isIndirectActivityHasBeenSet; }
    inline void SetIsIndirectActivity(bool value) { m_isIndirectActivityHasBeenSet = true; m_isIndirectActivity = value; }
    inline Activity& WithIsIndirectActivity(bool value) { SetIsIndirectActivity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the organization.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }
    inline Activity& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}
    inline Activity& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}
    inline Activity& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who performed the action.</p>
     */
    inline const UserMetadata& GetInitiator() const{ return m_initiator; }
    inline bool InitiatorHasBeenSet() const { return m_initiatorHasBeenSet; }
    inline void SetInitiator(const UserMetadata& value) { m_initiatorHasBeenSet = true; m_initiator = value; }
    inline void SetInitiator(UserMetadata&& value) { m_initiatorHasBeenSet = true; m_initiator = std::move(value); }
    inline Activity& WithInitiator(const UserMetadata& value) { SetInitiator(value); return *this;}
    inline Activity& WithInitiator(UserMetadata&& value) { SetInitiator(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of users or groups impacted by this action. This is an optional
     * field and is filled for the following sharing activities: DOCUMENT_SHARED,
     * DOCUMENT_SHARED, DOCUMENT_UNSHARED, FOLDER_SHARED, FOLDER_UNSHARED.</p>
     */
    inline const Participants& GetParticipants() const{ return m_participants; }
    inline bool ParticipantsHasBeenSet() const { return m_participantsHasBeenSet; }
    inline void SetParticipants(const Participants& value) { m_participantsHasBeenSet = true; m_participants = value; }
    inline void SetParticipants(Participants&& value) { m_participantsHasBeenSet = true; m_participants = std::move(value); }
    inline Activity& WithParticipants(const Participants& value) { SetParticipants(value); return *this;}
    inline Activity& WithParticipants(Participants&& value) { SetParticipants(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata of the resource involved in the user action.</p>
     */
    inline const ResourceMetadata& GetResourceMetadata() const{ return m_resourceMetadata; }
    inline bool ResourceMetadataHasBeenSet() const { return m_resourceMetadataHasBeenSet; }
    inline void SetResourceMetadata(const ResourceMetadata& value) { m_resourceMetadataHasBeenSet = true; m_resourceMetadata = value; }
    inline void SetResourceMetadata(ResourceMetadata&& value) { m_resourceMetadataHasBeenSet = true; m_resourceMetadata = std::move(value); }
    inline Activity& WithResourceMetadata(const ResourceMetadata& value) { SetResourceMetadata(value); return *this;}
    inline Activity& WithResourceMetadata(ResourceMetadata&& value) { SetResourceMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The original parent of the resource. This is an optional field and is filled
     * for move activities.</p>
     */
    inline const ResourceMetadata& GetOriginalParent() const{ return m_originalParent; }
    inline bool OriginalParentHasBeenSet() const { return m_originalParentHasBeenSet; }
    inline void SetOriginalParent(const ResourceMetadata& value) { m_originalParentHasBeenSet = true; m_originalParent = value; }
    inline void SetOriginalParent(ResourceMetadata&& value) { m_originalParentHasBeenSet = true; m_originalParent = std::move(value); }
    inline Activity& WithOriginalParent(const ResourceMetadata& value) { SetOriginalParent(value); return *this;}
    inline Activity& WithOriginalParent(ResourceMetadata&& value) { SetOriginalParent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata of the commenting activity. This is an optional field and is filled
     * for commenting activities.</p>
     */
    inline const CommentMetadata& GetCommentMetadata() const{ return m_commentMetadata; }
    inline bool CommentMetadataHasBeenSet() const { return m_commentMetadataHasBeenSet; }
    inline void SetCommentMetadata(const CommentMetadata& value) { m_commentMetadataHasBeenSet = true; m_commentMetadata = value; }
    inline void SetCommentMetadata(CommentMetadata&& value) { m_commentMetadataHasBeenSet = true; m_commentMetadata = std::move(value); }
    inline Activity& WithCommentMetadata(const CommentMetadata& value) { SetCommentMetadata(value); return *this;}
    inline Activity& WithCommentMetadata(CommentMetadata&& value) { SetCommentMetadata(std::move(value)); return *this;}
    ///@}
  private:

    ActivityType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_timeStamp;
    bool m_timeStampHasBeenSet = false;

    bool m_isIndirectActivity;
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
