/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/wellarchitected/model/AnswerReason.h>
#include <aws/wellarchitected/model/ChoiceUpdate.h>
#include <utility>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>Input to update answer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpdateAnswerInput">AWS
   * API Reference</a></p>
   */
  class UpdateAnswerRequest : public WellArchitectedRequest
  {
  public:
    AWS_WELLARCHITECTED_API UpdateAnswerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAnswer"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetWorkloadId() const{ return m_workloadId; }

    
    inline bool WorkloadIdHasBeenSet() const { return m_workloadIdHasBeenSet; }

    
    inline void SetWorkloadId(const Aws::String& value) { m_workloadIdHasBeenSet = true; m_workloadId = value; }

    
    inline void SetWorkloadId(Aws::String&& value) { m_workloadIdHasBeenSet = true; m_workloadId = std::move(value); }

    
    inline void SetWorkloadId(const char* value) { m_workloadIdHasBeenSet = true; m_workloadId.assign(value); }

    
    inline UpdateAnswerRequest& WithWorkloadId(const Aws::String& value) { SetWorkloadId(value); return *this;}

    
    inline UpdateAnswerRequest& WithWorkloadId(Aws::String&& value) { SetWorkloadId(std::move(value)); return *this;}

    
    inline UpdateAnswerRequest& WithWorkloadId(const char* value) { SetWorkloadId(value); return *this;}


    
    inline const Aws::String& GetLensAlias() const{ return m_lensAlias; }

    
    inline bool LensAliasHasBeenSet() const { return m_lensAliasHasBeenSet; }

    
    inline void SetLensAlias(const Aws::String& value) { m_lensAliasHasBeenSet = true; m_lensAlias = value; }

    
    inline void SetLensAlias(Aws::String&& value) { m_lensAliasHasBeenSet = true; m_lensAlias = std::move(value); }

    
    inline void SetLensAlias(const char* value) { m_lensAliasHasBeenSet = true; m_lensAlias.assign(value); }

    
    inline UpdateAnswerRequest& WithLensAlias(const Aws::String& value) { SetLensAlias(value); return *this;}

    
    inline UpdateAnswerRequest& WithLensAlias(Aws::String&& value) { SetLensAlias(std::move(value)); return *this;}

    
    inline UpdateAnswerRequest& WithLensAlias(const char* value) { SetLensAlias(value); return *this;}


    
    inline const Aws::String& GetQuestionId() const{ return m_questionId; }

    
    inline bool QuestionIdHasBeenSet() const { return m_questionIdHasBeenSet; }

    
    inline void SetQuestionId(const Aws::String& value) { m_questionIdHasBeenSet = true; m_questionId = value; }

    
    inline void SetQuestionId(Aws::String&& value) { m_questionIdHasBeenSet = true; m_questionId = std::move(value); }

    
    inline void SetQuestionId(const char* value) { m_questionIdHasBeenSet = true; m_questionId.assign(value); }

    
    inline UpdateAnswerRequest& WithQuestionId(const Aws::String& value) { SetQuestionId(value); return *this;}

    
    inline UpdateAnswerRequest& WithQuestionId(Aws::String&& value) { SetQuestionId(std::move(value)); return *this;}

    
    inline UpdateAnswerRequest& WithQuestionId(const char* value) { SetQuestionId(value); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetSelectedChoices() const{ return m_selectedChoices; }

    
    inline bool SelectedChoicesHasBeenSet() const { return m_selectedChoicesHasBeenSet; }

    
    inline void SetSelectedChoices(const Aws::Vector<Aws::String>& value) { m_selectedChoicesHasBeenSet = true; m_selectedChoices = value; }

    
    inline void SetSelectedChoices(Aws::Vector<Aws::String>&& value) { m_selectedChoicesHasBeenSet = true; m_selectedChoices = std::move(value); }

    
    inline UpdateAnswerRequest& WithSelectedChoices(const Aws::Vector<Aws::String>& value) { SetSelectedChoices(value); return *this;}

    
    inline UpdateAnswerRequest& WithSelectedChoices(Aws::Vector<Aws::String>&& value) { SetSelectedChoices(std::move(value)); return *this;}

    
    inline UpdateAnswerRequest& AddSelectedChoices(const Aws::String& value) { m_selectedChoicesHasBeenSet = true; m_selectedChoices.push_back(value); return *this; }

    
    inline UpdateAnswerRequest& AddSelectedChoices(Aws::String&& value) { m_selectedChoicesHasBeenSet = true; m_selectedChoices.push_back(std::move(value)); return *this; }

    
    inline UpdateAnswerRequest& AddSelectedChoices(const char* value) { m_selectedChoicesHasBeenSet = true; m_selectedChoices.push_back(value); return *this; }


    /**
     * <p>A list of choices to update on a question in your workload. The String key
     * corresponds to the choice ID to be updated.</p>
     */
    inline const Aws::Map<Aws::String, ChoiceUpdate>& GetChoiceUpdates() const{ return m_choiceUpdates; }

    /**
     * <p>A list of choices to update on a question in your workload. The String key
     * corresponds to the choice ID to be updated.</p>
     */
    inline bool ChoiceUpdatesHasBeenSet() const { return m_choiceUpdatesHasBeenSet; }

    /**
     * <p>A list of choices to update on a question in your workload. The String key
     * corresponds to the choice ID to be updated.</p>
     */
    inline void SetChoiceUpdates(const Aws::Map<Aws::String, ChoiceUpdate>& value) { m_choiceUpdatesHasBeenSet = true; m_choiceUpdates = value; }

    /**
     * <p>A list of choices to update on a question in your workload. The String key
     * corresponds to the choice ID to be updated.</p>
     */
    inline void SetChoiceUpdates(Aws::Map<Aws::String, ChoiceUpdate>&& value) { m_choiceUpdatesHasBeenSet = true; m_choiceUpdates = std::move(value); }

    /**
     * <p>A list of choices to update on a question in your workload. The String key
     * corresponds to the choice ID to be updated.</p>
     */
    inline UpdateAnswerRequest& WithChoiceUpdates(const Aws::Map<Aws::String, ChoiceUpdate>& value) { SetChoiceUpdates(value); return *this;}

    /**
     * <p>A list of choices to update on a question in your workload. The String key
     * corresponds to the choice ID to be updated.</p>
     */
    inline UpdateAnswerRequest& WithChoiceUpdates(Aws::Map<Aws::String, ChoiceUpdate>&& value) { SetChoiceUpdates(std::move(value)); return *this;}

    /**
     * <p>A list of choices to update on a question in your workload. The String key
     * corresponds to the choice ID to be updated.</p>
     */
    inline UpdateAnswerRequest& AddChoiceUpdates(const Aws::String& key, const ChoiceUpdate& value) { m_choiceUpdatesHasBeenSet = true; m_choiceUpdates.emplace(key, value); return *this; }

    /**
     * <p>A list of choices to update on a question in your workload. The String key
     * corresponds to the choice ID to be updated.</p>
     */
    inline UpdateAnswerRequest& AddChoiceUpdates(Aws::String&& key, const ChoiceUpdate& value) { m_choiceUpdatesHasBeenSet = true; m_choiceUpdates.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of choices to update on a question in your workload. The String key
     * corresponds to the choice ID to be updated.</p>
     */
    inline UpdateAnswerRequest& AddChoiceUpdates(const Aws::String& key, ChoiceUpdate&& value) { m_choiceUpdatesHasBeenSet = true; m_choiceUpdates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of choices to update on a question in your workload. The String key
     * corresponds to the choice ID to be updated.</p>
     */
    inline UpdateAnswerRequest& AddChoiceUpdates(Aws::String&& key, ChoiceUpdate&& value) { m_choiceUpdatesHasBeenSet = true; m_choiceUpdates.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of choices to update on a question in your workload. The String key
     * corresponds to the choice ID to be updated.</p>
     */
    inline UpdateAnswerRequest& AddChoiceUpdates(const char* key, ChoiceUpdate&& value) { m_choiceUpdatesHasBeenSet = true; m_choiceUpdates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of choices to update on a question in your workload. The String key
     * corresponds to the choice ID to be updated.</p>
     */
    inline UpdateAnswerRequest& AddChoiceUpdates(const char* key, const ChoiceUpdate& value) { m_choiceUpdatesHasBeenSet = true; m_choiceUpdates.emplace(key, value); return *this; }


    
    inline const Aws::String& GetNotes() const{ return m_notes; }

    
    inline bool NotesHasBeenSet() const { return m_notesHasBeenSet; }

    
    inline void SetNotes(const Aws::String& value) { m_notesHasBeenSet = true; m_notes = value; }

    
    inline void SetNotes(Aws::String&& value) { m_notesHasBeenSet = true; m_notes = std::move(value); }

    
    inline void SetNotes(const char* value) { m_notesHasBeenSet = true; m_notes.assign(value); }

    
    inline UpdateAnswerRequest& WithNotes(const Aws::String& value) { SetNotes(value); return *this;}

    
    inline UpdateAnswerRequest& WithNotes(Aws::String&& value) { SetNotes(std::move(value)); return *this;}

    
    inline UpdateAnswerRequest& WithNotes(const char* value) { SetNotes(value); return *this;}


    
    inline bool GetIsApplicable() const{ return m_isApplicable; }

    
    inline bool IsApplicableHasBeenSet() const { return m_isApplicableHasBeenSet; }

    
    inline void SetIsApplicable(bool value) { m_isApplicableHasBeenSet = true; m_isApplicable = value; }

    
    inline UpdateAnswerRequest& WithIsApplicable(bool value) { SetIsApplicable(value); return *this;}


    /**
     * <p>The reason why a question is not applicable to your workload.</p>
     */
    inline const AnswerReason& GetReason() const{ return m_reason; }

    /**
     * <p>The reason why a question is not applicable to your workload.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason why a question is not applicable to your workload.</p>
     */
    inline void SetReason(const AnswerReason& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason why a question is not applicable to your workload.</p>
     */
    inline void SetReason(AnswerReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason why a question is not applicable to your workload.</p>
     */
    inline UpdateAnswerRequest& WithReason(const AnswerReason& value) { SetReason(value); return *this;}

    /**
     * <p>The reason why a question is not applicable to your workload.</p>
     */
    inline UpdateAnswerRequest& WithReason(AnswerReason&& value) { SetReason(std::move(value)); return *this;}

  private:

    Aws::String m_workloadId;
    bool m_workloadIdHasBeenSet = false;

    Aws::String m_lensAlias;
    bool m_lensAliasHasBeenSet = false;

    Aws::String m_questionId;
    bool m_questionIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_selectedChoices;
    bool m_selectedChoicesHasBeenSet = false;

    Aws::Map<Aws::String, ChoiceUpdate> m_choiceUpdates;
    bool m_choiceUpdatesHasBeenSet = false;

    Aws::String m_notes;
    bool m_notesHasBeenSet = false;

    bool m_isApplicable;
    bool m_isApplicableHasBeenSet = false;

    AnswerReason m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
