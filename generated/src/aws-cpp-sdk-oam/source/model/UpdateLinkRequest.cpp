/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/oam/model/UpdateLinkRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OAM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateLinkRequest::UpdateLinkRequest() : 
    m_identifierHasBeenSet(false),
    m_resourceTypesHasBeenSet(false)
{
}

Aws::String UpdateLinkRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_identifierHasBeenSet)
  {
   payload.WithString("Identifier", m_identifier);

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

  return payload.View().WriteReadable();
}




