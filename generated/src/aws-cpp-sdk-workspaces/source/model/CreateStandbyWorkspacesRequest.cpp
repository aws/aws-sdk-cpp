/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/CreateStandbyWorkspacesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateStandbyWorkspacesRequest::CreateStandbyWorkspacesRequest() : 
    m_primaryRegionHasBeenSet(false),
    m_standbyWorkspacesHasBeenSet(false)
{
}

Aws::String CreateStandbyWorkspacesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_primaryRegionHasBeenSet)
  {
   payload.WithString("PrimaryRegion", m_primaryRegion);

  }

  if(m_standbyWorkspacesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> standbyWorkspacesJsonList(m_standbyWorkspaces.size());
   for(unsigned standbyWorkspacesIndex = 0; standbyWorkspacesIndex < standbyWorkspacesJsonList.GetLength(); ++standbyWorkspacesIndex)
   {
     standbyWorkspacesJsonList[standbyWorkspacesIndex].AsObject(m_standbyWorkspaces[standbyWorkspacesIndex].Jsonize());
   }
   payload.WithArray("StandbyWorkspaces", std::move(standbyWorkspacesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateStandbyWorkspacesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.CreateStandbyWorkspaces"));
  return headers;

}




