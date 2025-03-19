/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-quicksetup/model/CreateConfigurationManagerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSMQuickSetup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateConfigurationManagerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configurationDefinitionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> configurationDefinitionsJsonList(m_configurationDefinitions.size());
   for(unsigned configurationDefinitionsIndex = 0; configurationDefinitionsIndex < configurationDefinitionsJsonList.GetLength(); ++configurationDefinitionsIndex)
   {
     configurationDefinitionsJsonList[configurationDefinitionsIndex].AsObject(m_configurationDefinitions[configurationDefinitionsIndex].Jsonize());
   }
   payload.WithArray("ConfigurationDefinitions", std::move(configurationDefinitionsJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




