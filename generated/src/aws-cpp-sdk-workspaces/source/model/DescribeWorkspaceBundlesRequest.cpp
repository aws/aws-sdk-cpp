/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DescribeWorkspaceBundlesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeWorkspaceBundlesRequest::DescribeWorkspaceBundlesRequest() : 
    m_bundleIdsHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeWorkspaceBundlesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_bundleIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> bundleIdsJsonList(m_bundleIds.size());
   for(unsigned bundleIdsIndex = 0; bundleIdsIndex < bundleIdsJsonList.GetLength(); ++bundleIdsIndex)
   {
     bundleIdsJsonList[bundleIdsIndex].AsString(m_bundleIds[bundleIdsIndex]);
   }
   payload.WithArray("BundleIds", std::move(bundleIdsJsonList));

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("Owner", m_owner);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeWorkspaceBundlesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.DescribeWorkspaceBundles"));
  return headers;

}




