﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/AnswerRecommendationAIAgentConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

AnswerRecommendationAIAgentConfiguration::AnswerRecommendationAIAgentConfiguration() : 
    m_answerGenerationAIGuardrailIdHasBeenSet(false),
    m_answerGenerationAIPromptIdHasBeenSet(false),
    m_associationConfigurationsHasBeenSet(false),
    m_intentLabelingGenerationAIPromptIdHasBeenSet(false),
    m_localeHasBeenSet(false),
    m_queryReformulationAIPromptIdHasBeenSet(false)
{
}

AnswerRecommendationAIAgentConfiguration::AnswerRecommendationAIAgentConfiguration(JsonView jsonValue)
  : AnswerRecommendationAIAgentConfiguration()
{
  *this = jsonValue;
}

AnswerRecommendationAIAgentConfiguration& AnswerRecommendationAIAgentConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("answerGenerationAIGuardrailId"))
  {
    m_answerGenerationAIGuardrailId = jsonValue.GetString("answerGenerationAIGuardrailId");

    m_answerGenerationAIGuardrailIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("answerGenerationAIPromptId"))
  {
    m_answerGenerationAIPromptId = jsonValue.GetString("answerGenerationAIPromptId");

    m_answerGenerationAIPromptIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("associationConfigurations"))
  {
    Aws::Utils::Array<JsonView> associationConfigurationsJsonList = jsonValue.GetArray("associationConfigurations");
    for(unsigned associationConfigurationsIndex = 0; associationConfigurationsIndex < associationConfigurationsJsonList.GetLength(); ++associationConfigurationsIndex)
    {
      m_associationConfigurations.push_back(associationConfigurationsJsonList[associationConfigurationsIndex].AsObject());
    }
    m_associationConfigurationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("intentLabelingGenerationAIPromptId"))
  {
    m_intentLabelingGenerationAIPromptId = jsonValue.GetString("intentLabelingGenerationAIPromptId");

    m_intentLabelingGenerationAIPromptIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("locale"))
  {
    m_locale = jsonValue.GetString("locale");

    m_localeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("queryReformulationAIPromptId"))
  {
    m_queryReformulationAIPromptId = jsonValue.GetString("queryReformulationAIPromptId");

    m_queryReformulationAIPromptIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AnswerRecommendationAIAgentConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_answerGenerationAIGuardrailIdHasBeenSet)
  {
   payload.WithString("answerGenerationAIGuardrailId", m_answerGenerationAIGuardrailId);

  }

  if(m_answerGenerationAIPromptIdHasBeenSet)
  {
   payload.WithString("answerGenerationAIPromptId", m_answerGenerationAIPromptId);

  }

  if(m_associationConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> associationConfigurationsJsonList(m_associationConfigurations.size());
   for(unsigned associationConfigurationsIndex = 0; associationConfigurationsIndex < associationConfigurationsJsonList.GetLength(); ++associationConfigurationsIndex)
   {
     associationConfigurationsJsonList[associationConfigurationsIndex].AsObject(m_associationConfigurations[associationConfigurationsIndex].Jsonize());
   }
   payload.WithArray("associationConfigurations", std::move(associationConfigurationsJsonList));

  }

  if(m_intentLabelingGenerationAIPromptIdHasBeenSet)
  {
   payload.WithString("intentLabelingGenerationAIPromptId", m_intentLabelingGenerationAIPromptId);

  }

  if(m_localeHasBeenSet)
  {
   payload.WithString("locale", m_locale);

  }

  if(m_queryReformulationAIPromptIdHasBeenSet)
  {
   payload.WithString("queryReformulationAIPromptId", m_queryReformulationAIPromptId);

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
