/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/StopWorkspacesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopWorkspacesRequest::StopWorkspacesRequest() : 
    m_stopWorkspaceRequestsHasBeenSet(false)
{
}

Aws::String StopWorkspacesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_stopWorkspaceRequestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stopWorkspaceRequestsJsonList(m_stopWorkspaceRequests.size());
   for(unsigned stopWorkspaceRequestsIndex = 0; stopWorkspaceRequestsIndex < stopWorkspaceRequestsJsonList.GetLength(); ++stopWorkspaceRequestsIndex)
   {
     stopWorkspaceRequestsJsonList[stopWorkspaceRequestsIndex].AsObject(m_stopWorkspaceRequests[stopWorkspaceRequestsIndex].Jsonize());
   }
   payload.WithArray("StopWorkspaceRequests", std::move(stopWorkspaceRequestsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StopWorkspacesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.StopWorkspaces"));
  return headers;

}




