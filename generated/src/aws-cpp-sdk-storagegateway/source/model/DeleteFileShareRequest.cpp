/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/DeleteFileShareRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteFileShareRequest::DeleteFileShareRequest() : 
    m_fileShareARNHasBeenSet(false),
    m_forceDelete(false),
    m_forceDeleteHasBeenSet(false)
{
}

Aws::String DeleteFileShareRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fileShareARNHasBeenSet)
  {
   payload.WithString("FileShareARN", m_fileShareARN);

  }

  if(m_forceDeleteHasBeenSet)
  {
   payload.WithBool("ForceDelete", m_forceDelete);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteFileShareRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.DeleteFileShare"));
  return headers;

}




