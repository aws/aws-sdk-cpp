/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/AssistantIntegrationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectWisdomService
{
namespace Model
{

AssistantIntegrationConfiguration::AssistantIntegrationConfiguration() : 
    m_topicIntegrationArnHasBeenSet(false)
{
}

AssistantIntegrationConfiguration::AssistantIntegrationConfiguration(JsonView jsonValue) : 
    m_topicIntegrationArnHasBeenSet(false)
{
  *this = jsonValue;
}

AssistantIntegrationConfiguration& AssistantIntegrationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("topicIntegrationArn"))
  {
    m_topicIntegrationArn = jsonValue.GetString("topicIntegrationArn");

    m_topicIntegrationArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AssistantIntegrationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_topicIntegrationArnHasBeenSet)
  {
   payload.WithString("topicIntegrationArn", m_topicIntegrationArn);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
