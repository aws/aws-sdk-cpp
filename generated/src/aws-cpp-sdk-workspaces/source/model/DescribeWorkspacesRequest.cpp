﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DescribeWorkspacesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeWorkspacesRequest::SerializePayload() const
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

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_userNameHasBeenSet)
  {
   payload.WithString("UserName", m_userName);

  }

  if(m_bundleIdHasBeenSet)
  {
   payload.WithString("BundleId", m_bundleId);

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_workspaceNameHasBeenSet)
  {
   payload.WithString("WorkspaceName", m_workspaceName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeWorkspacesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.DescribeWorkspaces"));
  return headers;

}




