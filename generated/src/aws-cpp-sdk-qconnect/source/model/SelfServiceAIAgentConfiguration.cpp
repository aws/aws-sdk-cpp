/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/SelfServiceAIAgentConfiguration.h>
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

SelfServiceAIAgentConfiguration::SelfServiceAIAgentConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

SelfServiceAIAgentConfiguration& SelfServiceAIAgentConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("selfServicePreProcessingAIPromptId"))
  {
    m_selfServicePreProcessingAIPromptId = jsonValue.GetString("selfServicePreProcessingAIPromptId");
    m_selfServicePreProcessingAIPromptIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("selfServiceAnswerGenerationAIPromptId"))
  {
    m_selfServiceAnswerGenerationAIPromptId = jsonValue.GetString("selfServiceAnswerGenerationAIPromptId");
    m_selfServiceAnswerGenerationAIPromptIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("selfServiceAIGuardrailId"))
  {
    m_selfServiceAIGuardrailId = jsonValue.GetString("selfServiceAIGuardrailId");
    m_selfServiceAIGuardrailIdHasBeenSet = true;
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
  return *this;
}

JsonValue SelfServiceAIAgentConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_selfServicePreProcessingAIPromptIdHasBeenSet)
  {
   payload.WithString("selfServicePreProcessingAIPromptId", m_selfServicePreProcessingAIPromptId);

  }

  if(m_selfServiceAnswerGenerationAIPromptIdHasBeenSet)
  {
   payload.WithString("selfServiceAnswerGenerationAIPromptId", m_selfServiceAnswerGenerationAIPromptId);

  }

  if(m_selfServiceAIGuardrailIdHasBeenSet)
  {
   payload.WithString("selfServiceAIGuardrailId", m_selfServiceAIGuardrailId);

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

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
