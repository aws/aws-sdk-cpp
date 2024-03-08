/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/AssociateWorkspaceApplicationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateWorkspaceApplicationRequest::AssociateWorkspaceApplicationRequest() : 
    m_workspaceIdHasBeenSet(false),
    m_applicationIdHasBeenSet(false)
{
}

Aws::String AssociateWorkspaceApplicationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_workspaceIdHasBeenSet)
  {
   payload.WithString("WorkspaceId", m_workspaceId);

  }

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("ApplicationId", m_applicationId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateWorkspaceApplicationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.AssociateWorkspaceApplication"));
  return headers;

}




