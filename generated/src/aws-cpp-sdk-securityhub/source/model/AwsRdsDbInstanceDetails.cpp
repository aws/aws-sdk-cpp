/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsRdsDbInstanceDetails.h>
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

AwsRdsDbInstanceDetails::AwsRdsDbInstanceDetails() : 
    m_associatedRolesHasBeenSet(false),
    m_cACertificateIdentifierHasBeenSet(false),
    m_dBClusterIdentifierHasBeenSet(false),
    m_dBInstanceIdentifierHasBeenSet(false),
    m_dBInstanceClassHasBeenSet(false),
    m_dbInstancePort(0),
    m_dbInstancePortHasBeenSet(false),
    m_dbiResourceIdHasBeenSet(false),
    m_dBNameHasBeenSet(false),
    m_deletionProtection(false),
    m_deletionProtectionHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_iAMDatabaseAuthenticationEnabled(false),
    m_iAMDatabaseAuthenticationEnabledHasBeenSet(false),
    m_instanceCreateTimeHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false),
    m_storageEncrypted(false),
    m_storageEncryptedHasBeenSet(false),
    m_tdeCredentialArnHasBeenSet(false),
    m_vpcSecurityGroupsHasBeenSet(false),
    m_multiAz(false),
    m_multiAzHasBeenSet(false),
    m_enhancedMonitoringResourceArnHasBeenSet(false),
    m_dbInstanceStatusHasBeenSet(false),
    m_masterUsernameHasBeenSet(false),
    m_allocatedStorage(0),
    m_allocatedStorageHasBeenSet(false),
    m_preferredBackupWindowHasBeenSet(false),
    m_backupRetentionPeriod(0),
    m_backupRetentionPeriodHasBeenSet(false),
    m_dbSecurityGroupsHasBeenSet(false),
    m_dbParameterGroupsHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_dbSubnetGroupHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_pendingModifiedValuesHasBeenSet(false),
    m_latestRestorableTimeHasBeenSet(false),
    m_autoMinorVersionUpgrade(false),
    m_autoMinorVersionUpgradeHasBeenSet(false),
    m_readReplicaSourceDBInstanceIdentifierHasBeenSet(false),
    m_readReplicaDBInstanceIdentifiersHasBeenSet(false),
    m_readReplicaDBClusterIdentifiersHasBeenSet(false),
    m_licenseModelHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_optionGroupMembershipsHasBeenSet(false),
    m_characterSetNameHasBeenSet(false),
    m_secondaryAvailabilityZoneHasBeenSet(false),
    m_statusInfosHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_domainMembershipsHasBeenSet(false),
    m_copyTagsToSnapshot(false),
    m_copyTagsToSnapshotHasBeenSet(false),
    m_monitoringInterval(0),
    m_monitoringIntervalHasBeenSet(false),
    m_monitoringRoleArnHasBeenSet(false),
    m_promotionTier(0),
    m_promotionTierHasBeenSet(false),
    m_timezoneHasBeenSet(false),
    m_performanceInsightsEnabled(false),
    m_performanceInsightsEnabledHasBeenSet(false),
    m_performanceInsightsKmsKeyIdHasBeenSet(false),
    m_performanceInsightsRetentionPeriod(0),
    m_performanceInsightsRetentionPeriodHasBeenSet(false),
    m_enabledCloudWatchLogsExportsHasBeenSet(false),
    m_processorFeaturesHasBeenSet(false),
    m_listenerEndpointHasBeenSet(false),
    m_maxAllocatedStorage(0),
    m_maxAllocatedStorageHasBeenSet(false)
{
}

AwsRdsDbInstanceDetails::AwsRdsDbInstanceDetails(JsonView jsonValue) : 
    m_associatedRolesHasBeenSet(false),
    m_cACertificateIdentifierHasBeenSet(false),
    m_dBClusterIdentifierHasBeenSet(false),
    m_dBInstanceIdentifierHasBeenSet(false),
    m_dBInstanceClassHasBeenSet(false),
    m_dbInstancePort(0),
    m_dbInstancePortHasBeenSet(false),
    m_dbiResourceIdHasBeenSet(false),
    m_dBNameHasBeenSet(false),
    m_deletionProtection(false),
    m_deletionProtectionHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_iAMDatabaseAuthenticationEnabled(false),
    m_iAMDatabaseAuthenticationEnabledHasBeenSet(false),
    m_instanceCreateTimeHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false),
    m_storageEncrypted(false),
    m_storageEncryptedHasBeenSet(false),
    m_tdeCredentialArnHasBeenSet(false),
    m_vpcSecurityGroupsHasBeenSet(false),
    m_multiAz(false),
    m_multiAzHasBeenSet(false),
    m_enhancedMonitoringResourceArnHasBeenSet(false),
    m_dbInstanceStatusHasBeenSet(false),
    m_masterUsernameHasBeenSet(false),
    m_allocatedStorage(0),
    m_allocatedStorageHasBeenSet(false),
    m_preferredBackupWindowHasBeenSet(false),
    m_backupRetentionPeriod(0),
    m_backupRetentionPeriodHasBeenSet(false),
    m_dbSecurityGroupsHasBeenSet(false),
    m_dbParameterGroupsHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_dbSubnetGroupHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_pendingModifiedValuesHasBeenSet(false),
    m_latestRestorableTimeHasBeenSet(false),
    m_autoMinorVersionUpgrade(false),
    m_autoMinorVersionUpgradeHasBeenSet(false),
    m_readReplicaSourceDBInstanceIdentifierHasBeenSet(false),
    m_readReplicaDBInstanceIdentifiersHasBeenSet(false),
    m_readReplicaDBClusterIdentifiersHasBeenSet(false),
    m_licenseModelHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_optionGroupMembershipsHasBeenSet(false),
    m_characterSetNameHasBeenSet(false),
    m_secondaryAvailabilityZoneHasBeenSet(false),
    m_statusInfosHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_domainMembershipsHasBeenSet(false),
    m_copyTagsToSnapshot(false),
    m_copyTagsToSnapshotHasBeenSet(false),
    m_monitoringInterval(0),
    m_monitoringIntervalHasBeenSet(false),
    m_monitoringRoleArnHasBeenSet(false),
    m_promotionTier(0),
    m_promotionTierHasBeenSet(false),
    m_timezoneHasBeenSet(false),
    m_performanceInsightsEnabled(false),
    m_performanceInsightsEnabledHasBeenSet(false),
    m_performanceInsightsKmsKeyIdHasBeenSet(false),
    m_performanceInsightsRetentionPeriod(0),
    m_performanceInsightsRetentionPeriodHasBeenSet(false),
    m_enabledCloudWatchLogsExportsHasBeenSet(false),
    m_processorFeaturesHasBeenSet(false),
    m_listenerEndpointHasBeenSet(false),
    m_maxAllocatedStorage(0),
    m_maxAllocatedStorageHasBeenSet(false)
{
  *this = jsonValue;
}

AwsRdsDbInstanceDetails& AwsRdsDbInstanceDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AssociatedRoles"))
  {
    Aws::Utils::Array<JsonView> associatedRolesJsonList = jsonValue.GetArray("AssociatedRoles");
    for(unsigned associatedRolesIndex = 0; associatedRolesIndex < associatedRolesJsonList.GetLength(); ++associatedRolesIndex)
    {
      m_associatedRoles.push_back(associatedRolesJsonList[associatedRolesIndex].AsObject());
    }
    m_associatedRolesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CACertificateIdentifier"))
  {
    m_cACertificateIdentifier = jsonValue.GetString("CACertificateIdentifier");

    m_cACertificateIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DBClusterIdentifier"))
  {
    m_dBClusterIdentifier = jsonValue.GetString("DBClusterIdentifier");

    m_dBClusterIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DBInstanceIdentifier"))
  {
    m_dBInstanceIdentifier = jsonValue.GetString("DBInstanceIdentifier");

    m_dBInstanceIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DBInstanceClass"))
  {
    m_dBInstanceClass = jsonValue.GetString("DBInstanceClass");

    m_dBInstanceClassHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DbInstancePort"))
  {
    m_dbInstancePort = jsonValue.GetInteger("DbInstancePort");

    m_dbInstancePortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DbiResourceId"))
  {
    m_dbiResourceId = jsonValue.GetString("DbiResourceId");

    m_dbiResourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DBName"))
  {
    m_dBName = jsonValue.GetString("DBName");

    m_dBNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeletionProtection"))
  {
    m_deletionProtection = jsonValue.GetBool("DeletionProtection");

    m_deletionProtectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Endpoint"))
  {
    m_endpoint = jsonValue.GetObject("Endpoint");

    m_endpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Engine"))
  {
    m_engine = jsonValue.GetString("Engine");

    m_engineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EngineVersion"))
  {
    m_engineVersion = jsonValue.GetString("EngineVersion");

    m_engineVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IAMDatabaseAuthenticationEnabled"))
  {
    m_iAMDatabaseAuthenticationEnabled = jsonValue.GetBool("IAMDatabaseAuthenticationEnabled");

    m_iAMDatabaseAuthenticationEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceCreateTime"))
  {
    m_instanceCreateTime = jsonValue.GetString("InstanceCreateTime");

    m_instanceCreateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PubliclyAccessible"))
  {
    m_publiclyAccessible = jsonValue.GetBool("PubliclyAccessible");

    m_publiclyAccessibleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StorageEncrypted"))
  {
    m_storageEncrypted = jsonValue.GetBool("StorageEncrypted");

    m_storageEncryptedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TdeCredentialArn"))
  {
    m_tdeCredentialArn = jsonValue.GetString("TdeCredentialArn");

    m_tdeCredentialArnHasBeenSet = true;
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

  if(jsonValue.ValueExists("MultiAz"))
  {
    m_multiAz = jsonValue.GetBool("MultiAz");

    m_multiAzHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnhancedMonitoringResourceArn"))
  {
    m_enhancedMonitoringResourceArn = jsonValue.GetString("EnhancedMonitoringResourceArn");

    m_enhancedMonitoringResourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DbInstanceStatus"))
  {
    m_dbInstanceStatus = jsonValue.GetString("DbInstanceStatus");

    m_dbInstanceStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MasterUsername"))
  {
    m_masterUsername = jsonValue.GetString("MasterUsername");

    m_masterUsernameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllocatedStorage"))
  {
    m_allocatedStorage = jsonValue.GetInteger("AllocatedStorage");

    m_allocatedStorageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PreferredBackupWindow"))
  {
    m_preferredBackupWindow = jsonValue.GetString("PreferredBackupWindow");

    m_preferredBackupWindowHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackupRetentionPeriod"))
  {
    m_backupRetentionPeriod = jsonValue.GetInteger("BackupRetentionPeriod");

    m_backupRetentionPeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DbSecurityGroups"))
  {
    Aws::Utils::Array<JsonView> dbSecurityGroupsJsonList = jsonValue.GetArray("DbSecurityGroups");
    for(unsigned dbSecurityGroupsIndex = 0; dbSecurityGroupsIndex < dbSecurityGroupsJsonList.GetLength(); ++dbSecurityGroupsIndex)
    {
      m_dbSecurityGroups.push_back(dbSecurityGroupsJsonList[dbSecurityGroupsIndex].AsString());
    }
    m_dbSecurityGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DbParameterGroups"))
  {
    Aws::Utils::Array<JsonView> dbParameterGroupsJsonList = jsonValue.GetArray("DbParameterGroups");
    for(unsigned dbParameterGroupsIndex = 0; dbParameterGroupsIndex < dbParameterGroupsJsonList.GetLength(); ++dbParameterGroupsIndex)
    {
      m_dbParameterGroups.push_back(dbParameterGroupsJsonList[dbParameterGroupsIndex].AsObject());
    }
    m_dbParameterGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("AvailabilityZone");

    m_availabilityZoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DbSubnetGroup"))
  {
    m_dbSubnetGroup = jsonValue.GetObject("DbSubnetGroup");

    m_dbSubnetGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PreferredMaintenanceWindow"))
  {
    m_preferredMaintenanceWindow = jsonValue.GetString("PreferredMaintenanceWindow");

    m_preferredMaintenanceWindowHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PendingModifiedValues"))
  {
    m_pendingModifiedValues = jsonValue.GetObject("PendingModifiedValues");

    m_pendingModifiedValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LatestRestorableTime"))
  {
    m_latestRestorableTime = jsonValue.GetString("LatestRestorableTime");

    m_latestRestorableTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoMinorVersionUpgrade"))
  {
    m_autoMinorVersionUpgrade = jsonValue.GetBool("AutoMinorVersionUpgrade");

    m_autoMinorVersionUpgradeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReadReplicaSourceDBInstanceIdentifier"))
  {
    m_readReplicaSourceDBInstanceIdentifier = jsonValue.GetString("ReadReplicaSourceDBInstanceIdentifier");

    m_readReplicaSourceDBInstanceIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReadReplicaDBInstanceIdentifiers"))
  {
    Aws::Utils::Array<JsonView> readReplicaDBInstanceIdentifiersJsonList = jsonValue.GetArray("ReadReplicaDBInstanceIdentifiers");
    for(unsigned readReplicaDBInstanceIdentifiersIndex = 0; readReplicaDBInstanceIdentifiersIndex < readReplicaDBInstanceIdentifiersJsonList.GetLength(); ++readReplicaDBInstanceIdentifiersIndex)
    {
      m_readReplicaDBInstanceIdentifiers.push_back(readReplicaDBInstanceIdentifiersJsonList[readReplicaDBInstanceIdentifiersIndex].AsString());
    }
    m_readReplicaDBInstanceIdentifiersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReadReplicaDBClusterIdentifiers"))
  {
    Aws::Utils::Array<JsonView> readReplicaDBClusterIdentifiersJsonList = jsonValue.GetArray("ReadReplicaDBClusterIdentifiers");
    for(unsigned readReplicaDBClusterIdentifiersIndex = 0; readReplicaDBClusterIdentifiersIndex < readReplicaDBClusterIdentifiersJsonList.GetLength(); ++readReplicaDBClusterIdentifiersIndex)
    {
      m_readReplicaDBClusterIdentifiers.push_back(readReplicaDBClusterIdentifiersJsonList[readReplicaDBClusterIdentifiersIndex].AsString());
    }
    m_readReplicaDBClusterIdentifiersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LicenseModel"))
  {
    m_licenseModel = jsonValue.GetString("LicenseModel");

    m_licenseModelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Iops"))
  {
    m_iops = jsonValue.GetInteger("Iops");

    m_iopsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OptionGroupMemberships"))
  {
    Aws::Utils::Array<JsonView> optionGroupMembershipsJsonList = jsonValue.GetArray("OptionGroupMemberships");
    for(unsigned optionGroupMembershipsIndex = 0; optionGroupMembershipsIndex < optionGroupMembershipsJsonList.GetLength(); ++optionGroupMembershipsIndex)
    {
      m_optionGroupMemberships.push_back(optionGroupMembershipsJsonList[optionGroupMembershipsIndex].AsObject());
    }
    m_optionGroupMembershipsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CharacterSetName"))
  {
    m_characterSetName = jsonValue.GetString("CharacterSetName");

    m_characterSetNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecondaryAvailabilityZone"))
  {
    m_secondaryAvailabilityZone = jsonValue.GetString("SecondaryAvailabilityZone");

    m_secondaryAvailabilityZoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusInfos"))
  {
    Aws::Utils::Array<JsonView> statusInfosJsonList = jsonValue.GetArray("StatusInfos");
    for(unsigned statusInfosIndex = 0; statusInfosIndex < statusInfosJsonList.GetLength(); ++statusInfosIndex)
    {
      m_statusInfos.push_back(statusInfosJsonList[statusInfosIndex].AsObject());
    }
    m_statusInfosHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StorageType"))
  {
    m_storageType = jsonValue.GetString("StorageType");

    m_storageTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DomainMemberships"))
  {
    Aws::Utils::Array<JsonView> domainMembershipsJsonList = jsonValue.GetArray("DomainMemberships");
    for(unsigned domainMembershipsIndex = 0; domainMembershipsIndex < domainMembershipsJsonList.GetLength(); ++domainMembershipsIndex)
    {
      m_domainMemberships.push_back(domainMembershipsJsonList[domainMembershipsIndex].AsObject());
    }
    m_domainMembershipsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CopyTagsToSnapshot"))
  {
    m_copyTagsToSnapshot = jsonValue.GetBool("CopyTagsToSnapshot");

    m_copyTagsToSnapshotHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MonitoringInterval"))
  {
    m_monitoringInterval = jsonValue.GetInteger("MonitoringInterval");

    m_monitoringIntervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MonitoringRoleArn"))
  {
    m_monitoringRoleArn = jsonValue.GetString("MonitoringRoleArn");

    m_monitoringRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PromotionTier"))
  {
    m_promotionTier = jsonValue.GetInteger("PromotionTier");

    m_promotionTierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Timezone"))
  {
    m_timezone = jsonValue.GetString("Timezone");

    m_timezoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PerformanceInsightsEnabled"))
  {
    m_performanceInsightsEnabled = jsonValue.GetBool("PerformanceInsightsEnabled");

    m_performanceInsightsEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PerformanceInsightsKmsKeyId"))
  {
    m_performanceInsightsKmsKeyId = jsonValue.GetString("PerformanceInsightsKmsKeyId");

    m_performanceInsightsKmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PerformanceInsightsRetentionPeriod"))
  {
    m_performanceInsightsRetentionPeriod = jsonValue.GetInteger("PerformanceInsightsRetentionPeriod");

    m_performanceInsightsRetentionPeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnabledCloudWatchLogsExports"))
  {
    Aws::Utils::Array<JsonView> enabledCloudWatchLogsExportsJsonList = jsonValue.GetArray("EnabledCloudWatchLogsExports");
    for(unsigned enabledCloudWatchLogsExportsIndex = 0; enabledCloudWatchLogsExportsIndex < enabledCloudWatchLogsExportsJsonList.GetLength(); ++enabledCloudWatchLogsExportsIndex)
    {
      m_enabledCloudWatchLogsExports.push_back(enabledCloudWatchLogsExportsJsonList[enabledCloudWatchLogsExportsIndex].AsString());
    }
    m_enabledCloudWatchLogsExportsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProcessorFeatures"))
  {
    Aws::Utils::Array<JsonView> processorFeaturesJsonList = jsonValue.GetArray("ProcessorFeatures");
    for(unsigned processorFeaturesIndex = 0; processorFeaturesIndex < processorFeaturesJsonList.GetLength(); ++processorFeaturesIndex)
    {
      m_processorFeatures.push_back(processorFeaturesJsonList[processorFeaturesIndex].AsObject());
    }
    m_processorFeaturesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ListenerEndpoint"))
  {
    m_listenerEndpoint = jsonValue.GetObject("ListenerEndpoint");

    m_listenerEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxAllocatedStorage"))
  {
    m_maxAllocatedStorage = jsonValue.GetInteger("MaxAllocatedStorage");

    m_maxAllocatedStorageHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsRdsDbInstanceDetails::Jsonize() const
{
  JsonValue payload;

  if(m_associatedRolesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> associatedRolesJsonList(m_associatedRoles.size());
   for(unsigned associatedRolesIndex = 0; associatedRolesIndex < associatedRolesJsonList.GetLength(); ++associatedRolesIndex)
   {
     associatedRolesJsonList[associatedRolesIndex].AsObject(m_associatedRoles[associatedRolesIndex].Jsonize());
   }
   payload.WithArray("AssociatedRoles", std::move(associatedRolesJsonList));

  }

  if(m_cACertificateIdentifierHasBeenSet)
  {
   payload.WithString("CACertificateIdentifier", m_cACertificateIdentifier);

  }

  if(m_dBClusterIdentifierHasBeenSet)
  {
   payload.WithString("DBClusterIdentifier", m_dBClusterIdentifier);

  }

  if(m_dBInstanceIdentifierHasBeenSet)
  {
   payload.WithString("DBInstanceIdentifier", m_dBInstanceIdentifier);

  }

  if(m_dBInstanceClassHasBeenSet)
  {
   payload.WithString("DBInstanceClass", m_dBInstanceClass);

  }

  if(m_dbInstancePortHasBeenSet)
  {
   payload.WithInteger("DbInstancePort", m_dbInstancePort);

  }

  if(m_dbiResourceIdHasBeenSet)
  {
   payload.WithString("DbiResourceId", m_dbiResourceId);

  }

  if(m_dBNameHasBeenSet)
  {
   payload.WithString("DBName", m_dBName);

  }

  if(m_deletionProtectionHasBeenSet)
  {
   payload.WithBool("DeletionProtection", m_deletionProtection);

  }

  if(m_endpointHasBeenSet)
  {
   payload.WithObject("Endpoint", m_endpoint.Jsonize());

  }

  if(m_engineHasBeenSet)
  {
   payload.WithString("Engine", m_engine);

  }

  if(m_engineVersionHasBeenSet)
  {
   payload.WithString("EngineVersion", m_engineVersion);

  }

  if(m_iAMDatabaseAuthenticationEnabledHasBeenSet)
  {
   payload.WithBool("IAMDatabaseAuthenticationEnabled", m_iAMDatabaseAuthenticationEnabled);

  }

  if(m_instanceCreateTimeHasBeenSet)
  {
   payload.WithString("InstanceCreateTime", m_instanceCreateTime);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_publiclyAccessibleHasBeenSet)
  {
   payload.WithBool("PubliclyAccessible", m_publiclyAccessible);

  }

  if(m_storageEncryptedHasBeenSet)
  {
   payload.WithBool("StorageEncrypted", m_storageEncrypted);

  }

  if(m_tdeCredentialArnHasBeenSet)
  {
   payload.WithString("TdeCredentialArn", m_tdeCredentialArn);

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

  if(m_multiAzHasBeenSet)
  {
   payload.WithBool("MultiAz", m_multiAz);

  }

  if(m_enhancedMonitoringResourceArnHasBeenSet)
  {
   payload.WithString("EnhancedMonitoringResourceArn", m_enhancedMonitoringResourceArn);

  }

  if(m_dbInstanceStatusHasBeenSet)
  {
   payload.WithString("DbInstanceStatus", m_dbInstanceStatus);

  }

  if(m_masterUsernameHasBeenSet)
  {
   payload.WithString("MasterUsername", m_masterUsername);

  }

  if(m_allocatedStorageHasBeenSet)
  {
   payload.WithInteger("AllocatedStorage", m_allocatedStorage);

  }

  if(m_preferredBackupWindowHasBeenSet)
  {
   payload.WithString("PreferredBackupWindow", m_preferredBackupWindow);

  }

  if(m_backupRetentionPeriodHasBeenSet)
  {
   payload.WithInteger("BackupRetentionPeriod", m_backupRetentionPeriod);

  }

  if(m_dbSecurityGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dbSecurityGroupsJsonList(m_dbSecurityGroups.size());
   for(unsigned dbSecurityGroupsIndex = 0; dbSecurityGroupsIndex < dbSecurityGroupsJsonList.GetLength(); ++dbSecurityGroupsIndex)
   {
     dbSecurityGroupsJsonList[dbSecurityGroupsIndex].AsString(m_dbSecurityGroups[dbSecurityGroupsIndex]);
   }
   payload.WithArray("DbSecurityGroups", std::move(dbSecurityGroupsJsonList));

  }

  if(m_dbParameterGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dbParameterGroupsJsonList(m_dbParameterGroups.size());
   for(unsigned dbParameterGroupsIndex = 0; dbParameterGroupsIndex < dbParameterGroupsJsonList.GetLength(); ++dbParameterGroupsIndex)
   {
     dbParameterGroupsJsonList[dbParameterGroupsIndex].AsObject(m_dbParameterGroups[dbParameterGroupsIndex].Jsonize());
   }
   payload.WithArray("DbParameterGroups", std::move(dbParameterGroupsJsonList));

  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("AvailabilityZone", m_availabilityZone);

  }

  if(m_dbSubnetGroupHasBeenSet)
  {
   payload.WithObject("DbSubnetGroup", m_dbSubnetGroup.Jsonize());

  }

  if(m_preferredMaintenanceWindowHasBeenSet)
  {
   payload.WithString("PreferredMaintenanceWindow", m_preferredMaintenanceWindow);

  }

  if(m_pendingModifiedValuesHasBeenSet)
  {
   payload.WithObject("PendingModifiedValues", m_pendingModifiedValues.Jsonize());

  }

  if(m_latestRestorableTimeHasBeenSet)
  {
   payload.WithString("LatestRestorableTime", m_latestRestorableTime);

  }

  if(m_autoMinorVersionUpgradeHasBeenSet)
  {
   payload.WithBool("AutoMinorVersionUpgrade", m_autoMinorVersionUpgrade);

  }

  if(m_readReplicaSourceDBInstanceIdentifierHasBeenSet)
  {
   payload.WithString("ReadReplicaSourceDBInstanceIdentifier", m_readReplicaSourceDBInstanceIdentifier);

  }

  if(m_readReplicaDBInstanceIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> readReplicaDBInstanceIdentifiersJsonList(m_readReplicaDBInstanceIdentifiers.size());
   for(unsigned readReplicaDBInstanceIdentifiersIndex = 0; readReplicaDBInstanceIdentifiersIndex < readReplicaDBInstanceIdentifiersJsonList.GetLength(); ++readReplicaDBInstanceIdentifiersIndex)
   {
     readReplicaDBInstanceIdentifiersJsonList[readReplicaDBInstanceIdentifiersIndex].AsString(m_readReplicaDBInstanceIdentifiers[readReplicaDBInstanceIdentifiersIndex]);
   }
   payload.WithArray("ReadReplicaDBInstanceIdentifiers", std::move(readReplicaDBInstanceIdentifiersJsonList));

  }

  if(m_readReplicaDBClusterIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> readReplicaDBClusterIdentifiersJsonList(m_readReplicaDBClusterIdentifiers.size());
   for(unsigned readReplicaDBClusterIdentifiersIndex = 0; readReplicaDBClusterIdentifiersIndex < readReplicaDBClusterIdentifiersJsonList.GetLength(); ++readReplicaDBClusterIdentifiersIndex)
   {
     readReplicaDBClusterIdentifiersJsonList[readReplicaDBClusterIdentifiersIndex].AsString(m_readReplicaDBClusterIdentifiers[readReplicaDBClusterIdentifiersIndex]);
   }
   payload.WithArray("ReadReplicaDBClusterIdentifiers", std::move(readReplicaDBClusterIdentifiersJsonList));

  }

  if(m_licenseModelHasBeenSet)
  {
   payload.WithString("LicenseModel", m_licenseModel);

  }

  if(m_iopsHasBeenSet)
  {
   payload.WithInteger("Iops", m_iops);

  }

  if(m_optionGroupMembershipsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> optionGroupMembershipsJsonList(m_optionGroupMemberships.size());
   for(unsigned optionGroupMembershipsIndex = 0; optionGroupMembershipsIndex < optionGroupMembershipsJsonList.GetLength(); ++optionGroupMembershipsIndex)
   {
     optionGroupMembershipsJsonList[optionGroupMembershipsIndex].AsObject(m_optionGroupMemberships[optionGroupMembershipsIndex].Jsonize());
   }
   payload.WithArray("OptionGroupMemberships", std::move(optionGroupMembershipsJsonList));

  }

  if(m_characterSetNameHasBeenSet)
  {
   payload.WithString("CharacterSetName", m_characterSetName);

  }

  if(m_secondaryAvailabilityZoneHasBeenSet)
  {
   payload.WithString("SecondaryAvailabilityZone", m_secondaryAvailabilityZone);

  }

  if(m_statusInfosHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statusInfosJsonList(m_statusInfos.size());
   for(unsigned statusInfosIndex = 0; statusInfosIndex < statusInfosJsonList.GetLength(); ++statusInfosIndex)
   {
     statusInfosJsonList[statusInfosIndex].AsObject(m_statusInfos[statusInfosIndex].Jsonize());
   }
   payload.WithArray("StatusInfos", std::move(statusInfosJsonList));

  }

  if(m_storageTypeHasBeenSet)
  {
   payload.WithString("StorageType", m_storageType);

  }

  if(m_domainMembershipsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> domainMembershipsJsonList(m_domainMemberships.size());
   for(unsigned domainMembershipsIndex = 0; domainMembershipsIndex < domainMembershipsJsonList.GetLength(); ++domainMembershipsIndex)
   {
     domainMembershipsJsonList[domainMembershipsIndex].AsObject(m_domainMemberships[domainMembershipsIndex].Jsonize());
   }
   payload.WithArray("DomainMemberships", std::move(domainMembershipsJsonList));

  }

  if(m_copyTagsToSnapshotHasBeenSet)
  {
   payload.WithBool("CopyTagsToSnapshot", m_copyTagsToSnapshot);

  }

  if(m_monitoringIntervalHasBeenSet)
  {
   payload.WithInteger("MonitoringInterval", m_monitoringInterval);

  }

  if(m_monitoringRoleArnHasBeenSet)
  {
   payload.WithString("MonitoringRoleArn", m_monitoringRoleArn);

  }

  if(m_promotionTierHasBeenSet)
  {
   payload.WithInteger("PromotionTier", m_promotionTier);

  }

  if(m_timezoneHasBeenSet)
  {
   payload.WithString("Timezone", m_timezone);

  }

  if(m_performanceInsightsEnabledHasBeenSet)
  {
   payload.WithBool("PerformanceInsightsEnabled", m_performanceInsightsEnabled);

  }

  if(m_performanceInsightsKmsKeyIdHasBeenSet)
  {
   payload.WithString("PerformanceInsightsKmsKeyId", m_performanceInsightsKmsKeyId);

  }

  if(m_performanceInsightsRetentionPeriodHasBeenSet)
  {
   payload.WithInteger("PerformanceInsightsRetentionPeriod", m_performanceInsightsRetentionPeriod);

  }

  if(m_enabledCloudWatchLogsExportsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> enabledCloudWatchLogsExportsJsonList(m_enabledCloudWatchLogsExports.size());
   for(unsigned enabledCloudWatchLogsExportsIndex = 0; enabledCloudWatchLogsExportsIndex < enabledCloudWatchLogsExportsJsonList.GetLength(); ++enabledCloudWatchLogsExportsIndex)
   {
     enabledCloudWatchLogsExportsJsonList[enabledCloudWatchLogsExportsIndex].AsString(m_enabledCloudWatchLogsExports[enabledCloudWatchLogsExportsIndex]);
   }
   payload.WithArray("EnabledCloudWatchLogsExports", std::move(enabledCloudWatchLogsExportsJsonList));

  }

  if(m_processorFeaturesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> processorFeaturesJsonList(m_processorFeatures.size());
   for(unsigned processorFeaturesIndex = 0; processorFeaturesIndex < processorFeaturesJsonList.GetLength(); ++processorFeaturesIndex)
   {
     processorFeaturesJsonList[processorFeaturesIndex].AsObject(m_processorFeatures[processorFeaturesIndex].Jsonize());
   }
   payload.WithArray("ProcessorFeatures", std::move(processorFeaturesJsonList));

  }

  if(m_listenerEndpointHasBeenSet)
  {
   payload.WithObject("ListenerEndpoint", m_listenerEndpoint.Jsonize());

  }

  if(m_maxAllocatedStorageHasBeenSet)
  {
   payload.WithInteger("MaxAllocatedStorage", m_maxAllocatedStorage);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
