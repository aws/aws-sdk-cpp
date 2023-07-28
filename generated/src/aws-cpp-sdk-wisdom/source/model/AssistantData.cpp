/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/AssistantData.h>
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

AssistantData::AssistantData() : 
    m_assistantArnHasBeenSet(false),
    m_assistantIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_integrationConfigurationHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_serverSideEncryptionConfigurationHasBeenSet(false),
    m_status(AssistantStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_type(AssistantType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

AssistantData::AssistantData(JsonView jsonValue) : 
    m_assistantArnHasBeenSet(false),
    m_assistantIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_integrationConfigurationHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_serverSideEncryptionConfigurationHasBeenSet(false),
    m_status(AssistantStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_type(AssistantType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

AssistantData& AssistantData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("assistantArn"))
  {
    m_assistantArn = jsonValue.GetString("assistantArn");

    m_assistantArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assistantId"))
  {
    m_assistantId = jsonValue.GetString("assistantId");

    m_assistantIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("integrationConfiguration"))
  {
    m_integrationConfiguration = jsonValue.GetObject("integrationConfiguration");

    m_integrationConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serverSideEncryptionConfiguration"))
  {
    m_serverSideEncryptionConfiguration = jsonValue.GetObject("serverSideEncryptionConfiguration");

    m_serverSideEncryptionConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = AssistantStatusMapper::GetAssistantStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
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

  if(jsonValue.ValueExists("type"))
  {
    m_type = AssistantTypeMapper::GetAssistantTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue AssistantData::Jsonize() const
{
  JsonValue payload;

  if(m_assistantArnHasBeenSet)
  {
   payload.WithString("assistantArn", m_assistantArn);

  }

  if(m_assistantIdHasBeenSet)
  {
   payload.WithString("assistantId", m_assistantId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_integrationConfigurationHasBeenSet)
  {
   payload.WithObject("integrationConfiguration", m_integrationConfiguration.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_serverSideEncryptionConfigurationHasBeenSet)
  {
   payload.WithObject("serverSideEncryptionConfiguration", m_serverSideEncryptionConfiguration.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", AssistantStatusMapper::GetNameForAssistantStatus(m_status));
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

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", AssistantTypeMapper::GetNameForAssistantType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
