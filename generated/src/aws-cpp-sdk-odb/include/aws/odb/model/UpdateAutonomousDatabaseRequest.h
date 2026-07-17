/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/odb/OdbRequest.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/AdminPasswordSource.h>
#include <aws/odb/model/AdminPasswordSourceConfigurationInput.h>
#include <aws/odb/model/AutonomousMaintenanceScheduleType.h>
#include <aws/odb/model/CustomerContact.h>
#include <aws/odb/model/DatabaseEdition.h>
#include <aws/odb/model/DatabaseTool.h>
#include <aws/odb/model/DbWorkload.h>
#include <aws/odb/model/EncryptionKeyConfigurationInput.h>
#include <aws/odb/model/EncryptionKeyProviderInput.h>
#include <aws/odb/model/LicenseModel.h>
#include <aws/odb/model/LongTermBackupSchedule.h>
#include <aws/odb/model/OpenMode.h>
#include <aws/odb/model/PermissionLevel.h>
#include <aws/odb/model/RefreshableMode.h>
#include <aws/odb/model/ResourcePoolSummary.h>
#include <aws/odb/model/ScheduledOperationDetails.h>
#include <aws/odb/model/StandbyAllowlistedIpsSource.h>

#include <utility>

namespace Aws {
namespace odb {
namespace Model {

/**
 */
class UpdateAutonomousDatabaseRequest : public OdbRequest {
 public:
  AWS_ODB_API UpdateAutonomousDatabaseRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateAutonomousDatabase"; }

  AWS_ODB_API Aws::String SerializePayload() const override;

  AWS_ODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the Autonomous Database to update.</p>
   */
  inline const Aws::String& GetAutonomousDatabaseId() const { return m_autonomousDatabaseId; }
  inline bool AutonomousDatabaseIdHasBeenSet() const { return m_autonomousDatabaseIdHasBeenSet; }
  template <typename AutonomousDatabaseIdT = Aws::String>
  void SetAutonomousDatabaseId(AutonomousDatabaseIdT&& value) {
    m_autonomousDatabaseIdHasBeenSet = true;
    m_autonomousDatabaseId = std::forward<AutonomousDatabaseIdT>(value);
  }
  template <typename AutonomousDatabaseIdT = Aws::String>
  UpdateAutonomousDatabaseRequest& WithAutonomousDatabaseId(AutonomousDatabaseIdT&& value) {
    SetAutonomousDatabaseId(std::forward<AutonomousDatabaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new password for the <code>ADMIN</code> user of the Autonomous
   * Database.</p>
   */
  inline const Aws::String& GetAdminPassword() const { return m_adminPassword; }
  inline bool AdminPasswordHasBeenSet() const { return m_adminPasswordHasBeenSet; }
  template <typename AdminPasswordT = Aws::String>
  void SetAdminPassword(AdminPasswordT&& value) {
    m_adminPasswordHasBeenSet = true;
    m_adminPassword = std::forward<AdminPasswordT>(value);
  }
  template <typename AdminPasswordT = Aws::String>
  UpdateAutonomousDatabaseRequest& WithAdminPassword(AdminPasswordT&& value) {
    SetAdminPassword(std::forward<AdminPasswordT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The compute capacity, in number of ECPUs or OCPUs, to assign to the
   * Autonomous Database.</p>
   */
  inline double GetComputeCount() const { return m_computeCount; }
  inline bool ComputeCountHasBeenSet() const { return m_computeCountHasBeenSet; }
  inline void SetComputeCount(double value) {
    m_computeCountHasBeenSet = true;
    m_computeCount = value;
  }
  inline UpdateAutonomousDatabaseRequest& WithComputeCount(double value) {
    SetComputeCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of CPU cores to allocate to the Autonomous Database.</p>
   */
  inline int GetCpuCoreCount() const { return m_cpuCoreCount; }
  inline bool CpuCoreCountHasBeenSet() const { return m_cpuCoreCountHasBeenSet; }
  inline void SetCpuCoreCount(int value) {
    m_cpuCoreCountHasBeenSet = true;
    m_cpuCoreCount = value;
  }
  inline UpdateAutonomousDatabaseRequest& WithCpuCoreCount(int value) {
    SetCpuCoreCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The size, in terabytes (TB), of the data volume to allocate for the
   * Autonomous Database.</p>
   */
  inline int GetDataStorageSizeInTBs() const { return m_dataStorageSizeInTBs; }
  inline bool DataStorageSizeInTBsHasBeenSet() const { return m_dataStorageSizeInTBsHasBeenSet; }
  inline void SetDataStorageSizeInTBs(int value) {
    m_dataStorageSizeInTBsHasBeenSet = true;
    m_dataStorageSizeInTBs = value;
  }
  inline UpdateAutonomousDatabaseRequest& WithDataStorageSizeInTBs(int value) {
    SetDataStorageSizeInTBs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The size, in gigabytes (GB), of the data volume to allocate for the
   * Autonomous Database.</p>
   */
  inline int GetDataStorageSizeInGBs() const { return m_dataStorageSizeInGBs; }
  inline bool DataStorageSizeInGBsHasBeenSet() const { return m_dataStorageSizeInGBsHasBeenSet; }
  inline void SetDataStorageSizeInGBs(int value) {
    m_dataStorageSizeInGBsHasBeenSet = true;
    m_dataStorageSizeInGBs = value;
  }
  inline UpdateAutonomousDatabaseRequest& WithDataStorageSizeInGBs(int value) {
    SetDataStorageSizeInGBs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new user-friendly name for the Autonomous Database.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  UpdateAutonomousDatabaseRequest& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new name of the Autonomous Database.</p>
   */
  inline const Aws::String& GetDbName() const { return m_dbName; }
  inline bool DbNameHasBeenSet() const { return m_dbNameHasBeenSet; }
  template <typename DbNameT = Aws::String>
  void SetDbName(DbNameT&& value) {
    m_dbNameHasBeenSet = true;
    m_dbName = std::forward<DbNameT>(value);
  }
  template <typename DbNameT = Aws::String>
  UpdateAutonomousDatabaseRequest& WithDbName(DbNameT&& value) {
    SetDbName(std::forward<DbNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Oracle Database software version to use for the Autonomous Database.</p>
   */
  inline const Aws::String& GetDbVersion() const { return m_dbVersion; }
  inline bool DbVersionHasBeenSet() const { return m_dbVersionHasBeenSet; }
  template <typename DbVersionT = Aws::String>
  void SetDbVersion(DbVersionT&& value) {
    m_dbVersionHasBeenSet = true;
    m_dbVersion = std::forward<DbVersionT>(value);
  }
  template <typename DbVersionT = Aws::String>
  UpdateAutonomousDatabaseRequest& WithDbVersion(DbVersionT&& value) {
    SetDbVersion(std::forward<DbVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The intended use of the Autonomous Database, such as transaction processing,
   * data warehouse, JSON database, or APEX.</p>
   */
  inline DbWorkload GetDbWorkload() const { return m_dbWorkload; }
  inline bool DbWorkloadHasBeenSet() const { return m_dbWorkloadHasBeenSet; }
  inline void SetDbWorkload(DbWorkload value) {
    m_dbWorkloadHasBeenSet = true;
    m_dbWorkload = value;
  }
  inline UpdateAutonomousDatabaseRequest& WithDbWorkload(DbWorkload value) {
    SetDbWorkload(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of database management tools to enable for the Autonomous
   * Database.</p>
   */
  inline const Aws::Vector<DatabaseTool>& GetDbToolsDetails() const { return m_dbToolsDetails; }
  inline bool DbToolsDetailsHasBeenSet() const { return m_dbToolsDetailsHasBeenSet; }
  template <typename DbToolsDetailsT = Aws::Vector<DatabaseTool>>
  void SetDbToolsDetails(DbToolsDetailsT&& value) {
    m_dbToolsDetailsHasBeenSet = true;
    m_dbToolsDetails = std::forward<DbToolsDetailsT>(value);
  }
  template <typename DbToolsDetailsT = Aws::Vector<DatabaseTool>>
  UpdateAutonomousDatabaseRequest& WithDbToolsDetails(DbToolsDetailsT&& value) {
    SetDbToolsDetails(std::forward<DbToolsDetailsT>(value));
    return *this;
  }
  template <typename DbToolsDetailsT = DatabaseTool>
  UpdateAutonomousDatabaseRequest& AddDbToolsDetails(DbToolsDetailsT&& value) {
    m_dbToolsDetailsHasBeenSet = true;
    m_dbToolsDetails.emplace_back(std::forward<DbToolsDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Oracle Database edition to apply to the Autonomous Database.</p>
   */
  inline DatabaseEdition GetDatabaseEdition() const { return m_databaseEdition; }
  inline bool DatabaseEditionHasBeenSet() const { return m_databaseEditionHasBeenSet; }
  inline void SetDatabaseEdition(DatabaseEdition value) {
    m_databaseEditionHasBeenSet = true;
    m_databaseEdition = value;
  }
  inline UpdateAutonomousDatabaseRequest& WithDatabaseEdition(DatabaseEdition value) {
    SetDatabaseEdition(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Oracle license model to apply to the Autonomous Database.</p>
   */
  inline LicenseModel GetLicenseModel() const { return m_licenseModel; }
  inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }
  inline void SetLicenseModel(LicenseModel value) {
    m_licenseModelHasBeenSet = true;
    m_licenseModel = value;
  }
  inline UpdateAutonomousDatabaseRequest& WithLicenseModel(LicenseModel value) {
    SetLicenseModel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to enable automatic scaling of the compute resources for
   * the Autonomous Database.</p>
   */
  inline bool GetIsAutoScalingEnabled() const { return m_isAutoScalingEnabled; }
  inline bool IsAutoScalingEnabledHasBeenSet() const { return m_isAutoScalingEnabledHasBeenSet; }
  inline void SetIsAutoScalingEnabled(bool value) {
    m_isAutoScalingEnabledHasBeenSet = true;
    m_isAutoScalingEnabled = value;
  }
  inline UpdateAutonomousDatabaseRequest& WithIsAutoScalingEnabled(bool value) {
    SetIsAutoScalingEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to enable automatic scaling of the storage for the
   * Autonomous Database.</p>
   */
  inline bool GetIsAutoScalingForStorageEnabled() const { return m_isAutoScalingForStorageEnabled; }
  inline bool IsAutoScalingForStorageEnabledHasBeenSet() const { return m_isAutoScalingForStorageEnabledHasBeenSet; }
  inline void SetIsAutoScalingForStorageEnabled(bool value) {
    m_isAutoScalingForStorageEnabledHasBeenSet = true;
    m_isAutoScalingForStorageEnabled = value;
  }
  inline UpdateAutonomousDatabaseRequest& WithIsAutoScalingForStorageEnabled(bool value) {
    SetIsAutoScalingForStorageEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to lock the backup retention period of the Autonomous
   * Database to prevent it from being shortened.</p>
   */
  inline bool GetIsBackupRetentionLocked() const { return m_isBackupRetentionLocked; }
  inline bool IsBackupRetentionLockedHasBeenSet() const { return m_isBackupRetentionLockedHasBeenSet; }
  inline void SetIsBackupRetentionLocked(bool value) {
    m_isBackupRetentionLockedHasBeenSet = true;
    m_isBackupRetentionLocked = value;
  }
  inline UpdateAutonomousDatabaseRequest& WithIsBackupRetentionLocked(bool value) {
    SetIsBackupRetentionLocked(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to enable local Oracle Data Guard for the Autonomous
   * Database.</p>
   */
  inline bool GetIsLocalDataGuardEnabled() const { return m_isLocalDataGuardEnabled; }
  inline bool IsLocalDataGuardEnabledHasBeenSet() const { return m_isLocalDataGuardEnabledHasBeenSet; }
  inline void SetIsLocalDataGuardEnabled(bool value) {
    m_isLocalDataGuardEnabledHasBeenSet = true;
    m_isLocalDataGuardEnabled = value;
  }
  inline UpdateAutonomousDatabaseRequest& WithIsLocalDataGuardEnabled(bool value) {
    SetIsLocalDataGuardEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether mutual TLS (mTLS) authentication is required to connect to
   * the Autonomous Database.</p>
   */
  inline bool GetIsMtlsConnectionRequired() const { return m_isMtlsConnectionRequired; }
  inline bool IsMtlsConnectionRequiredHasBeenSet() const { return m_isMtlsConnectionRequiredHasBeenSet; }
  inline void SetIsMtlsConnectionRequired(bool value) {
    m_isMtlsConnectionRequiredHasBeenSet = true;
    m_isMtlsConnectionRequired = value;
  }
  inline UpdateAutonomousDatabaseRequest& WithIsMtlsConnectionRequired(bool value) {
    SetIsMtlsConnectionRequired(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the Autonomous Database is a refreshable clone.</p>
   */
  inline bool GetIsRefreshableClone() const { return m_isRefreshableClone; }
  inline bool IsRefreshableCloneHasBeenSet() const { return m_isRefreshableCloneHasBeenSet; }
  inline void SetIsRefreshableClone(bool value) {
    m_isRefreshableCloneHasBeenSet = true;
    m_isRefreshableClone = value;
  }
  inline UpdateAutonomousDatabaseRequest& WithIsRefreshableClone(bool value) {
    SetIsRefreshableClone(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to disconnect the Autonomous Database from its peer
   * database.</p>
   */
  inline bool GetIsDisconnectPeer() const { return m_isDisconnectPeer; }
  inline bool IsDisconnectPeerHasBeenSet() const { return m_isDisconnectPeerHasBeenSet; }
  inline void SetIsDisconnectPeer(bool value) {
    m_isDisconnectPeerHasBeenSet = true;
    m_isDisconnectPeer = value;
  }
  inline UpdateAutonomousDatabaseRequest& WithIsDisconnectPeer(bool value) {
    SetIsDisconnectPeer(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The retention period, in days, for automatic backups of the Autonomous
   * Database.</p>
   */
  inline int GetBackupRetentionPeriodInDays() const { return m_backupRetentionPeriodInDays; }
  inline bool BackupRetentionPeriodInDaysHasBeenSet() const { return m_backupRetentionPeriodInDaysHasBeenSet; }
  inline void SetBackupRetentionPeriodInDays(int value) {
    m_backupRetentionPeriodInDaysHasBeenSet = true;
    m_backupRetentionPeriodInDays = value;
  }
  inline UpdateAutonomousDatabaseRequest& WithBackupRetentionPeriodInDays(int value) {
    SetBackupRetentionPeriodInDays(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of compute resources that you can allocate to the
   * Autonomous Database under the bring-your-own-license (BYOL) model.</p>
   */
  inline double GetByolComputeCountLimit() const { return m_byolComputeCountLimit; }
  inline bool ByolComputeCountLimitHasBeenSet() const { return m_byolComputeCountLimitHasBeenSet; }
  inline void SetByolComputeCountLimit(double value) {
    m_byolComputeCountLimitHasBeenSet = true;
    m_byolComputeCountLimit = value;
  }
  inline UpdateAutonomousDatabaseRequest& WithByolComputeCountLimit(double value) {
    SetByolComputeCountLimit(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum data loss limit, in seconds, for automatic failover to the local
   * Oracle Data Guard standby database.</p>
   */
  inline int GetLocalAdgAutoFailoverMaxDataLossLimit() const { return m_localAdgAutoFailoverMaxDataLossLimit; }
  inline bool LocalAdgAutoFailoverMaxDataLossLimitHasBeenSet() const { return m_localAdgAutoFailoverMaxDataLossLimitHasBeenSet; }
  inline void SetLocalAdgAutoFailoverMaxDataLossLimit(int value) {
    m_localAdgAutoFailoverMaxDataLossLimitHasBeenSet = true;
    m_localAdgAutoFailoverMaxDataLossLimit = value;
  }
  inline UpdateAutonomousDatabaseRequest& WithLocalAdgAutoFailoverMaxDataLossLimit(int value) {
    SetLocalAdgAutoFailoverMaxDataLossLimit(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maintenance schedule type for the Autonomous Database.</p>
   */
  inline AutonomousMaintenanceScheduleType GetAutonomousMaintenanceScheduleType() const { return m_autonomousMaintenanceScheduleType; }
  inline bool AutonomousMaintenanceScheduleTypeHasBeenSet() const { return m_autonomousMaintenanceScheduleTypeHasBeenSet; }
  inline void SetAutonomousMaintenanceScheduleType(AutonomousMaintenanceScheduleType value) {
    m_autonomousMaintenanceScheduleTypeHasBeenSet = true;
    m_autonomousMaintenanceScheduleType = value;
  }
  inline UpdateAutonomousDatabaseRequest& WithAutonomousMaintenanceScheduleType(AutonomousMaintenanceScheduleType value) {
    SetAutonomousMaintenanceScheduleType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of customer contacts to receive operational notifications from OCI
   * for the Autonomous Database.</p>
   */
  inline const Aws::Vector<CustomerContact>& GetCustomerContactsToSendToOCI() const { return m_customerContactsToSendToOCI; }
  inline bool CustomerContactsToSendToOCIHasBeenSet() const { return m_customerContactsToSendToOCIHasBeenSet; }
  template <typename CustomerContactsToSendToOCIT = Aws::Vector<CustomerContact>>
  void SetCustomerContactsToSendToOCI(CustomerContactsToSendToOCIT&& value) {
    m_customerContactsToSendToOCIHasBeenSet = true;
    m_customerContactsToSendToOCI = std::forward<CustomerContactsToSendToOCIT>(value);
  }
  template <typename CustomerContactsToSendToOCIT = Aws::Vector<CustomerContact>>
  UpdateAutonomousDatabaseRequest& WithCustomerContactsToSendToOCI(CustomerContactsToSendToOCIT&& value) {
    SetCustomerContactsToSendToOCI(std::forward<CustomerContactsToSendToOCIT>(value));
    return *this;
  }
  template <typename CustomerContactsToSendToOCIT = CustomerContact>
  UpdateAutonomousDatabaseRequest& AddCustomerContactsToSendToOCI(CustomerContactsToSendToOCIT&& value) {
    m_customerContactsToSendToOCIHasBeenSet = true;
    m_customerContactsToSendToOCI.emplace_back(std::forward<CustomerContactsToSendToOCIT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of scheduled start and stop times for the Autonomous Database.</p>
   */
  inline const Aws::Vector<ScheduledOperationDetails>& GetScheduledOperations() const { return m_scheduledOperations; }
  inline bool ScheduledOperationsHasBeenSet() const { return m_scheduledOperationsHasBeenSet; }
  template <typename ScheduledOperationsT = Aws::Vector<ScheduledOperationDetails>>
  void SetScheduledOperations(ScheduledOperationsT&& value) {
    m_scheduledOperationsHasBeenSet = true;
    m_scheduledOperations = std::forward<ScheduledOperationsT>(value);
  }
  template <typename ScheduledOperationsT = Aws::Vector<ScheduledOperationDetails>>
  UpdateAutonomousDatabaseRequest& WithScheduledOperations(ScheduledOperationsT&& value) {
    SetScheduledOperations(std::forward<ScheduledOperationsT>(value));
    return *this;
  }
  template <typename ScheduledOperationsT = ScheduledOperationDetails>
  UpdateAutonomousDatabaseRequest& AddScheduledOperations(ScheduledOperationsT&& value) {
    m_scheduledOperationsHasBeenSet = true;
    m_scheduledOperations.emplace_back(std::forward<ScheduledOperationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The long-term backup schedule for the Autonomous Database.</p>
   */
  inline const LongTermBackupSchedule& GetLongTermBackupSchedule() const { return m_longTermBackupSchedule; }
  inline bool LongTermBackupScheduleHasBeenSet() const { return m_longTermBackupScheduleHasBeenSet; }
  template <typename LongTermBackupScheduleT = LongTermBackupSchedule>
  void SetLongTermBackupSchedule(LongTermBackupScheduleT&& value) {
    m_longTermBackupScheduleHasBeenSet = true;
    m_longTermBackupSchedule = std::forward<LongTermBackupScheduleT>(value);
  }
  template <typename LongTermBackupScheduleT = LongTermBackupSchedule>
  UpdateAutonomousDatabaseRequest& WithLongTermBackupSchedule(LongTermBackupScheduleT&& value) {
    SetLongTermBackupSchedule(std::forward<LongTermBackupScheduleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The mode in which to open the Autonomous Database, either read-only or
   * read/write.</p>
   */
  inline OpenMode GetOpenMode() const { return m_openMode; }
  inline bool OpenModeHasBeenSet() const { return m_openModeHasBeenSet; }
  inline void SetOpenMode(OpenMode value) {
    m_openModeHasBeenSet = true;
    m_openMode = value;
  }
  inline UpdateAutonomousDatabaseRequest& WithOpenMode(OpenMode value) {
    SetOpenMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The permission level of the Autonomous Database.</p>
   */
  inline PermissionLevel GetPermissionLevel() const { return m_permissionLevel; }
  inline bool PermissionLevelHasBeenSet() const { return m_permissionLevelHasBeenSet; }
  inline void SetPermissionLevel(PermissionLevel value) {
    m_permissionLevelHasBeenSet = true;
    m_permissionLevel = value;
  }
  inline UpdateAutonomousDatabaseRequest& WithPermissionLevel(PermissionLevel value) {
    SetPermissionLevel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The refresh mode of the refreshable clone Autonomous Database.</p>
   */
  inline RefreshableMode GetRefreshableMode() const { return m_refreshableMode; }
  inline bool RefreshableModeHasBeenSet() const { return m_refreshableModeHasBeenSet; }
  inline void SetRefreshableMode(RefreshableMode value) {
    m_refreshableModeHasBeenSet = true;
    m_refreshableMode = value;
  }
  inline UpdateAutonomousDatabaseRequest& WithRefreshableMode(RefreshableMode value) {
    SetRefreshableMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The private endpoint IP address for the Autonomous Database.</p>
   */
  inline const Aws::String& GetPrivateEndpointIp() const { return m_privateEndpointIp; }
  inline bool PrivateEndpointIpHasBeenSet() const { return m_privateEndpointIpHasBeenSet; }
  template <typename PrivateEndpointIpT = Aws::String>
  void SetPrivateEndpointIp(PrivateEndpointIpT&& value) {
    m_privateEndpointIpHasBeenSet = true;
    m_privateEndpointIp = std::forward<PrivateEndpointIpT>(value);
  }
  template <typename PrivateEndpointIpT = Aws::String>
  UpdateAutonomousDatabaseRequest& WithPrivateEndpointIp(PrivateEndpointIpT&& value) {
    SetPrivateEndpointIp(std::forward<PrivateEndpointIpT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The private endpoint label for the Autonomous Database.</p>
   */
  inline const Aws::String& GetPrivateEndpointLabel() const { return m_privateEndpointLabel; }
  inline bool PrivateEndpointLabelHasBeenSet() const { return m_privateEndpointLabelHasBeenSet; }
  template <typename PrivateEndpointLabelT = Aws::String>
  void SetPrivateEndpointLabel(PrivateEndpointLabelT&& value) {
    m_privateEndpointLabelHasBeenSet = true;
    m_privateEndpointLabel = std::forward<PrivateEndpointLabelT>(value);
  }
  template <typename PrivateEndpointLabelT = Aws::String>
  UpdateAutonomousDatabaseRequest& WithPrivateEndpointLabel(PrivateEndpointLabelT&& value) {
    SetPrivateEndpointLabel(std::forward<PrivateEndpointLabelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the peer Autonomous Database.</p>
   */
  inline const Aws::String& GetPeerDbId() const { return m_peerDbId; }
  inline bool PeerDbIdHasBeenSet() const { return m_peerDbIdHasBeenSet; }
  template <typename PeerDbIdT = Aws::String>
  void SetPeerDbId(PeerDbIdT&& value) {
    m_peerDbIdHasBeenSet = true;
    m_peerDbId = std::forward<PeerDbIdT>(value);
  }
  template <typename PeerDbIdT = Aws::String>
  UpdateAutonomousDatabaseRequest& WithPeerDbId(PeerDbIdT&& value) {
    SetPeerDbId(std::forward<PeerDbIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the resource pool leader Autonomous Database.</p>
   */
  inline const Aws::String& GetResourcePoolLeaderId() const { return m_resourcePoolLeaderId; }
  inline bool ResourcePoolLeaderIdHasBeenSet() const { return m_resourcePoolLeaderIdHasBeenSet; }
  template <typename ResourcePoolLeaderIdT = Aws::String>
  void SetResourcePoolLeaderId(ResourcePoolLeaderIdT&& value) {
    m_resourcePoolLeaderIdHasBeenSet = true;
    m_resourcePoolLeaderId = std::forward<ResourcePoolLeaderIdT>(value);
  }
  template <typename ResourcePoolLeaderIdT = Aws::String>
  UpdateAutonomousDatabaseRequest& WithResourcePoolLeaderId(ResourcePoolLeaderIdT&& value) {
    SetResourcePoolLeaderId(std::forward<ResourcePoolLeaderIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration of the resource pool for the Autonomous Database.</p>
   */
  inline const ResourcePoolSummary& GetResourcePoolSummary() const { return m_resourcePoolSummary; }
  inline bool ResourcePoolSummaryHasBeenSet() const { return m_resourcePoolSummaryHasBeenSet; }
  template <typename ResourcePoolSummaryT = ResourcePoolSummary>
  void SetResourcePoolSummary(ResourcePoolSummaryT&& value) {
    m_resourcePoolSummaryHasBeenSet = true;
    m_resourcePoolSummary = std::forward<ResourcePoolSummaryT>(value);
  }
  template <typename ResourcePoolSummaryT = ResourcePoolSummary>
  UpdateAutonomousDatabaseRequest& WithResourcePoolSummary(ResourcePoolSummaryT&& value) {
    SetResourcePoolSummary(std::forward<ResourcePoolSummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source of the allowlisted IP addresses for the standby Autonomous
   * Database.</p>
   */
  inline StandbyAllowlistedIpsSource GetStandbyAllowlistedIpsSource() const { return m_standbyAllowlistedIpsSource; }
  inline bool StandbyAllowlistedIpsSourceHasBeenSet() const { return m_standbyAllowlistedIpsSourceHasBeenSet; }
  inline void SetStandbyAllowlistedIpsSource(StandbyAllowlistedIpsSource value) {
    m_standbyAllowlistedIpsSourceHasBeenSet = true;
    m_standbyAllowlistedIpsSource = value;
  }
  inline UpdateAutonomousDatabaseRequest& WithStandbyAllowlistedIpsSource(StandbyAllowlistedIpsSource value) {
    SetStandbyAllowlistedIpsSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of IP addresses that are allowed to access the standby Autonomous
   * Database.</p>
   */
  inline const Aws::Vector<Aws::String>& GetStandbyAllowlistedIps() const { return m_standbyAllowlistedIps; }
  inline bool StandbyAllowlistedIpsHasBeenSet() const { return m_standbyAllowlistedIpsHasBeenSet; }
  template <typename StandbyAllowlistedIpsT = Aws::Vector<Aws::String>>
  void SetStandbyAllowlistedIps(StandbyAllowlistedIpsT&& value) {
    m_standbyAllowlistedIpsHasBeenSet = true;
    m_standbyAllowlistedIps = std::forward<StandbyAllowlistedIpsT>(value);
  }
  template <typename StandbyAllowlistedIpsT = Aws::Vector<Aws::String>>
  UpdateAutonomousDatabaseRequest& WithStandbyAllowlistedIps(StandbyAllowlistedIpsT&& value) {
    SetStandbyAllowlistedIps(std::forward<StandbyAllowlistedIpsT>(value));
    return *this;
  }
  template <typename StandbyAllowlistedIpsT = Aws::String>
  UpdateAutonomousDatabaseRequest& AddStandbyAllowlistedIps(StandbyAllowlistedIpsT&& value) {
    m_standbyAllowlistedIpsHasBeenSet = true;
    m_standbyAllowlistedIps.emplace_back(std::forward<StandbyAllowlistedIpsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of IP addresses that are allowed to access the Autonomous
   * Database.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllowlistedIps() const { return m_allowlistedIps; }
  inline bool AllowlistedIpsHasBeenSet() const { return m_allowlistedIpsHasBeenSet; }
  template <typename AllowlistedIpsT = Aws::Vector<Aws::String>>
  void SetAllowlistedIps(AllowlistedIpsT&& value) {
    m_allowlistedIpsHasBeenSet = true;
    m_allowlistedIps = std::forward<AllowlistedIpsT>(value);
  }
  template <typename AllowlistedIpsT = Aws::Vector<Aws::String>>
  UpdateAutonomousDatabaseRequest& WithAllowlistedIps(AllowlistedIpsT&& value) {
    SetAllowlistedIps(std::forward<AllowlistedIpsT>(value));
    return *this;
  }
  template <typename AllowlistedIpsT = Aws::String>
  UpdateAutonomousDatabaseRequest& AddAllowlistedIps(AllowlistedIpsT&& value) {
    m_allowlistedIpsHasBeenSet = true;
    m_allowlistedIps.emplace_back(std::forward<AllowlistedIpsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The frequency, in seconds, at which the refreshable clone Autonomous Database
   * is automatically refreshed.</p>
   */
  inline int GetAutoRefreshFrequencyInSeconds() const { return m_autoRefreshFrequencyInSeconds; }
  inline bool AutoRefreshFrequencyInSecondsHasBeenSet() const { return m_autoRefreshFrequencyInSecondsHasBeenSet; }
  inline void SetAutoRefreshFrequencyInSeconds(int value) {
    m_autoRefreshFrequencyInSecondsHasBeenSet = true;
    m_autoRefreshFrequencyInSeconds = value;
  }
  inline UpdateAutonomousDatabaseRequest& WithAutoRefreshFrequencyInSeconds(int value) {
    SetAutoRefreshFrequencyInSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time lag, in seconds, between the refreshable clone and its source
   * Autonomous Database.</p>
   */
  inline int GetAutoRefreshPointLagInSeconds() const { return m_autoRefreshPointLagInSeconds; }
  inline bool AutoRefreshPointLagInSecondsHasBeenSet() const { return m_autoRefreshPointLagInSecondsHasBeenSet; }
  inline void SetAutoRefreshPointLagInSeconds(int value) {
    m_autoRefreshPointLagInSecondsHasBeenSet = true;
    m_autoRefreshPointLagInSeconds = value;
  }
  inline UpdateAutonomousDatabaseRequest& WithAutoRefreshPointLagInSeconds(int value) {
    SetAutoRefreshPointLagInSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time at which the automatic refresh of the refreshable clone
   * Autonomous Database starts.</p>
   */
  inline const Aws::Utils::DateTime& GetTimeOfAutoRefreshStart() const { return m_timeOfAutoRefreshStart; }
  inline bool TimeOfAutoRefreshStartHasBeenSet() const { return m_timeOfAutoRefreshStartHasBeenSet; }
  template <typename TimeOfAutoRefreshStartT = Aws::Utils::DateTime>
  void SetTimeOfAutoRefreshStart(TimeOfAutoRefreshStartT&& value) {
    m_timeOfAutoRefreshStartHasBeenSet = true;
    m_timeOfAutoRefreshStart = std::forward<TimeOfAutoRefreshStartT>(value);
  }
  template <typename TimeOfAutoRefreshStartT = Aws::Utils::DateTime>
  UpdateAutonomousDatabaseRequest& WithTimeOfAutoRefreshStart(TimeOfAutoRefreshStartT&& value) {
    SetTimeOfAutoRefreshStart(std::forward<TimeOfAutoRefreshStartT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The provider of the encryption key to use for the Autonomous Database.</p>
   */
  inline EncryptionKeyProviderInput GetEncryptionKeyProvider() const { return m_encryptionKeyProvider; }
  inline bool EncryptionKeyProviderHasBeenSet() const { return m_encryptionKeyProviderHasBeenSet; }
  inline void SetEncryptionKeyProvider(EncryptionKeyProviderInput value) {
    m_encryptionKeyProviderHasBeenSet = true;
    m_encryptionKeyProvider = value;
  }
  inline UpdateAutonomousDatabaseRequest& WithEncryptionKeyProvider(EncryptionKeyProviderInput value) {
    SetEncryptionKeyProvider(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration of the encryption key to use for the Autonomous
   * Database.</p>
   */
  inline const EncryptionKeyConfigurationInput& GetEncryptionKeyConfiguration() const { return m_encryptionKeyConfiguration; }
  inline bool EncryptionKeyConfigurationHasBeenSet() const { return m_encryptionKeyConfigurationHasBeenSet; }
  template <typename EncryptionKeyConfigurationT = EncryptionKeyConfigurationInput>
  void SetEncryptionKeyConfiguration(EncryptionKeyConfigurationT&& value) {
    m_encryptionKeyConfigurationHasBeenSet = true;
    m_encryptionKeyConfiguration = std::forward<EncryptionKeyConfigurationT>(value);
  }
  template <typename EncryptionKeyConfigurationT = EncryptionKeyConfigurationInput>
  UpdateAutonomousDatabaseRequest& WithEncryptionKeyConfiguration(EncryptionKeyConfigurationT&& value) {
    SetEncryptionKeyConfiguration(std::forward<EncryptionKeyConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source of the admin password for the Autonomous Database. When set to
   * <code>CUSTOMER_MANAGED_AWS_SECRET</code>, the admin password is retrieved from
   * an Amazon Web Services Secrets Manager secret.</p>
   */
  inline AdminPasswordSource GetAdminPasswordSource() const { return m_adminPasswordSource; }
  inline bool AdminPasswordSourceHasBeenSet() const { return m_adminPasswordSourceHasBeenSet; }
  inline void SetAdminPasswordSource(AdminPasswordSource value) {
    m_adminPasswordSourceHasBeenSet = true;
    m_adminPasswordSource = value;
  }
  inline UpdateAutonomousDatabaseRequest& WithAdminPasswordSource(AdminPasswordSource value) {
    SetAdminPasswordSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration of the admin password source for the Autonomous
   * Database.</p>
   */
  inline const AdminPasswordSourceConfigurationInput& GetAdminPasswordSourceConfiguration() const {
    return m_adminPasswordSourceConfiguration;
  }
  inline bool AdminPasswordSourceConfigurationHasBeenSet() const { return m_adminPasswordSourceConfigurationHasBeenSet; }
  template <typename AdminPasswordSourceConfigurationT = AdminPasswordSourceConfigurationInput>
  void SetAdminPasswordSourceConfiguration(AdminPasswordSourceConfigurationT&& value) {
    m_adminPasswordSourceConfigurationHasBeenSet = true;
    m_adminPasswordSourceConfiguration = std::forward<AdminPasswordSourceConfigurationT>(value);
  }
  template <typename AdminPasswordSourceConfigurationT = AdminPasswordSourceConfigurationInput>
  UpdateAutonomousDatabaseRequest& WithAdminPasswordSourceConfiguration(AdminPasswordSourceConfigurationT&& value) {
    SetAdminPasswordSourceConfiguration(std::forward<AdminPasswordSourceConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_autonomousDatabaseId;

  Aws::String m_adminPassword;

  double m_computeCount{0.0};

  int m_cpuCoreCount{0};

  int m_dataStorageSizeInTBs{0};

  int m_dataStorageSizeInGBs{0};

  Aws::String m_displayName;

  Aws::String m_dbName;

  Aws::String m_dbVersion;

  DbWorkload m_dbWorkload{DbWorkload::NOT_SET};

  Aws::Vector<DatabaseTool> m_dbToolsDetails;

  DatabaseEdition m_databaseEdition{DatabaseEdition::NOT_SET};

  LicenseModel m_licenseModel{LicenseModel::NOT_SET};

  bool m_isAutoScalingEnabled{false};

  bool m_isAutoScalingForStorageEnabled{false};

  bool m_isBackupRetentionLocked{false};

  bool m_isLocalDataGuardEnabled{false};

  bool m_isMtlsConnectionRequired{false};

  bool m_isRefreshableClone{false};

  bool m_isDisconnectPeer{false};

  int m_backupRetentionPeriodInDays{0};

  double m_byolComputeCountLimit{0.0};

  int m_localAdgAutoFailoverMaxDataLossLimit{0};

  AutonomousMaintenanceScheduleType m_autonomousMaintenanceScheduleType{AutonomousMaintenanceScheduleType::NOT_SET};

  Aws::Vector<CustomerContact> m_customerContactsToSendToOCI;

  Aws::Vector<ScheduledOperationDetails> m_scheduledOperations;

  LongTermBackupSchedule m_longTermBackupSchedule;

  OpenMode m_openMode{OpenMode::NOT_SET};

  PermissionLevel m_permissionLevel{PermissionLevel::NOT_SET};

  RefreshableMode m_refreshableMode{RefreshableMode::NOT_SET};

  Aws::String m_privateEndpointIp;

  Aws::String m_privateEndpointLabel;

  Aws::String m_peerDbId;

  Aws::String m_resourcePoolLeaderId;

  ResourcePoolSummary m_resourcePoolSummary;

  StandbyAllowlistedIpsSource m_standbyAllowlistedIpsSource{StandbyAllowlistedIpsSource::NOT_SET};

  Aws::Vector<Aws::String> m_standbyAllowlistedIps;

  Aws::Vector<Aws::String> m_allowlistedIps;

  int m_autoRefreshFrequencyInSeconds{0};

  int m_autoRefreshPointLagInSeconds{0};

  Aws::Utils::DateTime m_timeOfAutoRefreshStart{};

  EncryptionKeyProviderInput m_encryptionKeyProvider{EncryptionKeyProviderInput::NOT_SET};

  EncryptionKeyConfigurationInput m_encryptionKeyConfiguration;

  AdminPasswordSource m_adminPasswordSource{AdminPasswordSource::NOT_SET};

  AdminPasswordSourceConfigurationInput m_adminPasswordSourceConfiguration;
  bool m_autonomousDatabaseIdHasBeenSet = false;
  bool m_adminPasswordHasBeenSet = false;
  bool m_computeCountHasBeenSet = false;
  bool m_cpuCoreCountHasBeenSet = false;
  bool m_dataStorageSizeInTBsHasBeenSet = false;
  bool m_dataStorageSizeInGBsHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_dbNameHasBeenSet = false;
  bool m_dbVersionHasBeenSet = false;
  bool m_dbWorkloadHasBeenSet = false;
  bool m_dbToolsDetailsHasBeenSet = false;
  bool m_databaseEditionHasBeenSet = false;
  bool m_licenseModelHasBeenSet = false;
  bool m_isAutoScalingEnabledHasBeenSet = false;
  bool m_isAutoScalingForStorageEnabledHasBeenSet = false;
  bool m_isBackupRetentionLockedHasBeenSet = false;
  bool m_isLocalDataGuardEnabledHasBeenSet = false;
  bool m_isMtlsConnectionRequiredHasBeenSet = false;
  bool m_isRefreshableCloneHasBeenSet = false;
  bool m_isDisconnectPeerHasBeenSet = false;
  bool m_backupRetentionPeriodInDaysHasBeenSet = false;
  bool m_byolComputeCountLimitHasBeenSet = false;
  bool m_localAdgAutoFailoverMaxDataLossLimitHasBeenSet = false;
  bool m_autonomousMaintenanceScheduleTypeHasBeenSet = false;
  bool m_customerContactsToSendToOCIHasBeenSet = false;
  bool m_scheduledOperationsHasBeenSet = false;
  bool m_longTermBackupScheduleHasBeenSet = false;
  bool m_openModeHasBeenSet = false;
  bool m_permissionLevelHasBeenSet = false;
  bool m_refreshableModeHasBeenSet = false;
  bool m_privateEndpointIpHasBeenSet = false;
  bool m_privateEndpointLabelHasBeenSet = false;
  bool m_peerDbIdHasBeenSet = false;
  bool m_resourcePoolLeaderIdHasBeenSet = false;
  bool m_resourcePoolSummaryHasBeenSet = false;
  bool m_standbyAllowlistedIpsSourceHasBeenSet = false;
  bool m_standbyAllowlistedIpsHasBeenSet = false;
  bool m_allowlistedIpsHasBeenSet = false;
  bool m_autoRefreshFrequencyInSecondsHasBeenSet = false;
  bool m_autoRefreshPointLagInSecondsHasBeenSet = false;
  bool m_timeOfAutoRefreshStartHasBeenSet = false;
  bool m_encryptionKeyProviderHasBeenSet = false;
  bool m_encryptionKeyConfigurationHasBeenSet = false;
  bool m_adminPasswordSourceHasBeenSet = false;
  bool m_adminPasswordSourceConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
