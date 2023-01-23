/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/RebuildWorkspacesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RebuildWorkspacesRequest::RebuildWorkspacesRequest() : 
    m_rebuildWorkspaceRequestsHasBeenSet(false)
{
}

Aws::String RebuildWorkspacesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_rebuildWorkspaceRequestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rebuildWorkspaceRequestsJsonList(m_rebuildWorkspaceRequests.size());
   for(unsigned rebuildWorkspaceRequestsIndex = 0; rebuildWorkspaceRequestsIndex < rebuildWorkspaceRequestsJsonList.GetLength(); ++rebuildWorkspaceRequestsIndex)
   {
     rebuildWorkspaceRequestsJsonList[rebuildWorkspaceRequestsIndex].AsObject(m_rebuildWorkspaceRequests[rebuildWorkspaceRequestsIndex].Jsonize());
   }
   payload.WithArray("RebuildWorkspaceRequests", std::move(rebuildWorkspaceRequestsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RebuildWorkspacesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.RebuildWorkspaces"));
  return headers;

}




