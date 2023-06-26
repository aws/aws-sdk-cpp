/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/NotifyWhenUploadedRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

NotifyWhenUploadedRequest::NotifyWhenUploadedRequest() : 
    m_fileShareARNHasBeenSet(false)
{
}

Aws::String NotifyWhenUploadedRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fileShareARNHasBeenSet)
  {
   payload.WithString("FileShareARN", m_fileShareARN);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection NotifyWhenUploadedRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.NotifyWhenUploaded"));
  return headers;

}




