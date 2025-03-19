/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/model/Risk.h>
#include <aws/wellarchitected/model/AnswerReason.h>
#include <aws/wellarchitected/model/JiraConfiguration.h>
#include <aws/wellarchitected/model/Choice.h>
#include <aws/wellarchitected/model/ChoiceAnswer.h>
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
   * <p>An answer of the question.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/Answer">AWS
   * API Reference</a></p>
   */
  class Answer
  {
  public:
    AWS_WELLARCHITECTED_API Answer() = default;
    AWS_WELLARCHITECTED_API Answer(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Answer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetQuestionId() const { return m_questionId; }
    inline bool QuestionIdHasBeenSet() const { return m_questionIdHasBeenSet; }
    template<typename QuestionIdT = Aws::String>
    void SetQuestionId(QuestionIdT&& value) { m_questionIdHasBeenSet = true; m_questionId = std::forward<QuestionIdT>(value); }
    template<typename QuestionIdT = Aws::String>
    Answer& WithQuestionId(QuestionIdT&& value) { SetQuestionId(std::forward<QuestionIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetPillarId() const { return m_pillarId; }
    inline bool PillarIdHasBeenSet() const { return m_pillarIdHasBeenSet; }
    template<typename PillarIdT = Aws::String>
    void SetPillarId(PillarIdT&& value) { m_pillarIdHasBeenSet = true; m_pillarId = std::forward<PillarIdT>(value); }
    template<typename PillarIdT = Aws::String>
    Answer& WithPillarId(PillarIdT&& value) { SetPillarId(std::forward<PillarIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetQuestionTitle() const { return m_questionTitle; }
    inline bool QuestionTitleHasBeenSet() const { return m_questionTitleHasBeenSet; }
    template<typename QuestionTitleT = Aws::String>
    void SetQuestionTitle(QuestionTitleT&& value) { m_questionTitleHasBeenSet = true; m_questionTitle = std::forward<QuestionTitleT>(value); }
    template<typename QuestionTitleT = Aws::String>
    Answer& WithQuestionTitle(QuestionTitleT&& value) { SetQuestionTitle(std::forward<QuestionTitleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetQuestionDescription() const { return m_questionDescription; }
    inline bool QuestionDescriptionHasBeenSet() const { return m_questionDescriptionHasBeenSet; }
    template<typename QuestionDescriptionT = Aws::String>
    void SetQuestionDescription(QuestionDescriptionT&& value) { m_questionDescriptionHasBeenSet = true; m_questionDescription = std::forward<QuestionDescriptionT>(value); }
    template<typename QuestionDescriptionT = Aws::String>
    Answer& WithQuestionDescription(QuestionDescriptionT&& value) { SetQuestionDescription(std::forward<QuestionDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetImprovementPlanUrl() const { return m_improvementPlanUrl; }
    inline bool ImprovementPlanUrlHasBeenSet() const { return m_improvementPlanUrlHasBeenSet; }
    template<typename ImprovementPlanUrlT = Aws::String>
    void SetImprovementPlanUrl(ImprovementPlanUrlT&& value) { m_improvementPlanUrlHasBeenSet = true; m_improvementPlanUrl = std::forward<ImprovementPlanUrlT>(value); }
    template<typename ImprovementPlanUrlT = Aws::String>
    Answer& WithImprovementPlanUrl(ImprovementPlanUrlT&& value) { SetImprovementPlanUrl(std::forward<ImprovementPlanUrlT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetHelpfulResourceUrl() const { return m_helpfulResourceUrl; }
    inline bool HelpfulResourceUrlHasBeenSet() const { return m_helpfulResourceUrlHasBeenSet; }
    template<typename HelpfulResourceUrlT = Aws::String>
    void SetHelpfulResourceUrl(HelpfulResourceUrlT&& value) { m_helpfulResourceUrlHasBeenSet = true; m_helpfulResourceUrl = std::forward<HelpfulResourceUrlT>(value); }
    template<typename HelpfulResourceUrlT = Aws::String>
    Answer& WithHelpfulResourceUrl(HelpfulResourceUrlT&& value) { SetHelpfulResourceUrl(std::forward<HelpfulResourceUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The helpful resource text to be displayed for a custom lens.</p> <p>This
     * field does not apply to Amazon Web Services official lenses.</p>
     */
    inline const Aws::String& GetHelpfulResourceDisplayText() const { return m_helpfulResourceDisplayText; }
    inline bool HelpfulResourceDisplayTextHasBeenSet() const { return m_helpfulResourceDisplayTextHasBeenSet; }
    template<typename HelpfulResourceDisplayTextT = Aws::String>
    void SetHelpfulResourceDisplayText(HelpfulResourceDisplayTextT&& value) { m_helpfulResourceDisplayTextHasBeenSet = true; m_helpfulResourceDisplayText = std::forward<HelpfulResourceDisplayTextT>(value); }
    template<typename HelpfulResourceDisplayTextT = Aws::String>
    Answer& WithHelpfulResourceDisplayText(HelpfulResourceDisplayTextT&& value) { SetHelpfulResourceDisplayText(std::forward<HelpfulResourceDisplayTextT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Choice>& GetChoices() const { return m_choices; }
    inline bool ChoicesHasBeenSet() const { return m_choicesHasBeenSet; }
    template<typename ChoicesT = Aws::Vector<Choice>>
    void SetChoices(ChoicesT&& value) { m_choicesHasBeenSet = true; m_choices = std::forward<ChoicesT>(value); }
    template<typename ChoicesT = Aws::Vector<Choice>>
    Answer& WithChoices(ChoicesT&& value) { SetChoices(std::forward<ChoicesT>(value)); return *this;}
    template<typename ChoicesT = Choice>
    Answer& AddChoices(ChoicesT&& value) { m_choicesHasBeenSet = true; m_choices.emplace_back(std::forward<ChoicesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetSelectedChoices() const { return m_selectedChoices; }
    inline bool SelectedChoicesHasBeenSet() const { return m_selectedChoicesHasBeenSet; }
    template<typename SelectedChoicesT = Aws::Vector<Aws::String>>
    void SetSelectedChoices(SelectedChoicesT&& value) { m_selectedChoicesHasBeenSet = true; m_selectedChoices = std::forward<SelectedChoicesT>(value); }
    template<typename SelectedChoicesT = Aws::Vector<Aws::String>>
    Answer& WithSelectedChoices(SelectedChoicesT&& value) { SetSelectedChoices(std::forward<SelectedChoicesT>(value)); return *this;}
    template<typename SelectedChoicesT = Aws::String>
    Answer& AddSelectedChoices(SelectedChoicesT&& value) { m_selectedChoicesHasBeenSet = true; m_selectedChoices.emplace_back(std::forward<SelectedChoicesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of selected choices to a question in your workload.</p>
     */
    inline const Aws::Vector<ChoiceAnswer>& GetChoiceAnswers() const { return m_choiceAnswers; }
    inline bool ChoiceAnswersHasBeenSet() const { return m_choiceAnswersHasBeenSet; }
    template<typename ChoiceAnswersT = Aws::Vector<ChoiceAnswer>>
    void SetChoiceAnswers(ChoiceAnswersT&& value) { m_choiceAnswersHasBeenSet = true; m_choiceAnswers = std::forward<ChoiceAnswersT>(value); }
    template<typename ChoiceAnswersT = Aws::Vector<ChoiceAnswer>>
    Answer& WithChoiceAnswers(ChoiceAnswersT&& value) { SetChoiceAnswers(std::forward<ChoiceAnswersT>(value)); return *this;}
    template<typename ChoiceAnswersT = ChoiceAnswer>
    Answer& AddChoiceAnswers(ChoiceAnswersT&& value) { m_choiceAnswersHasBeenSet = true; m_choiceAnswers.emplace_back(std::forward<ChoiceAnswersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline bool GetIsApplicable() const { return m_isApplicable; }
    inline bool IsApplicableHasBeenSet() const { return m_isApplicableHasBeenSet; }
    inline void SetIsApplicable(bool value) { m_isApplicableHasBeenSet = true; m_isApplicable = value; }
    inline Answer& WithIsApplicable(bool value) { SetIsApplicable(value); return *this;}
    ///@}

    ///@{
    
    inline Risk GetRisk() const { return m_risk; }
    inline bool RiskHasBeenSet() const { return m_riskHasBeenSet; }
    inline void SetRisk(Risk value) { m_riskHasBeenSet = true; m_risk = value; }
    inline Answer& WithRisk(Risk value) { SetRisk(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetNotes() const { return m_notes; }
    inline bool NotesHasBeenSet() const { return m_notesHasBeenSet; }
    template<typename NotesT = Aws::String>
    void SetNotes(NotesT&& value) { m_notesHasBeenSet = true; m_notes = std::forward<NotesT>(value); }
    template<typename NotesT = Aws::String>
    Answer& WithNotes(NotesT&& value) { SetNotes(std::forward<NotesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason why the question is not applicable to your workload.</p>
     */
    inline AnswerReason GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(AnswerReason value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline Answer& WithReason(AnswerReason value) { SetReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration of the Jira integration.</p>
     */
    inline const JiraConfiguration& GetJiraConfiguration() const { return m_jiraConfiguration; }
    inline bool JiraConfigurationHasBeenSet() const { return m_jiraConfigurationHasBeenSet; }
    template<typename JiraConfigurationT = JiraConfiguration>
    void SetJiraConfiguration(JiraConfigurationT&& value) { m_jiraConfigurationHasBeenSet = true; m_jiraConfiguration = std::forward<JiraConfigurationT>(value); }
    template<typename JiraConfigurationT = JiraConfiguration>
    Answer& WithJiraConfiguration(JiraConfigurationT&& value) { SetJiraConfiguration(std::forward<JiraConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_questionId;
    bool m_questionIdHasBeenSet = false;

    Aws::String m_pillarId;
    bool m_pillarIdHasBeenSet = false;

    Aws::String m_questionTitle;
    bool m_questionTitleHasBeenSet = false;

    Aws::String m_questionDescription;
    bool m_questionDescriptionHasBeenSet = false;

    Aws::String m_improvementPlanUrl;
    bool m_improvementPlanUrlHasBeenSet = false;

    Aws::String m_helpfulResourceUrl;
    bool m_helpfulResourceUrlHasBeenSet = false;

    Aws::String m_helpfulResourceDisplayText;
    bool m_helpfulResourceDisplayTextHasBeenSet = false;

    Aws::Vector<Choice> m_choices;
    bool m_choicesHasBeenSet = false;

    Aws::Vector<Aws::String> m_selectedChoices;
    bool m_selectedChoicesHasBeenSet = false;

    Aws::Vector<ChoiceAnswer> m_choiceAnswers;
    bool m_choiceAnswersHasBeenSet = false;

    bool m_isApplicable{false};
    bool m_isApplicableHasBeenSet = false;

    Risk m_risk{Risk::NOT_SET};
    bool m_riskHasBeenSet = false;

    Aws::String m_notes;
    bool m_notesHasBeenSet = false;

    AnswerReason m_reason{AnswerReason::NOT_SET};
    bool m_reasonHasBeenSet = false;

    JiraConfiguration m_jiraConfiguration;
    bool m_jiraConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
