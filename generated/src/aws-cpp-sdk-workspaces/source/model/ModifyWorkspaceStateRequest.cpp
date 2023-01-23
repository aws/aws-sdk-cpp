/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/ModifyWorkspaceStateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ModifyWorkspaceStateRequest::ModifyWorkspaceStateRequest() : 
    m_workspaceIdHasBeenSet(false),
    m_workspaceState(TargetWorkspaceState::NOT_SET),
    m_workspaceStateHasBeenSet(false)
{
}

Aws::String ModifyWorkspaceStateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_workspaceIdHasBeenSet)
  {
   payload.WithString("WorkspaceId", m_workspaceId);

  }

  if(m_workspaceStateHasBeenSet)
  {
   payload.WithString("WorkspaceState", TargetWorkspaceStateMapper::GetNameForTargetWorkspaceState(m_workspaceState));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ModifyWorkspaceStateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.ModifyWorkspaceState"));
  return headers;

}




