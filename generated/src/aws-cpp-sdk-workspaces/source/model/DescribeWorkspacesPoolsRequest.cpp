/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DescribeWorkspacesPoolsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeWorkspacesPoolsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_poolIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> poolIdsJsonList(m_poolIds.size());
   for(unsigned poolIdsIndex = 0; poolIdsIndex < poolIdsJsonList.GetLength(); ++poolIdsIndex)
   {
     poolIdsJsonList[poolIdsIndex].AsString(m_poolIds[poolIdsIndex]);
   }
   payload.WithArray("PoolIds", std::move(poolIdsJsonList));

  }

  if(m_filtersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
   for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
   {
     filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
   }
   payload.WithArray("Filters", std::move(filtersJsonList));

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeWorkspacesPoolsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.DescribeWorkspacesPools"));
  return headers;

}




