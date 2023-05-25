/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-groups/model/CreateGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResourceGroups::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateGroupRequest::CreateGroupRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_resourceQueryHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_configurationHasBeenSet(false)
{
}

Aws::String CreateGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_resourceQueryHasBeenSet)
  {
   payload.WithObject("ResourceQuery", m_resourceQuery.Jsonize());

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

  if(m_configurationHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> configurationJsonList(m_configuration.size());
   for(unsigned configurationIndex = 0; configurationIndex < configurationJsonList.GetLength(); ++configurationIndex)
   {
     configurationJsonList[configurationIndex].AsObject(m_configuration[configurationIndex].Jsonize());
   }
   payload.WithArray("Configuration", std::move(configurationJsonList));

  }

  return payload.View().WriteReadable();
}




