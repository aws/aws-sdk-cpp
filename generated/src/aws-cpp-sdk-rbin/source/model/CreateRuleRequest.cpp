/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rbin/model/CreateRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RecycleBin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_retentionPeriodHasBeenSet)
  {
   payload.WithObject("RetentionPeriod", m_retentionPeriod.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_resourceTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceTagsJsonList(m_resourceTags.size());
   for(unsigned resourceTagsIndex = 0; resourceTagsIndex < resourceTagsJsonList.GetLength(); ++resourceTagsIndex)
   {
     resourceTagsJsonList[resourceTagsIndex].AsObject(m_resourceTags[resourceTagsIndex].Jsonize());
   }
   payload.WithArray("ResourceTags", std::move(resourceTagsJsonList));

  }

  if(m_lockConfigurationHasBeenSet)
  {
   payload.WithObject("LockConfiguration", m_lockConfiguration.Jsonize());

  }

  if(m_excludeResourceTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> excludeResourceTagsJsonList(m_excludeResourceTags.size());
   for(unsigned excludeResourceTagsIndex = 0; excludeResourceTagsIndex < excludeResourceTagsJsonList.GetLength(); ++excludeResourceTagsIndex)
   {
     excludeResourceTagsJsonList[excludeResourceTagsIndex].AsObject(m_excludeResourceTags[excludeResourceTagsIndex].Jsonize());
   }
   payload.WithArray("ExcludeResourceTags", std::move(excludeResourceTagsJsonList));

  }

  return payload.View().WriteReadable();
}




