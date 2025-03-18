/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rbin/model/ListRulesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RecycleBin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListRulesRequest::SerializePayload() const
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

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_resourceTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceTagsJsonList(m_resourceTags.size());
   for(unsigned resourceTagsIndex = 0; resourceTagsIndex < resourceTagsJsonList.GetLength(); ++resourceTagsIndex)
   {
     resourceTagsJsonList[resourceTagsIndex].AsObject(m_resourceTags[resourceTagsIndex].Jsonize());
   }
   payload.WithArray("ResourceTags", std::move(resourceTagsJsonList));

  }

  if(m_lockStateHasBeenSet)
  {
   payload.WithString("LockState", LockStateMapper::GetNameForLockState(m_lockState));
  }

  if(m_excludeResourceTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> excludeResourceTagsJsonList(m_excludeResourceTags.size());
   for(unsigned excludeResourceTagsIndex = 0; excludeResourceTagsIndex < excludeResourceTagsJsonList.GetLength(); ++excludeResourceTagsIndex)
   {
     excludeResourceTagsJsonList[excludeResourceTagsIndex].AsObject(m_excludeResourceTags[excludeResourceTagsIndex].Jsonize());
   }
   payload.WithArray("ExcludeResourceTags", std::move(excludeResourceTagsJsonList));

  }

  return payload.View().WriteReadable();
}




