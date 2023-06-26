/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/AssociateIpGroupsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateIpGroupsRequest::AssociateIpGroupsRequest() : 
    m_directoryIdHasBeenSet(false),
    m_groupIdsHasBeenSet(false)
{
}

Aws::String AssociateIpGroupsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_groupIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groupIdsJsonList(m_groupIds.size());
   for(unsigned groupIdsIndex = 0; groupIdsIndex < groupIdsJsonList.GetLength(); ++groupIdsIndex)
   {
     groupIdsJsonList[groupIdsIndex].AsString(m_groupIds[groupIdsIndex]);
   }
   payload.WithArray("GroupIds", std::move(groupIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateIpGroupsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.AssociateIpGroups"));
  return headers;

}




