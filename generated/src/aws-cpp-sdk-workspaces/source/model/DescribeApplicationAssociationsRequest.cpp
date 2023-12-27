/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DescribeApplicationAssociationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeApplicationAssociationsRequest::DescribeApplicationAssociationsRequest() : 
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_associatedResourceTypesHasBeenSet(false)
{
}

Aws::String DescribeApplicationAssociationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("ApplicationId", m_applicationId);

  }

  if(m_associatedResourceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> associatedResourceTypesJsonList(m_associatedResourceTypes.size());
   for(unsigned associatedResourceTypesIndex = 0; associatedResourceTypesIndex < associatedResourceTypesJsonList.GetLength(); ++associatedResourceTypesIndex)
   {
     associatedResourceTypesJsonList[associatedResourceTypesIndex].AsString(ApplicationAssociatedResourceTypeMapper::GetNameForApplicationAssociatedResourceType(m_associatedResourceTypes[associatedResourceTypesIndex]));
   }
   payload.WithArray("AssociatedResourceTypes", std::move(associatedResourceTypesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeApplicationAssociationsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.DescribeApplicationAssociations"));
  return headers;

}




