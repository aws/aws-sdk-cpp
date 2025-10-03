/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/EmailGenerativeAnswerAIAgentConfiguration.h>
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

EmailGenerativeAnswerAIAgentConfiguration::EmailGenerativeAnswerAIAgentConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

EmailGenerativeAnswerAIAgentConfiguration& EmailGenerativeAnswerAIAgentConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("emailGenerativeAnswerAIPromptId"))
  {
    m_emailGenerativeAnswerAIPromptId = jsonValue.GetString("emailGenerativeAnswerAIPromptId");
    m_emailGenerativeAnswerAIPromptIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("emailQueryReformulationAIPromptId"))
  {
    m_emailQueryReformulationAIPromptId = jsonValue.GetString("emailQueryReformulationAIPromptId");
    m_emailQueryReformulationAIPromptIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("locale"))
  {
    m_locale = jsonValue.GetString("locale");
    m_localeHasBeenSet = true;
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

JsonValue EmailGenerativeAnswerAIAgentConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_emailGenerativeAnswerAIPromptIdHasBeenSet)
  {
   payload.WithString("emailGenerativeAnswerAIPromptId", m_emailGenerativeAnswerAIPromptId);

  }

  if(m_emailQueryReformulationAIPromptIdHasBeenSet)
  {
   payload.WithString("emailQueryReformulationAIPromptId", m_emailQueryReformulationAIPromptId);

  }

  if(m_localeHasBeenSet)
  {
   payload.WithString("locale", m_locale);

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
