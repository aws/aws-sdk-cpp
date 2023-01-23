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
   * <p>An answer summary of a lens review in a workload.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/AnswerSummary">AWS
   * API Reference</a></p>
   */
  class AnswerSummary
  {
  public:
    AWS_WELLARCHITECTED_API AnswerSummary();
    AWS_WELLARCHITECTED_API AnswerSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API AnswerSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetQuestionId() const{ return m_questionId; }

    
    inline bool QuestionIdHasBeenSet() const { return m_questionIdHasBeenSet; }

    
    inline void SetQuestionId(const Aws::String& value) { m_questionIdHasBeenSet = true; m_questionId = value; }

    
    inline void SetQuestionId(Aws::String&& value) { m_questionIdHasBeenSet = true; m_questionId = std::move(value); }

    
    inline void SetQuestionId(const char* value) { m_questionIdHasBeenSet = true; m_questionId.assign(value); }

    
    inline AnswerSummary& WithQuestionId(const Aws::String& value) { SetQuestionId(value); return *this;}

    
    inline AnswerSummary& WithQuestionId(Aws::String&& value) { SetQuestionId(std::move(value)); return *this;}

    
    inline AnswerSummary& WithQuestionId(const char* value) { SetQuestionId(value); return *this;}


    
    inline const Aws::String& GetPillarId() const{ return m_pillarId; }

    
    inline bool PillarIdHasBeenSet() const { return m_pillarIdHasBeenSet; }

    
    inline void SetPillarId(const Aws::String& value) { m_pillarIdHasBeenSet = true; m_pillarId = value; }

    
    inline void SetPillarId(Aws::String&& value) { m_pillarIdHasBeenSet = true; m_pillarId = std::move(value); }

    
    inline void SetPillarId(const char* value) { m_pillarIdHasBeenSet = true; m_pillarId.assign(value); }

    
    inline AnswerSummary& WithPillarId(const Aws::String& value) { SetPillarId(value); return *this;}

    
    inline AnswerSummary& WithPillarId(Aws::String&& value) { SetPillarId(std::move(value)); return *this;}

    
    inline AnswerSummary& WithPillarId(const char* value) { SetPillarId(value); return *this;}


    
    inline const Aws::String& GetQuestionTitle() const{ return m_questionTitle; }

    
    inline bool QuestionTitleHasBeenSet() const { return m_questionTitleHasBeenSet; }

    
    inline void SetQuestionTitle(const Aws::String& value) { m_questionTitleHasBeenSet = true; m_questionTitle = value; }

    
    inline void SetQuestionTitle(Aws::String&& value) { m_questionTitleHasBeenSet = true; m_questionTitle = std::move(value); }

    
    inline void SetQuestionTitle(const char* value) { m_questionTitleHasBeenSet = true; m_questionTitle.assign(value); }

    
    inline AnswerSummary& WithQuestionTitle(const Aws::String& value) { SetQuestionTitle(value); return *this;}

    
    inline AnswerSummary& WithQuestionTitle(Aws::String&& value) { SetQuestionTitle(std::move(value)); return *this;}

    
    inline AnswerSummary& WithQuestionTitle(const char* value) { SetQuestionTitle(value); return *this;}


    
    inline const Aws::Vector<Choice>& GetChoices() const{ return m_choices; }

    
    inline bool ChoicesHasBeenSet() const { return m_choicesHasBeenSet; }

    
    inline void SetChoices(const Aws::Vector<Choice>& value) { m_choicesHasBeenSet = true; m_choices = value; }

    
    inline void SetChoices(Aws::Vector<Choice>&& value) { m_choicesHasBeenSet = true; m_choices = std::move(value); }

    
    inline AnswerSummary& WithChoices(const Aws::Vector<Choice>& value) { SetChoices(value); return *this;}

    
    inline AnswerSummary& WithChoices(Aws::Vector<Choice>&& value) { SetChoices(std::move(value)); return *this;}

    
    inline AnswerSummary& AddChoices(const Choice& value) { m_choicesHasBeenSet = true; m_choices.push_back(value); return *this; }

    
    inline AnswerSummary& AddChoices(Choice&& value) { m_choicesHasBeenSet = true; m_choices.push_back(std::move(value)); return *this; }


    
    inline const Aws::Vector<Aws::String>& GetSelectedChoices() const{ return m_selectedChoices; }

    
    inline bool SelectedChoicesHasBeenSet() const { return m_selectedChoicesHasBeenSet; }

    
    inline void SetSelectedChoices(const Aws::Vector<Aws::String>& value) { m_selectedChoicesHasBeenSet = true; m_selectedChoices = value; }

    
    inline void SetSelectedChoices(Aws::Vector<Aws::String>&& value) { m_selectedChoicesHasBeenSet = true; m_selectedChoices = std::move(value); }

    
    inline AnswerSummary& WithSelectedChoices(const Aws::Vector<Aws::String>& value) { SetSelectedChoices(value); return *this;}

    
    inline AnswerSummary& WithSelectedChoices(Aws::Vector<Aws::String>&& value) { SetSelectedChoices(std::move(value)); return *this;}

    
    inline AnswerSummary& AddSelectedChoices(const Aws::String& value) { m_selectedChoicesHasBeenSet = true; m_selectedChoices.push_back(value); return *this; }

    
    inline AnswerSummary& AddSelectedChoices(Aws::String&& value) { m_selectedChoicesHasBeenSet = true; m_selectedChoices.push_back(std::move(value)); return *this; }

    
    inline AnswerSummary& AddSelectedChoices(const char* value) { m_selectedChoicesHasBeenSet = true; m_selectedChoices.push_back(value); return *this; }


    /**
     * <p>A list of selected choices to a question in your workload.</p>
     */
    inline const Aws::Vector<ChoiceAnswerSummary>& GetChoiceAnswerSummaries() const{ return m_choiceAnswerSummaries; }

    /**
     * <p>A list of selected choices to a question in your workload.</p>
     */
    inline bool ChoiceAnswerSummariesHasBeenSet() const { return m_choiceAnswerSummariesHasBeenSet; }

    /**
     * <p>A list of selected choices to a question in your workload.</p>
     */
    inline void SetChoiceAnswerSummaries(const Aws::Vector<ChoiceAnswerSummary>& value) { m_choiceAnswerSummariesHasBeenSet = true; m_choiceAnswerSummaries = value; }

    /**
     * <p>A list of selected choices to a question in your workload.</p>
     */
    inline void SetChoiceAnswerSummaries(Aws::Vector<ChoiceAnswerSummary>&& value) { m_choiceAnswerSummariesHasBeenSet = true; m_choiceAnswerSummaries = std::move(value); }

    /**
     * <p>A list of selected choices to a question in your workload.</p>
     */
    inline AnswerSummary& WithChoiceAnswerSummaries(const Aws::Vector<ChoiceAnswerSummary>& value) { SetChoiceAnswerSummaries(value); return *this;}

    /**
     * <p>A list of selected choices to a question in your workload.</p>
     */
    inline AnswerSummary& WithChoiceAnswerSummaries(Aws::Vector<ChoiceAnswerSummary>&& value) { SetChoiceAnswerSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of selected choices to a question in your workload.</p>
     */
    inline AnswerSummary& AddChoiceAnswerSummaries(const ChoiceAnswerSummary& value) { m_choiceAnswerSummariesHasBeenSet = true; m_choiceAnswerSummaries.push_back(value); return *this; }

    /**
     * <p>A list of selected choices to a question in your workload.</p>
     */
    inline AnswerSummary& AddChoiceAnswerSummaries(ChoiceAnswerSummary&& value) { m_choiceAnswerSummariesHasBeenSet = true; m_choiceAnswerSummaries.push_back(std::move(value)); return *this; }


    
    inline bool GetIsApplicable() const{ return m_isApplicable; }

    
    inline bool IsApplicableHasBeenSet() const { return m_isApplicableHasBeenSet; }

    
    inline void SetIsApplicable(bool value) { m_isApplicableHasBeenSet = true; m_isApplicable = value; }

    
    inline AnswerSummary& WithIsApplicable(bool value) { SetIsApplicable(value); return *this;}


    
    inline const Risk& GetRisk() const{ return m_risk; }

    
    inline bool RiskHasBeenSet() const { return m_riskHasBeenSet; }

    
    inline void SetRisk(const Risk& value) { m_riskHasBeenSet = true; m_risk = value; }

    
    inline void SetRisk(Risk&& value) { m_riskHasBeenSet = true; m_risk = std::move(value); }

    
    inline AnswerSummary& WithRisk(const Risk& value) { SetRisk(value); return *this;}

    
    inline AnswerSummary& WithRisk(Risk&& value) { SetRisk(std::move(value)); return *this;}


    /**
     * <p>The reason why a choice is non-applicable to a question in your workload.</p>
     */
    inline const AnswerReason& GetReason() const{ return m_reason; }

    /**
     * <p>The reason why a choice is non-applicable to a question in your workload.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason why a choice is non-applicable to a question in your workload.</p>
     */
    inline void SetReason(const AnswerReason& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason why a choice is non-applicable to a question in your workload.</p>
     */
    inline void SetReason(AnswerReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason why a choice is non-applicable to a question in your workload.</p>
     */
    inline AnswerSummary& WithReason(const AnswerReason& value) { SetReason(value); return *this;}

    /**
     * <p>The reason why a choice is non-applicable to a question in your workload.</p>
     */
    inline AnswerSummary& WithReason(AnswerReason&& value) { SetReason(std::move(value)); return *this;}

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

    bool m_isApplicable;
    bool m_isApplicableHasBeenSet = false;

    Risk m_risk;
    bool m_riskHasBeenSet = false;

    AnswerReason m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
