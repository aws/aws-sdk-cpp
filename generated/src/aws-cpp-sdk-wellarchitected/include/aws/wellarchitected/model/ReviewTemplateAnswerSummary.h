/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/model/ReviewTemplateAnswerStatus.h>
#include <aws/wellarchitected/model/AnswerReason.h>
#include <aws/wellarchitected/model/QuestionType.h>
#include <aws/wellarchitected/model/Choice.h>
#include <aws/wellarchitected/model/ChoiceAnswerSummary.h>
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
   * <p>The summary of review template answers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ReviewTemplateAnswerSummary">AWS
   * API Reference</a></p>
   */
  class ReviewTemplateAnswerSummary
  {
  public:
    AWS_WELLARCHITECTED_API ReviewTemplateAnswerSummary() = default;
    AWS_WELLARCHITECTED_API ReviewTemplateAnswerSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API ReviewTemplateAnswerSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetQuestionId() const { return m_questionId; }
    inline bool QuestionIdHasBeenSet() const { return m_questionIdHasBeenSet; }
    template<typename QuestionIdT = Aws::String>
    void SetQuestionId(QuestionIdT&& value) { m_questionIdHasBeenSet = true; m_questionId = std::forward<QuestionIdT>(value); }
    template<typename QuestionIdT = Aws::String>
    ReviewTemplateAnswerSummary& WithQuestionId(QuestionIdT&& value) { SetQuestionId(std::forward<QuestionIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetPillarId() const { return m_pillarId; }
    inline bool PillarIdHasBeenSet() const { return m_pillarIdHasBeenSet; }
    template<typename PillarIdT = Aws::String>
    void SetPillarId(PillarIdT&& value) { m_pillarIdHasBeenSet = true; m_pillarId = std::forward<PillarIdT>(value); }
    template<typename PillarIdT = Aws::String>
    ReviewTemplateAnswerSummary& WithPillarId(PillarIdT&& value) { SetPillarId(std::forward<PillarIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetQuestionTitle() const { return m_questionTitle; }
    inline bool QuestionTitleHasBeenSet() const { return m_questionTitleHasBeenSet; }
    template<typename QuestionTitleT = Aws::String>
    void SetQuestionTitle(QuestionTitleT&& value) { m_questionTitleHasBeenSet = true; m_questionTitle = std::forward<QuestionTitleT>(value); }
    template<typename QuestionTitleT = Aws::String>
    ReviewTemplateAnswerSummary& WithQuestionTitle(QuestionTitleT&& value) { SetQuestionTitle(std::forward<QuestionTitleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Choice>& GetChoices() const { return m_choices; }
    inline bool ChoicesHasBeenSet() const { return m_choicesHasBeenSet; }
    template<typename ChoicesT = Aws::Vector<Choice>>
    void SetChoices(ChoicesT&& value) { m_choicesHasBeenSet = true; m_choices = std::forward<ChoicesT>(value); }
    template<typename ChoicesT = Aws::Vector<Choice>>
    ReviewTemplateAnswerSummary& WithChoices(ChoicesT&& value) { SetChoices(std::forward<ChoicesT>(value)); return *this;}
    template<typename ChoicesT = Choice>
    ReviewTemplateAnswerSummary& AddChoices(ChoicesT&& value) { m_choicesHasBeenSet = true; m_choices.emplace_back(std::forward<ChoicesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetSelectedChoices() const { return m_selectedChoices; }
    inline bool SelectedChoicesHasBeenSet() const { return m_selectedChoicesHasBeenSet; }
    template<typename SelectedChoicesT = Aws::Vector<Aws::String>>
    void SetSelectedChoices(SelectedChoicesT&& value) { m_selectedChoicesHasBeenSet = true; m_selectedChoices = std::forward<SelectedChoicesT>(value); }
    template<typename SelectedChoicesT = Aws::Vector<Aws::String>>
    ReviewTemplateAnswerSummary& WithSelectedChoices(SelectedChoicesT&& value) { SetSelectedChoices(std::forward<SelectedChoicesT>(value)); return *this;}
    template<typename SelectedChoicesT = Aws::String>
    ReviewTemplateAnswerSummary& AddSelectedChoices(SelectedChoicesT&& value) { m_selectedChoicesHasBeenSet = true; m_selectedChoices.emplace_back(std::forward<SelectedChoicesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of selected choices to a question in the review template.</p>
     */
    inline const Aws::Vector<ChoiceAnswerSummary>& GetChoiceAnswerSummaries() const { return m_choiceAnswerSummaries; }
    inline bool ChoiceAnswerSummariesHasBeenSet() const { return m_choiceAnswerSummariesHasBeenSet; }
    template<typename ChoiceAnswerSummariesT = Aws::Vector<ChoiceAnswerSummary>>
    void SetChoiceAnswerSummaries(ChoiceAnswerSummariesT&& value) { m_choiceAnswerSummariesHasBeenSet = true; m_choiceAnswerSummaries = std::forward<ChoiceAnswerSummariesT>(value); }
    template<typename ChoiceAnswerSummariesT = Aws::Vector<ChoiceAnswerSummary>>
    ReviewTemplateAnswerSummary& WithChoiceAnswerSummaries(ChoiceAnswerSummariesT&& value) { SetChoiceAnswerSummaries(std::forward<ChoiceAnswerSummariesT>(value)); return *this;}
    template<typename ChoiceAnswerSummariesT = ChoiceAnswerSummary>
    ReviewTemplateAnswerSummary& AddChoiceAnswerSummaries(ChoiceAnswerSummariesT&& value) { m_choiceAnswerSummariesHasBeenSet = true; m_choiceAnswerSummaries.emplace_back(std::forward<ChoiceAnswerSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline bool GetIsApplicable() const { return m_isApplicable; }
    inline bool IsApplicableHasBeenSet() const { return m_isApplicableHasBeenSet; }
    inline void SetIsApplicable(bool value) { m_isApplicableHasBeenSet = true; m_isApplicable = value; }
    inline ReviewTemplateAnswerSummary& WithIsApplicable(bool value) { SetIsApplicable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of whether or not this question has been answered.</p>
     */
    inline ReviewTemplateAnswerStatus GetAnswerStatus() const { return m_answerStatus; }
    inline bool AnswerStatusHasBeenSet() const { return m_answerStatusHasBeenSet; }
    inline void SetAnswerStatus(ReviewTemplateAnswerStatus value) { m_answerStatusHasBeenSet = true; m_answerStatus = value; }
    inline ReviewTemplateAnswerSummary& WithAnswerStatus(ReviewTemplateAnswerStatus value) { SetAnswerStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason why a choice is not-applicable to a question in the review
     * template.</p>
     */
    inline AnswerReason GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(AnswerReason value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline ReviewTemplateAnswerSummary& WithReason(AnswerReason value) { SetReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of question.</p>
     */
    inline QuestionType GetQuestionType() const { return m_questionType; }
    inline bool QuestionTypeHasBeenSet() const { return m_questionTypeHasBeenSet; }
    inline void SetQuestionType(QuestionType value) { m_questionTypeHasBeenSet = true; m_questionType = value; }
    inline ReviewTemplateAnswerSummary& WithQuestionType(QuestionType value) { SetQuestionType(value); return *this;}
    ///@}
  private:

    Aws::String m_questionId;
    bool m_questionIdHasBeenSet = false;

    Aws::String m_pillarId;
    bool m_pillarIdHasBeenSet = false;

    Aws::String m_questionTitle;
    bool m_questionTitleHasBeenSet = false;

    Aws::Vector<Choice> m_choices;
    bool m_choicesHasBeenSet = false;

    Aws::Vector<Aws::String> m_selectedChoices;
    bool m_selectedChoicesHasBeenSet = false;

    Aws::Vector<ChoiceAnswerSummary> m_choiceAnswerSummaries;
    bool m_choiceAnswerSummariesHasBeenSet = false;

    bool m_isApplicable{false};
    bool m_isApplicableHasBeenSet = false;

    ReviewTemplateAnswerStatus m_answerStatus{ReviewTemplateAnswerStatus::NOT_SET};
    bool m_answerStatusHasBeenSet = false;

    AnswerReason m_reason{AnswerReason::NOT_SET};
    bool m_reasonHasBeenSet = false;

    QuestionType m_questionType{QuestionType::NOT_SET};
    bool m_questionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
