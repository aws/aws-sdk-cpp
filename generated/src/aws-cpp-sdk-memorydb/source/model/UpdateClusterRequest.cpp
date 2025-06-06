﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/UpdateClusterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MemoryDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateClusterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterNameHasBeenSet)
  {
   payload.WithString("ClusterName", m_clusterName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_securityGroupIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupIdsJsonList(m_securityGroupIds.size());
   for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
   {
     securityGroupIdsJsonList[securityGroupIdsIndex].AsString(m_securityGroupIds[securityGroupIdsIndex]);
   }
   payload.WithArray("SecurityGroupIds", std::move(securityGroupIdsJsonList));

  }

  if(m_maintenanceWindowHasBeenSet)
  {
   payload.WithString("MaintenanceWindow", m_maintenanceWindow);

  }

  if(m_snsTopicArnHasBeenSet)
  {
   payload.WithString("SnsTopicArn", m_snsTopicArn);

  }

  if(m_snsTopicStatusHasBeenSet)
  {
   payload.WithString("SnsTopicStatus", m_snsTopicStatus);

  }

  if(m_parameterGroupNameHasBeenSet)
  {
   payload.WithString("ParameterGroupName", m_parameterGroupName);

  }

  if(m_snapshotWindowHasBeenSet)
  {
   payload.WithString("SnapshotWindow", m_snapshotWindow);

  }

  if(m_snapshotRetentionLimitHasBeenSet)
  {
   payload.WithInteger("SnapshotRetentionLimit", m_snapshotRetentionLimit);

  }

  if(m_nodeTypeHasBeenSet)
  {
   payload.WithString("NodeType", m_nodeType);

  }

  if(m_engineHasBeenSet)
  {
   payload.WithString("Engine", m_engine);

  }

  if(m_engineVersionHasBeenSet)
  {
   payload.WithString("EngineVersion", m_engineVersion);

  }

  if(m_replicaConfigurationHasBeenSet)
  {
   payload.WithObject("ReplicaConfiguration", m_replicaConfiguration.Jsonize());

  }

  if(m_shardConfigurationHasBeenSet)
  {
   payload.WithObject("ShardConfiguration", m_shardConfiguration.Jsonize());

  }

  if(m_aCLNameHasBeenSet)
  {
   payload.WithString("ACLName", m_aCLName);

  }

  if(m_ipDiscoveryHasBeenSet)
  {
   payload.WithString("IpDiscovery", IpDiscoveryMapper::GetNameForIpDiscovery(m_ipDiscovery));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateClusterRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonMemoryDB.UpdateCluster"));
  return headers;

}




