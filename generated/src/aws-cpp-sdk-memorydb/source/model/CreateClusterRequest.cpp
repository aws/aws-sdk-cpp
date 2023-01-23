/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/CreateClusterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MemoryDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateClusterRequest::CreateClusterRequest() : 
    m_clusterNameHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_parameterGroupNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_numShards(0),
    m_numShardsHasBeenSet(false),
    m_numReplicasPerShard(0),
    m_numReplicasPerShardHasBeenSet(false),
    m_subnetGroupNameHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_maintenanceWindowHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_snsTopicArnHasBeenSet(false),
    m_tLSEnabled(false),
    m_tLSEnabledHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_snapshotArnsHasBeenSet(false),
    m_snapshotNameHasBeenSet(false),
    m_snapshotRetentionLimit(0),
    m_snapshotRetentionLimitHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_snapshotWindowHasBeenSet(false),
    m_aCLNameHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_autoMinorVersionUpgrade(false),
    m_autoMinorVersionUpgradeHasBeenSet(false),
    m_dataTiering(false),
    m_dataTieringHasBeenSet(false)
{
}

Aws::String CreateClusterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterNameHasBeenSet)
  {
   payload.WithString("ClusterName", m_clusterName);

  }

  if(m_nodeTypeHasBeenSet)
  {
   payload.WithString("NodeType", m_nodeType);

  }

  if(m_parameterGroupNameHasBeenSet)
  {
   payload.WithString("ParameterGroupName", m_parameterGroupName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_numShardsHasBeenSet)
  {
   payload.WithInteger("NumShards", m_numShards);

  }

  if(m_numReplicasPerShardHasBeenSet)
  {
   payload.WithInteger("NumReplicasPerShard", m_numReplicasPerShard);

  }

  if(m_subnetGroupNameHasBeenSet)
  {
   payload.WithString("SubnetGroupName", m_subnetGroupName);

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

  if(m_portHasBeenSet)
  {
   payload.WithInteger("Port", m_port);

  }

  if(m_snsTopicArnHasBeenSet)
  {
   payload.WithString("SnsTopicArn", m_snsTopicArn);

  }

  if(m_tLSEnabledHasBeenSet)
  {
   payload.WithBool("TLSEnabled", m_tLSEnabled);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_snapshotArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> snapshotArnsJsonList(m_snapshotArns.size());
   for(unsigned snapshotArnsIndex = 0; snapshotArnsIndex < snapshotArnsJsonList.GetLength(); ++snapshotArnsIndex)
   {
     snapshotArnsJsonList[snapshotArnsIndex].AsString(m_snapshotArns[snapshotArnsIndex]);
   }
   payload.WithArray("SnapshotArns", std::move(snapshotArnsJsonList));

  }

  if(m_snapshotNameHasBeenSet)
  {
   payload.WithString("SnapshotName", m_snapshotName);

  }

  if(m_snapshotRetentionLimitHasBeenSet)
  {
   payload.WithInteger("SnapshotRetentionLimit", m_snapshotRetentionLimit);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_snapshotWindowHasBeenSet)
  {
   payload.WithString("SnapshotWindow", m_snapshotWindow);

  }

  if(m_aCLNameHasBeenSet)
  {
   payload.WithString("ACLName", m_aCLName);

  }

  if(m_engineVersionHasBeenSet)
  {
   payload.WithString("EngineVersion", m_engineVersion);

  }

  if(m_autoMinorVersionUpgradeHasBeenSet)
  {
   payload.WithBool("AutoMinorVersionUpgrade", m_autoMinorVersionUpgrade);

  }

  if(m_dataTieringHasBeenSet)
  {
   payload.WithBool("DataTiering", m_dataTiering);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateClusterRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonMemoryDB.CreateCluster"));
  return headers;

}




