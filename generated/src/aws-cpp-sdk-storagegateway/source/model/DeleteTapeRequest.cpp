/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/DeleteTapeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteTapeRequest::DeleteTapeRequest() : 
    m_gatewayARNHasBeenSet(false),
    m_tapeARNHasBeenSet(false),
    m_bypassGovernanceRetention(false),
    m_bypassGovernanceRetentionHasBeenSet(false)
{
}

Aws::String DeleteTapeRequest::SerializePayload() const
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

  if(m_bypassGovernanceRetentionHasBeenSet)
  {
   payload.WithBool("BypassGovernanceRetention", m_bypassGovernanceRetention);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteTapeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.DeleteTape"));
  return headers;

}




