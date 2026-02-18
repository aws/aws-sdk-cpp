/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/AdditionalStorageVolume.h>
#include <aws/rds/model/DBInstanceAutomatedBackupsReplication.h>
#include <aws/rds/model/RestoreWindow.h>
#include <aws/rds/model/StorageEncryptionType.h>
#include <aws/rds/model/Tag.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace RDS {
namespace Model {

/**
 * <p>An automated backup of a DB instance. It consists of system backups,
 * transaction logs, and the database instance properties that existed at the time
 * you deleted the source instance.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBInstanceAutomatedBackup">AWS
 * API Reference</a></p>
 */
class DBInstanceAutomatedBackup {
 public:
  AWS_RDS_API DBInstanceAutomatedBackup() = default;
  AWS_RDS_API DBInstanceAutomatedBackup(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_RDS_API DBInstanceAutomatedBackup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) for the automated backups.</p>
   */
  inline const Aws::String& GetDBInstanceArn() const { return m_dBInstanceArn; }
  inline bool DBInstanceArnHasBeenSet() const { return m_dBInstanceArnHasBeenSet; }
  template <typename DBInstanceArnT = Aws::String>
  void SetDBInstanceArn(DBInstanceArnT&& value) {
    m_dBInstanceArnHasBeenSet = true;
    m_dBInstanceArn = std::forward<DBInstanceArnT>(value);
  }
  template <typename DBInstanceArnT = Aws::String>
  DBInstanceAutomatedBackup& WithDBInstanceArn(DBInstanceArnT&& value) {
    SetDBInstanceArn(std::forward<DBInstanceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource ID for the source DB instance, which can't be changed and which
   * is unique to an Amazon Web Services Region.</p>
   */
  inline const Aws::String& GetDbiResourceId() const { return m_dbiResourceId; }
  inline bool DbiResourceIdHasBeenSet() const { return m_dbiResourceIdHasBeenSet; }
  template <typename DbiResourceIdT = Aws::String>
  void SetDbiResourceId(DbiResourceIdT&& value) {
    m_dbiResourceIdHasBeenSet = true;
    m_dbiResourceId = std::forward<DbiResourceIdT>(value);
  }
  template <typename DbiResourceIdT = Aws::String>
  DBInstanceAutomatedBackup& WithDbiResourceId(DbiResourceIdT&& value) {
    SetDbiResourceId(std::forward<DbiResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Region associated with the automated backup.</p>
   */
  inline const Aws::String& GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  template <typename RegionT = Aws::String>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::String>
  DBInstanceAutomatedBackup& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier for the source DB instance, which can't be changed and which
   * is unique to an Amazon Web Services Region.</p>
   */
  inline const Aws::String& GetDBInstanceIdentifier() const { return m_dBInstanceIdentifier; }
  inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }
  template <typename DBInstanceIdentifierT = Aws::String>
  void SetDBInstanceIdentifier(DBInstanceIdentifierT&& value) {
    m_dBInstanceIdentifierHasBeenSet = true;
    m_dBInstanceIdentifier = std::forward<DBInstanceIdentifierT>(value);
  }
  template <typename DBInstanceIdentifierT = Aws::String>
  DBInstanceAutomatedBackup& WithDBInstanceIdentifier(DBInstanceIdentifierT&& value) {
    SetDBInstanceIdentifier(std::forward<DBInstanceIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The earliest and latest time a DB instance can be restored to.</p>
   */
  inline const RestoreWindow& GetRestoreWindow() const { return m_restoreWindow; }
  inline bool RestoreWindowHasBeenSet() const { return m_restoreWindowHasBeenSet; }
  template <typename RestoreWindowT = RestoreWindow>
  void SetRestoreWindow(RestoreWindowT&& value) {
    m_restoreWindowHasBeenSet = true;
    m_restoreWindow = std::forward<RestoreWindowT>(value);
  }
  template <typename RestoreWindowT = RestoreWindow>
  DBInstanceAutomatedBackup& WithRestoreWindow(RestoreWindowT&& value) {
    SetRestoreWindow(std::forward<RestoreWindowT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The allocated storage size for the automated backup in gibibytes (GiB).</p>
   */
  inline int GetAllocatedStorage() const { return m_allocatedStorage; }
  inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
  inline void SetAllocatedStorage(int value) {
    m_allocatedStorageHasBeenSet = true;
    m_allocatedStorage = value;
  }
  inline DBInstanceAutomatedBackup& WithAllocatedStorage(int value) {
    SetAllocatedStorage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of status information for an automated backup:</p> <ul> <li> <p>
   * <code>active</code> - Automated backups for current instances.</p> </li> <li>
   * <p> <code>retained</code> - Automated backups for deleted instances.</p> </li>
   * <li> <p> <code>creating</code> - Automated backups that are waiting for the
   * first automated snapshot to be available.</p> </li> </ul>
   */
  inline const Aws::String& GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  template <typename StatusT = Aws::String>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = Aws::String>
  DBInstanceAutomatedBackup& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The port number that the automated backup used for connections.</p>
   * <p>Default: Inherits from the source DB instance</p> <p>Valid Values:
   * <code>1150-65535</code> </p>
   */
  inline int GetPort() const { return m_port; }
  inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
  inline void SetPort(int value) {
    m_portHasBeenSet = true;
    m_port = value;
  }
  inline DBInstanceAutomatedBackup& WithPort(int value) {
    SetPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Availability Zone that the automated backup was created in. For
   * information on Amazon Web Services Regions and Availability Zones, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.RegionsAndAvailabilityZones.html">Regions
   * and Availability Zones</a>.</p>
   */
  inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
  inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
  template <typename AvailabilityZoneT = Aws::String>
  void SetAvailabilityZone(AvailabilityZoneT&& value) {
    m_availabilityZoneHasBeenSet = true;
    m_availabilityZone = std::forward<AvailabilityZoneT>(value);
  }
  template <typename AvailabilityZoneT = Aws::String>
  DBInstanceAutomatedBackup& WithAvailabilityZone(AvailabilityZoneT&& value) {
    SetAvailabilityZone(std::forward<AvailabilityZoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The VPC ID associated with the DB instance.</p>
   */
  inline const Aws::String& GetVpcId() const { return m_vpcId; }
  inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
  template <typename VpcIdT = Aws::String>
  void SetVpcId(VpcIdT&& value) {
    m_vpcIdHasBeenSet = true;
    m_vpcId = std::forward<VpcIdT>(value);
  }
  template <typename VpcIdT = Aws::String>
  DBInstanceAutomatedBackup& WithVpcId(VpcIdT&& value) {
    SetVpcId(std::forward<VpcIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the DB instance was created.</p>
   */
  inline const Aws::Utils::DateTime& GetInstanceCreateTime() const { return m_instanceCreateTime; }
  inline bool InstanceCreateTimeHasBeenSet() const { return m_instanceCreateTimeHasBeenSet; }
  template <typename InstanceCreateTimeT = Aws::Utils::DateTime>
  void SetInstanceCreateTime(InstanceCreateTimeT&& value) {
    m_instanceCreateTimeHasBeenSet = true;
    m_instanceCreateTime = std::forward<InstanceCreateTimeT>(value);
  }
  template <typename InstanceCreateTimeT = Aws::Utils::DateTime>
  DBInstanceAutomatedBackup& WithInstanceCreateTime(InstanceCreateTimeT&& value) {
    SetInstanceCreateTime(std::forward<InstanceCreateTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The master user name of an automated backup.</p>
   */
  inline const Aws::String& GetMasterUsername() const { return m_masterUsername; }
  inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }
  template <typename MasterUsernameT = Aws::String>
  void SetMasterUsername(MasterUsernameT&& value) {
    m_masterUsernameHasBeenSet = true;
    m_masterUsername = std::forward<MasterUsernameT>(value);
  }
  template <typename MasterUsernameT = Aws::String>
  DBInstanceAutomatedBackup& WithMasterUsername(MasterUsernameT&& value) {
    SetMasterUsername(std::forward<MasterUsernameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the database engine for this automated backup.</p>
   */
  inline const Aws::String& GetEngine() const { return m_engine; }
  inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
  template <typename EngineT = Aws::String>
  void SetEngine(EngineT&& value) {
    m_engineHasBeenSet = true;
    m_engine = std::forward<EngineT>(value);
  }
  template <typename EngineT = Aws::String>
  DBInstanceAutomatedBackup& WithEngine(EngineT&& value) {
    SetEngine(std::forward<EngineT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the database engine for the automated backup.</p>
   */
  inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
  inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
  template <typename EngineVersionT = Aws::String>
  void SetEngineVersion(EngineVersionT&& value) {
    m_engineVersionHasBeenSet = true;
    m_engineVersion = std::forward<EngineVersionT>(value);
  }
  template <typename EngineVersionT = Aws::String>
  DBInstanceAutomatedBackup& WithEngineVersion(EngineVersionT&& value) {
    SetEngineVersion(std::forward<EngineVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The license model information for the automated backup.</p>
   */
  inline const Aws::String& GetLicenseModel() const { return m_licenseModel; }
  inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }
  template <typename LicenseModelT = Aws::String>
  void SetLicenseModel(LicenseModelT&& value) {
    m_licenseModelHasBeenSet = true;
    m_licenseModel = std::forward<LicenseModelT>(value);
  }
  template <typename LicenseModelT = Aws::String>
  DBInstanceAutomatedBackup& WithLicenseModel(LicenseModelT&& value) {
    SetLicenseModel(std::forward<LicenseModelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IOPS (I/O operations per second) value for the automated backup.</p>
   */
  inline int GetIops() const { return m_iops; }
  inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
  inline void SetIops(int value) {
    m_iopsHasBeenSet = true;
    m_iops = value;
  }
  inline DBInstanceAutomatedBackup& WithIops(int value) {
    SetIops(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The storage throughput for the automated backup.</p>
   */
  inline int GetStorageThroughput() const { return m_storageThroughput; }
  inline bool StorageThroughputHasBeenSet() const { return m_storageThroughputHasBeenSet; }
  inline void SetStorageThroughput(int value) {
    m_storageThroughputHasBeenSet = true;
    m_storageThroughput = value;
  }
  inline DBInstanceAutomatedBackup& WithStorageThroughput(int value) {
    SetStorageThroughput(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The option group the automated backup is associated with. If omitted, the
   * default option group for the engine specified is used.</p>
   */
  inline const Aws::String& GetOptionGroupName() const { return m_optionGroupName; }
  inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }
  template <typename OptionGroupNameT = Aws::String>
  void SetOptionGroupName(OptionGroupNameT&& value) {
    m_optionGroupNameHasBeenSet = true;
    m_optionGroupName = std::forward<OptionGroupNameT>(value);
  }
  template <typename OptionGroupNameT = Aws::String>
  DBInstanceAutomatedBackup& WithOptionGroupName(OptionGroupNameT&& value) {
    SetOptionGroupName(std::forward<OptionGroupNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN from the key store with which the automated backup is associated for
   * TDE encryption.</p>
   */
  inline const Aws::String& GetTdeCredentialArn() const { return m_tdeCredentialArn; }
  inline bool TdeCredentialArnHasBeenSet() const { return m_tdeCredentialArnHasBeenSet; }
  template <typename TdeCredentialArnT = Aws::String>
  void SetTdeCredentialArn(TdeCredentialArnT&& value) {
    m_tdeCredentialArnHasBeenSet = true;
    m_tdeCredentialArn = std::forward<TdeCredentialArnT>(value);
  }
  template <typename TdeCredentialArnT = Aws::String>
  DBInstanceAutomatedBackup& WithTdeCredentialArn(TdeCredentialArnT&& value) {
    SetTdeCredentialArn(std::forward<TdeCredentialArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the automated backup is encrypted.</p>
   */
  inline bool GetEncrypted() const { return m_encrypted; }
  inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
  inline void SetEncrypted(bool value) {
    m_encryptedHasBeenSet = true;
    m_encrypted = value;
  }
  inline DBInstanceAutomatedBackup& WithEncrypted(bool value) {
    SetEncrypted(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of encryption used to protect data at rest in the automated backup.
   * Possible values:</p> <ul> <li> <p> <code>none</code> - The automated backup is
   * not encrypted.</p> </li> <li> <p> <code>sse-rds</code> - The automated backup is
   * encrypted using an Amazon Web Services owned KMS key.</p> </li> <li> <p>
   * <code>sse-kms</code> - The automated backup is encrypted using a customer
   * managed KMS key or Amazon Web Services managed KMS key.</p> </li> </ul>
   */
  inline StorageEncryptionType GetStorageEncryptionType() const { return m_storageEncryptionType; }
  inline bool StorageEncryptionTypeHasBeenSet() const { return m_storageEncryptionTypeHasBeenSet; }
  inline void SetStorageEncryptionType(StorageEncryptionType value) {
    m_storageEncryptionTypeHasBeenSet = true;
    m_storageEncryptionType = value;
  }
  inline DBInstanceAutomatedBackup& WithStorageEncryptionType(StorageEncryptionType value) {
    SetStorageEncryptionType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The storage type associated with the automated backup.</p>
   */
  inline const Aws::String& GetStorageType() const { return m_storageType; }
  inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
  template <typename StorageTypeT = Aws::String>
  void SetStorageType(StorageTypeT&& value) {
    m_storageTypeHasBeenSet = true;
    m_storageType = std::forward<StorageTypeT>(value);
  }
  template <typename StorageTypeT = Aws::String>
  DBInstanceAutomatedBackup& WithStorageType(StorageTypeT&& value) {
    SetStorageType(std::forward<StorageTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services KMS key ID for an automated backup.</p> <p>The Amazon
   * Web Services KMS key identifier is the key ARN, key ID, alias ARN, or alias name
   * for the KMS key.</p>
   */
  inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
  inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
  template <typename KmsKeyIdT = Aws::String>
  void SetKmsKeyId(KmsKeyIdT&& value) {
    m_kmsKeyIdHasBeenSet = true;
    m_kmsKeyId = std::forward<KmsKeyIdT>(value);
  }
  template <typename KmsKeyIdT = Aws::String>
  DBInstanceAutomatedBackup& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time zone of the automated backup. In most cases, the
   * <code>Timezone</code> element is empty. <code>Timezone</code> content appears
   * only for Microsoft SQL Server DB instances that were created with a time zone
   * specified.</p>
   */
  inline const Aws::String& GetTimezone() const { return m_timezone; }
  inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }
  template <typename TimezoneT = Aws::String>
  void SetTimezone(TimezoneT&& value) {
    m_timezoneHasBeenSet = true;
    m_timezone = std::forward<TimezoneT>(value);
  }
  template <typename TimezoneT = Aws::String>
  DBInstanceAutomatedBackup& WithTimezone(TimezoneT&& value) {
    SetTimezone(std::forward<TimezoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>True if mapping of Amazon Web Services Identity and Access Management (IAM)
   * accounts to database accounts is enabled, and otherwise false.</p>
   */
  inline bool GetIAMDatabaseAuthenticationEnabled() const { return m_iAMDatabaseAuthenticationEnabled; }
  inline bool IAMDatabaseAuthenticationEnabledHasBeenSet() const { return m_iAMDatabaseAuthenticationEnabledHasBeenSet; }
  inline void SetIAMDatabaseAuthenticationEnabled(bool value) {
    m_iAMDatabaseAuthenticationEnabledHasBeenSet = true;
    m_iAMDatabaseAuthenticationEnabled = value;
  }
  inline DBInstanceAutomatedBackup& WithIAMDatabaseAuthenticationEnabled(bool value) {
    SetIAMDatabaseAuthenticationEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The retention period for the automated backups.</p>
   */
  inline int GetBackupRetentionPeriod() const { return m_backupRetentionPeriod; }
  inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }
  inline void SetBackupRetentionPeriod(int value) {
    m_backupRetentionPeriodHasBeenSet = true;
    m_backupRetentionPeriod = value;
  }
  inline DBInstanceAutomatedBackup& WithBackupRetentionPeriod(int value) {
    SetBackupRetentionPeriod(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The daily time range during which automated backups are created if automated
   * backups are enabled, as determined by the
   * <code>BackupRetentionPeriod</code>.</p>
   */
  inline const Aws::String& GetPreferredBackupWindow() const { return m_preferredBackupWindow; }
  inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }
  template <typename PreferredBackupWindowT = Aws::String>
  void SetPreferredBackupWindow(PreferredBackupWindowT&& value) {
    m_preferredBackupWindowHasBeenSet = true;
    m_preferredBackupWindow = std::forward<PreferredBackupWindowT>(value);
  }
  template <typename PreferredBackupWindowT = Aws::String>
  DBInstanceAutomatedBackup& WithPreferredBackupWindow(PreferredBackupWindowT&& value) {
    SetPreferredBackupWindow(std::forward<PreferredBackupWindowT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) for the replicated automated backups.</p>
   */
  inline const Aws::String& GetDBInstanceAutomatedBackupsArn() const { return m_dBInstanceAutomatedBackupsArn; }
  inline bool DBInstanceAutomatedBackupsArnHasBeenSet() const { return m_dBInstanceAutomatedBackupsArnHasBeenSet; }
  template <typename DBInstanceAutomatedBackupsArnT = Aws::String>
  void SetDBInstanceAutomatedBackupsArn(DBInstanceAutomatedBackupsArnT&& value) {
    m_dBInstanceAutomatedBackupsArnHasBeenSet = true;
    m_dBInstanceAutomatedBackupsArn = std::forward<DBInstanceAutomatedBackupsArnT>(value);
  }
  template <typename DBInstanceAutomatedBackupsArnT = Aws::String>
  DBInstanceAutomatedBackup& WithDBInstanceAutomatedBackupsArn(DBInstanceAutomatedBackupsArnT&& value) {
    SetDBInstanceAutomatedBackupsArn(std::forward<DBInstanceAutomatedBackupsArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of replications to different Amazon Web Services Regions associated
   * with the automated backup.</p>
   */
  inline const Aws::Vector<DBInstanceAutomatedBackupsReplication>& GetDBInstanceAutomatedBackupsReplications() const {
    return m_dBInstanceAutomatedBackupsReplications;
  }
  inline bool DBInstanceAutomatedBackupsReplicationsHasBeenSet() const { return m_dBInstanceAutomatedBackupsReplicationsHasBeenSet; }
  template <typename DBInstanceAutomatedBackupsReplicationsT = Aws::Vector<DBInstanceAutomatedBackupsReplication>>
  void SetDBInstanceAutomatedBackupsReplications(DBInstanceAutomatedBackupsReplicationsT&& value) {
    m_dBInstanceAutomatedBackupsReplicationsHasBeenSet = true;
    m_dBInstanceAutomatedBackupsReplications = std::forward<DBInstanceAutomatedBackupsReplicationsT>(value);
  }
  template <typename DBInstanceAutomatedBackupsReplicationsT = Aws::Vector<DBInstanceAutomatedBackupsReplication>>
  DBInstanceAutomatedBackup& WithDBInstanceAutomatedBackupsReplications(DBInstanceAutomatedBackupsReplicationsT&& value) {
    SetDBInstanceAutomatedBackupsReplications(std::forward<DBInstanceAutomatedBackupsReplicationsT>(value));
    return *this;
  }
  template <typename DBInstanceAutomatedBackupsReplicationsT = DBInstanceAutomatedBackupsReplication>
  DBInstanceAutomatedBackup& AddDBInstanceAutomatedBackupsReplications(DBInstanceAutomatedBackupsReplicationsT&& value) {
    m_dBInstanceAutomatedBackupsReplicationsHasBeenSet = true;
    m_dBInstanceAutomatedBackupsReplications.emplace_back(std::forward<DBInstanceAutomatedBackupsReplicationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The location where automated backups are stored: Dedicated Local Zones,
   * Amazon Web Services Outposts or the Amazon Web Services Region.</p>
   */
  inline const Aws::String& GetBackupTarget() const { return m_backupTarget; }
  inline bool BackupTargetHasBeenSet() const { return m_backupTargetHasBeenSet; }
  template <typename BackupTargetT = Aws::String>
  void SetBackupTarget(BackupTargetT&& value) {
    m_backupTargetHasBeenSet = true;
    m_backupTarget = std::forward<BackupTargetT>(value);
  }
  template <typename BackupTargetT = Aws::String>
  DBInstanceAutomatedBackup& WithBackupTarget(BackupTargetT&& value) {
    SetBackupTarget(std::forward<BackupTargetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the automatic backup is for a DB instance in the
   * multi-tenant configuration (TRUE) or the single-tenant configuration (FALSE).
   * </p>
   */
  inline bool GetMultiTenant() const { return m_multiTenant; }
  inline bool MultiTenantHasBeenSet() const { return m_multiTenantHasBeenSet; }
  inline void SetMultiTenant(bool value) {
    m_multiTenantHasBeenSet = true;
    m_multiTenant = value;
  }
  inline DBInstanceAutomatedBackup& WithMultiTenant(bool value) {
    SetMultiTenant(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the recovery point in Amazon Web Services
   * Backup.</p>
   */
  inline const Aws::String& GetAwsBackupRecoveryPointArn() const { return m_awsBackupRecoveryPointArn; }
  inline bool AwsBackupRecoveryPointArnHasBeenSet() const { return m_awsBackupRecoveryPointArnHasBeenSet; }
  template <typename AwsBackupRecoveryPointArnT = Aws::String>
  void SetAwsBackupRecoveryPointArn(AwsBackupRecoveryPointArnT&& value) {
    m_awsBackupRecoveryPointArnHasBeenSet = true;
    m_awsBackupRecoveryPointArn = std::forward<AwsBackupRecoveryPointArnT>(value);
  }
  template <typename AwsBackupRecoveryPointArnT = Aws::String>
  DBInstanceAutomatedBackup& WithAwsBackupRecoveryPointArn(AwsBackupRecoveryPointArnT&& value) {
    SetAwsBackupRecoveryPointArn(std::forward<AwsBackupRecoveryPointArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Tag>& GetTagList() const { return m_tagList; }
  inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }
  template <typename TagListT = Aws::Vector<Tag>>
  void SetTagList(TagListT&& value) {
    m_tagListHasBeenSet = true;
    m_tagList = std::forward<TagListT>(value);
  }
  template <typename TagListT = Aws::Vector<Tag>>
  DBInstanceAutomatedBackup& WithTagList(TagListT&& value) {
    SetTagList(std::forward<TagListT>(value));
    return *this;
  }
  template <typename TagListT = Tag>
  DBInstanceAutomatedBackup& AddTagList(TagListT&& value) {
    m_tagListHasBeenSet = true;
    m_tagList.emplace_back(std::forward<TagListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the DB instance has a dedicated log volume (DLV)
   * enabled.</p>
   */
  inline bool GetDedicatedLogVolume() const { return m_dedicatedLogVolume; }
  inline bool DedicatedLogVolumeHasBeenSet() const { return m_dedicatedLogVolumeHasBeenSet; }
  inline void SetDedicatedLogVolume(bool value) {
    m_dedicatedLogVolumeHasBeenSet = true;
    m_dedicatedLogVolume = value;
  }
  inline DBInstanceAutomatedBackup& WithDedicatedLogVolume(bool value) {
    SetDedicatedLogVolume(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The additional storage volumes associated with the automated backup.</p>
   * <p>Valid Values: <code>GP3 | IO2</code> </p>
   */
  inline const Aws::Vector<AdditionalStorageVolume>& GetAdditionalStorageVolumes() const { return m_additionalStorageVolumes; }
  inline bool AdditionalStorageVolumesHasBeenSet() const { return m_additionalStorageVolumesHasBeenSet; }
  template <typename AdditionalStorageVolumesT = Aws::Vector<AdditionalStorageVolume>>
  void SetAdditionalStorageVolumes(AdditionalStorageVolumesT&& value) {
    m_additionalStorageVolumesHasBeenSet = true;
    m_additionalStorageVolumes = std::forward<AdditionalStorageVolumesT>(value);
  }
  template <typename AdditionalStorageVolumesT = Aws::Vector<AdditionalStorageVolume>>
  DBInstanceAutomatedBackup& WithAdditionalStorageVolumes(AdditionalStorageVolumesT&& value) {
    SetAdditionalStorageVolumes(std::forward<AdditionalStorageVolumesT>(value));
    return *this;
  }
  template <typename AdditionalStorageVolumesT = AdditionalStorageVolume>
  DBInstanceAutomatedBackup& AddAdditionalStorageVolumes(AdditionalStorageVolumesT&& value) {
    m_additionalStorageVolumesHasBeenSet = true;
    m_additionalStorageVolumes.emplace_back(std::forward<AdditionalStorageVolumesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_dBInstanceArn;

  Aws::String m_dbiResourceId;

  Aws::String m_region;

  Aws::String m_dBInstanceIdentifier;

  RestoreWindow m_restoreWindow;

  int m_allocatedStorage{0};

  Aws::String m_status;

  int m_port{0};

  Aws::String m_availabilityZone;

  Aws::String m_vpcId;

  Aws::Utils::DateTime m_instanceCreateTime{};

  Aws::String m_masterUsername;

  Aws::String m_engine;

  Aws::String m_engineVersion;

  Aws::String m_licenseModel;

  int m_iops{0};

  int m_storageThroughput{0};

  Aws::String m_optionGroupName;

  Aws::String m_tdeCredentialArn;

  bool m_encrypted{false};

  StorageEncryptionType m_storageEncryptionType{StorageEncryptionType::NOT_SET};

  Aws::String m_storageType;

  Aws::String m_kmsKeyId;

  Aws::String m_timezone;

  bool m_iAMDatabaseAuthenticationEnabled{false};

  int m_backupRetentionPeriod{0};

  Aws::String m_preferredBackupWindow;

  Aws::String m_dBInstanceAutomatedBackupsArn;

  Aws::Vector<DBInstanceAutomatedBackupsReplication> m_dBInstanceAutomatedBackupsReplications;

  Aws::String m_backupTarget;

  bool m_multiTenant{false};

  Aws::String m_awsBackupRecoveryPointArn;

  Aws::Vector<Tag> m_tagList;

  bool m_dedicatedLogVolume{false};

  Aws::Vector<AdditionalStorageVolume> m_additionalStorageVolumes;
  bool m_dBInstanceArnHasBeenSet = false;
  bool m_dbiResourceIdHasBeenSet = false;
  bool m_regionHasBeenSet = false;
  bool m_dBInstanceIdentifierHasBeenSet = false;
  bool m_restoreWindowHasBeenSet = false;
  bool m_allocatedStorageHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_portHasBeenSet = false;
  bool m_availabilityZoneHasBeenSet = false;
  bool m_vpcIdHasBeenSet = false;
  bool m_instanceCreateTimeHasBeenSet = false;
  bool m_masterUsernameHasBeenSet = false;
  bool m_engineHasBeenSet = false;
  bool m_engineVersionHasBeenSet = false;
  bool m_licenseModelHasBeenSet = false;
  bool m_iopsHasBeenSet = false;
  bool m_storageThroughputHasBeenSet = false;
  bool m_optionGroupNameHasBeenSet = false;
  bool m_tdeCredentialArnHasBeenSet = false;
  bool m_encryptedHasBeenSet = false;
  bool m_storageEncryptionTypeHasBeenSet = false;
  bool m_storageTypeHasBeenSet = false;
  bool m_kmsKeyIdHasBeenSet = false;
  bool m_timezoneHasBeenSet = false;
  bool m_iAMDatabaseAuthenticationEnabledHasBeenSet = false;
  bool m_backupRetentionPeriodHasBeenSet = false;
  bool m_preferredBackupWindowHasBeenSet = false;
  bool m_dBInstanceAutomatedBackupsArnHasBeenSet = false;
  bool m_dBInstanceAutomatedBackupsReplicationsHasBeenSet = false;
  bool m_backupTargetHasBeenSet = false;
  bool m_multiTenantHasBeenSet = false;
  bool m_awsBackupRecoveryPointArnHasBeenSet = false;
  bool m_tagListHasBeenSet = false;
  bool m_dedicatedLogVolumeHasBeenSet = false;
  bool m_additionalStorageVolumesHasBeenSet = false;
};

}  // namespace Model
}  // namespace RDS
}  // namespace Aws
