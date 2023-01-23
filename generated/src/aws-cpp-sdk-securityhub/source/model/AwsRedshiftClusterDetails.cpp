/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsRedshiftClusterDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsRedshiftClusterDetails::AwsRedshiftClusterDetails() : 
    m_allowVersionUpgrade(false),
    m_allowVersionUpgradeHasBeenSet(false),
    m_automatedSnapshotRetentionPeriod(0),
    m_automatedSnapshotRetentionPeriodHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_clusterAvailabilityStatusHasBeenSet(false),
    m_clusterCreateTimeHasBeenSet(false),
    m_clusterIdentifierHasBeenSet(false),
    m_clusterNodesHasBeenSet(false),
    m_clusterParameterGroupsHasBeenSet(false),
    m_clusterPublicKeyHasBeenSet(false),
    m_clusterRevisionNumberHasBeenSet(false),
    m_clusterSecurityGroupsHasBeenSet(false),
    m_clusterSnapshotCopyStatusHasBeenSet(false),
    m_clusterStatusHasBeenSet(false),
    m_clusterSubnetGroupNameHasBeenSet(false),
    m_clusterVersionHasBeenSet(false),
    m_dBNameHasBeenSet(false),
    m_deferredMaintenanceWindowsHasBeenSet(false),
    m_elasticIpStatusHasBeenSet(false),
    m_elasticResizeNumberOfNodeOptionsHasBeenSet(false),
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_enhancedVpcRouting(false),
    m_enhancedVpcRoutingHasBeenSet(false),
    m_expectedNextSnapshotScheduleTimeHasBeenSet(false),
    m_expectedNextSnapshotScheduleTimeStatusHasBeenSet(false),
    m_hsmStatusHasBeenSet(false),
    m_iamRolesHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_maintenanceTrackNameHasBeenSet(false),
    m_manualSnapshotRetentionPeriod(0),
    m_manualSnapshotRetentionPeriodHasBeenSet(false),
    m_masterUsernameHasBeenSet(false),
    m_nextMaintenanceWindowStartTimeHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_numberOfNodes(0),
    m_numberOfNodesHasBeenSet(false),
    m_pendingActionsHasBeenSet(false),
    m_pendingModifiedValuesHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false),
    m_resizeInfoHasBeenSet(false),
    m_restoreStatusHasBeenSet(false),
    m_snapshotScheduleIdentifierHasBeenSet(false),
    m_snapshotScheduleStateHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vpcSecurityGroupsHasBeenSet(false),
    m_loggingStatusHasBeenSet(false)
{
}

AwsRedshiftClusterDetails::AwsRedshiftClusterDetails(JsonView jsonValue) : 
    m_allowVersionUpgrade(false),
    m_allowVersionUpgradeHasBeenSet(false),
    m_automatedSnapshotRetentionPeriod(0),
    m_automatedSnapshotRetentionPeriodHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_clusterAvailabilityStatusHasBeenSet(false),
    m_clusterCreateTimeHasBeenSet(false),
    m_clusterIdentifierHasBeenSet(false),
    m_clusterNodesHasBeenSet(false),
    m_clusterParameterGroupsHasBeenSet(false),
    m_clusterPublicKeyHasBeenSet(false),
    m_clusterRevisionNumberHasBeenSet(false),
    m_clusterSecurityGroupsHasBeenSet(false),
    m_clusterSnapshotCopyStatusHasBeenSet(false),
    m_clusterStatusHasBeenSet(false),
    m_clusterSubnetGroupNameHasBeenSet(false),
    m_clusterVersionHasBeenSet(false),
    m_dBNameHasBeenSet(false),
    m_deferredMaintenanceWindowsHasBeenSet(false),
    m_elasticIpStatusHasBeenSet(false),
    m_elasticResizeNumberOfNodeOptionsHasBeenSet(false),
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_enhancedVpcRouting(false),
    m_enhancedVpcRoutingHasBeenSet(false),
    m_expectedNextSnapshotScheduleTimeHasBeenSet(false),
    m_expectedNextSnapshotScheduleTimeStatusHasBeenSet(false),
    m_hsmStatusHasBeenSet(false),
    m_iamRolesHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_maintenanceTrackNameHasBeenSet(false),
    m_manualSnapshotRetentionPeriod(0),
    m_manualSnapshotRetentionPeriodHasBeenSet(false),
    m_masterUsernameHasBeenSet(false),
    m_nextMaintenanceWindowStartTimeHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_numberOfNodes(0),
    m_numberOfNodesHasBeenSet(false),
    m_pendingActionsHasBeenSet(false),
    m_pendingModifiedValuesHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false),
    m_resizeInfoHasBeenSet(false),
    m_restoreStatusHasBeenSet(false),
    m_snapshotScheduleIdentifierHasBeenSet(false),
    m_snapshotScheduleStateHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vpcSecurityGroupsHasBeenSet(false),
    m_loggingStatusHasBeenSet(false)
{
  *this = jsonValue;
}

AwsRedshiftClusterDetails& AwsRedshiftClusterDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AllowVersionUpgrade"))
  {
    m_allowVersionUpgrade = jsonValue.GetBool("AllowVersionUpgrade");

    m_allowVersionUpgradeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutomatedSnapshotRetentionPeriod"))
  {
    m_automatedSnapshotRetentionPeriod = jsonValue.GetInteger("AutomatedSnapshotRetentionPeriod");

    m_automatedSnapshotRetentionPeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("AvailabilityZone");

    m_availabilityZoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterAvailabilityStatus"))
  {
    m_clusterAvailabilityStatus = jsonValue.GetString("ClusterAvailabilityStatus");

    m_clusterAvailabilityStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterCreateTime"))
  {
    m_clusterCreateTime = jsonValue.GetString("ClusterCreateTime");

    m_clusterCreateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterIdentifier"))
  {
    m_clusterIdentifier = jsonValue.GetString("ClusterIdentifier");

    m_clusterIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterNodes"))
  {
    Aws::Utils::Array<JsonView> clusterNodesJsonList = jsonValue.GetArray("ClusterNodes");
    for(unsigned clusterNodesIndex = 0; clusterNodesIndex < clusterNodesJsonList.GetLength(); ++clusterNodesIndex)
    {
      m_clusterNodes.push_back(clusterNodesJsonList[clusterNodesIndex].AsObject());
    }
    m_clusterNodesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterParameterGroups"))
  {
    Aws::Utils::Array<JsonView> clusterParameterGroupsJsonList = jsonValue.GetArray("ClusterParameterGroups");
    for(unsigned clusterParameterGroupsIndex = 0; clusterParameterGroupsIndex < clusterParameterGroupsJsonList.GetLength(); ++clusterParameterGroupsIndex)
    {
      m_clusterParameterGroups.push_back(clusterParameterGroupsJsonList[clusterParameterGroupsIndex].AsObject());
    }
    m_clusterParameterGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterPublicKey"))
  {
    m_clusterPublicKey = jsonValue.GetString("ClusterPublicKey");

    m_clusterPublicKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterRevisionNumber"))
  {
    m_clusterRevisionNumber = jsonValue.GetString("ClusterRevisionNumber");

    m_clusterRevisionNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterSecurityGroups"))
  {
    Aws::Utils::Array<JsonView> clusterSecurityGroupsJsonList = jsonValue.GetArray("ClusterSecurityGroups");
    for(unsigned clusterSecurityGroupsIndex = 0; clusterSecurityGroupsIndex < clusterSecurityGroupsJsonList.GetLength(); ++clusterSecurityGroupsIndex)
    {
      m_clusterSecurityGroups.push_back(clusterSecurityGroupsJsonList[clusterSecurityGroupsIndex].AsObject());
    }
    m_clusterSecurityGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterSnapshotCopyStatus"))
  {
    m_clusterSnapshotCopyStatus = jsonValue.GetObject("ClusterSnapshotCopyStatus");

    m_clusterSnapshotCopyStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterStatus"))
  {
    m_clusterStatus = jsonValue.GetString("ClusterStatus");

    m_clusterStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterSubnetGroupName"))
  {
    m_clusterSubnetGroupName = jsonValue.GetString("ClusterSubnetGroupName");

    m_clusterSubnetGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterVersion"))
  {
    m_clusterVersion = jsonValue.GetString("ClusterVersion");

    m_clusterVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DBName"))
  {
    m_dBName = jsonValue.GetString("DBName");

    m_dBNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeferredMaintenanceWindows"))
  {
    Aws::Utils::Array<JsonView> deferredMaintenanceWindowsJsonList = jsonValue.GetArray("DeferredMaintenanceWindows");
    for(unsigned deferredMaintenanceWindowsIndex = 0; deferredMaintenanceWindowsIndex < deferredMaintenanceWindowsJsonList.GetLength(); ++deferredMaintenanceWindowsIndex)
    {
      m_deferredMaintenanceWindows.push_back(deferredMaintenanceWindowsJsonList[deferredMaintenanceWindowsIndex].AsObject());
    }
    m_deferredMaintenanceWindowsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ElasticIpStatus"))
  {
    m_elasticIpStatus = jsonValue.GetObject("ElasticIpStatus");

    m_elasticIpStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ElasticResizeNumberOfNodeOptions"))
  {
    m_elasticResizeNumberOfNodeOptions = jsonValue.GetString("ElasticResizeNumberOfNodeOptions");

    m_elasticResizeNumberOfNodeOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Encrypted"))
  {
    m_encrypted = jsonValue.GetBool("Encrypted");

    m_encryptedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Endpoint"))
  {
    m_endpoint = jsonValue.GetObject("Endpoint");

    m_endpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnhancedVpcRouting"))
  {
    m_enhancedVpcRouting = jsonValue.GetBool("EnhancedVpcRouting");

    m_enhancedVpcRoutingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpectedNextSnapshotScheduleTime"))
  {
    m_expectedNextSnapshotScheduleTime = jsonValue.GetString("ExpectedNextSnapshotScheduleTime");

    m_expectedNextSnapshotScheduleTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpectedNextSnapshotScheduleTimeStatus"))
  {
    m_expectedNextSnapshotScheduleTimeStatus = jsonValue.GetString("ExpectedNextSnapshotScheduleTimeStatus");

    m_expectedNextSnapshotScheduleTimeStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HsmStatus"))
  {
    m_hsmStatus = jsonValue.GetObject("HsmStatus");

    m_hsmStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IamRoles"))
  {
    Aws::Utils::Array<JsonView> iamRolesJsonList = jsonValue.GetArray("IamRoles");
    for(unsigned iamRolesIndex = 0; iamRolesIndex < iamRolesJsonList.GetLength(); ++iamRolesIndex)
    {
      m_iamRoles.push_back(iamRolesJsonList[iamRolesIndex].AsObject());
    }
    m_iamRolesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaintenanceTrackName"))
  {
    m_maintenanceTrackName = jsonValue.GetString("MaintenanceTrackName");

    m_maintenanceTrackNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ManualSnapshotRetentionPeriod"))
  {
    m_manualSnapshotRetentionPeriod = jsonValue.GetInteger("ManualSnapshotRetentionPeriod");

    m_manualSnapshotRetentionPeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MasterUsername"))
  {
    m_masterUsername = jsonValue.GetString("MasterUsername");

    m_masterUsernameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NextMaintenanceWindowStartTime"))
  {
    m_nextMaintenanceWindowStartTime = jsonValue.GetString("NextMaintenanceWindowStartTime");

    m_nextMaintenanceWindowStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NodeType"))
  {
    m_nodeType = jsonValue.GetString("NodeType");

    m_nodeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfNodes"))
  {
    m_numberOfNodes = jsonValue.GetInteger("NumberOfNodes");

    m_numberOfNodesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PendingActions"))
  {
    Aws::Utils::Array<JsonView> pendingActionsJsonList = jsonValue.GetArray("PendingActions");
    for(unsigned pendingActionsIndex = 0; pendingActionsIndex < pendingActionsJsonList.GetLength(); ++pendingActionsIndex)
    {
      m_pendingActions.push_back(pendingActionsJsonList[pendingActionsIndex].AsString());
    }
    m_pendingActionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PendingModifiedValues"))
  {
    m_pendingModifiedValues = jsonValue.GetObject("PendingModifiedValues");

    m_pendingModifiedValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PreferredMaintenanceWindow"))
  {
    m_preferredMaintenanceWindow = jsonValue.GetString("PreferredMaintenanceWindow");

    m_preferredMaintenanceWindowHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PubliclyAccessible"))
  {
    m_publiclyAccessible = jsonValue.GetBool("PubliclyAccessible");

    m_publiclyAccessibleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResizeInfo"))
  {
    m_resizeInfo = jsonValue.GetObject("ResizeInfo");

    m_resizeInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RestoreStatus"))
  {
    m_restoreStatus = jsonValue.GetObject("RestoreStatus");

    m_restoreStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnapshotScheduleIdentifier"))
  {
    m_snapshotScheduleIdentifier = jsonValue.GetString("SnapshotScheduleIdentifier");

    m_snapshotScheduleIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnapshotScheduleState"))
  {
    m_snapshotScheduleState = jsonValue.GetString("SnapshotScheduleState");

    m_snapshotScheduleStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");

    m_vpcIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcSecurityGroups"))
  {
    Aws::Utils::Array<JsonView> vpcSecurityGroupsJsonList = jsonValue.GetArray("VpcSecurityGroups");
    for(unsigned vpcSecurityGroupsIndex = 0; vpcSecurityGroupsIndex < vpcSecurityGroupsJsonList.GetLength(); ++vpcSecurityGroupsIndex)
    {
      m_vpcSecurityGroups.push_back(vpcSecurityGroupsJsonList[vpcSecurityGroupsIndex].AsObject());
    }
    m_vpcSecurityGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LoggingStatus"))
  {
    m_loggingStatus = jsonValue.GetObject("LoggingStatus");

    m_loggingStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsRedshiftClusterDetails::Jsonize() const
{
  JsonValue payload;

  if(m_allowVersionUpgradeHasBeenSet)
  {
   payload.WithBool("AllowVersionUpgrade", m_allowVersionUpgrade);

  }

  if(m_automatedSnapshotRetentionPeriodHasBeenSet)
  {
   payload.WithInteger("AutomatedSnapshotRetentionPeriod", m_automatedSnapshotRetentionPeriod);

  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("AvailabilityZone", m_availabilityZone);

  }

  if(m_clusterAvailabilityStatusHasBeenSet)
  {
   payload.WithString("ClusterAvailabilityStatus", m_clusterAvailabilityStatus);

  }

  if(m_clusterCreateTimeHasBeenSet)
  {
   payload.WithString("ClusterCreateTime", m_clusterCreateTime);

  }

  if(m_clusterIdentifierHasBeenSet)
  {
   payload.WithString("ClusterIdentifier", m_clusterIdentifier);

  }

  if(m_clusterNodesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> clusterNodesJsonList(m_clusterNodes.size());
   for(unsigned clusterNodesIndex = 0; clusterNodesIndex < clusterNodesJsonList.GetLength(); ++clusterNodesIndex)
   {
     clusterNodesJsonList[clusterNodesIndex].AsObject(m_clusterNodes[clusterNodesIndex].Jsonize());
   }
   payload.WithArray("ClusterNodes", std::move(clusterNodesJsonList));

  }

  if(m_clusterParameterGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> clusterParameterGroupsJsonList(m_clusterParameterGroups.size());
   for(unsigned clusterParameterGroupsIndex = 0; clusterParameterGroupsIndex < clusterParameterGroupsJsonList.GetLength(); ++clusterParameterGroupsIndex)
   {
     clusterParameterGroupsJsonList[clusterParameterGroupsIndex].AsObject(m_clusterParameterGroups[clusterParameterGroupsIndex].Jsonize());
   }
   payload.WithArray("ClusterParameterGroups", std::move(clusterParameterGroupsJsonList));

  }

  if(m_clusterPublicKeyHasBeenSet)
  {
   payload.WithString("ClusterPublicKey", m_clusterPublicKey);

  }

  if(m_clusterRevisionNumberHasBeenSet)
  {
   payload.WithString("ClusterRevisionNumber", m_clusterRevisionNumber);

  }

  if(m_clusterSecurityGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> clusterSecurityGroupsJsonList(m_clusterSecurityGroups.size());
   for(unsigned clusterSecurityGroupsIndex = 0; clusterSecurityGroupsIndex < clusterSecurityGroupsJsonList.GetLength(); ++clusterSecurityGroupsIndex)
   {
     clusterSecurityGroupsJsonList[clusterSecurityGroupsIndex].AsObject(m_clusterSecurityGroups[clusterSecurityGroupsIndex].Jsonize());
   }
   payload.WithArray("ClusterSecurityGroups", std::move(clusterSecurityGroupsJsonList));

  }

  if(m_clusterSnapshotCopyStatusHasBeenSet)
  {
   payload.WithObject("ClusterSnapshotCopyStatus", m_clusterSnapshotCopyStatus.Jsonize());

  }

  if(m_clusterStatusHasBeenSet)
  {
   payload.WithString("ClusterStatus", m_clusterStatus);

  }

  if(m_clusterSubnetGroupNameHasBeenSet)
  {
   payload.WithString("ClusterSubnetGroupName", m_clusterSubnetGroupName);

  }

  if(m_clusterVersionHasBeenSet)
  {
   payload.WithString("ClusterVersion", m_clusterVersion);

  }

  if(m_dBNameHasBeenSet)
  {
   payload.WithString("DBName", m_dBName);

  }

  if(m_deferredMaintenanceWindowsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deferredMaintenanceWindowsJsonList(m_deferredMaintenanceWindows.size());
   for(unsigned deferredMaintenanceWindowsIndex = 0; deferredMaintenanceWindowsIndex < deferredMaintenanceWindowsJsonList.GetLength(); ++deferredMaintenanceWindowsIndex)
   {
     deferredMaintenanceWindowsJsonList[deferredMaintenanceWindowsIndex].AsObject(m_deferredMaintenanceWindows[deferredMaintenanceWindowsIndex].Jsonize());
   }
   payload.WithArray("DeferredMaintenanceWindows", std::move(deferredMaintenanceWindowsJsonList));

  }

  if(m_elasticIpStatusHasBeenSet)
  {
   payload.WithObject("ElasticIpStatus", m_elasticIpStatus.Jsonize());

  }

  if(m_elasticResizeNumberOfNodeOptionsHasBeenSet)
  {
   payload.WithString("ElasticResizeNumberOfNodeOptions", m_elasticResizeNumberOfNodeOptions);

  }

  if(m_encryptedHasBeenSet)
  {
   payload.WithBool("Encrypted", m_encrypted);

  }

  if(m_endpointHasBeenSet)
  {
   payload.WithObject("Endpoint", m_endpoint.Jsonize());

  }

  if(m_enhancedVpcRoutingHasBeenSet)
  {
   payload.WithBool("EnhancedVpcRouting", m_enhancedVpcRouting);

  }

  if(m_expectedNextSnapshotScheduleTimeHasBeenSet)
  {
   payload.WithString("ExpectedNextSnapshotScheduleTime", m_expectedNextSnapshotScheduleTime);

  }

  if(m_expectedNextSnapshotScheduleTimeStatusHasBeenSet)
  {
   payload.WithString("ExpectedNextSnapshotScheduleTimeStatus", m_expectedNextSnapshotScheduleTimeStatus);

  }

  if(m_hsmStatusHasBeenSet)
  {
   payload.WithObject("HsmStatus", m_hsmStatus.Jsonize());

  }

  if(m_iamRolesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> iamRolesJsonList(m_iamRoles.size());
   for(unsigned iamRolesIndex = 0; iamRolesIndex < iamRolesJsonList.GetLength(); ++iamRolesIndex)
   {
     iamRolesJsonList[iamRolesIndex].AsObject(m_iamRoles[iamRolesIndex].Jsonize());
   }
   payload.WithArray("IamRoles", std::move(iamRolesJsonList));

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_maintenanceTrackNameHasBeenSet)
  {
   payload.WithString("MaintenanceTrackName", m_maintenanceTrackName);

  }

  if(m_manualSnapshotRetentionPeriodHasBeenSet)
  {
   payload.WithInteger("ManualSnapshotRetentionPeriod", m_manualSnapshotRetentionPeriod);

  }

  if(m_masterUsernameHasBeenSet)
  {
   payload.WithString("MasterUsername", m_masterUsername);

  }

  if(m_nextMaintenanceWindowStartTimeHasBeenSet)
  {
   payload.WithString("NextMaintenanceWindowStartTime", m_nextMaintenanceWindowStartTime);

  }

  if(m_nodeTypeHasBeenSet)
  {
   payload.WithString("NodeType", m_nodeType);

  }

  if(m_numberOfNodesHasBeenSet)
  {
   payload.WithInteger("NumberOfNodes", m_numberOfNodes);

  }

  if(m_pendingActionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pendingActionsJsonList(m_pendingActions.size());
   for(unsigned pendingActionsIndex = 0; pendingActionsIndex < pendingActionsJsonList.GetLength(); ++pendingActionsIndex)
   {
     pendingActionsJsonList[pendingActionsIndex].AsString(m_pendingActions[pendingActionsIndex]);
   }
   payload.WithArray("PendingActions", std::move(pendingActionsJsonList));

  }

  if(m_pendingModifiedValuesHasBeenSet)
  {
   payload.WithObject("PendingModifiedValues", m_pendingModifiedValues.Jsonize());

  }

  if(m_preferredMaintenanceWindowHasBeenSet)
  {
   payload.WithString("PreferredMaintenanceWindow", m_preferredMaintenanceWindow);

  }

  if(m_publiclyAccessibleHasBeenSet)
  {
   payload.WithBool("PubliclyAccessible", m_publiclyAccessible);

  }

  if(m_resizeInfoHasBeenSet)
  {
   payload.WithObject("ResizeInfo", m_resizeInfo.Jsonize());

  }

  if(m_restoreStatusHasBeenSet)
  {
   payload.WithObject("RestoreStatus", m_restoreStatus.Jsonize());

  }

  if(m_snapshotScheduleIdentifierHasBeenSet)
  {
   payload.WithString("SnapshotScheduleIdentifier", m_snapshotScheduleIdentifier);

  }

  if(m_snapshotScheduleStateHasBeenSet)
  {
   payload.WithString("SnapshotScheduleState", m_snapshotScheduleState);

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  if(m_vpcSecurityGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vpcSecurityGroupsJsonList(m_vpcSecurityGroups.size());
   for(unsigned vpcSecurityGroupsIndex = 0; vpcSecurityGroupsIndex < vpcSecurityGroupsJsonList.GetLength(); ++vpcSecurityGroupsIndex)
   {
     vpcSecurityGroupsJsonList[vpcSecurityGroupsIndex].AsObject(m_vpcSecurityGroups[vpcSecurityGroupsIndex].Jsonize());
   }
   payload.WithArray("VpcSecurityGroups", std::move(vpcSecurityGroupsJsonList));

  }

  if(m_loggingStatusHasBeenSet)
  {
   payload.WithObject("LoggingStatus", m_loggingStatus.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
