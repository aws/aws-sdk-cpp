/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/DeleteTapeArchiveRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteTapeArchiveRequest::DeleteTapeArchiveRequest() : 
    m_tapeARNHasBeenSet(false),
    m_bypassGovernanceRetention(false),
    m_bypassGovernanceRetentionHasBeenSet(false)
{
}

Aws::String DeleteTapeArchiveRequest::SerializePayload() const
{
  JsonValue payload;

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

Aws::Http::HeaderValueCollection DeleteTapeArchiveRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.DeleteTapeArchive"));
  return headers;

}




