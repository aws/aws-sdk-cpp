/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/SessionData.h>
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

SessionData::SessionData(JsonView jsonValue)
{
  *this = jsonValue;
}

SessionData& SessionData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sessionArn"))
  {
    m_sessionArn = jsonValue.GetString("sessionArn");
    m_sessionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sessionId"))
  {
    m_sessionId = jsonValue.GetString("sessionId");
    m_sessionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("integrationConfiguration"))
  {
    m_integrationConfiguration = jsonValue.GetObject("integrationConfiguration");
    m_integrationConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tagFilter"))
  {
    m_tagFilter = jsonValue.GetObject("tagFilter");
    m_tagFilterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("aiAgentConfiguration"))
  {
    Aws::Map<Aws::String, JsonView> aiAgentConfigurationJsonMap = jsonValue.GetObject("aiAgentConfiguration").GetAllObjects();
    for(auto& aiAgentConfigurationItem : aiAgentConfigurationJsonMap)
    {
      m_aiAgentConfiguration[AIAgentTypeMapper::GetAIAgentTypeForName(aiAgentConfigurationItem.first)] = aiAgentConfigurationItem.second.AsObject();
    }
    m_aiAgentConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("origin"))
  {
    m_origin = OriginMapper::GetOriginForName(jsonValue.GetString("origin"));
    m_originHasBeenSet = true;
  }
  return *this;
}

JsonValue SessionData::Jsonize() const
{
  JsonValue payload;

  if(m_sessionArnHasBeenSet)
  {
   payload.WithString("sessionArn", m_sessionArn);

  }

  if(m_sessionIdHasBeenSet)
  {
   payload.WithString("sessionId", m_sessionId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_integrationConfigurationHasBeenSet)
  {
   payload.WithObject("integrationConfiguration", m_integrationConfiguration.Jsonize());

  }

  if(m_tagFilterHasBeenSet)
  {
   payload.WithObject("tagFilter", m_tagFilter.Jsonize());

  }

  if(m_aiAgentConfigurationHasBeenSet)
  {
   JsonValue aiAgentConfigurationJsonMap;
   for(auto& aiAgentConfigurationItem : m_aiAgentConfiguration)
   {
     aiAgentConfigurationJsonMap.WithObject(AIAgentTypeMapper::GetNameForAIAgentType(aiAgentConfigurationItem.first), aiAgentConfigurationItem.second.Jsonize());
   }
   payload.WithObject("aiAgentConfiguration", std::move(aiAgentConfigurationJsonMap));

  }

  if(m_originHasBeenSet)
  {
   payload.WithString("origin", OriginMapper::GetNameForOrigin(m_origin));
  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
