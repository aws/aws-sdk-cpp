/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/AddCacheRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AddCacheRequest::AddCacheRequest() : 
    m_gatewayARNHasBeenSet(false),
    m_diskIdsHasBeenSet(false)
{
}

Aws::String AddCacheRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_gatewayARNHasBeenSet)
  {
   payload.WithString("GatewayARN", m_gatewayARN);

  }

  if(m_diskIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> diskIdsJsonList(m_diskIds.size());
   for(unsigned diskIdsIndex = 0; diskIdsIndex < diskIdsJsonList.GetLength(); ++diskIdsIndex)
   {
     diskIdsJsonList[diskIdsIndex].AsString(m_diskIds[diskIdsIndex]);
   }
   payload.WithArray("DiskIds", std::move(diskIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AddCacheRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.AddCache"));
  return headers;

}




