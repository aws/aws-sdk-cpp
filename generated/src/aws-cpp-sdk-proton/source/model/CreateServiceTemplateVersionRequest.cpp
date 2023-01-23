/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/CreateServiceTemplateVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Proton::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateServiceTemplateVersionRequest::CreateServiceTemplateVersionRequest() : 
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_compatibleEnvironmentTemplatesHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_majorVersionHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_supportedComponentSourcesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_templateNameHasBeenSet(false)
{
}

Aws::String CreateServiceTemplateVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_compatibleEnvironmentTemplatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> compatibleEnvironmentTemplatesJsonList(m_compatibleEnvironmentTemplates.size());
   for(unsigned compatibleEnvironmentTemplatesIndex = 0; compatibleEnvironmentTemplatesIndex < compatibleEnvironmentTemplatesJsonList.GetLength(); ++compatibleEnvironmentTemplatesIndex)
   {
     compatibleEnvironmentTemplatesJsonList[compatibleEnvironmentTemplatesIndex].AsObject(m_compatibleEnvironmentTemplates[compatibleEnvironmentTemplatesIndex].Jsonize());
   }
   payload.WithArray("compatibleEnvironmentTemplates", std::move(compatibleEnvironmentTemplatesJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_majorVersionHasBeenSet)
  {
   payload.WithString("majorVersion", m_majorVersion);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("source", m_source.Jsonize());

  }

  if(m_supportedComponentSourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedComponentSourcesJsonList(m_supportedComponentSources.size());
   for(unsigned supportedComponentSourcesIndex = 0; supportedComponentSourcesIndex < supportedComponentSourcesJsonList.GetLength(); ++supportedComponentSourcesIndex)
   {
     supportedComponentSourcesJsonList[supportedComponentSourcesIndex].AsString(ServiceTemplateSupportedComponentSourceTypeMapper::GetNameForServiceTemplateSupportedComponentSourceType(m_supportedComponentSources[supportedComponentSourcesIndex]));
   }
   payload.WithArray("supportedComponentSources", std::move(supportedComponentSourcesJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_templateNameHasBeenSet)
  {
   payload.WithString("templateName", m_templateName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateServiceTemplateVersionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AwsProton20200720.CreateServiceTemplateVersion"));
  return headers;

}




