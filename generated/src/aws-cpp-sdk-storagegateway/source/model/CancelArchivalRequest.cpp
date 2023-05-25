/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/CancelArchivalRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CancelArchivalRequest::CancelArchivalRequest() : 
    m_gatewayARNHasBeenSet(false),
    m_tapeARNHasBeenSet(false)
{
}

Aws::String CancelArchivalRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_gatewayARNHasBeenSet)
  {
   payload.WithString("GatewayARN", m_gatewayARN);

  }

  if(m_tapeARNHasBeenSet)
  {
   payload.WithString("TapeARN", m_tapeARN);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CancelArchivalRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.CancelArchival"));
  return headers;

}




