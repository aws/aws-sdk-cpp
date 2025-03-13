/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/UpdateMultiRegionClusterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MemoryDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateMultiRegionClusterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_multiRegionClusterNameHasBeenSet)
  {
   payload.WithString("MultiRegionClusterName", m_multiRegionClusterName);

  }

  if(m_nodeTypeHasBeenSet)
  {
   payload.WithString("NodeType", m_nodeType);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_engineVersionHasBeenSet)
  {
   payload.WithString("EngineVersion", m_engineVersion);

  }

  if(m_shardConfigurationHasBeenSet)
  {
   payload.WithObject("ShardConfiguration", m_shardConfiguration.Jsonize());

  }

  if(m_multiRegionParameterGroupNameHasBeenSet)
  {
   payload.WithString("MultiRegionParameterGroupName", m_multiRegionParameterGroupName);

  }

  if(m_updateStrategyHasBeenSet)
  {
   payload.WithString("UpdateStrategy", UpdateStrategyMapper::GetNameForUpdateStrategy(m_updateStrategy));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateMultiRegionClusterRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonMemoryDB.UpdateMultiRegionCluster"));
  return headers;

}




