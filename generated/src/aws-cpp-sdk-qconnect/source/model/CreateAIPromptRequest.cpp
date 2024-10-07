/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/CreateAIPromptRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAIPromptRequest::CreateAIPromptRequest() : 
    m_apiFormat(AIPromptAPIFormat::NOT_SET),
    m_apiFormatHasBeenSet(false),
    m_assistantIdHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_descriptionHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_templateConfigurationHasBeenSet(false),
    m_templateType(AIPromptTemplateType::NOT_SET),
    m_templateTypeHasBeenSet(false),
    m_type(AIPromptType::NOT_SET),
    m_typeHasBeenSet(false),
    m_visibilityStatus(VisibilityStatus::NOT_SET),
    m_visibilityStatusHasBeenSet(false)
{
}

Aws::String CreateAIPromptRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_apiFormatHasBeenSet)
  {
   payload.WithString("apiFormat", AIPromptAPIFormatMapper::GetNameForAIPromptAPIFormat(m_apiFormat));
  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_modelIdHasBeenSet)
  {
   payload.WithString("modelId", m_modelId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

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

  if(m_templateConfigurationHasBeenSet)
  {
   payload.WithObject("templateConfiguration", m_templateConfiguration.Jsonize());

  }

  if(m_templateTypeHasBeenSet)
  {
   payload.WithString("templateType", AIPromptTemplateTypeMapper::GetNameForAIPromptTemplateType(m_templateType));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", AIPromptTypeMapper::GetNameForAIPromptType(m_type));
  }

  if(m_visibilityStatusHasBeenSet)
  {
   payload.WithString("visibilityStatus", VisibilityStatusMapper::GetNameForVisibilityStatus(m_visibilityStatus));
  }

  return payload.View().WriteReadable();
}




