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
   */
  class UpdateReviewTemplateAnswerRequest : public WellArchitectedRequest
  {
  public:
    AWS_WELLARCHITECTED_API UpdateReviewTemplateAnswerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateReviewTemplateAnswer"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The review template ARN.</p>
     */
    inline const Aws::String& GetTemplateArn() const { return m_templateArn; }
    inline bool TemplateArnHasBeenSet() const { return m_templateArnHasBeenSet; }
    template<typename TemplateArnT = Aws::String>
    void SetTemplateArn(TemplateArnT&& value) { m_templateArnHasBeenSet = true; m_templateArn = std::forward<TemplateArnT>(value); }
    template<typename TemplateArnT = Aws::String>
    UpdateReviewTemplateAnswerRequest& WithTemplateArn(TemplateArnT&& value) { SetTemplateArn(std::forward<TemplateArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetLensAlias() const { return m_lensAlias; }
    inline bool LensAliasHasBeenSet() const { return m_lensAliasHasBeenSet; }
    template<typename LensAliasT = Aws::String>
    void SetLensAlias(LensAliasT&& value) { m_lensAliasHasBeenSet = true; m_lensAlias = std::forward<LensAliasT>(value); }
    template<typename LensAliasT = Aws::String>
    UpdateReviewTemplateAnswerRequest& WithLensAlias(LensAliasT&& value) { SetLensAlias(std::forward<LensAliasT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetQuestionId() const { return m_questionId; }
    inline bool QuestionIdHasBeenSet() const { return m_questionIdHasBeenSet; }
    template<typename QuestionIdT = Aws::String>
    void SetQuestionId(QuestionIdT&& value) { m_questionIdHasBeenSet = true; m_questionId = std::forward<QuestionIdT>(value); }
    template<typename QuestionIdT = Aws::String>
    UpdateReviewTemplateAnswerRequest& WithQuestionId(QuestionIdT&& value) { SetQuestionId(std::forward<QuestionIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetSelectedChoices() const { return m_selectedChoices; }
    inline bool SelectedChoicesHasBeenSet() const { return m_selectedChoicesHasBeenSet; }
    template<typename SelectedChoicesT = Aws::Vector<Aws::String>>
    void SetSelectedChoices(SelectedChoicesT&& value) { m_selectedChoicesHasBeenSet = true; m_selectedChoices = std::forward<SelectedChoicesT>(value); }
    template<typename SelectedChoicesT = Aws::Vector<Aws::String>>
    UpdateReviewTemplateAnswerRequest& WithSelectedChoices(SelectedChoicesT&& value) { SetSelectedChoices(std::forward<SelectedChoicesT>(value)); return *this;}
    template<typename SelectedChoicesT = Aws::String>
    UpdateReviewTemplateAnswerRequest& AddSelectedChoices(SelectedChoicesT&& value) { m_selectedChoicesHasBeenSet = true; m_selectedChoices.emplace_back(std::forward<SelectedChoicesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of choices to be updated.</p>
     */
    inline const Aws::Map<Aws::String, ChoiceUpdate>& GetChoiceUpdates() const { return m_choiceUpdates; }
    inline bool ChoiceUpdatesHasBeenSet() const { return m_choiceUpdatesHasBeenSet; }
    template<typename ChoiceUpdatesT = Aws::Map<Aws::String, ChoiceUpdate>>
    void SetChoiceUpdates(ChoiceUpdatesT&& value) { m_choiceUpdatesHasBeenSet = true; m_choiceUpdates = std::forward<ChoiceUpdatesT>(value); }
    template<typename ChoiceUpdatesT = Aws::Map<Aws::String, ChoiceUpdate>>
    UpdateReviewTemplateAnswerRequest& WithChoiceUpdates(ChoiceUpdatesT&& value) { SetChoiceUpdates(std::forward<ChoiceUpdatesT>(value)); return *this;}
    template<typename ChoiceUpdatesKeyT = Aws::String, typename ChoiceUpdatesValueT = ChoiceUpdate>
    UpdateReviewTemplateAnswerRequest& AddChoiceUpdates(ChoiceUpdatesKeyT&& key, ChoiceUpdatesValueT&& value) {
      m_choiceUpdatesHasBeenSet = true; m_choiceUpdates.emplace(std::forward<ChoiceUpdatesKeyT>(key), std::forward<ChoiceUpdatesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetNotes() const { return m_notes; }
    inline bool NotesHasBeenSet() const { return m_notesHasBeenSet; }
    template<typename NotesT = Aws::String>
    void SetNotes(NotesT&& value) { m_notesHasBeenSet = true; m_notes = std::forward<NotesT>(value); }
    template<typename NotesT = Aws::String>
    UpdateReviewTemplateAnswerRequest& WithNotes(NotesT&& value) { SetNotes(std::forward<NotesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline bool GetIsApplicable() const { return m_isApplicable; }
    inline bool IsApplicableHasBeenSet() const { return m_isApplicableHasBeenSet; }
    inline void SetIsApplicable(bool value) { m_isApplicableHasBeenSet = true; m_isApplicable = value; }
    inline UpdateReviewTemplateAnswerRequest& WithIsApplicable(bool value) { SetIsApplicable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The update reason.</p>
     */
    inline AnswerReason GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(AnswerReason value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline UpdateReviewTemplateAnswerRequest& WithReason(AnswerReason value) { SetReason(value); return *this;}
    ///@}
  private:

    Aws::String m_templateArn;
    bool m_templateArnHasBeenSet = false;

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

    bool m_isApplicable{false};
    bool m_isApplicableHasBeenSet = false;

    AnswerReason m_reason{AnswerReason::NOT_SET};
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
