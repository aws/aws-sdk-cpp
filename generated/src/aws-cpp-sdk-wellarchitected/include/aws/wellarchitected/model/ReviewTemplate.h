/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/wellarchitected/model/ReviewTemplateUpdateStatus.h>
#include <aws/wellarchitected/model/Question.h>
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
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>A review template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ReviewTemplate">AWS
   * API Reference</a></p>
   */
  class ReviewTemplate
  {
  public:
    AWS_WELLARCHITECTED_API ReviewTemplate();
    AWS_WELLARCHITECTED_API ReviewTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API ReviewTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The review template description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ReviewTemplate& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ReviewTemplate& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ReviewTemplate& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lenses applied to the review template.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLenses() const{ return m_lenses; }
    inline bool LensesHasBeenSet() const { return m_lensesHasBeenSet; }
    inline void SetLenses(const Aws::Vector<Aws::String>& value) { m_lensesHasBeenSet = true; m_lenses = value; }
    inline void SetLenses(Aws::Vector<Aws::String>&& value) { m_lensesHasBeenSet = true; m_lenses = std::move(value); }
    inline ReviewTemplate& WithLenses(const Aws::Vector<Aws::String>& value) { SetLenses(value); return *this;}
    inline ReviewTemplate& WithLenses(Aws::Vector<Aws::String>&& value) { SetLenses(std::move(value)); return *this;}
    inline ReviewTemplate& AddLenses(const Aws::String& value) { m_lensesHasBeenSet = true; m_lenses.push_back(value); return *this; }
    inline ReviewTemplate& AddLenses(Aws::String&& value) { m_lensesHasBeenSet = true; m_lenses.push_back(std::move(value)); return *this; }
    inline ReviewTemplate& AddLenses(const char* value) { m_lensesHasBeenSet = true; m_lenses.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNotes() const{ return m_notes; }
    inline bool NotesHasBeenSet() const { return m_notesHasBeenSet; }
    inline void SetNotes(const Aws::String& value) { m_notesHasBeenSet = true; m_notes = value; }
    inline void SetNotes(Aws::String&& value) { m_notesHasBeenSet = true; m_notes = std::move(value); }
    inline void SetNotes(const char* value) { m_notesHasBeenSet = true; m_notes.assign(value); }
    inline ReviewTemplate& WithNotes(const Aws::String& value) { SetNotes(value); return *this;}
    inline ReviewTemplate& WithNotes(Aws::String&& value) { SetNotes(std::move(value)); return *this;}
    inline ReviewTemplate& WithNotes(const char* value) { SetNotes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A count of how many total questions are answered and unanswered in the review
     * template.</p>
     */
    inline const Aws::Map<Question, int>& GetQuestionCounts() const{ return m_questionCounts; }
    inline bool QuestionCountsHasBeenSet() const { return m_questionCountsHasBeenSet; }
    inline void SetQuestionCounts(const Aws::Map<Question, int>& value) { m_questionCountsHasBeenSet = true; m_questionCounts = value; }
    inline void SetQuestionCounts(Aws::Map<Question, int>&& value) { m_questionCountsHasBeenSet = true; m_questionCounts = std::move(value); }
    inline ReviewTemplate& WithQuestionCounts(const Aws::Map<Question, int>& value) { SetQuestionCounts(value); return *this;}
    inline ReviewTemplate& WithQuestionCounts(Aws::Map<Question, int>&& value) { SetQuestionCounts(std::move(value)); return *this;}
    inline ReviewTemplate& AddQuestionCounts(const Question& key, int value) { m_questionCountsHasBeenSet = true; m_questionCounts.emplace(key, value); return *this; }
    inline ReviewTemplate& AddQuestionCounts(Question&& key, int value) { m_questionCountsHasBeenSet = true; m_questionCounts.emplace(std::move(key), value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetOwner() const{ return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }
    inline ReviewTemplate& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}
    inline ReviewTemplate& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}
    inline ReviewTemplate& WithOwner(const char* value) { SetOwner(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline ReviewTemplate& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline ReviewTemplate& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The review template ARN.</p>
     */
    inline const Aws::String& GetTemplateArn() const{ return m_templateArn; }
    inline bool TemplateArnHasBeenSet() const { return m_templateArnHasBeenSet; }
    inline void SetTemplateArn(const Aws::String& value) { m_templateArnHasBeenSet = true; m_templateArn = value; }
    inline void SetTemplateArn(Aws::String&& value) { m_templateArnHasBeenSet = true; m_templateArn = std::move(value); }
    inline void SetTemplateArn(const char* value) { m_templateArnHasBeenSet = true; m_templateArn.assign(value); }
    inline ReviewTemplate& WithTemplateArn(const Aws::String& value) { SetTemplateArn(value); return *this;}
    inline ReviewTemplate& WithTemplateArn(Aws::String&& value) { SetTemplateArn(std::move(value)); return *this;}
    inline ReviewTemplate& WithTemplateArn(const char* value) { SetTemplateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the review template.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }
    inline ReviewTemplate& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}
    inline ReviewTemplate& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}
    inline ReviewTemplate& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the review template.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ReviewTemplate& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline ReviewTemplate& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline ReviewTemplate& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline ReviewTemplate& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ReviewTemplate& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ReviewTemplate& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline ReviewTemplate& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ReviewTemplate& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ReviewTemplate& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The latest status of a review template.</p>
     */
    inline const ReviewTemplateUpdateStatus& GetUpdateStatus() const{ return m_updateStatus; }
    inline bool UpdateStatusHasBeenSet() const { return m_updateStatusHasBeenSet; }
    inline void SetUpdateStatus(const ReviewTemplateUpdateStatus& value) { m_updateStatusHasBeenSet = true; m_updateStatus = value; }
    inline void SetUpdateStatus(ReviewTemplateUpdateStatus&& value) { m_updateStatusHasBeenSet = true; m_updateStatus = std::move(value); }
    inline ReviewTemplate& WithUpdateStatus(const ReviewTemplateUpdateStatus& value) { SetUpdateStatus(value); return *this;}
    inline ReviewTemplate& WithUpdateStatus(ReviewTemplateUpdateStatus&& value) { SetUpdateStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID assigned to the template share invitation.</p>
     */
    inline const Aws::String& GetShareInvitationId() const{ return m_shareInvitationId; }
    inline bool ShareInvitationIdHasBeenSet() const { return m_shareInvitationIdHasBeenSet; }
    inline void SetShareInvitationId(const Aws::String& value) { m_shareInvitationIdHasBeenSet = true; m_shareInvitationId = value; }
    inline void SetShareInvitationId(Aws::String&& value) { m_shareInvitationIdHasBeenSet = true; m_shareInvitationId = std::move(value); }
    inline void SetShareInvitationId(const char* value) { m_shareInvitationIdHasBeenSet = true; m_shareInvitationId.assign(value); }
    inline ReviewTemplate& WithShareInvitationId(const Aws::String& value) { SetShareInvitationId(value); return *this;}
    inline ReviewTemplate& WithShareInvitationId(Aws::String&& value) { SetShareInvitationId(std::move(value)); return *this;}
    inline ReviewTemplate& WithShareInvitationId(const char* value) { SetShareInvitationId(value); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_lenses;
    bool m_lensesHasBeenSet = false;

    Aws::String m_notes;
    bool m_notesHasBeenSet = false;

    Aws::Map<Question, int> m_questionCounts;
    bool m_questionCountsHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_templateArn;
    bool m_templateArnHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    ReviewTemplateUpdateStatus m_updateStatus;
    bool m_updateStatusHasBeenSet = false;

    Aws::String m_shareInvitationId;
    bool m_shareInvitationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
