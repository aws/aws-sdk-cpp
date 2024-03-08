/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DeployWorkspaceApplicationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeployWorkspaceApplicationsRequest::DeployWorkspaceApplicationsRequest() : 
    m_workspaceIdHasBeenSet(false),
    m_force(false),
    m_forceHasBeenSet(false)
{
}

Aws::String DeployWorkspaceApplicationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_workspaceIdHasBeenSet)
  {
   payload.WithString("WorkspaceId", m_workspaceId);

  }

  if(m_forceHasBeenSet)
  {
   payload.WithBool("Force", m_force);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeployWorkspaceApplicationsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.DeployWorkspaceApplications"));
  return headers;

}




