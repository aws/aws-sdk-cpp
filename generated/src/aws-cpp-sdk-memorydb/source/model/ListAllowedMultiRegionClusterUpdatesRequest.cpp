/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/ListAllowedMultiRegionClusterUpdatesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MemoryDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListAllowedMultiRegionClusterUpdatesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_multiRegionClusterNameHasBeenSet)
  {
   payload.WithString("MultiRegionClusterName", m_multiRegionClusterName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListAllowedMultiRegionClusterUpdatesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonMemoryDB.ListAllowedMultiRegionClusterUpdates"));
  return headers;

}




