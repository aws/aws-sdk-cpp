/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/odb/OdbRequest.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/AutonomousMaintenanceScheduleType.h>
#include <aws/odb/model/CustomerContact.h>
#include <aws/odb/model/DatabaseEdition.h>
#include <aws/odb/model/DatabaseTool.h>
#include <aws/odb/model/DbWorkload.h>
#include <aws/odb/model/EncryptionKeyConfigurationInput.h>
#include <aws/odb/model/EncryptionKeyProviderInput.h>
#include <aws/odb/model/LicenseModel.h>
#include <aws/odb/model/ResourcePoolSummary.h>
#include <aws/odb/model/ScheduledOperationDetails.h>
#include <aws/odb/model/SourceConfiguration.h>
#include <aws/odb/model/SourceType.h>
#include <aws/odb/model/StandbyAllowlistedIpsSource.h>
#include <aws/odb/model/TransportableTablespace.h>

#include <utility>

namespace Aws {
namespace odb {
namespace Model {

/**
 */
class CreateAutonomousDatabaseRequest : public OdbRequest {
 public:
  AWS_ODB_API CreateAutonomousDatabaseRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateAutonomousDatabase"; }

  AWS_ODB_API Aws::String SerializePayload() const override;

  AWS_ODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the ODB network to be used for the Autonomous
   * Database.</p>
   */
  inline const Aws::String& GetOdbNetworkId() const { return m_odbNetworkId; }
  inline bool OdbNetworkIdHasBeenSet() const { return m_odbNetworkIdHasBeenSet; }
  template <typename OdbNetworkIdT = Aws::String>
  void SetOdbNetworkId(OdbNetworkIdT&& value) {
    m_odbNetworkIdHasBeenSet = true;
    m_odbNetworkId = std::forward<OdbNetworkIdT>(value);
  }
  template <typename OdbNetworkIdT = Aws::String>
  CreateAutonomousDatabaseRequest& WithOdbNetworkId(OdbNetworkIdT&& value) {
    SetOdbNetworkId(std::forward<OdbNetworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user-friendly name for the Autonomous Database. The name does not have to
   * be unique.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  CreateAutonomousDatabaseRequest& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Autonomous Database. The name must begin with an alphabetic
   * character and can contain a maximum of 30 alphanumeric characters. Special
   * characters are not permitted. The name must be unique in the Amazon Web Services
   * account.</p>
   */
  inline const Aws::String& GetDbName() const { return m_dbName; }
  inline bool DbNameHasBeenSet() const { return m_dbNameHasBeenSet; }
  template <typename DbNameT = Aws::String>
  void SetDbName(DbNameT&& value) {
    m_dbNameHasBeenSet = true;
    m_dbName = std::forward<DbNameT>(value);
  }
  template <typename DbNameT = Aws::String>
  CreateAutonomousDatabaseRequest& WithDbName(DbNameT&& value) {
    SetDbName(std::forward<DbNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The password for the <code>ADMIN</code> user of the Autonomous Database.</p>
   */
  inline const Aws::String& GetAdminPassword() const { return m_adminPassword; }
  inline bool AdminPasswordHasBeenSet() const { return m_adminPasswordHasBeenSet; }
  template <typename AdminPasswordT = Aws::String>
  void SetAdminPassword(AdminPasswordT&& value) {
    m_adminPasswordHasBeenSet = true;
    m_adminPassword = std::forward<AdminPasswordT>(value);
  }
  template <typename AdminPasswordT = Aws::String>
  CreateAutonomousDatabaseRequest& WithAdminPassword(AdminPasswordT&& value) {
    SetAdminPassword(std::forward<AdminPasswordT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The compute capacity, in number of Elastic CPUs (ECPUs) or Oracle CPUs
   * (OCPUs), to assign to the Autonomous Database.</p>
   */
  inline double GetComputeCount() const { return m_computeCount; }
  inline bool ComputeCountHasBeenSet() const { return m_computeCountHasBeenSet; }
  inline void SetComputeCount(double value) {
    m_computeCountHasBeenSet = true;
    m_computeCount = value;
  }
  inline CreateAutonomousDatabaseRequest& WithComputeCount(double value) {
    SetComputeCount(value);
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
  inline CreateAutonomousDatabaseRequest& WithDataStorageSizeInTBs(int value) {
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
  inline CreateAutonomousDatabaseRequest& WithDataStorageSizeInGBs(int value) {
    SetDataStorageSizeInGBs(value);
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
  inline CreateAutonomousDatabaseRequest& WithDbWorkload(DbWorkload value) {
    SetDbWorkload(value);
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
  inline CreateAutonomousDatabaseRequest& WithIsAutoScalingEnabled(bool value) {
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
  inline CreateAutonomousDatabaseRequest& WithIsAutoScalingForStorageEnabled(bool value) {
    SetIsAutoScalingForStorageEnabled(value);
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
  inline CreateAutonomousDatabaseRequest& WithLicenseModel(LicenseModel value) {
    SetLicenseModel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The character set to use for the Autonomous Database.</p>
   */
  inline const Aws::String& GetCharacterSet() const { return m_characterSet; }
  inline bool CharacterSetHasBeenSet() const { return m_characterSetHasBeenSet; }
  template <typename CharacterSetT = Aws::String>
  void SetCharacterSet(CharacterSetT&& value) {
    m_characterSetHasBeenSet = true;
    m_characterSet = std::forward<CharacterSetT>(value);
  }
  template <typename CharacterSetT = Aws::String>
  CreateAutonomousDatabaseRequest& WithCharacterSet(CharacterSetT&& value) {
    SetCharacterSet(std::forward<CharacterSetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The national character set to use for the Autonomous Database.</p>
   */
  inline const Aws::String& GetNcharacterSet() const { return m_ncharacterSet; }
  inline bool NcharacterSetHasBeenSet() const { return m_ncharacterSetHasBeenSet; }
  template <typename NcharacterSetT = Aws::String>
  void SetNcharacterSet(NcharacterSetT&& value) {
    m_ncharacterSetHasBeenSet = true;
    m_ncharacterSet = std::forward<NcharacterSetT>(value);
  }
  template <typename NcharacterSetT = Aws::String>
  CreateAutonomousDatabaseRequest& WithNcharacterSet(NcharacterSetT&& value) {
    SetNcharacterSet(std::forward<NcharacterSetT>(value));
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
  CreateAutonomousDatabaseRequest& WithDbVersion(DbVersionT&& value) {
    SetDbVersion(std::forward<DbVersionT>(value));
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
  inline CreateAutonomousDatabaseRequest& WithDatabaseEdition(DatabaseEdition value) {
    SetDatabaseEdition(value);
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
  inline CreateAutonomousDatabaseRequest& WithStandbyAllowlistedIpsSource(StandbyAllowlistedIpsSource value) {
    SetStandbyAllowlistedIpsSource(value);
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
  inline CreateAutonomousDatabaseRequest& WithAutonomousMaintenanceScheduleType(AutonomousMaintenanceScheduleType value) {
    SetAutonomousMaintenanceScheduleType(value);
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
  inline CreateAutonomousDatabaseRequest& WithBackupRetentionPeriodInDays(int value) {
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
  inline CreateAutonomousDatabaseRequest& WithByolComputeCountLimit(double value) {
    SetByolComputeCountLimit(value);
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
  inline CreateAutonomousDatabaseRequest& WithCpuCoreCount(int value) {
    SetCpuCoreCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of customer contacts to receive operational notifications from
   * Oracle Cloud Infrastructure (OCI) for the Autonomous Database.</p>
   */
  inline const Aws::Vector<CustomerContact>& GetCustomerContactsToSendToOCI() const { return m_customerContactsToSendToOCI; }
  inline bool CustomerContactsToSendToOCIHasBeenSet() const { return m_customerContactsToSendToOCIHasBeenSet; }
  template <typename CustomerContactsToSendToOCIT = Aws::Vector<CustomerContact>>
  void SetCustomerContactsToSendToOCI(CustomerContactsToSendToOCIT&& value) {
    m_customerContactsToSendToOCIHasBeenSet = true;
    m_customerContactsToSendToOCI = std::forward<CustomerContactsToSendToOCIT>(value);
  }
  template <typename CustomerContactsToSendToOCIT = Aws::Vector<CustomerContact>>
  CreateAutonomousDatabaseRequest& WithCustomerContactsToSendToOCI(CustomerContactsToSendToOCIT&& value) {
    SetCustomerContactsToSendToOCI(std::forward<CustomerContactsToSendToOCIT>(value));
    return *this;
  }
  template <typename CustomerContactsToSendToOCIT = CustomerContact>
  CreateAutonomousDatabaseRequest& AddCustomerContactsToSendToOCI(CustomerContactsToSendToOCIT&& value) {
    m_customerContactsToSendToOCIHasBeenSet = true;
    m_customerContactsToSendToOCI.emplace_back(std::forward<CustomerContactsToSendToOCIT>(value));
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
  CreateAutonomousDatabaseRequest& WithPrivateEndpointIp(PrivateEndpointIpT&& value) {
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
  CreateAutonomousDatabaseRequest& WithPrivateEndpointLabel(PrivateEndpointLabelT&& value) {
    SetPrivateEndpointLabel(std::forward<PrivateEndpointLabelT>(value));
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
  CreateAutonomousDatabaseRequest& WithResourcePoolLeaderId(ResourcePoolLeaderIdT&& value) {
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
  CreateAutonomousDatabaseRequest& WithResourcePoolSummary(ResourcePoolSummaryT&& value) {
    SetResourcePoolSummary(std::forward<ResourcePoolSummaryT>(value));
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
  CreateAutonomousDatabaseRequest& WithScheduledOperations(ScheduledOperationsT&& value) {
    SetScheduledOperations(std::forward<ScheduledOperationsT>(value));
    return *this;
  }
  template <typename ScheduledOperationsT = ScheduledOperationDetails>
  CreateAutonomousDatabaseRequest& AddScheduledOperations(ScheduledOperationsT&& value) {
    m_scheduledOperationsHasBeenSet = true;
    m_scheduledOperations.emplace_back(std::forward<ScheduledOperationsT>(value));
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
  CreateAutonomousDatabaseRequest& WithStandbyAllowlistedIps(StandbyAllowlistedIpsT&& value) {
    SetStandbyAllowlistedIps(std::forward<StandbyAllowlistedIpsT>(value));
    return *this;
  }
  template <typename StandbyAllowlistedIpsT = Aws::String>
  CreateAutonomousDatabaseRequest& AddStandbyAllowlistedIps(StandbyAllowlistedIpsT&& value) {
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
  CreateAutonomousDatabaseRequest& WithAllowlistedIps(AllowlistedIpsT&& value) {
    SetAllowlistedIps(std::forward<AllowlistedIpsT>(value));
    return *this;
  }
  template <typename AllowlistedIpsT = Aws::String>
  CreateAutonomousDatabaseRequest& AddAllowlistedIps(AllowlistedIpsT&& value) {
    m_allowlistedIpsHasBeenSet = true;
    m_allowlistedIps.emplace_back(std::forward<AllowlistedIpsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The transportable tablespace configuration to use when creating the
   * Autonomous Database.</p>
   */
  inline const TransportableTablespace& GetTransportableTablespace() const { return m_transportableTablespace; }
  inline bool TransportableTablespaceHasBeenSet() const { return m_transportableTablespaceHasBeenSet; }
  template <typename TransportableTablespaceT = TransportableTablespace>
  void SetTransportableTablespace(TransportableTablespaceT&& value) {
    m_transportableTablespaceHasBeenSet = true;
    m_transportableTablespace = std::forward<TransportableTablespaceT>(value);
  }
  template <typename TransportableTablespaceT = TransportableTablespace>
  CreateAutonomousDatabaseRequest& WithTransportableTablespace(TransportableTablespaceT&& value) {
    SetTransportableTablespace(std::forward<TransportableTablespaceT>(value));
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
  inline CreateAutonomousDatabaseRequest& WithIsBackupRetentionLocked(bool value) {
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
  inline CreateAutonomousDatabaseRequest& WithIsLocalDataGuardEnabled(bool value) {
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
  inline CreateAutonomousDatabaseRequest& WithIsMtlsConnectionRequired(bool value) {
    SetIsMtlsConnectionRequired(value);
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
  CreateAutonomousDatabaseRequest& WithDbToolsDetails(DbToolsDetailsT&& value) {
    SetDbToolsDetails(std::forward<DbToolsDetailsT>(value));
    return *this;
  }
  template <typename DbToolsDetailsT = DatabaseTool>
  CreateAutonomousDatabaseRequest& AddDbToolsDetails(DbToolsDetailsT&& value) {
    m_dbToolsDetailsHasBeenSet = true;
    m_dbToolsDetails.emplace_back(std::forward<DbToolsDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source from which to create the Autonomous Database, such as a clone,
   * backup, or cross-Region copy.</p>
   */
  inline SourceType GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  inline void SetSource(SourceType value) {
    m_sourceHasBeenSet = true;
    m_source = value;
  }
  inline CreateAutonomousDatabaseRequest& WithSource(SourceType value) {
    SetSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration details for the source used to create the Autonomous
   * Database.</p>
   */
  inline const SourceConfiguration& GetSourceConfiguration() const { return m_sourceConfiguration; }
  inline bool SourceConfigurationHasBeenSet() const { return m_sourceConfigurationHasBeenSet; }
  template <typename SourceConfigurationT = SourceConfiguration>
  void SetSourceConfiguration(SourceConfigurationT&& value) {
    m_sourceConfigurationHasBeenSet = true;
    m_sourceConfiguration = std::forward<SourceConfigurationT>(value);
  }
  template <typename SourceConfigurationT = SourceConfiguration>
  CreateAutonomousDatabaseRequest& WithSourceConfiguration(SourceConfigurationT&& value) {
    SetSourceConfiguration(std::forward<SourceConfigurationT>(value));
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
  inline CreateAutonomousDatabaseRequest& WithEncryptionKeyProvider(EncryptionKeyProviderInput value) {
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
  CreateAutonomousDatabaseRequest& WithEncryptionKeyConfiguration(EncryptionKeyConfigurationT&& value) {
    SetEncryptionKeyConfiguration(std::forward<EncryptionKeyConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A client-provided token to ensure the idempotency of the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateAutonomousDatabaseRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of resource tags to apply to the Autonomous Database. Each tag is a
   * key-value pair with no predefined name, type, or namespace.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateAutonomousDatabaseRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateAutonomousDatabaseRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_odbNetworkId;

  Aws::String m_displayName;

  Aws::String m_dbName;

  Aws::String m_adminPassword;

  double m_computeCount{0.0};

  int m_dataStorageSizeInTBs{0};

  int m_dataStorageSizeInGBs{0};

  DbWorkload m_dbWorkload{DbWorkload::NOT_SET};

  bool m_isAutoScalingEnabled{false};

  bool m_isAutoScalingForStorageEnabled{false};

  LicenseModel m_licenseModel{LicenseModel::NOT_SET};

  Aws::String m_characterSet;

  Aws::String m_ncharacterSet;

  Aws::String m_dbVersion;

  DatabaseEdition m_databaseEdition{DatabaseEdition::NOT_SET};

  StandbyAllowlistedIpsSource m_standbyAllowlistedIpsSource{StandbyAllowlistedIpsSource::NOT_SET};

  AutonomousMaintenanceScheduleType m_autonomousMaintenanceScheduleType{AutonomousMaintenanceScheduleType::NOT_SET};

  int m_backupRetentionPeriodInDays{0};

  double m_byolComputeCountLimit{0.0};

  int m_cpuCoreCount{0};

  Aws::Vector<CustomerContact> m_customerContactsToSendToOCI;

  Aws::String m_privateEndpointIp;

  Aws::String m_privateEndpointLabel;

  Aws::String m_resourcePoolLeaderId;

  ResourcePoolSummary m_resourcePoolSummary;

  Aws::Vector<ScheduledOperationDetails> m_scheduledOperations;

  Aws::Vector<Aws::String> m_standbyAllowlistedIps;

  Aws::Vector<Aws::String> m_allowlistedIps;

  TransportableTablespace m_transportableTablespace;

  bool m_isBackupRetentionLocked{false};

  bool m_isLocalDataGuardEnabled{false};

  bool m_isMtlsConnectionRequired{false};

  Aws::Vector<DatabaseTool> m_dbToolsDetails;

  SourceType m_source{SourceType::NOT_SET};

  SourceConfiguration m_sourceConfiguration;

  EncryptionKeyProviderInput m_encryptionKeyProvider{EncryptionKeyProviderInput::NOT_SET};

  EncryptionKeyConfigurationInput m_encryptionKeyConfiguration;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_odbNetworkIdHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_dbNameHasBeenSet = false;
  bool m_adminPasswordHasBeenSet = false;
  bool m_computeCountHasBeenSet = false;
  bool m_dataStorageSizeInTBsHasBeenSet = false;
  bool m_dataStorageSizeInGBsHasBeenSet = false;
  bool m_dbWorkloadHasBeenSet = false;
  bool m_isAutoScalingEnabledHasBeenSet = false;
  bool m_isAutoScalingForStorageEnabledHasBeenSet = false;
  bool m_licenseModelHasBeenSet = false;
  bool m_characterSetHasBeenSet = false;
  bool m_ncharacterSetHasBeenSet = false;
  bool m_dbVersionHasBeenSet = false;
  bool m_databaseEditionHasBeenSet = false;
  bool m_standbyAllowlistedIpsSourceHasBeenSet = false;
  bool m_autonomousMaintenanceScheduleTypeHasBeenSet = false;
  bool m_backupRetentionPeriodInDaysHasBeenSet = false;
  bool m_byolComputeCountLimitHasBeenSet = false;
  bool m_cpuCoreCountHasBeenSet = false;
  bool m_customerContactsToSendToOCIHasBeenSet = false;
  bool m_privateEndpointIpHasBeenSet = false;
  bool m_privateEndpointLabelHasBeenSet = false;
  bool m_resourcePoolLeaderIdHasBeenSet = false;
  bool m_resourcePoolSummaryHasBeenSet = false;
  bool m_scheduledOperationsHasBeenSet = false;
  bool m_standbyAllowlistedIpsHasBeenSet = false;
  bool m_allowlistedIpsHasBeenSet = false;
  bool m_transportableTablespaceHasBeenSet = false;
  bool m_isBackupRetentionLockedHasBeenSet = false;
  bool m_isLocalDataGuardEnabledHasBeenSet = false;
  bool m_isMtlsConnectionRequiredHasBeenSet = false;
  bool m_dbToolsDetailsHasBeenSet = false;
  bool m_sourceHasBeenSet = false;
  bool m_sourceConfigurationHasBeenSet = false;
  bool m_encryptionKeyProviderHasBeenSet = false;
  bool m_encryptionKeyConfigurationHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
