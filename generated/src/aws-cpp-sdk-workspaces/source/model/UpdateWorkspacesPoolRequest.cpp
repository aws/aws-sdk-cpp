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

  if(m_runningModeHasBeenSet)
  {
   payload.WithString("RunningMode", PoolsRunningModeMapper::GetNameForPoolsRunningMode(m_runningMode));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateWorkspacesPoolRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.UpdateWorkspacesPool"));
  return headers;

}




