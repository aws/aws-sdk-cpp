/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/ListTapePoolsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListTapePoolsRequest::ListTapePoolsRequest() : 
    m_poolARNsHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false)
{
}

Aws::String ListTapePoolsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_poolARNsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> poolARNsJsonList(m_poolARNs.size());
   for(unsigned poolARNsIndex = 0; poolARNsIndex < poolARNsJsonList.GetLength(); ++poolARNsIndex)
   {
     poolARNsJsonList[poolARNsIndex].AsString(m_poolARNs[poolARNsIndex]);
   }
   payload.WithArray("PoolARNs", std::move(poolARNsJsonList));

  }

  if(m_markerHasBeenSet)
  {
   payload.WithString("Marker", m_marker);

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListTapePoolsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.ListTapePools"));
  return headers;

}




