/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/oam/model/CreateLinkRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OAM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateLinkRequest::CreateLinkRequest() : 
    m_labelTemplateHasBeenSet(false),
    m_resourceTypesHasBeenSet(false),
    m_sinkIdentifierHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateLinkRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_labelTemplateHasBeenSet)
  {
   payload.WithString("LabelTemplate", m_labelTemplate);

  }

  if(m_resourceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceTypesJsonList(m_resourceTypes.size());
   for(unsigned resourceTypesIndex = 0; resourceTypesIndex < resourceTypesJsonList.GetLength(); ++resourceTypesIndex)
   {
     resourceTypesJsonList[resourceTypesIndex].AsString(ResourceTypeMapper::GetNameForResourceType(m_resourceTypes[resourceTypesIndex]));
   }
   payload.WithArray("ResourceTypes", std::move(resourceTypesJsonList));

  }

  if(m_sinkIdentifierHasBeenSet)
  {
   payload.WithString("SinkIdentifier", m_sinkIdentifier);

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




