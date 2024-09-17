/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/CreateWorkspacesPoolRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateWorkspacesPoolRequest::CreateWorkspacesPoolRequest() : 
    m_poolNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_directoryIdHasBeenSet(false),
    m_capacityHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_applicationSettingsHasBeenSet(false),
    m_timeoutSettingsHasBeenSet(false)
{
}

Aws::String CreateWorkspacesPoolRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_poolNameHasBeenSet)
  {
   payload.WithString("PoolName", m_poolName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_bundleIdHasBeenSet)
  {
   payload.WithString("BundleId", m_bundleId);

  }

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_capacityHasBeenSet)
  {
   payload.WithObject("Capacity", m_capacity.Jsonize());

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

  if(m_applicationSettingsHasBeenSet)
  {
   payload.WithObject("ApplicationSettings", m_applicationSettings.Jsonize());

  }

  if(m_timeoutSettingsHasBeenSet)
  {
   payload.WithObject("TimeoutSettings", m_timeoutSettings.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateWorkspacesPoolRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.CreateWorkspacesPool"));
  return headers;

}




