﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/CreateProtectionGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Shield::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateProtectionGroupRequest::SerializePayload() const
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

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateProtectionGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSShield_20160616.CreateProtectionGroup"));
  return headers;

}




