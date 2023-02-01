/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/ListTapesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListTapesRequest::ListTapesRequest() : 
    m_tapeARNsHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false)
{
}

Aws::String ListTapesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tapeARNsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tapeARNsJsonList(m_tapeARNs.size());
   for(unsigned tapeARNsIndex = 0; tapeARNsIndex < tapeARNsJsonList.GetLength(); ++tapeARNsIndex)
   {
     tapeARNsJsonList[tapeARNsIndex].AsString(m_tapeARNs[tapeARNsIndex]);
   }
   payload.WithArray("TapeARNs", std::move(tapeARNsJsonList));

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

Aws::Http::HeaderValueCollection ListTapesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.ListTapes"));
  return headers;

}




