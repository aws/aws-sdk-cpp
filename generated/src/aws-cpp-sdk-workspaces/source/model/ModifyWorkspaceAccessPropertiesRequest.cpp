/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/ModifyWorkspaceAccessPropertiesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ModifyWorkspaceAccessPropertiesRequest::ModifyWorkspaceAccessPropertiesRequest() : 
    m_resourceIdHasBeenSet(false),
    m_workspaceAccessPropertiesHasBeenSet(false)
{
}

Aws::String ModifyWorkspaceAccessPropertiesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_workspaceAccessPropertiesHasBeenSet)
  {
   payload.WithObject("WorkspaceAccessProperties", m_workspaceAccessProperties.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ModifyWorkspaceAccessPropertiesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.ModifyWorkspaceAccessProperties"));
  return headers;

}




