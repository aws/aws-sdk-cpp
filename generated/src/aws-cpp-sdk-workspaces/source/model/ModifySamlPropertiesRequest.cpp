/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/ModifySamlPropertiesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ModifySamlPropertiesRequest::ModifySamlPropertiesRequest() : 
    m_resourceIdHasBeenSet(false),
    m_samlPropertiesHasBeenSet(false),
    m_propertiesToDeleteHasBeenSet(false)
{
}

Aws::String ModifySamlPropertiesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_samlPropertiesHasBeenSet)
  {
   payload.WithObject("SamlProperties", m_samlProperties.Jsonize());

  }

  if(m_propertiesToDeleteHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> propertiesToDeleteJsonList(m_propertiesToDelete.size());
   for(unsigned propertiesToDeleteIndex = 0; propertiesToDeleteIndex < propertiesToDeleteJsonList.GetLength(); ++propertiesToDeleteIndex)
   {
     propertiesToDeleteJsonList[propertiesToDeleteIndex].AsString(DeletableSamlPropertyMapper::GetNameForDeletableSamlProperty(m_propertiesToDelete[propertiesToDeleteIndex]));
   }
   payload.WithArray("PropertiesToDelete", std::move(propertiesToDeleteJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ModifySamlPropertiesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.ModifySamlProperties"));
  return headers;

}




