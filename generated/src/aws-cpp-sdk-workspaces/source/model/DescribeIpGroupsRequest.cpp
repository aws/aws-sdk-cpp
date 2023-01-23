/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DescribeIpGroupsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeIpGroupsRequest::DescribeIpGroupsRequest() : 
    m_groupIdsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String DescribeIpGroupsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_groupIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groupIdsJsonList(m_groupIds.size());
   for(unsigned groupIdsIndex = 0; groupIdsIndex < groupIdsJsonList.GetLength(); ++groupIdsIndex)
   {
     groupIdsJsonList[groupIdsIndex].AsString(m_groupIds[groupIdsIndex]);
   }
   payload.WithArray("GroupIds", std::move(groupIdsJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeIpGroupsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.DescribeIpGroups"));
  return headers;

}




