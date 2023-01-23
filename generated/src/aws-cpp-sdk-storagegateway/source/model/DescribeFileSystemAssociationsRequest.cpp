/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/DescribeFileSystemAssociationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeFileSystemAssociationsRequest::DescribeFileSystemAssociationsRequest() : 
    m_fileSystemAssociationARNListHasBeenSet(false)
{
}

Aws::String DescribeFileSystemAssociationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fileSystemAssociationARNListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fileSystemAssociationARNListJsonList(m_fileSystemAssociationARNList.size());
   for(unsigned fileSystemAssociationARNListIndex = 0; fileSystemAssociationARNListIndex < fileSystemAssociationARNListJsonList.GetLength(); ++fileSystemAssociationARNListIndex)
   {
     fileSystemAssociationARNListJsonList[fileSystemAssociationARNListIndex].AsString(m_fileSystemAssociationARNList[fileSystemAssociationARNListIndex]);
   }
   payload.WithArray("FileSystemAssociationARNList", std::move(fileSystemAssociationARNListJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeFileSystemAssociationsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.DescribeFileSystemAssociations"));
  return headers;

}




