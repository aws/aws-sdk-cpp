/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/DeleteTapePoolRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteTapePoolRequest::DeleteTapePoolRequest() : 
    m_poolARNHasBeenSet(false)
{
}

Aws::String DeleteTapePoolRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_poolARNHasBeenSet)
  {
   payload.WithString("PoolARN", m_poolARN);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteTapePoolRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.DeleteTapePool"));
  return headers;

}




