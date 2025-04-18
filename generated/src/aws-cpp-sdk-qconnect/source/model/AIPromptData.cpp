/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/AIPromptData.h>
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

AIPromptData::AIPromptData(JsonView jsonValue)
{
  *this = jsonValue;
}

AIPromptData& AIPromptData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("assistantId"))
  {
    m_assistantId = jsonValue.GetString("assistantId");
    m_assistantIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("assistantArn"))
  {
    m_assistantArn = jsonValue.GetString("assistantArn");
    m_assistantArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("aiPromptId"))
  {
    m_aiPromptId = jsonValue.GetString("aiPromptId");
    m_aiPromptIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("aiPromptArn"))
  {
    m_aiPromptArn = jsonValue.GetString("aiPromptArn");
    m_aiPromptArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = AIPromptTypeMapper::GetAIPromptTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("templateType"))
  {
    m_templateType = AIPromptTemplateTypeMapper::GetAIPromptTemplateTypeForName(jsonValue.GetString("templateType"));
    m_templateTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("modelId"))
  {
    m_modelId = jsonValue.GetString("modelId");
    m_modelIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("apiFormat"))
  {
    m_apiFormat = AIPromptAPIFormatMapper::GetAIPromptAPIFormatForName(jsonValue.GetString("apiFormat"));
    m_apiFormatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("templateConfiguration"))
  {
    m_templateConfiguration = jsonValue.GetObject("templateConfiguration");
    m_templateConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("modifiedTime"))
  {
    m_modifiedTime = jsonValue.GetDouble("modifiedTime");
    m_modifiedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("visibilityStatus"))
  {
    m_visibilityStatus = VisibilityStatusMapper::GetVisibilityStatusForName(jsonValue.GetString("visibilityStatus"));
    m_visibilityStatusHasBeenSet = true;
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
  if(jsonValue.ValueExists("origin"))
  {
    m_origin = OriginMapper::GetOriginForName(jsonValue.GetString("origin"));
    m_originHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue AIPromptData::Jsonize() const
{
  JsonValue payload;

  if(m_assistantIdHasBeenSet)
  {
   payload.WithString("assistantId", m_assistantId);

  }

  if(m_assistantArnHasBeenSet)
  {
   payload.WithString("assistantArn", m_assistantArn);

  }

  if(m_aiPromptIdHasBeenSet)
  {
   payload.WithString("aiPromptId", m_aiPromptId);

  }

  if(m_aiPromptArnHasBeenSet)
  {
   payload.WithString("aiPromptArn", m_aiPromptArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", AIPromptTypeMapper::GetNameForAIPromptType(m_type));
  }

  if(m_templateTypeHasBeenSet)
  {
   payload.WithString("templateType", AIPromptTemplateTypeMapper::GetNameForAIPromptTemplateType(m_templateType));
  }

  if(m_modelIdHasBeenSet)
  {
   payload.WithString("modelId", m_modelId);

  }

  if(m_apiFormatHasBeenSet)
  {
   payload.WithString("apiFormat", AIPromptAPIFormatMapper::GetNameForAIPromptAPIFormat(m_apiFormat));
  }

  if(m_templateConfigurationHasBeenSet)
  {
   payload.WithObject("templateConfiguration", m_templateConfiguration.Jsonize());

  }

  if(m_modifiedTimeHasBeenSet)
  {
   payload.WithDouble("modifiedTime", m_modifiedTime.SecondsWithMSPrecision());
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_visibilityStatusHasBeenSet)
  {
   payload.WithString("visibilityStatus", VisibilityStatusMapper::GetNameForVisibilityStatus(m_visibilityStatus));
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

  if(m_originHasBeenSet)
  {
   payload.WithString("origin", OriginMapper::GetNameForOrigin(m_origin));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", StatusMapper::GetNameForStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
