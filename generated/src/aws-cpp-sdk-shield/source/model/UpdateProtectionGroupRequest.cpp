/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/UpdateProtectionGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Shield::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateProtectionGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_protectionGroupIdHasBeenSet)
  {
   payload.WithString("ProtectionGroupId", m_protectionGroupId);

  }

  if(m_aggregationHasBeenSet)
  {
   payload.WithString("Aggregation", ProtectionGroupAggregationMapper::GetNameForProtectionGroupAggregation(m_aggregation));
  }

  if(m_patternHasBeenSet)
  {
   payload.WithString("Pattern", ProtectionGroupPatternMapper::GetNameForProtectionGroupPattern(m_pattern));
  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", ProtectedResourceTypeMapper::GetNameForProtectedResourceType(m_resourceType));
  }

  if(m_membersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> membersJsonList(m_members.size());
   for(unsigned membersIndex = 0; membersIndex < membersJsonList.GetLength(); ++membersIndex)
   {
     membersJsonList[membersIndex].AsString(m_members[membersIndex]);
   }
   payload.WithArray("Members", std::move(membersJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateProtectionGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSShield_20160616.UpdateProtectionGroup"));
  return headers;

}




