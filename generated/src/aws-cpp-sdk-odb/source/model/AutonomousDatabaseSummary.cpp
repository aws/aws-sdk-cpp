/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/AutonomousDatabaseSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

AutonomousDatabaseSummary::AutonomousDatabaseSummary(JsonView jsonValue) { *this = jsonValue; }

AutonomousDatabaseSummary& AutonomousDatabaseSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("autonomousDatabaseId")) {
    m_autonomousDatabaseId = jsonValue.GetString("autonomousDatabaseId");
    m_autonomousDatabaseIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("autonomousDatabaseArn")) {
    m_autonomousDatabaseArn = jsonValue.GetString("autonomousDatabaseArn");
    m_autonomousDatabaseArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ociResourceAnchorName")) {
    m_ociResourceAnchorName = jsonValue.GetString("ociResourceAnchorName");
    m_ociResourceAnchorNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("percentProgress")) {
    m_percentProgress = jsonValue.GetDouble("percentProgress");
    m_percentProgressHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ocid")) {
    m_ocid = jsonValue.GetString("ocid");
    m_ocidHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ociUrl")) {
    m_ociUrl = jsonValue.GetString("ociUrl");
    m_ociUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("displayName")) {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dbName")) {
    m_dbName = jsonValue.GetString("dbName");
    m_dbNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceId")) {
    m_sourceId = jsonValue.GetString("sourceId");
    m_sourceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = AutonomousDatabaseResourceStatusMapper::GetAutonomousDatabaseResourceStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusReason")) {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("databaseType")) {
    m_databaseType = DatabaseTypeMapper::GetDatabaseTypeForName(jsonValue.GetString("databaseType"));
    m_databaseTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dbVersion")) {
    m_dbVersion = jsonValue.GetString("dbVersion");
    m_dbVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dbWorkload")) {
    m_dbWorkload = DbWorkloadMapper::GetDbWorkloadForName(jsonValue.GetString("dbWorkload"));
    m_dbWorkloadHasBeenSet = true;
  }
  if (jsonValue.ValueExists("characterSet")) {
    m_characterSet = jsonValue.GetString("characterSet");
    m_characterSetHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ncharacterSet")) {
    m_ncharacterSet = jsonValue.GetString("ncharacterSet");
    m_ncharacterSetHasBeenSet = true;
  }
  if (jsonValue.ValueExists("databaseEdition")) {
    m_databaseEdition = DatabaseEditionMapper::GetDatabaseEditionForName(jsonValue.GetString("databaseEdition"));
    m_databaseEditionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("licenseModel")) {
    m_licenseModel = LicenseModelMapper::GetLicenseModelForName(jsonValue.GetString("licenseModel"));
    m_licenseModelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("openMode")) {
    m_openMode = OpenModeMapper::GetOpenModeForName(jsonValue.GetString("openMode"));
    m_openModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("permissionLevel")) {
    m_permissionLevel = PermissionLevelMapper::GetPermissionLevelForName(jsonValue.GetString("permissionLevel"));
    m_permissionLevelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("isMtlsConnectionRequired")) {
    m_isMtlsConnectionRequired = jsonValue.GetBool("isMtlsConnectionRequired");
    m_isMtlsConnectionRequiredHasBeenSet = true;
  }
  if (jsonValue.ValueExists("autonomousMaintenanceScheduleType")) {
    m_autonomousMaintenanceScheduleType = AutonomousMaintenanceScheduleTypeMapper::GetAutonomousMaintenanceScheduleTypeForName(
        jsonValue.GetString("autonomousMaintenanceScheduleType"));
    m_autonomousMaintenanceScheduleTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("netServicesArchitecture")) {
    m_netServicesArchitecture =
        NetServicesArchitectureMapper::GetNetServicesArchitectureForName(jsonValue.GetString("netServicesArchitecture"));
    m_netServicesArchitectureHasBeenSet = true;
  }
  if (jsonValue.ValueExists("availableUpgradeVersions")) {
    Aws::Utils::Array<JsonView> availableUpgradeVersionsJsonList = jsonValue.GetArray("availableUpgradeVersions");
    for (unsigned availableUpgradeVersionsIndex = 0; availableUpgradeVersionsIndex < availableUpgradeVersionsJsonList.GetLength();
         ++availableUpgradeVersionsIndex) {
      m_availableUpgradeVersions.push_back(availableUpgradeVersionsJsonList[availableUpgradeVersionsIndex].AsString());
    }
    m_availableUpgradeVersionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("byolComputeCountLimit")) {
    m_byolComputeCountLimit = jsonValue.GetInteger("byolComputeCountLimit");
    m_byolComputeCountLimitHasBeenSet = true;
  }
  if (jsonValue.ValueExists("connectionStringDetails")) {
    m_connectionStringDetails = jsonValue.GetObject("connectionStringDetails");
    m_connectionStringDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceConsoleUrl")) {
    m_serviceConsoleUrl = jsonValue.GetString("serviceConsoleUrl");
    m_serviceConsoleUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sqlWebDeveloperUrl")) {
    m_sqlWebDeveloperUrl = jsonValue.GetString("sqlWebDeveloperUrl");
    m_sqlWebDeveloperUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("customerContacts")) {
    Aws::Utils::Array<JsonView> customerContactsJsonList = jsonValue.GetArray("customerContacts");
    for (unsigned customerContactsIndex = 0; customerContactsIndex < customerContactsJsonList.GetLength(); ++customerContactsIndex) {
      m_customerContacts.push_back(customerContactsJsonList[customerContactsIndex].AsObject());
    }
    m_customerContactsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("apexDetails")) {
    m_apexDetails = jsonValue.GetObject("apexDetails");
    m_apexDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("standbyDb")) {
    m_standbyDb = jsonValue.GetObject("standbyDb");
    m_standbyDbHasBeenSet = true;
  }
  if (jsonValue.ValueExists("localStandbyDb")) {
    m_localStandbyDb = jsonValue.GetObject("localStandbyDb");
    m_localStandbyDbHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dataSafeStatus")) {
    m_dataSafeStatus = DataSafeStatusMapper::GetDataSafeStatusForName(jsonValue.GetString("dataSafeStatus"));
    m_dataSafeStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("databaseManagementStatus")) {
    m_databaseManagementStatus =
        DatabaseManagementStatusMapper::GetDatabaseManagementStatusForName(jsonValue.GetString("databaseManagementStatus"));
    m_databaseManagementStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("operationsInsightsStatus")) {
    m_operationsInsightsStatus =
        OperationsInsightsStatusMapper::GetOperationsInsightsStatusForName(jsonValue.GetString("operationsInsightsStatus"));
    m_operationsInsightsStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("availabilityZone")) {
    m_availabilityZone = jsonValue.GetString("availabilityZone");
    m_availabilityZoneHasBeenSet = true;
  }
  if (jsonValue.ValueExists("availabilityZoneId")) {
    m_availabilityZoneId = jsonValue.GetString("availabilityZoneId");
    m_availabilityZoneIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maintenanceTargetComponent")) {
    m_maintenanceTargetComponent = jsonValue.GetString("maintenanceTargetComponent");
    m_maintenanceTargetComponentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("connectionUrls")) {
    m_connectionUrls = jsonValue.GetObject("connectionUrls");
    m_connectionUrlsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dbToolsDetails")) {
    Aws::Utils::Array<JsonView> dbToolsDetailsJsonList = jsonValue.GetArray("dbToolsDetails");
    for (unsigned dbToolsDetailsIndex = 0; dbToolsDetailsIndex < dbToolsDetailsJsonList.GetLength(); ++dbToolsDetailsIndex) {
      m_dbToolsDetails.push_back(dbToolsDetailsJsonList[dbToolsDetailsIndex].AsObject());
    }
    m_dbToolsDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scheduledOperations")) {
    Aws::Utils::Array<JsonView> scheduledOperationsJsonList = jsonValue.GetArray("scheduledOperations");
    for (unsigned scheduledOperationsIndex = 0; scheduledOperationsIndex < scheduledOperationsJsonList.GetLength();
         ++scheduledOperationsIndex) {
      m_scheduledOperations.push_back(scheduledOperationsJsonList[scheduledOperationsIndex].AsObject());
    }
    m_scheduledOperationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourcePoolLeaderId")) {
    m_resourcePoolLeaderId = jsonValue.GetString("resourcePoolLeaderId");
    m_resourcePoolLeaderIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("computeCount")) {
    m_computeCount = jsonValue.GetDouble("computeCount");
    m_computeCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("computeModel")) {
    m_computeModel = ComputeModelMapper::GetComputeModelForName(jsonValue.GetString("computeModel"));
    m_computeModelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cpuCoreCount")) {
    m_cpuCoreCount = jsonValue.GetInteger("cpuCoreCount");
    m_cpuCoreCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("memoryPerOracleComputeUnitInGBs")) {
    m_memoryPerOracleComputeUnitInGBs = jsonValue.GetInteger("memoryPerOracleComputeUnitInGBs");
    m_memoryPerOracleComputeUnitInGBsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("provisionableCpus")) {
    Aws::Utils::Array<JsonView> provisionableCpusJsonList = jsonValue.GetArray("provisionableCpus");
    for (unsigned provisionableCpusIndex = 0; provisionableCpusIndex < provisionableCpusJsonList.GetLength(); ++provisionableCpusIndex) {
      m_provisionableCpus.push_back(provisionableCpusJsonList[provisionableCpusIndex].AsInteger());
    }
    m_provisionableCpusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("isAutoScalingEnabled")) {
    m_isAutoScalingEnabled = jsonValue.GetBool("isAutoScalingEnabled");
    m_isAutoScalingEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dataStorageSizeInTBs")) {
    m_dataStorageSizeInTBs = jsonValue.GetDouble("dataStorageSizeInTBs");
    m_dataStorageSizeInTBsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dataStorageSizeInGBs")) {
    m_dataStorageSizeInGBs = jsonValue.GetInteger("dataStorageSizeInGBs");
    m_dataStorageSizeInGBsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("usedDataStorageSizeInTBs")) {
    m_usedDataStorageSizeInTBs = jsonValue.GetDouble("usedDataStorageSizeInTBs");
    m_usedDataStorageSizeInTBsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("usedDataStorageSizeInGBs")) {
    m_usedDataStorageSizeInGBs = jsonValue.GetInteger("usedDataStorageSizeInGBs");
    m_usedDataStorageSizeInGBsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("actualUsedDataStorageSizeInTBs")) {
    m_actualUsedDataStorageSizeInTBs = jsonValue.GetDouble("actualUsedDataStorageSizeInTBs");
    m_actualUsedDataStorageSizeInTBsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("allocatedStorageSizeInTBs")) {
    m_allocatedStorageSizeInTBs = jsonValue.GetDouble("allocatedStorageSizeInTBs");
    m_allocatedStorageSizeInTBsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inMemoryAreaInGBs")) {
    m_inMemoryAreaInGBs = jsonValue.GetInteger("inMemoryAreaInGBs");
    m_inMemoryAreaInGBsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("isAutoScalingForStorageEnabled")) {
    m_isAutoScalingForStorageEnabled = jsonValue.GetBool("isAutoScalingForStorageEnabled");
    m_isAutoScalingForStorageEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("odbNetworkId")) {
    m_odbNetworkId = jsonValue.GetString("odbNetworkId");
    m_odbNetworkIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("odbNetworkArn")) {
    m_odbNetworkArn = jsonValue.GetString("odbNetworkArn");
    m_odbNetworkArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("privateEndpoint")) {
    m_privateEndpoint = jsonValue.GetString("privateEndpoint");
    m_privateEndpointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("privateEndpointIp")) {
    m_privateEndpointIp = jsonValue.GetString("privateEndpointIp");
    m_privateEndpointIpHasBeenSet = true;
  }
  if (jsonValue.ValueExists("privateEndpointLabel")) {
    m_privateEndpointLabel = jsonValue.GetString("privateEndpointLabel");
    m_privateEndpointLabelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("allowlistedIps")) {
    Aws::Utils::Array<JsonView> allowlistedIpsJsonList = jsonValue.GetArray("allowlistedIps");
    for (unsigned allowlistedIpsIndex = 0; allowlistedIpsIndex < allowlistedIpsJsonList.GetLength(); ++allowlistedIpsIndex) {
      m_allowlistedIps.push_back(allowlistedIpsJsonList[allowlistedIpsIndex].AsString());
    }
    m_allowlistedIpsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("standbyAllowlistedIps")) {
    Aws::Utils::Array<JsonView> standbyAllowlistedIpsJsonList = jsonValue.GetArray("standbyAllowlistedIps");
    for (unsigned standbyAllowlistedIpsIndex = 0; standbyAllowlistedIpsIndex < standbyAllowlistedIpsJsonList.GetLength();
         ++standbyAllowlistedIpsIndex) {
      m_standbyAllowlistedIps.push_back(standbyAllowlistedIpsJsonList[standbyAllowlistedIpsIndex].AsString());
    }
    m_standbyAllowlistedIpsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("standbyAllowlistedIpsSource")) {
    m_standbyAllowlistedIpsSource =
        StandbyAllowlistedIpsSourceMapper::GetStandbyAllowlistedIpsSourceForName(jsonValue.GetString("standbyAllowlistedIpsSource"));
    m_standbyAllowlistedIpsSourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("isLocalDataGuardEnabled")) {
    m_isLocalDataGuardEnabled = jsonValue.GetBool("isLocalDataGuardEnabled");
    m_isLocalDataGuardEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("isRemoteDataGuardEnabled")) {
    m_isRemoteDataGuardEnabled = jsonValue.GetBool("isRemoteDataGuardEnabled");
    m_isRemoteDataGuardEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("localDisasterRecoveryType")) {
    m_localDisasterRecoveryType =
        DisasterRecoveryTypeMapper::GetDisasterRecoveryTypeForName(jsonValue.GetString("localDisasterRecoveryType"));
    m_localDisasterRecoveryTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("role")) {
    m_role = DataGuardRoleMapper::GetDataGuardRoleForName(jsonValue.GetString("role"));
    m_roleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("peerDbIds")) {
    Aws::Utils::Array<JsonView> peerDbIdsJsonList = jsonValue.GetArray("peerDbIds");
    for (unsigned peerDbIdsIndex = 0; peerDbIdsIndex < peerDbIdsJsonList.GetLength(); ++peerDbIdsIndex) {
      m_peerDbIds.push_back(peerDbIdsJsonList[peerDbIdsIndex].AsString());
    }
    m_peerDbIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failedDataRecoveryInSeconds")) {
    m_failedDataRecoveryInSeconds = jsonValue.GetInteger("failedDataRecoveryInSeconds");
    m_failedDataRecoveryInSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("localAdgAutoFailoverMaxDataLossLimit")) {
    m_localAdgAutoFailoverMaxDataLossLimit = jsonValue.GetInteger("localAdgAutoFailoverMaxDataLossLimit");
    m_localAdgAutoFailoverMaxDataLossLimitHasBeenSet = true;
  }
  if (jsonValue.ValueExists("remoteDisasterRecoveryConfiguration")) {
    m_remoteDisasterRecoveryConfiguration = jsonValue.GetObject("remoteDisasterRecoveryConfiguration");
    m_remoteDisasterRecoveryConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("isRefreshableClone")) {
    m_isRefreshableClone = jsonValue.GetBool("isRefreshableClone");
    m_isRefreshableCloneHasBeenSet = true;
  }
  if (jsonValue.ValueExists("refreshableMode")) {
    m_refreshableMode = RefreshableModeMapper::GetRefreshableModeForName(jsonValue.GetString("refreshableMode"));
    m_refreshableModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("refreshableStatus")) {
    m_refreshableStatus = RefreshableStatusMapper::GetRefreshableStatusForName(jsonValue.GetString("refreshableStatus"));
    m_refreshableStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("autoRefreshFrequencyInSeconds")) {
    m_autoRefreshFrequencyInSeconds = jsonValue.GetInteger("autoRefreshFrequencyInSeconds");
    m_autoRefreshFrequencyInSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("autoRefreshPointLagInSeconds")) {
    m_autoRefreshPointLagInSeconds = jsonValue.GetInteger("autoRefreshPointLagInSeconds");
    m_autoRefreshPointLagInSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("isReconnectCloneEnabled")) {
    m_isReconnectCloneEnabled = jsonValue.GetBool("isReconnectCloneEnabled");
    m_isReconnectCloneEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloneTableSpaceList")) {
    Aws::Utils::Array<JsonView> cloneTableSpaceListJsonList = jsonValue.GetArray("cloneTableSpaceList");
    for (unsigned cloneTableSpaceListIndex = 0; cloneTableSpaceListIndex < cloneTableSpaceListJsonList.GetLength();
         ++cloneTableSpaceListIndex) {
      m_cloneTableSpaceList.push_back(cloneTableSpaceListJsonList[cloneTableSpaceListIndex].AsInteger());
    }
    m_cloneTableSpaceListHasBeenSet = true;
  }
  if (jsonValue.ValueExists("backupRetentionPeriodInDays")) {
    m_backupRetentionPeriodInDays = jsonValue.GetInteger("backupRetentionPeriodInDays");
    m_backupRetentionPeriodInDaysHasBeenSet = true;
  }
  if (jsonValue.ValueExists("longTermBackupSchedule")) {
    m_longTermBackupSchedule = jsonValue.GetObject("longTermBackupSchedule");
    m_longTermBackupScheduleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("isBackupRetentionLocked")) {
    m_isBackupRetentionLocked = jsonValue.GetBool("isBackupRetentionLocked");
    m_isBackupRetentionLockedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalBackupStorageSizeInGBs")) {
    m_totalBackupStorageSizeInGBs = jsonValue.GetDouble("totalBackupStorageSizeInGBs");
    m_totalBackupStorageSizeInGBsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourcePoolSummary")) {
    m_resourcePoolSummary = jsonValue.GetObject("resourcePoolSummary");
    m_resourcePoolSummaryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("encryptionSummary")) {
    m_encryptionSummary = jsonValue.GetObject("encryptionSummary");
    m_encryptionSummaryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeOfLastBackup")) {
    m_timeOfLastBackup = jsonValue.GetString("timeOfLastBackup");
    m_timeOfLastBackupHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeMaintenanceBegin")) {
    m_timeMaintenanceBegin = jsonValue.GetString("timeMaintenanceBegin");
    m_timeMaintenanceBeginHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeMaintenanceEnd")) {
    m_timeMaintenanceEnd = jsonValue.GetString("timeMaintenanceEnd");
    m_timeMaintenanceEndHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeLocalDataGuardEnabled")) {
    m_timeLocalDataGuardEnabled = jsonValue.GetString("timeLocalDataGuardEnabled");
    m_timeLocalDataGuardEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeDataGuardRoleChanged")) {
    m_timeDataGuardRoleChanged = jsonValue.GetString("timeDataGuardRoleChanged");
    m_timeDataGuardRoleChangedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeOfLastSwitchover")) {
    m_timeOfLastSwitchover = jsonValue.GetString("timeOfLastSwitchover");
    m_timeOfLastSwitchoverHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeOfLastFailover")) {
    m_timeOfLastFailover = jsonValue.GetString("timeOfLastFailover");
    m_timeOfLastFailoverHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeOfLastRefresh")) {
    m_timeOfLastRefresh = jsonValue.GetString("timeOfLastRefresh");
    m_timeOfLastRefreshHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeOfLastRefreshPoint")) {
    m_timeOfLastRefreshPoint = jsonValue.GetString("timeOfLastRefreshPoint");
    m_timeOfLastRefreshPointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeOfNextRefresh")) {
    m_timeOfNextRefresh = jsonValue.GetString("timeOfNextRefresh");
    m_timeOfNextRefreshHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeOfAutoRefreshStart")) {
    m_timeOfAutoRefreshStart = jsonValue.GetString("timeOfAutoRefreshStart");
    m_timeOfAutoRefreshStartHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeDeletionOfFreeAutonomousDatabase")) {
    m_timeDeletionOfFreeAutonomousDatabase = jsonValue.GetString("timeDeletionOfFreeAutonomousDatabase");
    m_timeDeletionOfFreeAutonomousDatabaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeReclamationOfFreeAutonomousDatabase")) {
    m_timeReclamationOfFreeAutonomousDatabase = jsonValue.GetString("timeReclamationOfFreeAutonomousDatabase");
    m_timeReclamationOfFreeAutonomousDatabaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeDisasterRecoveryRoleChanged")) {
    m_timeDisasterRecoveryRoleChanged = jsonValue.GetString("timeDisasterRecoveryRoleChanged");
    m_timeDisasterRecoveryRoleChangedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeUntilReconnectCloneEnabled")) {
    m_timeUntilReconnectCloneEnabled = jsonValue.GetString("timeUntilReconnectCloneEnabled");
    m_timeUntilReconnectCloneEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("nextLongTermBackupTimeStamp")) {
    m_nextLongTermBackupTimeStamp = jsonValue.GetString("nextLongTermBackupTimeStamp");
    m_nextLongTermBackupTimeStampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeUndeleted")) {
    m_timeUndeleted = jsonValue.GetString("timeUndeleted");
    m_timeUndeletedHasBeenSet = true;
  }
  return *this;
}

JsonValue AutonomousDatabaseSummary::Jsonize() const {
  JsonValue payload;

  if (m_autonomousDatabaseIdHasBeenSet) {
    payload.WithString("autonomousDatabaseId", m_autonomousDatabaseId);
  }

  if (m_autonomousDatabaseArnHasBeenSet) {
    payload.WithString("autonomousDatabaseArn", m_autonomousDatabaseArn);
  }

  if (m_ociResourceAnchorNameHasBeenSet) {
    payload.WithString("ociResourceAnchorName", m_ociResourceAnchorName);
  }

  if (m_percentProgressHasBeenSet) {
    payload.WithDouble("percentProgress", m_percentProgress);
  }

  if (m_ocidHasBeenSet) {
    payload.WithString("ocid", m_ocid);
  }

  if (m_ociUrlHasBeenSet) {
    payload.WithString("ociUrl", m_ociUrl);
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("displayName", m_displayName);
  }

  if (m_dbNameHasBeenSet) {
    payload.WithString("dbName", m_dbName);
  }

  if (m_sourceIdHasBeenSet) {
    payload.WithString("sourceId", m_sourceId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", AutonomousDatabaseResourceStatusMapper::GetNameForAutonomousDatabaseResourceStatus(m_status));
  }

  if (m_statusReasonHasBeenSet) {
    payload.WithString("statusReason", m_statusReason);
  }

  if (m_databaseTypeHasBeenSet) {
    payload.WithString("databaseType", DatabaseTypeMapper::GetNameForDatabaseType(m_databaseType));
  }

  if (m_dbVersionHasBeenSet) {
    payload.WithString("dbVersion", m_dbVersion);
  }

  if (m_dbWorkloadHasBeenSet) {
    payload.WithString("dbWorkload", DbWorkloadMapper::GetNameForDbWorkload(m_dbWorkload));
  }

  if (m_characterSetHasBeenSet) {
    payload.WithString("characterSet", m_characterSet);
  }

  if (m_ncharacterSetHasBeenSet) {
    payload.WithString("ncharacterSet", m_ncharacterSet);
  }

  if (m_databaseEditionHasBeenSet) {
    payload.WithString("databaseEdition", DatabaseEditionMapper::GetNameForDatabaseEdition(m_databaseEdition));
  }

  if (m_licenseModelHasBeenSet) {
    payload.WithString("licenseModel", LicenseModelMapper::GetNameForLicenseModel(m_licenseModel));
  }

  if (m_openModeHasBeenSet) {
    payload.WithString("openMode", OpenModeMapper::GetNameForOpenMode(m_openMode));
  }

  if (m_permissionLevelHasBeenSet) {
    payload.WithString("permissionLevel", PermissionLevelMapper::GetNameForPermissionLevel(m_permissionLevel));
  }

  if (m_isMtlsConnectionRequiredHasBeenSet) {
    payload.WithBool("isMtlsConnectionRequired", m_isMtlsConnectionRequired);
  }

  if (m_autonomousMaintenanceScheduleTypeHasBeenSet) {
    payload.WithString(
        "autonomousMaintenanceScheduleType",
        AutonomousMaintenanceScheduleTypeMapper::GetNameForAutonomousMaintenanceScheduleType(m_autonomousMaintenanceScheduleType));
  }

  if (m_netServicesArchitectureHasBeenSet) {
    payload.WithString("netServicesArchitecture",
                       NetServicesArchitectureMapper::GetNameForNetServicesArchitecture(m_netServicesArchitecture));
  }

  if (m_availableUpgradeVersionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> availableUpgradeVersionsJsonList(m_availableUpgradeVersions.size());
    for (unsigned availableUpgradeVersionsIndex = 0; availableUpgradeVersionsIndex < availableUpgradeVersionsJsonList.GetLength();
         ++availableUpgradeVersionsIndex) {
      availableUpgradeVersionsJsonList[availableUpgradeVersionsIndex].AsString(m_availableUpgradeVersions[availableUpgradeVersionsIndex]);
    }
    payload.WithArray("availableUpgradeVersions", std::move(availableUpgradeVersionsJsonList));
  }

  if (m_byolComputeCountLimitHasBeenSet) {
    payload.WithInteger("byolComputeCountLimit", m_byolComputeCountLimit);
  }

  if (m_connectionStringDetailsHasBeenSet) {
    payload.WithObject("connectionStringDetails", m_connectionStringDetails.Jsonize());
  }

  if (m_serviceConsoleUrlHasBeenSet) {
    payload.WithString("serviceConsoleUrl", m_serviceConsoleUrl);
  }

  if (m_sqlWebDeveloperUrlHasBeenSet) {
    payload.WithString("sqlWebDeveloperUrl", m_sqlWebDeveloperUrl);
  }

  if (m_customerContactsHasBeenSet) {
    Aws::Utils::Array<JsonValue> customerContactsJsonList(m_customerContacts.size());
    for (unsigned customerContactsIndex = 0; customerContactsIndex < customerContactsJsonList.GetLength(); ++customerContactsIndex) {
      customerContactsJsonList[customerContactsIndex].AsObject(m_customerContacts[customerContactsIndex].Jsonize());
    }
    payload.WithArray("customerContacts", std::move(customerContactsJsonList));
  }

  if (m_apexDetailsHasBeenSet) {
    payload.WithObject("apexDetails", m_apexDetails.Jsonize());
  }

  if (m_standbyDbHasBeenSet) {
    payload.WithObject("standbyDb", m_standbyDb.Jsonize());
  }

  if (m_localStandbyDbHasBeenSet) {
    payload.WithObject("localStandbyDb", m_localStandbyDb.Jsonize());
  }

  if (m_dataSafeStatusHasBeenSet) {
    payload.WithString("dataSafeStatus", DataSafeStatusMapper::GetNameForDataSafeStatus(m_dataSafeStatus));
  }

  if (m_databaseManagementStatusHasBeenSet) {
    payload.WithString("databaseManagementStatus",
                       DatabaseManagementStatusMapper::GetNameForDatabaseManagementStatus(m_databaseManagementStatus));
  }

  if (m_operationsInsightsStatusHasBeenSet) {
    payload.WithString("operationsInsightsStatus",
                       OperationsInsightsStatusMapper::GetNameForOperationsInsightsStatus(m_operationsInsightsStatus));
  }

  if (m_availabilityZoneHasBeenSet) {
    payload.WithString("availabilityZone", m_availabilityZone);
  }

  if (m_availabilityZoneIdHasBeenSet) {
    payload.WithString("availabilityZoneId", m_availabilityZoneId);
  }

  if (m_maintenanceTargetComponentHasBeenSet) {
    payload.WithString("maintenanceTargetComponent", m_maintenanceTargetComponent);
  }

  if (m_connectionUrlsHasBeenSet) {
    payload.WithObject("connectionUrls", m_connectionUrls.Jsonize());
  }

  if (m_dbToolsDetailsHasBeenSet) {
    Aws::Utils::Array<JsonValue> dbToolsDetailsJsonList(m_dbToolsDetails.size());
    for (unsigned dbToolsDetailsIndex = 0; dbToolsDetailsIndex < dbToolsDetailsJsonList.GetLength(); ++dbToolsDetailsIndex) {
      dbToolsDetailsJsonList[dbToolsDetailsIndex].AsObject(m_dbToolsDetails[dbToolsDetailsIndex].Jsonize());
    }
    payload.WithArray("dbToolsDetails", std::move(dbToolsDetailsJsonList));
  }

  if (m_scheduledOperationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> scheduledOperationsJsonList(m_scheduledOperations.size());
    for (unsigned scheduledOperationsIndex = 0; scheduledOperationsIndex < scheduledOperationsJsonList.GetLength();
         ++scheduledOperationsIndex) {
      scheduledOperationsJsonList[scheduledOperationsIndex].AsObject(m_scheduledOperations[scheduledOperationsIndex].Jsonize());
    }
    payload.WithArray("scheduledOperations", std::move(scheduledOperationsJsonList));
  }

  if (m_resourcePoolLeaderIdHasBeenSet) {
    payload.WithString("resourcePoolLeaderId", m_resourcePoolLeaderId);
  }

  if (m_computeCountHasBeenSet) {
    payload.WithDouble("computeCount", m_computeCount);
  }

  if (m_computeModelHasBeenSet) {
    payload.WithString("computeModel", ComputeModelMapper::GetNameForComputeModel(m_computeModel));
  }

  if (m_cpuCoreCountHasBeenSet) {
    payload.WithInteger("cpuCoreCount", m_cpuCoreCount);
  }

  if (m_memoryPerOracleComputeUnitInGBsHasBeenSet) {
    payload.WithInteger("memoryPerOracleComputeUnitInGBs", m_memoryPerOracleComputeUnitInGBs);
  }

  if (m_provisionableCpusHasBeenSet) {
    Aws::Utils::Array<JsonValue> provisionableCpusJsonList(m_provisionableCpus.size());
    for (unsigned provisionableCpusIndex = 0; provisionableCpusIndex < provisionableCpusJsonList.GetLength(); ++provisionableCpusIndex) {
      provisionableCpusJsonList[provisionableCpusIndex].AsInteger(m_provisionableCpus[provisionableCpusIndex]);
    }
    payload.WithArray("provisionableCpus", std::move(provisionableCpusJsonList));
  }

  if (m_isAutoScalingEnabledHasBeenSet) {
    payload.WithBool("isAutoScalingEnabled", m_isAutoScalingEnabled);
  }

  if (m_dataStorageSizeInTBsHasBeenSet) {
    payload.WithDouble("dataStorageSizeInTBs", m_dataStorageSizeInTBs);
  }

  if (m_dataStorageSizeInGBsHasBeenSet) {
    payload.WithInteger("dataStorageSizeInGBs", m_dataStorageSizeInGBs);
  }

  if (m_usedDataStorageSizeInTBsHasBeenSet) {
    payload.WithDouble("usedDataStorageSizeInTBs", m_usedDataStorageSizeInTBs);
  }

  if (m_usedDataStorageSizeInGBsHasBeenSet) {
    payload.WithInteger("usedDataStorageSizeInGBs", m_usedDataStorageSizeInGBs);
  }

  if (m_actualUsedDataStorageSizeInTBsHasBeenSet) {
    payload.WithDouble("actualUsedDataStorageSizeInTBs", m_actualUsedDataStorageSizeInTBs);
  }

  if (m_allocatedStorageSizeInTBsHasBeenSet) {
    payload.WithDouble("allocatedStorageSizeInTBs", m_allocatedStorageSizeInTBs);
  }

  if (m_inMemoryAreaInGBsHasBeenSet) {
    payload.WithInteger("inMemoryAreaInGBs", m_inMemoryAreaInGBs);
  }

  if (m_isAutoScalingForStorageEnabledHasBeenSet) {
    payload.WithBool("isAutoScalingForStorageEnabled", m_isAutoScalingForStorageEnabled);
  }

  if (m_odbNetworkIdHasBeenSet) {
    payload.WithString("odbNetworkId", m_odbNetworkId);
  }

  if (m_odbNetworkArnHasBeenSet) {
    payload.WithString("odbNetworkArn", m_odbNetworkArn);
  }

  if (m_privateEndpointHasBeenSet) {
    payload.WithString("privateEndpoint", m_privateEndpoint);
  }

  if (m_privateEndpointIpHasBeenSet) {
    payload.WithString("privateEndpointIp", m_privateEndpointIp);
  }

  if (m_privateEndpointLabelHasBeenSet) {
    payload.WithString("privateEndpointLabel", m_privateEndpointLabel);
  }

  if (m_allowlistedIpsHasBeenSet) {
    Aws::Utils::Array<JsonValue> allowlistedIpsJsonList(m_allowlistedIps.size());
    for (unsigned allowlistedIpsIndex = 0; allowlistedIpsIndex < allowlistedIpsJsonList.GetLength(); ++allowlistedIpsIndex) {
      allowlistedIpsJsonList[allowlistedIpsIndex].AsString(m_allowlistedIps[allowlistedIpsIndex]);
    }
    payload.WithArray("allowlistedIps", std::move(allowlistedIpsJsonList));
  }

  if (m_standbyAllowlistedIpsHasBeenSet) {
    Aws::Utils::Array<JsonValue> standbyAllowlistedIpsJsonList(m_standbyAllowlistedIps.size());
    for (unsigned standbyAllowlistedIpsIndex = 0; standbyAllowlistedIpsIndex < standbyAllowlistedIpsJsonList.GetLength();
         ++standbyAllowlistedIpsIndex) {
      standbyAllowlistedIpsJsonList[standbyAllowlistedIpsIndex].AsString(m_standbyAllowlistedIps[standbyAllowlistedIpsIndex]);
    }
    payload.WithArray("standbyAllowlistedIps", std::move(standbyAllowlistedIpsJsonList));
  }

  if (m_standbyAllowlistedIpsSourceHasBeenSet) {
    payload.WithString("standbyAllowlistedIpsSource",
                       StandbyAllowlistedIpsSourceMapper::GetNameForStandbyAllowlistedIpsSource(m_standbyAllowlistedIpsSource));
  }

  if (m_isLocalDataGuardEnabledHasBeenSet) {
    payload.WithBool("isLocalDataGuardEnabled", m_isLocalDataGuardEnabled);
  }

  if (m_isRemoteDataGuardEnabledHasBeenSet) {
    payload.WithBool("isRemoteDataGuardEnabled", m_isRemoteDataGuardEnabled);
  }

  if (m_localDisasterRecoveryTypeHasBeenSet) {
    payload.WithString("localDisasterRecoveryType",
                       DisasterRecoveryTypeMapper::GetNameForDisasterRecoveryType(m_localDisasterRecoveryType));
  }

  if (m_roleHasBeenSet) {
    payload.WithString("role", DataGuardRoleMapper::GetNameForDataGuardRole(m_role));
  }

  if (m_peerDbIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> peerDbIdsJsonList(m_peerDbIds.size());
    for (unsigned peerDbIdsIndex = 0; peerDbIdsIndex < peerDbIdsJsonList.GetLength(); ++peerDbIdsIndex) {
      peerDbIdsJsonList[peerDbIdsIndex].AsString(m_peerDbIds[peerDbIdsIndex]);
    }
    payload.WithArray("peerDbIds", std::move(peerDbIdsJsonList));
  }

  if (m_failedDataRecoveryInSecondsHasBeenSet) {
    payload.WithInteger("failedDataRecoveryInSeconds", m_failedDataRecoveryInSeconds);
  }

  if (m_localAdgAutoFailoverMaxDataLossLimitHasBeenSet) {
    payload.WithInteger("localAdgAutoFailoverMaxDataLossLimit", m_localAdgAutoFailoverMaxDataLossLimit);
  }

  if (m_remoteDisasterRecoveryConfigurationHasBeenSet) {
    payload.WithObject("remoteDisasterRecoveryConfiguration", m_remoteDisasterRecoveryConfiguration.Jsonize());
  }

  if (m_isRefreshableCloneHasBeenSet) {
    payload.WithBool("isRefreshableClone", m_isRefreshableClone);
  }

  if (m_refreshableModeHasBeenSet) {
    payload.WithString("refreshableMode", RefreshableModeMapper::GetNameForRefreshableMode(m_refreshableMode));
  }

  if (m_refreshableStatusHasBeenSet) {
    payload.WithString("refreshableStatus", RefreshableStatusMapper::GetNameForRefreshableStatus(m_refreshableStatus));
  }

  if (m_autoRefreshFrequencyInSecondsHasBeenSet) {
    payload.WithInteger("autoRefreshFrequencyInSeconds", m_autoRefreshFrequencyInSeconds);
  }

  if (m_autoRefreshPointLagInSecondsHasBeenSet) {
    payload.WithInteger("autoRefreshPointLagInSeconds", m_autoRefreshPointLagInSeconds);
  }

  if (m_isReconnectCloneEnabledHasBeenSet) {
    payload.WithBool("isReconnectCloneEnabled", m_isReconnectCloneEnabled);
  }

  if (m_cloneTableSpaceListHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloneTableSpaceListJsonList(m_cloneTableSpaceList.size());
    for (unsigned cloneTableSpaceListIndex = 0; cloneTableSpaceListIndex < cloneTableSpaceListJsonList.GetLength();
         ++cloneTableSpaceListIndex) {
      cloneTableSpaceListJsonList[cloneTableSpaceListIndex].AsInteger(m_cloneTableSpaceList[cloneTableSpaceListIndex]);
    }
    payload.WithArray("cloneTableSpaceList", std::move(cloneTableSpaceListJsonList));
  }

  if (m_backupRetentionPeriodInDaysHasBeenSet) {
    payload.WithInteger("backupRetentionPeriodInDays", m_backupRetentionPeriodInDays);
  }

  if (m_longTermBackupScheduleHasBeenSet) {
    payload.WithObject("longTermBackupSchedule", m_longTermBackupSchedule.Jsonize());
  }

  if (m_isBackupRetentionLockedHasBeenSet) {
    payload.WithBool("isBackupRetentionLocked", m_isBackupRetentionLocked);
  }

  if (m_totalBackupStorageSizeInGBsHasBeenSet) {
    payload.WithDouble("totalBackupStorageSizeInGBs", m_totalBackupStorageSizeInGBs);
  }

  if (m_resourcePoolSummaryHasBeenSet) {
    payload.WithObject("resourcePoolSummary", m_resourcePoolSummary.Jsonize());
  }

  if (m_encryptionSummaryHasBeenSet) {
    payload.WithObject("encryptionSummary", m_encryptionSummary.Jsonize());
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_timeOfLastBackupHasBeenSet) {
    payload.WithString("timeOfLastBackup", m_timeOfLastBackup.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_timeMaintenanceBeginHasBeenSet) {
    payload.WithString("timeMaintenanceBegin", m_timeMaintenanceBegin.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_timeMaintenanceEndHasBeenSet) {
    payload.WithString("timeMaintenanceEnd", m_timeMaintenanceEnd.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_timeLocalDataGuardEnabledHasBeenSet) {
    payload.WithString("timeLocalDataGuardEnabled", m_timeLocalDataGuardEnabled.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_timeDataGuardRoleChangedHasBeenSet) {
    payload.WithString("timeDataGuardRoleChanged", m_timeDataGuardRoleChanged.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_timeOfLastSwitchoverHasBeenSet) {
    payload.WithString("timeOfLastSwitchover", m_timeOfLastSwitchover.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_timeOfLastFailoverHasBeenSet) {
    payload.WithString("timeOfLastFailover", m_timeOfLastFailover.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_timeOfLastRefreshHasBeenSet) {
    payload.WithString("timeOfLastRefresh", m_timeOfLastRefresh.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_timeOfLastRefreshPointHasBeenSet) {
    payload.WithString("timeOfLastRefreshPoint", m_timeOfLastRefreshPoint.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_timeOfNextRefreshHasBeenSet) {
    payload.WithString("timeOfNextRefresh", m_timeOfNextRefresh.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_timeOfAutoRefreshStartHasBeenSet) {
    payload.WithString("timeOfAutoRefreshStart", m_timeOfAutoRefreshStart.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_timeDeletionOfFreeAutonomousDatabaseHasBeenSet) {
    payload.WithString("timeDeletionOfFreeAutonomousDatabase",
                       m_timeDeletionOfFreeAutonomousDatabase.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_timeReclamationOfFreeAutonomousDatabaseHasBeenSet) {
    payload.WithString("timeReclamationOfFreeAutonomousDatabase",
                       m_timeReclamationOfFreeAutonomousDatabase.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_timeDisasterRecoveryRoleChangedHasBeenSet) {
    payload.WithString("timeDisasterRecoveryRoleChanged", m_timeDisasterRecoveryRoleChanged.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_timeUntilReconnectCloneEnabledHasBeenSet) {
    payload.WithString("timeUntilReconnectCloneEnabled", m_timeUntilReconnectCloneEnabled.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_nextLongTermBackupTimeStampHasBeenSet) {
    payload.WithString("nextLongTermBackupTimeStamp", m_nextLongTermBackupTimeStamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_timeUndeletedHasBeenSet) {
    payload.WithString("timeUndeleted", m_timeUndeleted.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
