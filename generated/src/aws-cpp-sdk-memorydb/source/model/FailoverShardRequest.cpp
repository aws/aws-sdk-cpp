/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/FailoverShardRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MemoryDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

FailoverShardRequest::FailoverShardRequest() : 
    m_clusterNameHasBeenSet(false),
    m_shardNameHasBeenSet(false)
{
}

Aws::String FailoverShardRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterNameHasBeenSet)
  {
   payload.WithString("ClusterName", m_clusterName);

  }

  if(m_shardNameHasBeenSet)
  {
   payload.WithString("ShardName", m_shardName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection FailoverShardRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonMemoryDB.FailoverShard"));
  return headers;

}




