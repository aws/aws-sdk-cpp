/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/UpdateWorkspacesPoolRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateWorkspacesPoolRequest::UpdateWorkspacesPoolRequest() : 
    m_poolIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_directoryIdHasBeenSet(false),
    m_capacityHasBeenSet(false),
    m_applicationSettingsHasBeenSet(false),
    m_timeoutSettingsHasBeenSet(false)
{
}

Aws::String UpdateWorkspacesPoolRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_poolIdHasBeenSet)
  {
   payload.WithString("PoolId", m_poolId);

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

Aws::Http::HeaderValueCollection UpdateWorkspacesPoolRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.UpdateWorkspacesPool"));
  return headers;

}




