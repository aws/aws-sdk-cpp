/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/DisassociateFileSystemRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateFileSystemRequest::DisassociateFileSystemRequest() : 
    m_fileSystemAssociationARNHasBeenSet(false),
    m_forceDelete(false),
    m_forceDeleteHasBeenSet(false)
{
}

Aws::String DisassociateFileSystemRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fileSystemAssociationARNHasBeenSet)
  {
   payload.WithString("FileSystemAssociationARN", m_fileSystemAssociationARN);

  }

  if(m_forceDeleteHasBeenSet)
  {
   payload.WithBool("ForceDelete", m_forceDelete);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DisassociateFileSystemRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.DisassociateFileSystem"));
  return headers;

}




