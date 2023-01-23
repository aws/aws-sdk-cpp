/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DeleteClientBrandingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteClientBrandingRequest::DeleteClientBrandingRequest() : 
    m_resourceIdHasBeenSet(false),
    m_platformsHasBeenSet(false)
{
}

Aws::String DeleteClientBrandingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_platformsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> platformsJsonList(m_platforms.size());
   for(unsigned platformsIndex = 0; platformsIndex < platformsJsonList.GetLength(); ++platformsIndex)
   {
     platformsJsonList[platformsIndex].AsString(ClientDeviceTypeMapper::GetNameForClientDeviceType(m_platforms[platformsIndex]));
   }
   payload.WithArray("Platforms", std::move(platformsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteClientBrandingRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.DeleteClientBranding"));
  return headers;

}




