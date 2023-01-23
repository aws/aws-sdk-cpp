/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DescribeWorkspacesConnectionStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeWorkspacesConnectionStatusRequest::DescribeWorkspacesConnectionStatusRequest() : 
    m_workspaceIdsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeWorkspacesConnectionStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_workspaceIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> workspaceIdsJsonList(m_workspaceIds.size());
   for(unsigned workspaceIdsIndex = 0; workspaceIdsIndex < workspaceIdsJsonList.GetLength(); ++workspaceIdsIndex)
   {
     workspaceIdsJsonList[workspaceIdsIndex].AsString(m_workspaceIds[workspaceIdsIndex]);
   }
   payload.WithArray("WorkspaceIds", std::move(workspaceIdsJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeWorkspacesConnectionStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.DescribeWorkspacesConnectionStatus"));
  return headers;

}




