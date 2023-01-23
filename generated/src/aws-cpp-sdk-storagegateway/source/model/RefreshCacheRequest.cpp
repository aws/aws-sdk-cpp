/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/RefreshCacheRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RefreshCacheRequest::RefreshCacheRequest() : 
    m_fileShareARNHasBeenSet(false),
    m_folderListHasBeenSet(false),
    m_recursive(false),
    m_recursiveHasBeenSet(false)
{
}

Aws::String RefreshCacheRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fileShareARNHasBeenSet)
  {
   payload.WithString("FileShareARN", m_fileShareARN);

  }

  if(m_folderListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> folderListJsonList(m_folderList.size());
   for(unsigned folderListIndex = 0; folderListIndex < folderListJsonList.GetLength(); ++folderListIndex)
   {
     folderListJsonList[folderListIndex].AsString(m_folderList[folderListIndex]);
   }
   payload.WithArray("FolderList", std::move(folderListJsonList));

  }

  if(m_recursiveHasBeenSet)
  {
   payload.WithBool("Recursive", m_recursive);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RefreshCacheRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.RefreshCache"));
  return headers;

}




