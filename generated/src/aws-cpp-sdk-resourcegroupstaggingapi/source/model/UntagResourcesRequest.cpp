/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resourcegroupstaggingapi/model/UntagResourcesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResourceGroupsTaggingAPI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UntagResourcesRequest::UntagResourcesRequest() : 
    m_resourceARNListHasBeenSet(false),
    m_tagKeysHasBeenSet(false)
{
}

Aws::String UntagResourcesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceARNListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceARNListJsonList(m_resourceARNList.size());
   for(unsigned resourceARNListIndex = 0; resourceARNListIndex < resourceARNListJsonList.GetLength(); ++resourceARNListIndex)
   {
     resourceARNListJsonList[resourceARNListIndex].AsString(m_resourceARNList[resourceARNListIndex]);
   }
   payload.WithArray("ResourceARNList", std::move(resourceARNListJsonList));

  }

  if(m_tagKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagKeysJsonList(m_tagKeys.size());
   for(unsigned tagKeysIndex = 0; tagKeysIndex < tagKeysJsonList.GetLength(); ++tagKeysIndex)
   {
     tagKeysJsonList[tagKeysIndex].AsString(m_tagKeys[tagKeysIndex]);
   }
   payload.WithArray("TagKeys", std::move(tagKeysJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UntagResourcesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ResourceGroupsTaggingAPI_20170126.UntagResources"));
  return headers;

}




