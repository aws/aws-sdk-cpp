/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DescribeWorkspaceAssociationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeWorkspaceAssociationsRequest::DescribeWorkspaceAssociationsRequest() : 
    m_workspaceIdHasBeenSet(false),
    m_associatedResourceTypesHasBeenSet(false)
{
}

Aws::String DescribeWorkspaceAssociationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_workspaceIdHasBeenSet)
  {
   payload.WithString("WorkspaceId", m_workspaceId);

  }

  if(m_associatedResourceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> associatedResourceTypesJsonList(m_associatedResourceTypes.size());
   for(unsigned associatedResourceTypesIndex = 0; associatedResourceTypesIndex < associatedResourceTypesJsonList.GetLength(); ++associatedResourceTypesIndex)
   {
     associatedResourceTypesJsonList[associatedResourceTypesIndex].AsString(WorkSpaceAssociatedResourceTypeMapper::GetNameForWorkSpaceAssociatedResourceType(m_associatedResourceTypes[associatedResourceTypesIndex]));
   }
   payload.WithArray("AssociatedResourceTypes", std::move(associatedResourceTypesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeWorkspaceAssociationsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.DescribeWorkspaceAssociations"));
  return headers;

}




