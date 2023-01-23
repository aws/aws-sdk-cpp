/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/Cluster.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

Cluster::Cluster() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_pendingUpdatesHasBeenSet(false),
    m_numberOfShards(0),
    m_numberOfShardsHasBeenSet(false),
    m_shardsHasBeenSet(false),
    m_availabilityMode(AZStatus::NOT_SET),
    m_availabilityModeHasBeenSet(false),
    m_clusterEndpointHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_enginePatchVersionHasBeenSet(false),
    m_parameterGroupNameHasBeenSet(false),
    m_parameterGroupStatusHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_subnetGroupNameHasBeenSet(false),
    m_tLSEnabled(false),
    m_tLSEnabledHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_snsTopicArnHasBeenSet(false),
    m_snsTopicStatusHasBeenSet(false),
    m_snapshotRetentionLimit(0),
    m_snapshotRetentionLimitHasBeenSet(false),
    m_maintenanceWindowHasBeenSet(false),
    m_snapshotWindowHasBeenSet(false),
    m_aCLNameHasBeenSet(false),
    m_autoMinorVersionUpgrade(false),
    m_autoMinorVersionUpgradeHasBeenSet(false),
    m_dataTiering(DataTieringStatus::NOT_SET),
    m_dataTieringHasBeenSet(false)
{
}

Cluster::Cluster(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_pendingUpdatesHasBeenSet(false),
    m_numberOfShards(0),
    m_numberOfShardsHasBeenSet(false),
    m_shardsHasBeenSet(false),
    m_availabilityMode(AZStatus::NOT_SET),
    m_availabilityModeHasBeenSet(false),
    m_clusterEndpointHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_enginePatchVersionHasBeenSet(false),
    m_parameterGroupNameHasBeenSet(false),
    m_parameterGroupStatusHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_subnetGroupNameHasBeenSet(false),
    m_tLSEnabled(false),
    m_tLSEnabledHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_snsTopicArnHasBeenSet(false),
    m_snsTopicStatusHasBeenSet(false),
    m_snapshotRetentionLimit(0),
    m_snapshotRetentionLimitHasBeenSet(false),
    m_maintenanceWindowHasBeenSet(false),
    m_snapshotWindowHasBeenSet(false),
    m_aCLNameHasBeenSet(false),
    m_autoMinorVersionUpgrade(false),
    m_autoMinorVersionUpgradeHasBeenSet(false),
    m_dataTiering(DataTieringStatus::NOT_SET),
    m_dataTieringHasBeenSet(false)
{
  *this = jsonValue;
}

Cluster& Cluster::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PendingUpdates"))
  {
    m_pendingUpdates = jsonValue.GetObject("PendingUpdates");

    m_pendingUpdatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfShards"))
  {
    m_numberOfShards = jsonValue.GetInteger("NumberOfShards");

    m_numberOfShardsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Shards"))
  {
    Aws::Utils::Array<JsonView> shardsJsonList = jsonValue.GetArray("Shards");
    for(unsigned shardsIndex = 0; shardsIndex < shardsJsonList.GetLength(); ++shardsIndex)
    {
      m_shards.push_back(shardsJsonList[shardsIndex].AsObject());
    }
    m_shardsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailabilityMode"))
  {
    m_availabilityMode = AZStatusMapper::GetAZStatusForName(jsonValue.GetString("AvailabilityMode"));

    m_availabilityModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterEndpoint"))
  {
    m_clusterEndpoint = jsonValue.GetObject("ClusterEndpoint");

    m_clusterEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NodeType"))
  {
    m_nodeType = jsonValue.GetString("NodeType");

    m_nodeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EngineVersion"))
  {
    m_engineVersion = jsonValue.GetString("EngineVersion");

    m_engineVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnginePatchVersion"))
  {
    m_enginePatchVersion = jsonValue.GetString("EnginePatchVersion");

    m_enginePatchVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParameterGroupName"))
  {
    m_parameterGroupName = jsonValue.GetString("ParameterGroupName");

    m_parameterGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParameterGroupStatus"))
  {
    m_parameterGroupStatus = jsonValue.GetString("ParameterGroupStatus");

    m_parameterGroupStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityGroups"))
  {
    Aws::Utils::Array<JsonView> securityGroupsJsonList = jsonValue.GetArray("SecurityGroups");
    for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
    {
      m_securityGroups.push_back(securityGroupsJsonList[securityGroupsIndex].AsObject());
    }
    m_securityGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetGroupName"))
  {
    m_subnetGroupName = jsonValue.GetString("SubnetGroupName");

    m_subnetGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TLSEnabled"))
  {
    m_tLSEnabled = jsonValue.GetBool("TLSEnabled");

    m_tLSEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ARN"))
  {
    m_aRN = jsonValue.GetString("ARN");

    m_aRNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnsTopicArn"))
  {
    m_snsTopicArn = jsonValue.GetString("SnsTopicArn");

    m_snsTopicArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnsTopicStatus"))
  {
    m_snsTopicStatus = jsonValue.GetString("SnsTopicStatus");

    m_snsTopicStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnapshotRetentionLimit"))
  {
    m_snapshotRetentionLimit = jsonValue.GetInteger("SnapshotRetentionLimit");

    m_snapshotRetentionLimitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaintenanceWindow"))
  {
    m_maintenanceWindow = jsonValue.GetString("MaintenanceWindow");

    m_maintenanceWindowHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnapshotWindow"))
  {
    m_snapshotWindow = jsonValue.GetString("SnapshotWindow");

    m_snapshotWindowHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ACLName"))
  {
    m_aCLName = jsonValue.GetString("ACLName");

    m_aCLNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoMinorVersionUpgrade"))
  {
    m_autoMinorVersionUpgrade = jsonValue.GetBool("AutoMinorVersionUpgrade");

    m_autoMinorVersionUpgradeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataTiering"))
  {
    m_dataTiering = DataTieringStatusMapper::GetDataTieringStatusForName(jsonValue.GetString("DataTiering"));

    m_dataTieringHasBeenSet = true;
  }

  return *this;
}

JsonValue Cluster::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_pendingUpdatesHasBeenSet)
  {
   payload.WithObject("PendingUpdates", m_pendingUpdates.Jsonize());

  }

  if(m_numberOfShardsHasBeenSet)
  {
   payload.WithInteger("NumberOfShards", m_numberOfShards);

  }

  if(m_shardsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> shardsJsonList(m_shards.size());
   for(unsigned shardsIndex = 0; shardsIndex < shardsJsonList.GetLength(); ++shardsIndex)
   {
     shardsJsonList[shardsIndex].AsObject(m_shards[shardsIndex].Jsonize());
   }
   payload.WithArray("Shards", std::move(shardsJsonList));

  }

  if(m_availabilityModeHasBeenSet)
  {
   payload.WithString("AvailabilityMode", AZStatusMapper::GetNameForAZStatus(m_availabilityMode));
  }

  if(m_clusterEndpointHasBeenSet)
  {
   payload.WithObject("ClusterEndpoint", m_clusterEndpoint.Jsonize());

  }

  if(m_nodeTypeHasBeenSet)
  {
   payload.WithString("NodeType", m_nodeType);

  }

  if(m_engineVersionHasBeenSet)
  {
   payload.WithString("EngineVersion", m_engineVersion);

  }

  if(m_enginePatchVersionHasBeenSet)
  {
   payload.WithString("EnginePatchVersion", m_enginePatchVersion);

  }

  if(m_parameterGroupNameHasBeenSet)
  {
   payload.WithString("ParameterGroupName", m_parameterGroupName);

  }

  if(m_parameterGroupStatusHasBeenSet)
  {
   payload.WithString("ParameterGroupStatus", m_parameterGroupStatus);

  }

  if(m_securityGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupsJsonList(m_securityGroups.size());
   for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
   {
     securityGroupsJsonList[securityGroupsIndex].AsObject(m_securityGroups[securityGroupsIndex].Jsonize());
   }
   payload.WithArray("SecurityGroups", std::move(securityGroupsJsonList));

  }

  if(m_subnetGroupNameHasBeenSet)
  {
   payload.WithString("SubnetGroupName", m_subnetGroupName);

  }

  if(m_tLSEnabledHasBeenSet)
  {
   payload.WithBool("TLSEnabled", m_tLSEnabled);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_aRNHasBeenSet)
  {
   payload.WithString("ARN", m_aRN);

  }

  if(m_snsTopicArnHasBeenSet)
  {
   payload.WithString("SnsTopicArn", m_snsTopicArn);

  }

  if(m_snsTopicStatusHasBeenSet)
  {
   payload.WithString("SnsTopicStatus", m_snsTopicStatus);

  }

  if(m_snapshotRetentionLimitHasBeenSet)
  {
   payload.WithInteger("SnapshotRetentionLimit", m_snapshotRetentionLimit);

  }

  if(m_maintenanceWindowHasBeenSet)
  {
   payload.WithString("MaintenanceWindow", m_maintenanceWindow);

  }

  if(m_snapshotWindowHasBeenSet)
  {
   payload.WithString("SnapshotWindow", m_snapshotWindow);

  }

  if(m_aCLNameHasBeenSet)
  {
   payload.WithString("ACLName", m_aCLName);

  }

  if(m_autoMinorVersionUpgradeHasBeenSet)
  {
   payload.WithBool("AutoMinorVersionUpgrade", m_autoMinorVersionUpgrade);

  }

  if(m_dataTieringHasBeenSet)
  {
   payload.WithString("DataTiering", DataTieringStatusMapper::GetNameForDataTieringStatus(m_dataTiering));
  }

  return payload;
}

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
