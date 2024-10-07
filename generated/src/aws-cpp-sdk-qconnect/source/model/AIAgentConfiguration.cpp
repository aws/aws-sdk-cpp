/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/AIAgentConfiguration.h>
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

AIAgentConfiguration::AIAgentConfiguration() : 
    m_answerRecommendationAIAgentConfigurationHasBeenSet(false),
    m_manualSearchAIAgentConfigurationHasBeenSet(false)
{
}

AIAgentConfiguration::AIAgentConfiguration(JsonView jsonValue)
  : AIAgentConfiguration()
{
  *this = jsonValue;
}

AIAgentConfiguration& AIAgentConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("answerRecommendationAIAgentConfiguration"))
  {
    m_answerRecommendationAIAgentConfiguration = jsonValue.GetObject("answerRecommendationAIAgentConfiguration");

    m_answerRecommendationAIAgentConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("manualSearchAIAgentConfiguration"))
  {
    m_manualSearchAIAgentConfiguration = jsonValue.GetObject("manualSearchAIAgentConfiguration");

    m_manualSearchAIAgentConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue AIAgentConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_answerRecommendationAIAgentConfigurationHasBeenSet)
  {
   payload.WithObject("answerRecommendationAIAgentConfiguration", m_answerRecommendationAIAgentConfiguration.Jsonize());

  }

  if(m_manualSearchAIAgentConfigurationHasBeenSet)
  {
   payload.WithObject("manualSearchAIAgentConfiguration", m_manualSearchAIAgentConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
