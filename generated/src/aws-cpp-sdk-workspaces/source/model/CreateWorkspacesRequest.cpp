/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/CreateWorkspacesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateWorkspacesRequest::CreateWorkspacesRequest() : 
    m_workspacesHasBeenSet(false)
{
}

Aws::String CreateWorkspacesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_workspacesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> workspacesJsonList(m_workspaces.size());
   for(unsigned workspacesIndex = 0; workspacesIndex < workspacesJsonList.GetLength(); ++workspacesIndex)
   {
     workspacesJsonList[workspacesIndex].AsObject(m_workspaces[workspacesIndex].Jsonize());
   }
   payload.WithArray("Workspaces", std::move(workspacesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateWorkspacesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.CreateWorkspaces"));
  return headers;

}




