/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/Answer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

Answer::Answer() : 
    m_questionIdHasBeenSet(false),
    m_pillarIdHasBeenSet(false),
    m_questionTitleHasBeenSet(false),
    m_questionDescriptionHasBeenSet(false),
    m_improvementPlanUrlHasBeenSet(false),
    m_helpfulResourceUrlHasBeenSet(false),
    m_helpfulResourceDisplayTextHasBeenSet(false),
    m_choicesHasBeenSet(false),
    m_selectedChoicesHasBeenSet(false),
    m_choiceAnswersHasBeenSet(false),
    m_isApplicable(false),
    m_isApplicableHasBeenSet(false),
    m_risk(Risk::NOT_SET),
    m_riskHasBeenSet(false),
    m_notesHasBeenSet(false),
    m_reason(AnswerReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
}

Answer::Answer(JsonView jsonValue) : 
    m_questionIdHasBeenSet(false),
    m_pillarIdHasBeenSet(false),
    m_questionTitleHasBeenSet(false),
    m_questionDescriptionHasBeenSet(false),
    m_improvementPlanUrlHasBeenSet(false),
    m_helpfulResourceUrlHasBeenSet(false),
    m_helpfulResourceDisplayTextHasBeenSet(false),
    m_choicesHasBeenSet(false),
    m_selectedChoicesHasBeenSet(false),
    m_choiceAnswersHasBeenSet(false),
    m_isApplicable(false),
    m_isApplicableHasBeenSet(false),
    m_risk(Risk::NOT_SET),
    m_riskHasBeenSet(false),
    m_notesHasBeenSet(false),
    m_reason(AnswerReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

Answer& Answer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("QuestionId"))
  {
    m_questionId = jsonValue.GetString("QuestionId");

    m_questionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PillarId"))
  {
    m_pillarId = jsonValue.GetString("PillarId");

    m_pillarIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QuestionTitle"))
  {
    m_questionTitle = jsonValue.GetString("QuestionTitle");

    m_questionTitleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QuestionDescription"))
  {
    m_questionDescription = jsonValue.GetString("QuestionDescription");

    m_questionDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImprovementPlanUrl"))
  {
    m_improvementPlanUrl = jsonValue.GetString("ImprovementPlanUrl");

    m_improvementPlanUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HelpfulResourceUrl"))
  {
    m_helpfulResourceUrl = jsonValue.GetString("HelpfulResourceUrl");

    m_helpfulResourceUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HelpfulResourceDisplayText"))
  {
    m_helpfulResourceDisplayText = jsonValue.GetString("HelpfulResourceDisplayText");

    m_helpfulResourceDisplayTextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Choices"))
  {
    Aws::Utils::Array<JsonView> choicesJsonList = jsonValue.GetArray("Choices");
    for(unsigned choicesIndex = 0; choicesIndex < choicesJsonList.GetLength(); ++choicesIndex)
    {
      m_choices.push_back(choicesJsonList[choicesIndex].AsObject());
    }
    m_choicesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SelectedChoices"))
  {
    Aws::Utils::Array<JsonView> selectedChoicesJsonList = jsonValue.GetArray("SelectedChoices");
    for(unsigned selectedChoicesIndex = 0; selectedChoicesIndex < selectedChoicesJsonList.GetLength(); ++selectedChoicesIndex)
    {
      m_selectedChoices.push_back(selectedChoicesJsonList[selectedChoicesIndex].AsString());
    }
    m_selectedChoicesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChoiceAnswers"))
  {
    Aws::Utils::Array<JsonView> choiceAnswersJsonList = jsonValue.GetArray("ChoiceAnswers");
    for(unsigned choiceAnswersIndex = 0; choiceAnswersIndex < choiceAnswersJsonList.GetLength(); ++choiceAnswersIndex)
    {
      m_choiceAnswers.push_back(choiceAnswersJsonList[choiceAnswersIndex].AsObject());
    }
    m_choiceAnswersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsApplicable"))
  {
    m_isApplicable = jsonValue.GetBool("IsApplicable");

    m_isApplicableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Risk"))
  {
    m_risk = RiskMapper::GetRiskForName(jsonValue.GetString("Risk"));

    m_riskHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Notes"))
  {
    m_notes = jsonValue.GetString("Notes");

    m_notesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Reason"))
  {
    m_reason = AnswerReasonMapper::GetAnswerReasonForName(jsonValue.GetString("Reason"));

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue Answer::Jsonize() const
{
  JsonValue payload;

  if(m_questionIdHasBeenSet)
  {
   payload.WithString("QuestionId", m_questionId);

  }

  if(m_pillarIdHasBeenSet)
  {
   payload.WithString("PillarId", m_pillarId);

  }

  if(m_questionTitleHasBeenSet)
  {
   payload.WithString("QuestionTitle", m_questionTitle);

  }

  if(m_questionDescriptionHasBeenSet)
  {
   payload.WithString("QuestionDescription", m_questionDescription);

  }

  if(m_improvementPlanUrlHasBeenSet)
  {
   payload.WithString("ImprovementPlanUrl", m_improvementPlanUrl);

  }

  if(m_helpfulResourceUrlHasBeenSet)
  {
   payload.WithString("HelpfulResourceUrl", m_helpfulResourceUrl);

  }

  if(m_helpfulResourceDisplayTextHasBeenSet)
  {
   payload.WithString("HelpfulResourceDisplayText", m_helpfulResourceDisplayText);

  }

  if(m_choicesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> choicesJsonList(m_choices.size());
   for(unsigned choicesIndex = 0; choicesIndex < choicesJsonList.GetLength(); ++choicesIndex)
   {
     choicesJsonList[choicesIndex].AsObject(m_choices[choicesIndex].Jsonize());
   }
   payload.WithArray("Choices", std::move(choicesJsonList));

  }

  if(m_selectedChoicesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> selectedChoicesJsonList(m_selectedChoices.size());
   for(unsigned selectedChoicesIndex = 0; selectedChoicesIndex < selectedChoicesJsonList.GetLength(); ++selectedChoicesIndex)
   {
     selectedChoicesJsonList[selectedChoicesIndex].AsString(m_selectedChoices[selectedChoicesIndex]);
   }
   payload.WithArray("SelectedChoices", std::move(selectedChoicesJsonList));

  }

  if(m_choiceAnswersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> choiceAnswersJsonList(m_choiceAnswers.size());
   for(unsigned choiceAnswersIndex = 0; choiceAnswersIndex < choiceAnswersJsonList.GetLength(); ++choiceAnswersIndex)
   {
     choiceAnswersJsonList[choiceAnswersIndex].AsObject(m_choiceAnswers[choiceAnswersIndex].Jsonize());
   }
   payload.WithArray("ChoiceAnswers", std::move(choiceAnswersJsonList));

  }

  if(m_isApplicableHasBeenSet)
  {
   payload.WithBool("IsApplicable", m_isApplicable);

  }

  if(m_riskHasBeenSet)
  {
   payload.WithString("Risk", RiskMapper::GetNameForRisk(m_risk));
  }

  if(m_notesHasBeenSet)
  {
   payload.WithString("Notes", m_notes);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", AnswerReasonMapper::GetNameForAnswerReason(m_reason));
  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
