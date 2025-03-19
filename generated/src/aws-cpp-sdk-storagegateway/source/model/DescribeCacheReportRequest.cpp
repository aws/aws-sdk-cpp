/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/DescribeCacheReportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeCacheReportRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_cacheReportARNHasBeenSet)
  {
   payload.WithString("CacheReportARN", m_cacheReportARN);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeCacheReportRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.DescribeCacheReport"));
  return headers;

}




