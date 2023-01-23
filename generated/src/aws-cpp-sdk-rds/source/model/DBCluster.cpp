/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DBCluster.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
{
namespace Model
{

DBCluster::DBCluster() : 
    m_allocatedStorage(0),
    m_allocatedStorageHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_backupRetentionPeriod(0),
    m_backupRetentionPeriodHasBeenSet(false),
    m_characterSetNameHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_dBClusterIdentifierHasBeenSet(false),
    m_dBClusterParameterGroupHasBeenSet(false),
    m_dBSubnetGroupHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_automaticRestartTimeHasBeenSet(false),
    m_percentProgressHasBeenSet(false),
    m_earliestRestorableTimeHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_readerEndpointHasBeenSet(false),
    m_customEndpointsHasBeenSet(false),
    m_multiAZ(false),
    m_multiAZHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_latestRestorableTimeHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_masterUsernameHasBeenSet(false),
    m_dBClusterOptionGroupMembershipsHasBeenSet(false),
    m_preferredBackupWindowHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_replicationSourceIdentifierHasBeenSet(false),
    m_readReplicaIdentifiersHasBeenSet(false),
    m_dBClusterMembersHasBeenSet(false),
    m_vpcSecurityGroupsHasBeenSet(false),
    m_hostedZoneIdHasBeenSet(false),
    m_storageEncrypted(false),
    m_storageEncryptedHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_dbClusterResourceIdHasBeenSet(false),
    m_dBClusterArnHasBeenSet(false),
    m_associatedRolesHasBeenSet(false),
    m_iAMDatabaseAuthenticationEnabled(false),
    m_iAMDatabaseAuthenticationEnabledHasBeenSet(false),
    m_cloneGroupIdHasBeenSet(false),
    m_clusterCreateTimeHasBeenSet(false),
    m_earliestBacktrackTimeHasBeenSet(false),
    m_backtrackWindow(0),
    m_backtrackWindowHasBeenSet(false),
    m_backtrackConsumedChangeRecords(0),
    m_backtrackConsumedChangeRecordsHasBeenSet(false),
    m_enabledCloudwatchLogsExportsHasBeenSet(false),
    m_capacity(0),
    m_capacityHasBeenSet(false),
    m_engineModeHasBeenSet(false),
    m_scalingConfigurationInfoHasBeenSet(false),
    m_deletionProtection(false),
    m_deletionProtectionHasBeenSet(false),
    m_httpEndpointEnabled(false),
    m_httpEndpointEnabledHasBeenSet(false),
    m_activityStreamMode(ActivityStreamMode::NOT_SET),
    m_activityStreamModeHasBeenSet(false),
    m_activityStreamStatus(ActivityStreamStatus::NOT_SET),
    m_activityStreamStatusHasBeenSet(false),
    m_activityStreamKmsKeyIdHasBeenSet(false),
    m_activityStreamKinesisStreamNameHasBeenSet(false),
    m_copyTagsToSnapshot(false),
    m_copyTagsToSnapshotHasBeenSet(false),
    m_crossAccountClone(false),
    m_crossAccountCloneHasBeenSet(false),
    m_domainMembershipsHasBeenSet(false),
    m_tagListHasBeenSet(false),
    m_globalWriteForwardingStatus(WriteForwardingStatus::NOT_SET),
    m_globalWriteForwardingStatusHasBeenSet(false),
    m_globalWriteForwardingRequested(false),
    m_globalWriteForwardingRequestedHasBeenSet(false),
    m_pendingModifiedValuesHasBeenSet(false),
    m_dBClusterInstanceClassHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false),
    m_autoMinorVersionUpgrade(false),
    m_autoMinorVersionUpgradeHasBeenSet(false),
    m_monitoringInterval(0),
    m_monitoringIntervalHasBeenSet(false),
    m_monitoringRoleArnHasBeenSet(false),
    m_performanceInsightsEnabled(false),
    m_performanceInsightsEnabledHasBeenSet(false),
    m_performanceInsightsKMSKeyIdHasBeenSet(false),
    m_performanceInsightsRetentionPeriod(0),
    m_performanceInsightsRetentionPeriodHasBeenSet(false),
    m_serverlessV2ScalingConfigurationHasBeenSet(false),
    m_networkTypeHasBeenSet(false),
    m_dBSystemIdHasBeenSet(false),
    m_masterUserSecretHasBeenSet(false)
{
}

DBCluster::DBCluster(const XmlNode& xmlNode) : 
    m_allocatedStorage(0),
    m_allocatedStorageHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_backupRetentionPeriod(0),
    m_backupRetentionPeriodHasBeenSet(false),
    m_characterSetNameHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_dBClusterIdentifierHasBeenSet(false),
    m_dBClusterParameterGroupHasBeenSet(false),
    m_dBSubnetGroupHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_automaticRestartTimeHasBeenSet(false),
    m_percentProgressHasBeenSet(false),
    m_earliestRestorableTimeHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_readerEndpointHasBeenSet(false),
    m_customEndpointsHasBeenSet(false),
    m_multiAZ(false),
    m_multiAZHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_latestRestorableTimeHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_masterUsernameHasBeenSet(false),
    m_dBClusterOptionGroupMembershipsHasBeenSet(false),
    m_preferredBackupWindowHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_replicationSourceIdentifierHasBeenSet(false),
    m_readReplicaIdentifiersHasBeenSet(false),
    m_dBClusterMembersHasBeenSet(false),
    m_vpcSecurityGroupsHasBeenSet(false),
    m_hostedZoneIdHasBeenSet(false),
    m_storageEncrypted(false),
    m_storageEncryptedHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_dbClusterResourceIdHasBeenSet(false),
    m_dBClusterArnHasBeenSet(false),
    m_associatedRolesHasBeenSet(false),
    m_iAMDatabaseAuthenticationEnabled(false),
    m_iAMDatabaseAuthenticationEnabledHasBeenSet(false),
    m_cloneGroupIdHasBeenSet(false),
    m_clusterCreateTimeHasBeenSet(false),
    m_earliestBacktrackTimeHasBeenSet(false),
    m_backtrackWindow(0),
    m_backtrackWindowHasBeenSet(false),
    m_backtrackConsumedChangeRecords(0),
    m_backtrackConsumedChangeRecordsHasBeenSet(false),
    m_enabledCloudwatchLogsExportsHasBeenSet(false),
    m_capacity(0),
    m_capacityHasBeenSet(false),
    m_engineModeHasBeenSet(false),
    m_scalingConfigurationInfoHasBeenSet(false),
    m_deletionProtection(false),
    m_deletionProtectionHasBeenSet(false),
    m_httpEndpointEnabled(false),
    m_httpEndpointEnabledHasBeenSet(false),
    m_activityStreamMode(ActivityStreamMode::NOT_SET),
    m_activityStreamModeHasBeenSet(false),
    m_activityStreamStatus(ActivityStreamStatus::NOT_SET),
    m_activityStreamStatusHasBeenSet(false),
    m_activityStreamKmsKeyIdHasBeenSet(false),
    m_activityStreamKinesisStreamNameHasBeenSet(false),
    m_copyTagsToSnapshot(false),
    m_copyTagsToSnapshotHasBeenSet(false),
    m_crossAccountClone(false),
    m_crossAccountCloneHasBeenSet(false),
    m_domainMembershipsHasBeenSet(false),
    m_tagListHasBeenSet(false),
    m_globalWriteForwardingStatus(WriteForwardingStatus::NOT_SET),
    m_globalWriteForwardingStatusHasBeenSet(false),
    m_globalWriteForwardingRequested(false),
    m_globalWriteForwardingRequestedHasBeenSet(false),
    m_pendingModifiedValuesHasBeenSet(false),
    m_dBClusterInstanceClassHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false),
    m_autoMinorVersionUpgrade(false),
    m_autoMinorVersionUpgradeHasBeenSet(false),
    m_monitoringInterval(0),
    m_monitoringIntervalHasBeenSet(false),
    m_monitoringRoleArnHasBeenSet(false),
    m_performanceInsightsEnabled(false),
    m_performanceInsightsEnabledHasBeenSet(false),
    m_performanceInsightsKMSKeyIdHasBeenSet(false),
    m_performanceInsightsRetentionPeriod(0),
    m_performanceInsightsRetentionPeriodHasBeenSet(false),
    m_serverlessV2ScalingConfigurationHasBeenSet(false),
    m_networkTypeHasBeenSet(false),
    m_dBSystemIdHasBeenSet(false),
    m_masterUserSecretHasBeenSet(false)
{
  *this = xmlNode;
}

DBCluster& DBCluster::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode allocatedStorageNode = resultNode.FirstChild("AllocatedStorage");
    if(!allocatedStorageNode.IsNull())
    {
      m_allocatedStorage = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(allocatedStorageNode.GetText()).c_str()).c_str());
      m_allocatedStorageHasBeenSet = true;
    }
    XmlNode availabilityZonesNode = resultNode.FirstChild("AvailabilityZones");
    if(!availabilityZonesNode.IsNull())
    {
      XmlNode availabilityZonesMember = availabilityZonesNode.FirstChild("AvailabilityZone");
      while(!availabilityZonesMember.IsNull())
      {
        m_availabilityZones.push_back(availabilityZonesMember.GetText());
        availabilityZonesMember = availabilityZonesMember.NextNode("AvailabilityZone");
      }

      m_availabilityZonesHasBeenSet = true;
    }
    XmlNode backupRetentionPeriodNode = resultNode.FirstChild("BackupRetentionPeriod");
    if(!backupRetentionPeriodNode.IsNull())
    {
      m_backupRetentionPeriod = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(backupRetentionPeriodNode.GetText()).c_str()).c_str());
      m_backupRetentionPeriodHasBeenSet = true;
    }
    XmlNode characterSetNameNode = resultNode.FirstChild("CharacterSetName");
    if(!characterSetNameNode.IsNull())
    {
      m_characterSetName = Aws::Utils::Xml::DecodeEscapedXmlText(characterSetNameNode.GetText());
      m_characterSetNameHasBeenSet = true;
    }
    XmlNode databaseNameNode = resultNode.FirstChild("DatabaseName");
    if(!databaseNameNode.IsNull())
    {
      m_databaseName = Aws::Utils::Xml::DecodeEscapedXmlText(databaseNameNode.GetText());
      m_databaseNameHasBeenSet = true;
    }
    XmlNode dBClusterIdentifierNode = resultNode.FirstChild("DBClusterIdentifier");
    if(!dBClusterIdentifierNode.IsNull())
    {
      m_dBClusterIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(dBClusterIdentifierNode.GetText());
      m_dBClusterIdentifierHasBeenSet = true;
    }
    XmlNode dBClusterParameterGroupNode = resultNode.FirstChild("DBClusterParameterGroup");
    if(!dBClusterParameterGroupNode.IsNull())
    {
      m_dBClusterParameterGroup = Aws::Utils::Xml::DecodeEscapedXmlText(dBClusterParameterGroupNode.GetText());
      m_dBClusterParameterGroupHasBeenSet = true;
    }
    XmlNode dBSubnetGroupNode = resultNode.FirstChild("DBSubnetGroup");
    if(!dBSubnetGroupNode.IsNull())
    {
      m_dBSubnetGroup = Aws::Utils::Xml::DecodeEscapedXmlText(dBSubnetGroupNode.GetText());
      m_dBSubnetGroupHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode automaticRestartTimeNode = resultNode.FirstChild("AutomaticRestartTime");
    if(!automaticRestartTimeNode.IsNull())
    {
      m_automaticRestartTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(automaticRestartTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_automaticRestartTimeHasBeenSet = true;
    }
    XmlNode percentProgressNode = resultNode.FirstChild("PercentProgress");
    if(!percentProgressNode.IsNull())
    {
      m_percentProgress = Aws::Utils::Xml::DecodeEscapedXmlText(percentProgressNode.GetText());
      m_percentProgressHasBeenSet = true;
    }
    XmlNode earliestRestorableTimeNode = resultNode.FirstChild("EarliestRestorableTime");
    if(!earliestRestorableTimeNode.IsNull())
    {
      m_earliestRestorableTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(earliestRestorableTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_earliestRestorableTimeHasBeenSet = true;
    }
    XmlNode endpointNode = resultNode.FirstChild("Endpoint");
    if(!endpointNode.IsNull())
    {
      m_endpoint = Aws::Utils::Xml::DecodeEscapedXmlText(endpointNode.GetText());
      m_endpointHasBeenSet = true;
    }
    XmlNode readerEndpointNode = resultNode.FirstChild("ReaderEndpoint");
    if(!readerEndpointNode.IsNull())
    {
      m_readerEndpoint = Aws::Utils::Xml::DecodeEscapedXmlText(readerEndpointNode.GetText());
      m_readerEndpointHasBeenSet = true;
    }
    XmlNode customEndpointsNode = resultNode.FirstChild("CustomEndpoints");
    if(!customEndpointsNode.IsNull())
    {
      XmlNode customEndpointsMember = customEndpointsNode.FirstChild("member");
      while(!customEndpointsMember.IsNull())
      {
        m_customEndpoints.push_back(customEndpointsMember.GetText());
        customEndpointsMember = customEndpointsMember.NextNode("member");
      }

      m_customEndpointsHasBeenSet = true;
    }
    XmlNode multiAZNode = resultNode.FirstChild("MultiAZ");
    if(!multiAZNode.IsNull())
    {
      m_multiAZ = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(multiAZNode.GetText()).c_str()).c_str());
      m_multiAZHasBeenSet = true;
    }
    XmlNode engineNode = resultNode.FirstChild("Engine");
    if(!engineNode.IsNull())
    {
      m_engine = Aws::Utils::Xml::DecodeEscapedXmlText(engineNode.GetText());
      m_engineHasBeenSet = true;
    }
    XmlNode engineVersionNode = resultNode.FirstChild("EngineVersion");
    if(!engineVersionNode.IsNull())
    {
      m_engineVersion = Aws::Utils::Xml::DecodeEscapedXmlText(engineVersionNode.GetText());
      m_engineVersionHasBeenSet = true;
    }
    XmlNode latestRestorableTimeNode = resultNode.FirstChild("LatestRestorableTime");
    if(!latestRestorableTimeNode.IsNull())
    {
      m_latestRestorableTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(latestRestorableTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_latestRestorableTimeHasBeenSet = true;
    }
    XmlNode portNode = resultNode.FirstChild("Port");
    if(!portNode.IsNull())
    {
      m_port = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(portNode.GetText()).c_str()).c_str());
      m_portHasBeenSet = true;
    }
    XmlNode masterUsernameNode = resultNode.FirstChild("MasterUsername");
    if(!masterUsernameNode.IsNull())
    {
      m_masterUsername = Aws::Utils::Xml::DecodeEscapedXmlText(masterUsernameNode.GetText());
      m_masterUsernameHasBeenSet = true;
    }
    XmlNode dBClusterOptionGroupMembershipsNode = resultNode.FirstChild("DBClusterOptionGroupMemberships");
    if(!dBClusterOptionGroupMembershipsNode.IsNull())
    {
      XmlNode dBClusterOptionGroupMembershipsMember = dBClusterOptionGroupMembershipsNode.FirstChild("DBClusterOptionGroup");
      while(!dBClusterOptionGroupMembershipsMember.IsNull())
      {
        m_dBClusterOptionGroupMemberships.push_back(dBClusterOptionGroupMembershipsMember);
        dBClusterOptionGroupMembershipsMember = dBClusterOptionGroupMembershipsMember.NextNode("DBClusterOptionGroup");
      }

      m_dBClusterOptionGroupMembershipsHasBeenSet = true;
    }
    XmlNode preferredBackupWindowNode = resultNode.FirstChild("PreferredBackupWindow");
    if(!preferredBackupWindowNode.IsNull())
    {
      m_preferredBackupWindow = Aws::Utils::Xml::DecodeEscapedXmlText(preferredBackupWindowNode.GetText());
      m_preferredBackupWindowHasBeenSet = true;
    }
    XmlNode preferredMaintenanceWindowNode = resultNode.FirstChild("PreferredMaintenanceWindow");
    if(!preferredMaintenanceWindowNode.IsNull())
    {
      m_preferredMaintenanceWindow = Aws::Utils::Xml::DecodeEscapedXmlText(preferredMaintenanceWindowNode.GetText());
      m_preferredMaintenanceWindowHasBeenSet = true;
    }
    XmlNode replicationSourceIdentifierNode = resultNode.FirstChild("ReplicationSourceIdentifier");
    if(!replicationSourceIdentifierNode.IsNull())
    {
      m_replicationSourceIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(replicationSourceIdentifierNode.GetText());
      m_replicationSourceIdentifierHasBeenSet = true;
    }
    XmlNode readReplicaIdentifiersNode = resultNode.FirstChild("ReadReplicaIdentifiers");
    if(!readReplicaIdentifiersNode.IsNull())
    {
      XmlNode readReplicaIdentifiersMember = readReplicaIdentifiersNode.FirstChild("ReadReplicaIdentifier");
      while(!readReplicaIdentifiersMember.IsNull())
      {
        m_readReplicaIdentifiers.push_back(readReplicaIdentifiersMember.GetText());
        readReplicaIdentifiersMember = readReplicaIdentifiersMember.NextNode("ReadReplicaIdentifier");
      }

      m_readReplicaIdentifiersHasBeenSet = true;
    }
    XmlNode dBClusterMembersNode = resultNode.FirstChild("DBClusterMembers");
    if(!dBClusterMembersNode.IsNull())
    {
      XmlNode dBClusterMembersMember = dBClusterMembersNode.FirstChild("DBClusterMember");
      while(!dBClusterMembersMember.IsNull())
      {
        m_dBClusterMembers.push_back(dBClusterMembersMember);
        dBClusterMembersMember = dBClusterMembersMember.NextNode("DBClusterMember");
      }

      m_dBClusterMembersHasBeenSet = true;
    }
    XmlNode vpcSecurityGroupsNode = resultNode.FirstChild("VpcSecurityGroups");
    if(!vpcSecurityGroupsNode.IsNull())
    {
      XmlNode vpcSecurityGroupsMember = vpcSecurityGroupsNode.FirstChild("VpcSecurityGroupMembership");
      while(!vpcSecurityGroupsMember.IsNull())
      {
        m_vpcSecurityGroups.push_back(vpcSecurityGroupsMember);
        vpcSecurityGroupsMember = vpcSecurityGroupsMember.NextNode("VpcSecurityGroupMembership");
      }

      m_vpcSecurityGroupsHasBeenSet = true;
    }
    XmlNode hostedZoneIdNode = resultNode.FirstChild("HostedZoneId");
    if(!hostedZoneIdNode.IsNull())
    {
      m_hostedZoneId = Aws::Utils::Xml::DecodeEscapedXmlText(hostedZoneIdNode.GetText());
      m_hostedZoneIdHasBeenSet = true;
    }
    XmlNode storageEncryptedNode = resultNode.FirstChild("StorageEncrypted");
    if(!storageEncryptedNode.IsNull())
    {
      m_storageEncrypted = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(storageEncryptedNode.GetText()).c_str()).c_str());
      m_storageEncryptedHasBeenSet = true;
    }
    XmlNode kmsKeyIdNode = resultNode.FirstChild("KmsKeyId");
    if(!kmsKeyIdNode.IsNull())
    {
      m_kmsKeyId = Aws::Utils::Xml::DecodeEscapedXmlText(kmsKeyIdNode.GetText());
      m_kmsKeyIdHasBeenSet = true;
    }
    XmlNode dbClusterResourceIdNode = resultNode.FirstChild("DbClusterResourceId");
    if(!dbClusterResourceIdNode.IsNull())
    {
      m_dbClusterResourceId = Aws::Utils::Xml::DecodeEscapedXmlText(dbClusterResourceIdNode.GetText());
      m_dbClusterResourceIdHasBeenSet = true;
    }
    XmlNode dBClusterArnNode = resultNode.FirstChild("DBClusterArn");
    if(!dBClusterArnNode.IsNull())
    {
      m_dBClusterArn = Aws::Utils::Xml::DecodeEscapedXmlText(dBClusterArnNode.GetText());
      m_dBClusterArnHasBeenSet = true;
    }
    XmlNode associatedRolesNode = resultNode.FirstChild("AssociatedRoles");
    if(!associatedRolesNode.IsNull())
    {
      XmlNode associatedRolesMember = associatedRolesNode.FirstChild("DBClusterRole");
      while(!associatedRolesMember.IsNull())
      {
        m_associatedRoles.push_back(associatedRolesMember);
        associatedRolesMember = associatedRolesMember.NextNode("DBClusterRole");
      }

      m_associatedRolesHasBeenSet = true;
    }
    XmlNode iAMDatabaseAuthenticationEnabledNode = resultNode.FirstChild("IAMDatabaseAuthenticationEnabled");
    if(!iAMDatabaseAuthenticationEnabledNode.IsNull())
    {
      m_iAMDatabaseAuthenticationEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(iAMDatabaseAuthenticationEnabledNode.GetText()).c_str()).c_str());
      m_iAMDatabaseAuthenticationEnabledHasBeenSet = true;
    }
    XmlNode cloneGroupIdNode = resultNode.FirstChild("CloneGroupId");
    if(!cloneGroupIdNode.IsNull())
    {
      m_cloneGroupId = Aws::Utils::Xml::DecodeEscapedXmlText(cloneGroupIdNode.GetText());
      m_cloneGroupIdHasBeenSet = true;
    }
    XmlNode clusterCreateTimeNode = resultNode.FirstChild("ClusterCreateTime");
    if(!clusterCreateTimeNode.IsNull())
    {
      m_clusterCreateTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(clusterCreateTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_clusterCreateTimeHasBeenSet = true;
    }
    XmlNode earliestBacktrackTimeNode = resultNode.FirstChild("EarliestBacktrackTime");
    if(!earliestBacktrackTimeNode.IsNull())
    {
      m_earliestBacktrackTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(earliestBacktrackTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_earliestBacktrackTimeHasBeenSet = true;
    }
    XmlNode backtrackWindowNode = resultNode.FirstChild("BacktrackWindow");
    if(!backtrackWindowNode.IsNull())
    {
      m_backtrackWindow = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(backtrackWindowNode.GetText()).c_str()).c_str());
      m_backtrackWindowHasBeenSet = true;
    }
    XmlNode backtrackConsumedChangeRecordsNode = resultNode.FirstChild("BacktrackConsumedChangeRecords");
    if(!backtrackConsumedChangeRecordsNode.IsNull())
    {
      m_backtrackConsumedChangeRecords = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(backtrackConsumedChangeRecordsNode.GetText()).c_str()).c_str());
      m_backtrackConsumedChangeRecordsHasBeenSet = true;
    }
    XmlNode enabledCloudwatchLogsExportsNode = resultNode.FirstChild("EnabledCloudwatchLogsExports");
    if(!enabledCloudwatchLogsExportsNode.IsNull())
    {
      XmlNode enabledCloudwatchLogsExportsMember = enabledCloudwatchLogsExportsNode.FirstChild("member");
      while(!enabledCloudwatchLogsExportsMember.IsNull())
      {
        m_enabledCloudwatchLogsExports.push_back(enabledCloudwatchLogsExportsMember.GetText());
        enabledCloudwatchLogsExportsMember = enabledCloudwatchLogsExportsMember.NextNode("member");
      }

      m_enabledCloudwatchLogsExportsHasBeenSet = true;
    }
    XmlNode capacityNode = resultNode.FirstChild("Capacity");
    if(!capacityNode.IsNull())
    {
      m_capacity = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(capacityNode.GetText()).c_str()).c_str());
      m_capacityHasBeenSet = true;
    }
    XmlNode engineModeNode = resultNode.FirstChild("EngineMode");
    if(!engineModeNode.IsNull())
    {
      m_engineMode = Aws::Utils::Xml::DecodeEscapedXmlText(engineModeNode.GetText());
      m_engineModeHasBeenSet = true;
    }
    XmlNode scalingConfigurationInfoNode = resultNode.FirstChild("ScalingConfigurationInfo");
    if(!scalingConfigurationInfoNode.IsNull())
    {
      m_scalingConfigurationInfo = scalingConfigurationInfoNode;
      m_scalingConfigurationInfoHasBeenSet = true;
    }
    XmlNode deletionProtectionNode = resultNode.FirstChild("DeletionProtection");
    if(!deletionProtectionNode.IsNull())
    {
      m_deletionProtection = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(deletionProtectionNode.GetText()).c_str()).c_str());
      m_deletionProtectionHasBeenSet = true;
    }
    XmlNode httpEndpointEnabledNode = resultNode.FirstChild("HttpEndpointEnabled");
    if(!httpEndpointEnabledNode.IsNull())
    {
      m_httpEndpointEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(httpEndpointEnabledNode.GetText()).c_str()).c_str());
      m_httpEndpointEnabledHasBeenSet = true;
    }
    XmlNode activityStreamModeNode = resultNode.FirstChild("ActivityStreamMode");
    if(!activityStreamModeNode.IsNull())
    {
      m_activityStreamMode = ActivityStreamModeMapper::GetActivityStreamModeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(activityStreamModeNode.GetText()).c_str()).c_str());
      m_activityStreamModeHasBeenSet = true;
    }
    XmlNode activityStreamStatusNode = resultNode.FirstChild("ActivityStreamStatus");
    if(!activityStreamStatusNode.IsNull())
    {
      m_activityStreamStatus = ActivityStreamStatusMapper::GetActivityStreamStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(activityStreamStatusNode.GetText()).c_str()).c_str());
      m_activityStreamStatusHasBeenSet = true;
    }
    XmlNode activityStreamKmsKeyIdNode = resultNode.FirstChild("ActivityStreamKmsKeyId");
    if(!activityStreamKmsKeyIdNode.IsNull())
    {
      m_activityStreamKmsKeyId = Aws::Utils::Xml::DecodeEscapedXmlText(activityStreamKmsKeyIdNode.GetText());
      m_activityStreamKmsKeyIdHasBeenSet = true;
    }
    XmlNode activityStreamKinesisStreamNameNode = resultNode.FirstChild("ActivityStreamKinesisStreamName");
    if(!activityStreamKinesisStreamNameNode.IsNull())
    {
      m_activityStreamKinesisStreamName = Aws::Utils::Xml::DecodeEscapedXmlText(activityStreamKinesisStreamNameNode.GetText());
      m_activityStreamKinesisStreamNameHasBeenSet = true;
    }
    XmlNode copyTagsToSnapshotNode = resultNode.FirstChild("CopyTagsToSnapshot");
    if(!copyTagsToSnapshotNode.IsNull())
    {
      m_copyTagsToSnapshot = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(copyTagsToSnapshotNode.GetText()).c_str()).c_str());
      m_copyTagsToSnapshotHasBeenSet = true;
    }
    XmlNode crossAccountCloneNode = resultNode.FirstChild("CrossAccountClone");
    if(!crossAccountCloneNode.IsNull())
    {
      m_crossAccountClone = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(crossAccountCloneNode.GetText()).c_str()).c_str());
      m_crossAccountCloneHasBeenSet = true;
    }
    XmlNode domainMembershipsNode = resultNode.FirstChild("DomainMemberships");
    if(!domainMembershipsNode.IsNull())
    {
      XmlNode domainMembershipsMember = domainMembershipsNode.FirstChild("DomainMembership");
      while(!domainMembershipsMember.IsNull())
      {
        m_domainMemberships.push_back(domainMembershipsMember);
        domainMembershipsMember = domainMembershipsMember.NextNode("DomainMembership");
      }

      m_domainMembershipsHasBeenSet = true;
    }
    XmlNode tagListNode = resultNode.FirstChild("TagList");
    if(!tagListNode.IsNull())
    {
      XmlNode tagListMember = tagListNode.FirstChild("Tag");
      while(!tagListMember.IsNull())
      {
        m_tagList.push_back(tagListMember);
        tagListMember = tagListMember.NextNode("Tag");
      }

      m_tagListHasBeenSet = true;
    }
    XmlNode globalWriteForwardingStatusNode = resultNode.FirstChild("GlobalWriteForwardingStatus");
    if(!globalWriteForwardingStatusNode.IsNull())
    {
      m_globalWriteForwardingStatus = WriteForwardingStatusMapper::GetWriteForwardingStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(globalWriteForwardingStatusNode.GetText()).c_str()).c_str());
      m_globalWriteForwardingStatusHasBeenSet = true;
    }
    XmlNode globalWriteForwardingRequestedNode = resultNode.FirstChild("GlobalWriteForwardingRequested");
    if(!globalWriteForwardingRequestedNode.IsNull())
    {
      m_globalWriteForwardingRequested = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(globalWriteForwardingRequestedNode.GetText()).c_str()).c_str());
      m_globalWriteForwardingRequestedHasBeenSet = true;
    }
    XmlNode pendingModifiedValuesNode = resultNode.FirstChild("PendingModifiedValues");
    if(!pendingModifiedValuesNode.IsNull())
    {
      m_pendingModifiedValues = pendingModifiedValuesNode;
      m_pendingModifiedValuesHasBeenSet = true;
    }
    XmlNode dBClusterInstanceClassNode = resultNode.FirstChild("DBClusterInstanceClass");
    if(!dBClusterInstanceClassNode.IsNull())
    {
      m_dBClusterInstanceClass = Aws::Utils::Xml::DecodeEscapedXmlText(dBClusterInstanceClassNode.GetText());
      m_dBClusterInstanceClassHasBeenSet = true;
    }
    XmlNode storageTypeNode = resultNode.FirstChild("StorageType");
    if(!storageTypeNode.IsNull())
    {
      m_storageType = Aws::Utils::Xml::DecodeEscapedXmlText(storageTypeNode.GetText());
      m_storageTypeHasBeenSet = true;
    }
    XmlNode iopsNode = resultNode.FirstChild("Iops");
    if(!iopsNode.IsNull())
    {
      m_iops = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(iopsNode.GetText()).c_str()).c_str());
      m_iopsHasBeenSet = true;
    }
    XmlNode publiclyAccessibleNode = resultNode.FirstChild("PubliclyAccessible");
    if(!publiclyAccessibleNode.IsNull())
    {
      m_publiclyAccessible = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(publiclyAccessibleNode.GetText()).c_str()).c_str());
      m_publiclyAccessibleHasBeenSet = true;
    }
    XmlNode autoMinorVersionUpgradeNode = resultNode.FirstChild("AutoMinorVersionUpgrade");
    if(!autoMinorVersionUpgradeNode.IsNull())
    {
      m_autoMinorVersionUpgrade = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(autoMinorVersionUpgradeNode.GetText()).c_str()).c_str());
      m_autoMinorVersionUpgradeHasBeenSet = true;
    }
    XmlNode monitoringIntervalNode = resultNode.FirstChild("MonitoringInterval");
    if(!monitoringIntervalNode.IsNull())
    {
      m_monitoringInterval = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(monitoringIntervalNode.GetText()).c_str()).c_str());
      m_monitoringIntervalHasBeenSet = true;
    }
    XmlNode monitoringRoleArnNode = resultNode.FirstChild("MonitoringRoleArn");
    if(!monitoringRoleArnNode.IsNull())
    {
      m_monitoringRoleArn = Aws::Utils::Xml::DecodeEscapedXmlText(monitoringRoleArnNode.GetText());
      m_monitoringRoleArnHasBeenSet = true;
    }
    XmlNode performanceInsightsEnabledNode = resultNode.FirstChild("PerformanceInsightsEnabled");
    if(!performanceInsightsEnabledNode.IsNull())
    {
      m_performanceInsightsEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(performanceInsightsEnabledNode.GetText()).c_str()).c_str());
      m_performanceInsightsEnabledHasBeenSet = true;
    }
    XmlNode performanceInsightsKMSKeyIdNode = resultNode.FirstChild("PerformanceInsightsKMSKeyId");
    if(!performanceInsightsKMSKeyIdNode.IsNull())
    {
      m_performanceInsightsKMSKeyId = Aws::Utils::Xml::DecodeEscapedXmlText(performanceInsightsKMSKeyIdNode.GetText());
      m_performanceInsightsKMSKeyIdHasBeenSet = true;
    }
    XmlNode performanceInsightsRetentionPeriodNode = resultNode.FirstChild("PerformanceInsightsRetentionPeriod");
    if(!performanceInsightsRetentionPeriodNode.IsNull())
    {
      m_performanceInsightsRetentionPeriod = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(performanceInsightsRetentionPeriodNode.GetText()).c_str()).c_str());
      m_performanceInsightsRetentionPeriodHasBeenSet = true;
    }
    XmlNode serverlessV2ScalingConfigurationNode = resultNode.FirstChild("ServerlessV2ScalingConfiguration");
    if(!serverlessV2ScalingConfigurationNode.IsNull())
    {
      m_serverlessV2ScalingConfiguration = serverlessV2ScalingConfigurationNode;
      m_serverlessV2ScalingConfigurationHasBeenSet = true;
    }
    XmlNode networkTypeNode = resultNode.FirstChild("NetworkType");
    if(!networkTypeNode.IsNull())
    {
      m_networkType = Aws::Utils::Xml::DecodeEscapedXmlText(networkTypeNode.GetText());
      m_networkTypeHasBeenSet = true;
    }
    XmlNode dBSystemIdNode = resultNode.FirstChild("DBSystemId");
    if(!dBSystemIdNode.IsNull())
    {
      m_dBSystemId = Aws::Utils::Xml::DecodeEscapedXmlText(dBSystemIdNode.GetText());
      m_dBSystemIdHasBeenSet = true;
    }
    XmlNode masterUserSecretNode = resultNode.FirstChild("MasterUserSecret");
    if(!masterUserSecretNode.IsNull())
    {
      m_masterUserSecret = masterUserSecretNode;
      m_masterUserSecretHasBeenSet = true;
    }
  }

  return *this;
}

void DBCluster::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_allocatedStorageHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllocatedStorage=" << m_allocatedStorage << "&";
  }

  if(m_availabilityZonesHasBeenSet)
  {
      unsigned availabilityZonesIdx = 1;
      for(auto& item : m_availabilityZones)
      {
        oStream << location << index << locationValue << ".AvailabilityZone." << availabilityZonesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_backupRetentionPeriodHasBeenSet)
  {
      oStream << location << index << locationValue << ".BackupRetentionPeriod=" << m_backupRetentionPeriod << "&";
  }

  if(m_characterSetNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".CharacterSetName=" << StringUtils::URLEncode(m_characterSetName.c_str()) << "&";
  }

  if(m_databaseNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".DatabaseName=" << StringUtils::URLEncode(m_databaseName.c_str()) << "&";
  }

  if(m_dBClusterIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
  }

  if(m_dBClusterParameterGroupHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBClusterParameterGroup=" << StringUtils::URLEncode(m_dBClusterParameterGroup.c_str()) << "&";
  }

  if(m_dBSubnetGroupHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBSubnetGroup=" << StringUtils::URLEncode(m_dBSubnetGroup.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_automaticRestartTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutomaticRestartTime=" << StringUtils::URLEncode(m_automaticRestartTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_percentProgressHasBeenSet)
  {
      oStream << location << index << locationValue << ".PercentProgress=" << StringUtils::URLEncode(m_percentProgress.c_str()) << "&";
  }

  if(m_earliestRestorableTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".EarliestRestorableTime=" << StringUtils::URLEncode(m_earliestRestorableTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_endpointHasBeenSet)
  {
      oStream << location << index << locationValue << ".Endpoint=" << StringUtils::URLEncode(m_endpoint.c_str()) << "&";
  }

  if(m_readerEndpointHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReaderEndpoint=" << StringUtils::URLEncode(m_readerEndpoint.c_str()) << "&";
  }

  if(m_customEndpointsHasBeenSet)
  {
      unsigned customEndpointsIdx = 1;
      for(auto& item : m_customEndpoints)
      {
        oStream << location << index << locationValue << ".CustomEndpoints.member." << customEndpointsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_multiAZHasBeenSet)
  {
      oStream << location << index << locationValue << ".MultiAZ=" << std::boolalpha << m_multiAZ << "&";
  }

  if(m_engineHasBeenSet)
  {
      oStream << location << index << locationValue << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if(m_engineVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }

  if(m_latestRestorableTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".LatestRestorableTime=" << StringUtils::URLEncode(m_latestRestorableTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_portHasBeenSet)
  {
      oStream << location << index << locationValue << ".Port=" << m_port << "&";
  }

  if(m_masterUsernameHasBeenSet)
  {
      oStream << location << index << locationValue << ".MasterUsername=" << StringUtils::URLEncode(m_masterUsername.c_str()) << "&";
  }

  if(m_dBClusterOptionGroupMembershipsHasBeenSet)
  {
      unsigned dBClusterOptionGroupMembershipsIdx = 1;
      for(auto& item : m_dBClusterOptionGroupMemberships)
      {
        Aws::StringStream dBClusterOptionGroupMembershipsSs;
        dBClusterOptionGroupMembershipsSs << location << index << locationValue << ".DBClusterOptionGroup." << dBClusterOptionGroupMembershipsIdx++;
        item.OutputToStream(oStream, dBClusterOptionGroupMembershipsSs.str().c_str());
      }
  }

  if(m_preferredBackupWindowHasBeenSet)
  {
      oStream << location << index << locationValue << ".PreferredBackupWindow=" << StringUtils::URLEncode(m_preferredBackupWindow.c_str()) << "&";
  }

  if(m_preferredMaintenanceWindowHasBeenSet)
  {
      oStream << location << index << locationValue << ".PreferredMaintenanceWindow=" << StringUtils::URLEncode(m_preferredMaintenanceWindow.c_str()) << "&";
  }

  if(m_replicationSourceIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReplicationSourceIdentifier=" << StringUtils::URLEncode(m_replicationSourceIdentifier.c_str()) << "&";
  }

  if(m_readReplicaIdentifiersHasBeenSet)
  {
      unsigned readReplicaIdentifiersIdx = 1;
      for(auto& item : m_readReplicaIdentifiers)
      {
        oStream << location << index << locationValue << ".ReadReplicaIdentifier." << readReplicaIdentifiersIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_dBClusterMembersHasBeenSet)
  {
      unsigned dBClusterMembersIdx = 1;
      for(auto& item : m_dBClusterMembers)
      {
        Aws::StringStream dBClusterMembersSs;
        dBClusterMembersSs << location << index << locationValue << ".DBClusterMember." << dBClusterMembersIdx++;
        item.OutputToStream(oStream, dBClusterMembersSs.str().c_str());
      }
  }

  if(m_vpcSecurityGroupsHasBeenSet)
  {
      unsigned vpcSecurityGroupsIdx = 1;
      for(auto& item : m_vpcSecurityGroups)
      {
        Aws::StringStream vpcSecurityGroupsSs;
        vpcSecurityGroupsSs << location << index << locationValue << ".VpcSecurityGroupMembership." << vpcSecurityGroupsIdx++;
        item.OutputToStream(oStream, vpcSecurityGroupsSs.str().c_str());
      }
  }

  if(m_hostedZoneIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".HostedZoneId=" << StringUtils::URLEncode(m_hostedZoneId.c_str()) << "&";
  }

  if(m_storageEncryptedHasBeenSet)
  {
      oStream << location << index << locationValue << ".StorageEncrypted=" << std::boolalpha << m_storageEncrypted << "&";
  }

  if(m_kmsKeyIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }

  if(m_dbClusterResourceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".DbClusterResourceId=" << StringUtils::URLEncode(m_dbClusterResourceId.c_str()) << "&";
  }

  if(m_dBClusterArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBClusterArn=" << StringUtils::URLEncode(m_dBClusterArn.c_str()) << "&";
  }

  if(m_associatedRolesHasBeenSet)
  {
      unsigned associatedRolesIdx = 1;
      for(auto& item : m_associatedRoles)
      {
        Aws::StringStream associatedRolesSs;
        associatedRolesSs << location << index << locationValue << ".DBClusterRole." << associatedRolesIdx++;
        item.OutputToStream(oStream, associatedRolesSs.str().c_str());
      }
  }

  if(m_iAMDatabaseAuthenticationEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".IAMDatabaseAuthenticationEnabled=" << std::boolalpha << m_iAMDatabaseAuthenticationEnabled << "&";
  }

  if(m_cloneGroupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".CloneGroupId=" << StringUtils::URLEncode(m_cloneGroupId.c_str()) << "&";
  }

  if(m_clusterCreateTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClusterCreateTime=" << StringUtils::URLEncode(m_clusterCreateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_earliestBacktrackTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".EarliestBacktrackTime=" << StringUtils::URLEncode(m_earliestBacktrackTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_backtrackWindowHasBeenSet)
  {
      oStream << location << index << locationValue << ".BacktrackWindow=" << m_backtrackWindow << "&";
  }

  if(m_backtrackConsumedChangeRecordsHasBeenSet)
  {
      oStream << location << index << locationValue << ".BacktrackConsumedChangeRecords=" << m_backtrackConsumedChangeRecords << "&";
  }

  if(m_enabledCloudwatchLogsExportsHasBeenSet)
  {
      unsigned enabledCloudwatchLogsExportsIdx = 1;
      for(auto& item : m_enabledCloudwatchLogsExports)
      {
        oStream << location << index << locationValue << ".EnabledCloudwatchLogsExports.member." << enabledCloudwatchLogsExportsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_capacityHasBeenSet)
  {
      oStream << location << index << locationValue << ".Capacity=" << m_capacity << "&";
  }

  if(m_engineModeHasBeenSet)
  {
      oStream << location << index << locationValue << ".EngineMode=" << StringUtils::URLEncode(m_engineMode.c_str()) << "&";
  }

  if(m_scalingConfigurationInfoHasBeenSet)
  {
      Aws::StringStream scalingConfigurationInfoLocationAndMemberSs;
      scalingConfigurationInfoLocationAndMemberSs << location << index << locationValue << ".ScalingConfigurationInfo";
      m_scalingConfigurationInfo.OutputToStream(oStream, scalingConfigurationInfoLocationAndMemberSs.str().c_str());
  }

  if(m_deletionProtectionHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeletionProtection=" << std::boolalpha << m_deletionProtection << "&";
  }

  if(m_httpEndpointEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".HttpEndpointEnabled=" << std::boolalpha << m_httpEndpointEnabled << "&";
  }

  if(m_activityStreamModeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ActivityStreamMode=" << ActivityStreamModeMapper::GetNameForActivityStreamMode(m_activityStreamMode) << "&";
  }

  if(m_activityStreamStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".ActivityStreamStatus=" << ActivityStreamStatusMapper::GetNameForActivityStreamStatus(m_activityStreamStatus) << "&";
  }

  if(m_activityStreamKmsKeyIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ActivityStreamKmsKeyId=" << StringUtils::URLEncode(m_activityStreamKmsKeyId.c_str()) << "&";
  }

  if(m_activityStreamKinesisStreamNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ActivityStreamKinesisStreamName=" << StringUtils::URLEncode(m_activityStreamKinesisStreamName.c_str()) << "&";
  }

  if(m_copyTagsToSnapshotHasBeenSet)
  {
      oStream << location << index << locationValue << ".CopyTagsToSnapshot=" << std::boolalpha << m_copyTagsToSnapshot << "&";
  }

  if(m_crossAccountCloneHasBeenSet)
  {
      oStream << location << index << locationValue << ".CrossAccountClone=" << std::boolalpha << m_crossAccountClone << "&";
  }

  if(m_domainMembershipsHasBeenSet)
  {
      unsigned domainMembershipsIdx = 1;
      for(auto& item : m_domainMemberships)
      {
        Aws::StringStream domainMembershipsSs;
        domainMembershipsSs << location << index << locationValue << ".DomainMembership." << domainMembershipsIdx++;
        item.OutputToStream(oStream, domainMembershipsSs.str().c_str());
      }
  }

  if(m_tagListHasBeenSet)
  {
      unsigned tagListIdx = 1;
      for(auto& item : m_tagList)
      {
        Aws::StringStream tagListSs;
        tagListSs << location << index << locationValue << ".Tag." << tagListIdx++;
        item.OutputToStream(oStream, tagListSs.str().c_str());
      }
  }

  if(m_globalWriteForwardingStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".GlobalWriteForwardingStatus=" << WriteForwardingStatusMapper::GetNameForWriteForwardingStatus(m_globalWriteForwardingStatus) << "&";
  }

  if(m_globalWriteForwardingRequestedHasBeenSet)
  {
      oStream << location << index << locationValue << ".GlobalWriteForwardingRequested=" << std::boolalpha << m_globalWriteForwardingRequested << "&";
  }

  if(m_pendingModifiedValuesHasBeenSet)
  {
      Aws::StringStream pendingModifiedValuesLocationAndMemberSs;
      pendingModifiedValuesLocationAndMemberSs << location << index << locationValue << ".PendingModifiedValues";
      m_pendingModifiedValues.OutputToStream(oStream, pendingModifiedValuesLocationAndMemberSs.str().c_str());
  }

  if(m_dBClusterInstanceClassHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBClusterInstanceClass=" << StringUtils::URLEncode(m_dBClusterInstanceClass.c_str()) << "&";
  }

  if(m_storageTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".StorageType=" << StringUtils::URLEncode(m_storageType.c_str()) << "&";
  }

  if(m_iopsHasBeenSet)
  {
      oStream << location << index << locationValue << ".Iops=" << m_iops << "&";
  }

  if(m_publiclyAccessibleHasBeenSet)
  {
      oStream << location << index << locationValue << ".PubliclyAccessible=" << std::boolalpha << m_publiclyAccessible << "&";
  }

  if(m_autoMinorVersionUpgradeHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutoMinorVersionUpgrade=" << std::boolalpha << m_autoMinorVersionUpgrade << "&";
  }

  if(m_monitoringIntervalHasBeenSet)
  {
      oStream << location << index << locationValue << ".MonitoringInterval=" << m_monitoringInterval << "&";
  }

  if(m_monitoringRoleArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".MonitoringRoleArn=" << StringUtils::URLEncode(m_monitoringRoleArn.c_str()) << "&";
  }

  if(m_performanceInsightsEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".PerformanceInsightsEnabled=" << std::boolalpha << m_performanceInsightsEnabled << "&";
  }

  if(m_performanceInsightsKMSKeyIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".PerformanceInsightsKMSKeyId=" << StringUtils::URLEncode(m_performanceInsightsKMSKeyId.c_str()) << "&";
  }

  if(m_performanceInsightsRetentionPeriodHasBeenSet)
  {
      oStream << location << index << locationValue << ".PerformanceInsightsRetentionPeriod=" << m_performanceInsightsRetentionPeriod << "&";
  }

  if(m_serverlessV2ScalingConfigurationHasBeenSet)
  {
      Aws::StringStream serverlessV2ScalingConfigurationLocationAndMemberSs;
      serverlessV2ScalingConfigurationLocationAndMemberSs << location << index << locationValue << ".ServerlessV2ScalingConfiguration";
      m_serverlessV2ScalingConfiguration.OutputToStream(oStream, serverlessV2ScalingConfigurationLocationAndMemberSs.str().c_str());
  }

  if(m_networkTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkType=" << StringUtils::URLEncode(m_networkType.c_str()) << "&";
  }

  if(m_dBSystemIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBSystemId=" << StringUtils::URLEncode(m_dBSystemId.c_str()) << "&";
  }

  if(m_masterUserSecretHasBeenSet)
  {
      Aws::StringStream masterUserSecretLocationAndMemberSs;
      masterUserSecretLocationAndMemberSs << location << index << locationValue << ".MasterUserSecret";
      m_masterUserSecret.OutputToStream(oStream, masterUserSecretLocationAndMemberSs.str().c_str());
  }

}

void DBCluster::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_allocatedStorageHasBeenSet)
  {
      oStream << location << ".AllocatedStorage=" << m_allocatedStorage << "&";
  }
  if(m_availabilityZonesHasBeenSet)
  {
      unsigned availabilityZonesIdx = 1;
      for(auto& item : m_availabilityZones)
      {
        oStream << location << ".AvailabilityZone." << availabilityZonesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_backupRetentionPeriodHasBeenSet)
  {
      oStream << location << ".BackupRetentionPeriod=" << m_backupRetentionPeriod << "&";
  }
  if(m_characterSetNameHasBeenSet)
  {
      oStream << location << ".CharacterSetName=" << StringUtils::URLEncode(m_characterSetName.c_str()) << "&";
  }
  if(m_databaseNameHasBeenSet)
  {
      oStream << location << ".DatabaseName=" << StringUtils::URLEncode(m_databaseName.c_str()) << "&";
  }
  if(m_dBClusterIdentifierHasBeenSet)
  {
      oStream << location << ".DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
  }
  if(m_dBClusterParameterGroupHasBeenSet)
  {
      oStream << location << ".DBClusterParameterGroup=" << StringUtils::URLEncode(m_dBClusterParameterGroup.c_str()) << "&";
  }
  if(m_dBSubnetGroupHasBeenSet)
  {
      oStream << location << ".DBSubnetGroup=" << StringUtils::URLEncode(m_dBSubnetGroup.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_automaticRestartTimeHasBeenSet)
  {
      oStream << location << ".AutomaticRestartTime=" << StringUtils::URLEncode(m_automaticRestartTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_percentProgressHasBeenSet)
  {
      oStream << location << ".PercentProgress=" << StringUtils::URLEncode(m_percentProgress.c_str()) << "&";
  }
  if(m_earliestRestorableTimeHasBeenSet)
  {
      oStream << location << ".EarliestRestorableTime=" << StringUtils::URLEncode(m_earliestRestorableTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_endpointHasBeenSet)
  {
      oStream << location << ".Endpoint=" << StringUtils::URLEncode(m_endpoint.c_str()) << "&";
  }
  if(m_readerEndpointHasBeenSet)
  {
      oStream << location << ".ReaderEndpoint=" << StringUtils::URLEncode(m_readerEndpoint.c_str()) << "&";
  }
  if(m_customEndpointsHasBeenSet)
  {
      unsigned customEndpointsIdx = 1;
      for(auto& item : m_customEndpoints)
      {
        oStream << location << ".CustomEndpoints.member." << customEndpointsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_multiAZHasBeenSet)
  {
      oStream << location << ".MultiAZ=" << std::boolalpha << m_multiAZ << "&";
  }
  if(m_engineHasBeenSet)
  {
      oStream << location << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }
  if(m_engineVersionHasBeenSet)
  {
      oStream << location << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }
  if(m_latestRestorableTimeHasBeenSet)
  {
      oStream << location << ".LatestRestorableTime=" << StringUtils::URLEncode(m_latestRestorableTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_portHasBeenSet)
  {
      oStream << location << ".Port=" << m_port << "&";
  }
  if(m_masterUsernameHasBeenSet)
  {
      oStream << location << ".MasterUsername=" << StringUtils::URLEncode(m_masterUsername.c_str()) << "&";
  }
  if(m_dBClusterOptionGroupMembershipsHasBeenSet)
  {
      unsigned dBClusterOptionGroupMembershipsIdx = 1;
      for(auto& item : m_dBClusterOptionGroupMemberships)
      {
        Aws::StringStream dBClusterOptionGroupMembershipsSs;
        dBClusterOptionGroupMembershipsSs << location <<  ".DBClusterOptionGroup." << dBClusterOptionGroupMembershipsIdx++;
        item.OutputToStream(oStream, dBClusterOptionGroupMembershipsSs.str().c_str());
      }
  }
  if(m_preferredBackupWindowHasBeenSet)
  {
      oStream << location << ".PreferredBackupWindow=" << StringUtils::URLEncode(m_preferredBackupWindow.c_str()) << "&";
  }
  if(m_preferredMaintenanceWindowHasBeenSet)
  {
      oStream << location << ".PreferredMaintenanceWindow=" << StringUtils::URLEncode(m_preferredMaintenanceWindow.c_str()) << "&";
  }
  if(m_replicationSourceIdentifierHasBeenSet)
  {
      oStream << location << ".ReplicationSourceIdentifier=" << StringUtils::URLEncode(m_replicationSourceIdentifier.c_str()) << "&";
  }
  if(m_readReplicaIdentifiersHasBeenSet)
  {
      unsigned readReplicaIdentifiersIdx = 1;
      for(auto& item : m_readReplicaIdentifiers)
      {
        oStream << location << ".ReadReplicaIdentifier." << readReplicaIdentifiersIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_dBClusterMembersHasBeenSet)
  {
      unsigned dBClusterMembersIdx = 1;
      for(auto& item : m_dBClusterMembers)
      {
        Aws::StringStream dBClusterMembersSs;
        dBClusterMembersSs << location <<  ".DBClusterMember." << dBClusterMembersIdx++;
        item.OutputToStream(oStream, dBClusterMembersSs.str().c_str());
      }
  }
  if(m_vpcSecurityGroupsHasBeenSet)
  {
      unsigned vpcSecurityGroupsIdx = 1;
      for(auto& item : m_vpcSecurityGroups)
      {
        Aws::StringStream vpcSecurityGroupsSs;
        vpcSecurityGroupsSs << location <<  ".VpcSecurityGroupMembership." << vpcSecurityGroupsIdx++;
        item.OutputToStream(oStream, vpcSecurityGroupsSs.str().c_str());
      }
  }
  if(m_hostedZoneIdHasBeenSet)
  {
      oStream << location << ".HostedZoneId=" << StringUtils::URLEncode(m_hostedZoneId.c_str()) << "&";
  }
  if(m_storageEncryptedHasBeenSet)
  {
      oStream << location << ".StorageEncrypted=" << std::boolalpha << m_storageEncrypted << "&";
  }
  if(m_kmsKeyIdHasBeenSet)
  {
      oStream << location << ".KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }
  if(m_dbClusterResourceIdHasBeenSet)
  {
      oStream << location << ".DbClusterResourceId=" << StringUtils::URLEncode(m_dbClusterResourceId.c_str()) << "&";
  }
  if(m_dBClusterArnHasBeenSet)
  {
      oStream << location << ".DBClusterArn=" << StringUtils::URLEncode(m_dBClusterArn.c_str()) << "&";
  }
  if(m_associatedRolesHasBeenSet)
  {
      unsigned associatedRolesIdx = 1;
      for(auto& item : m_associatedRoles)
      {
        Aws::StringStream associatedRolesSs;
        associatedRolesSs << location <<  ".DBClusterRole." << associatedRolesIdx++;
        item.OutputToStream(oStream, associatedRolesSs.str().c_str());
      }
  }
  if(m_iAMDatabaseAuthenticationEnabledHasBeenSet)
  {
      oStream << location << ".IAMDatabaseAuthenticationEnabled=" << std::boolalpha << m_iAMDatabaseAuthenticationEnabled << "&";
  }
  if(m_cloneGroupIdHasBeenSet)
  {
      oStream << location << ".CloneGroupId=" << StringUtils::URLEncode(m_cloneGroupId.c_str()) << "&";
  }
  if(m_clusterCreateTimeHasBeenSet)
  {
      oStream << location << ".ClusterCreateTime=" << StringUtils::URLEncode(m_clusterCreateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_earliestBacktrackTimeHasBeenSet)
  {
      oStream << location << ".EarliestBacktrackTime=" << StringUtils::URLEncode(m_earliestBacktrackTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_backtrackWindowHasBeenSet)
  {
      oStream << location << ".BacktrackWindow=" << m_backtrackWindow << "&";
  }
  if(m_backtrackConsumedChangeRecordsHasBeenSet)
  {
      oStream << location << ".BacktrackConsumedChangeRecords=" << m_backtrackConsumedChangeRecords << "&";
  }
  if(m_enabledCloudwatchLogsExportsHasBeenSet)
  {
      unsigned enabledCloudwatchLogsExportsIdx = 1;
      for(auto& item : m_enabledCloudwatchLogsExports)
      {
        oStream << location << ".EnabledCloudwatchLogsExports.member." << enabledCloudwatchLogsExportsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_capacityHasBeenSet)
  {
      oStream << location << ".Capacity=" << m_capacity << "&";
  }
  if(m_engineModeHasBeenSet)
  {
      oStream << location << ".EngineMode=" << StringUtils::URLEncode(m_engineMode.c_str()) << "&";
  }
  if(m_scalingConfigurationInfoHasBeenSet)
  {
      Aws::String scalingConfigurationInfoLocationAndMember(location);
      scalingConfigurationInfoLocationAndMember += ".ScalingConfigurationInfo";
      m_scalingConfigurationInfo.OutputToStream(oStream, scalingConfigurationInfoLocationAndMember.c_str());
  }
  if(m_deletionProtectionHasBeenSet)
  {
      oStream << location << ".DeletionProtection=" << std::boolalpha << m_deletionProtection << "&";
  }
  if(m_httpEndpointEnabledHasBeenSet)
  {
      oStream << location << ".HttpEndpointEnabled=" << std::boolalpha << m_httpEndpointEnabled << "&";
  }
  if(m_activityStreamModeHasBeenSet)
  {
      oStream << location << ".ActivityStreamMode=" << ActivityStreamModeMapper::GetNameForActivityStreamMode(m_activityStreamMode) << "&";
  }
  if(m_activityStreamStatusHasBeenSet)
  {
      oStream << location << ".ActivityStreamStatus=" << ActivityStreamStatusMapper::GetNameForActivityStreamStatus(m_activityStreamStatus) << "&";
  }
  if(m_activityStreamKmsKeyIdHasBeenSet)
  {
      oStream << location << ".ActivityStreamKmsKeyId=" << StringUtils::URLEncode(m_activityStreamKmsKeyId.c_str()) << "&";
  }
  if(m_activityStreamKinesisStreamNameHasBeenSet)
  {
      oStream << location << ".ActivityStreamKinesisStreamName=" << StringUtils::URLEncode(m_activityStreamKinesisStreamName.c_str()) << "&";
  }
  if(m_copyTagsToSnapshotHasBeenSet)
  {
      oStream << location << ".CopyTagsToSnapshot=" << std::boolalpha << m_copyTagsToSnapshot << "&";
  }
  if(m_crossAccountCloneHasBeenSet)
  {
      oStream << location << ".CrossAccountClone=" << std::boolalpha << m_crossAccountClone << "&";
  }
  if(m_domainMembershipsHasBeenSet)
  {
      unsigned domainMembershipsIdx = 1;
      for(auto& item : m_domainMemberships)
      {
        Aws::StringStream domainMembershipsSs;
        domainMembershipsSs << location <<  ".DomainMembership." << domainMembershipsIdx++;
        item.OutputToStream(oStream, domainMembershipsSs.str().c_str());
      }
  }
  if(m_tagListHasBeenSet)
  {
      unsigned tagListIdx = 1;
      for(auto& item : m_tagList)
      {
        Aws::StringStream tagListSs;
        tagListSs << location <<  ".Tag." << tagListIdx++;
        item.OutputToStream(oStream, tagListSs.str().c_str());
      }
  }
  if(m_globalWriteForwardingStatusHasBeenSet)
  {
      oStream << location << ".GlobalWriteForwardingStatus=" << WriteForwardingStatusMapper::GetNameForWriteForwardingStatus(m_globalWriteForwardingStatus) << "&";
  }
  if(m_globalWriteForwardingRequestedHasBeenSet)
  {
      oStream << location << ".GlobalWriteForwardingRequested=" << std::boolalpha << m_globalWriteForwardingRequested << "&";
  }
  if(m_pendingModifiedValuesHasBeenSet)
  {
      Aws::String pendingModifiedValuesLocationAndMember(location);
      pendingModifiedValuesLocationAndMember += ".PendingModifiedValues";
      m_pendingModifiedValues.OutputToStream(oStream, pendingModifiedValuesLocationAndMember.c_str());
  }
  if(m_dBClusterInstanceClassHasBeenSet)
  {
      oStream << location << ".DBClusterInstanceClass=" << StringUtils::URLEncode(m_dBClusterInstanceClass.c_str()) << "&";
  }
  if(m_storageTypeHasBeenSet)
  {
      oStream << location << ".StorageType=" << StringUtils::URLEncode(m_storageType.c_str()) << "&";
  }
  if(m_iopsHasBeenSet)
  {
      oStream << location << ".Iops=" << m_iops << "&";
  }
  if(m_publiclyAccessibleHasBeenSet)
  {
      oStream << location << ".PubliclyAccessible=" << std::boolalpha << m_publiclyAccessible << "&";
  }
  if(m_autoMinorVersionUpgradeHasBeenSet)
  {
      oStream << location << ".AutoMinorVersionUpgrade=" << std::boolalpha << m_autoMinorVersionUpgrade << "&";
  }
  if(m_monitoringIntervalHasBeenSet)
  {
      oStream << location << ".MonitoringInterval=" << m_monitoringInterval << "&";
  }
  if(m_monitoringRoleArnHasBeenSet)
  {
      oStream << location << ".MonitoringRoleArn=" << StringUtils::URLEncode(m_monitoringRoleArn.c_str()) << "&";
  }
  if(m_performanceInsightsEnabledHasBeenSet)
  {
      oStream << location << ".PerformanceInsightsEnabled=" << std::boolalpha << m_performanceInsightsEnabled << "&";
  }
  if(m_performanceInsightsKMSKeyIdHasBeenSet)
  {
      oStream << location << ".PerformanceInsightsKMSKeyId=" << StringUtils::URLEncode(m_performanceInsightsKMSKeyId.c_str()) << "&";
  }
  if(m_performanceInsightsRetentionPeriodHasBeenSet)
  {
      oStream << location << ".PerformanceInsightsRetentionPeriod=" << m_performanceInsightsRetentionPeriod << "&";
  }
  if(m_serverlessV2ScalingConfigurationHasBeenSet)
  {
      Aws::String serverlessV2ScalingConfigurationLocationAndMember(location);
      serverlessV2ScalingConfigurationLocationAndMember += ".ServerlessV2ScalingConfiguration";
      m_serverlessV2ScalingConfiguration.OutputToStream(oStream, serverlessV2ScalingConfigurationLocationAndMember.c_str());
  }
  if(m_networkTypeHasBeenSet)
  {
      oStream << location << ".NetworkType=" << StringUtils::URLEncode(m_networkType.c_str()) << "&";
  }
  if(m_dBSystemIdHasBeenSet)
  {
      oStream << location << ".DBSystemId=" << StringUtils::URLEncode(m_dBSystemId.c_str()) << "&";
  }
  if(m_masterUserSecretHasBeenSet)
  {
      Aws::String masterUserSecretLocationAndMember(location);
      masterUserSecretLocationAndMember += ".MasterUserSecret";
      m_masterUserSecret.OutputToStream(oStream, masterUserSecretLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
