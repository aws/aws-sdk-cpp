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
#include <aws/rds/model/ProcessorFeature.h>
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
 * <p>Contains the details of an Amazon RDS DB snapshot.</p> <p>This data type is
 * used as a response element in the <code>DescribeDBSnapshots</code>
 * action.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBSnapshot">AWS API
 * Reference</a></p>
 */
class DBSnapshot {
 public:
  AWS_RDS_API DBSnapshot() = default;
  AWS_RDS_API DBSnapshot(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_RDS_API DBSnapshot& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>Specifies the identifier for the DB snapshot.</p>
   */
  inline const Aws::String& GetDBSnapshotIdentifier() const { return m_dBSnapshotIdentifier; }
  inline bool DBSnapshotIdentifierHasBeenSet() const { return m_dBSnapshotIdentifierHasBeenSet; }
  template <typename DBSnapshotIdentifierT = Aws::String>
  void SetDBSnapshotIdentifier(DBSnapshotIdentifierT&& value) {
    m_dBSnapshotIdentifierHasBeenSet = true;
    m_dBSnapshotIdentifier = std::forward<DBSnapshotIdentifierT>(value);
  }
  template <typename DBSnapshotIdentifierT = Aws::String>
  DBSnapshot& WithDBSnapshotIdentifier(DBSnapshotIdentifierT&& value) {
    SetDBSnapshotIdentifier(std::forward<DBSnapshotIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the DB instance identifier of the DB instance this DB snapshot was
   * created from.</p>
   */
  inline const Aws::String& GetDBInstanceIdentifier() const { return m_dBInstanceIdentifier; }
  inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }
  template <typename DBInstanceIdentifierT = Aws::String>
  void SetDBInstanceIdentifier(DBInstanceIdentifierT&& value) {
    m_dBInstanceIdentifierHasBeenSet = true;
    m_dBInstanceIdentifier = std::forward<DBInstanceIdentifierT>(value);
  }
  template <typename DBInstanceIdentifierT = Aws::String>
  DBSnapshot& WithDBInstanceIdentifier(DBInstanceIdentifierT&& value) {
    SetDBInstanceIdentifier(std::forward<DBInstanceIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies when the snapshot was taken in Coordinated Universal Time (UTC).
   * Changes for the copy when the snapshot is copied.</p>
   */
  inline const Aws::Utils::DateTime& GetSnapshotCreateTime() const { return m_snapshotCreateTime; }
  inline bool SnapshotCreateTimeHasBeenSet() const { return m_snapshotCreateTimeHasBeenSet; }
  template <typename SnapshotCreateTimeT = Aws::Utils::DateTime>
  void SetSnapshotCreateTime(SnapshotCreateTimeT&& value) {
    m_snapshotCreateTimeHasBeenSet = true;
    m_snapshotCreateTime = std::forward<SnapshotCreateTimeT>(value);
  }
  template <typename SnapshotCreateTimeT = Aws::Utils::DateTime>
  DBSnapshot& WithSnapshotCreateTime(SnapshotCreateTimeT&& value) {
    SetSnapshotCreateTime(std::forward<SnapshotCreateTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the name of the database engine.</p>
   */
  inline const Aws::String& GetEngine() const { return m_engine; }
  inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
  template <typename EngineT = Aws::String>
  void SetEngine(EngineT&& value) {
    m_engineHasBeenSet = true;
    m_engine = std::forward<EngineT>(value);
  }
  template <typename EngineT = Aws::String>
  DBSnapshot& WithEngine(EngineT&& value) {
    SetEngine(std::forward<EngineT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the allocated storage size in gibibytes (GiB).</p>
   */
  inline int GetAllocatedStorage() const { return m_allocatedStorage; }
  inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
  inline void SetAllocatedStorage(int value) {
    m_allocatedStorageHasBeenSet = true;
    m_allocatedStorage = value;
  }
  inline DBSnapshot& WithAllocatedStorage(int value) {
    SetAllocatedStorage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the status of this DB snapshot.</p>
   */
  inline const Aws::String& GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  template <typename StatusT = Aws::String>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = Aws::String>
  DBSnapshot& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the port that the database engine was listening on at the time of
   * the snapshot.</p>
   */
  inline int GetPort() const { return m_port; }
  inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
  inline void SetPort(int value) {
    m_portHasBeenSet = true;
    m_port = value;
  }
  inline DBSnapshot& WithPort(int value) {
    SetPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the name of the Availability Zone the DB instance was located in at
   * the time of the DB snapshot.</p>
   */
  inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
  inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
  template <typename AvailabilityZoneT = Aws::String>
  void SetAvailabilityZone(AvailabilityZoneT&& value) {
    m_availabilityZoneHasBeenSet = true;
    m_availabilityZone = std::forward<AvailabilityZoneT>(value);
  }
  template <typename AvailabilityZoneT = Aws::String>
  DBSnapshot& WithAvailabilityZone(AvailabilityZoneT&& value) {
    SetAvailabilityZone(std::forward<AvailabilityZoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Provides the VPC ID associated with the DB snapshot.</p>
   */
  inline const Aws::String& GetVpcId() const { return m_vpcId; }
  inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
  template <typename VpcIdT = Aws::String>
  void SetVpcId(VpcIdT&& value) {
    m_vpcIdHasBeenSet = true;
    m_vpcId = std::forward<VpcIdT>(value);
  }
  template <typename VpcIdT = Aws::String>
  DBSnapshot& WithVpcId(VpcIdT&& value) {
    SetVpcId(std::forward<VpcIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the time in Coordinated Universal Time (UTC) when the DB instance,
   * from which the snapshot was taken, was created.</p>
   */
  inline const Aws::Utils::DateTime& GetInstanceCreateTime() const { return m_instanceCreateTime; }
  inline bool InstanceCreateTimeHasBeenSet() const { return m_instanceCreateTimeHasBeenSet; }
  template <typename InstanceCreateTimeT = Aws::Utils::DateTime>
  void SetInstanceCreateTime(InstanceCreateTimeT&& value) {
    m_instanceCreateTimeHasBeenSet = true;
    m_instanceCreateTime = std::forward<InstanceCreateTimeT>(value);
  }
  template <typename InstanceCreateTimeT = Aws::Utils::DateTime>
  DBSnapshot& WithInstanceCreateTime(InstanceCreateTimeT&& value) {
    SetInstanceCreateTime(std::forward<InstanceCreateTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Provides the master username for the DB snapshot.</p>
   */
  inline const Aws::String& GetMasterUsername() const { return m_masterUsername; }
  inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }
  template <typename MasterUsernameT = Aws::String>
  void SetMasterUsername(MasterUsernameT&& value) {
    m_masterUsernameHasBeenSet = true;
    m_masterUsername = std::forward<MasterUsernameT>(value);
  }
  template <typename MasterUsernameT = Aws::String>
  DBSnapshot& WithMasterUsername(MasterUsernameT&& value) {
    SetMasterUsername(std::forward<MasterUsernameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the version of the database engine.</p>
   */
  inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
  inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
  template <typename EngineVersionT = Aws::String>
  void SetEngineVersion(EngineVersionT&& value) {
    m_engineVersionHasBeenSet = true;
    m_engineVersion = std::forward<EngineVersionT>(value);
  }
  template <typename EngineVersionT = Aws::String>
  DBSnapshot& WithEngineVersion(EngineVersionT&& value) {
    SetEngineVersion(std::forward<EngineVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>License model information for the restored DB instance.</p>
   */
  inline const Aws::String& GetLicenseModel() const { return m_licenseModel; }
  inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }
  template <typename LicenseModelT = Aws::String>
  void SetLicenseModel(LicenseModelT&& value) {
    m_licenseModelHasBeenSet = true;
    m_licenseModel = std::forward<LicenseModelT>(value);
  }
  template <typename LicenseModelT = Aws::String>
  DBSnapshot& WithLicenseModel(LicenseModelT&& value) {
    SetLicenseModel(std::forward<LicenseModelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Provides the type of the DB snapshot.</p>
   */
  inline const Aws::String& GetSnapshotType() const { return m_snapshotType; }
  inline bool SnapshotTypeHasBeenSet() const { return m_snapshotTypeHasBeenSet; }
  template <typename SnapshotTypeT = Aws::String>
  void SetSnapshotType(SnapshotTypeT&& value) {
    m_snapshotTypeHasBeenSet = true;
    m_snapshotType = std::forward<SnapshotTypeT>(value);
  }
  template <typename SnapshotTypeT = Aws::String>
  DBSnapshot& WithSnapshotType(SnapshotTypeT&& value) {
    SetSnapshotType(std::forward<SnapshotTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the Provisioned IOPS (I/O operations per second) value of the DB
   * instance at the time of the snapshot.</p>
   */
  inline int GetIops() const { return m_iops; }
  inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
  inline void SetIops(int value) {
    m_iopsHasBeenSet = true;
    m_iops = value;
  }
  inline DBSnapshot& WithIops(int value) {
    SetIops(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the storage throughput for the DB snapshot.</p>
   */
  inline int GetStorageThroughput() const { return m_storageThroughput; }
  inline bool StorageThroughputHasBeenSet() const { return m_storageThroughputHasBeenSet; }
  inline void SetStorageThroughput(int value) {
    m_storageThroughputHasBeenSet = true;
    m_storageThroughput = value;
  }
  inline DBSnapshot& WithStorageThroughput(int value) {
    SetStorageThroughput(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Provides the option group name for the DB snapshot.</p>
   */
  inline const Aws::String& GetOptionGroupName() const { return m_optionGroupName; }
  inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }
  template <typename OptionGroupNameT = Aws::String>
  void SetOptionGroupName(OptionGroupNameT&& value) {
    m_optionGroupNameHasBeenSet = true;
    m_optionGroupName = std::forward<OptionGroupNameT>(value);
  }
  template <typename OptionGroupNameT = Aws::String>
  DBSnapshot& WithOptionGroupName(OptionGroupNameT&& value) {
    SetOptionGroupName(std::forward<OptionGroupNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The percentage of the estimated data that has been transferred.</p>
   */
  inline int GetPercentProgress() const { return m_percentProgress; }
  inline bool PercentProgressHasBeenSet() const { return m_percentProgressHasBeenSet; }
  inline void SetPercentProgress(int value) {
    m_percentProgressHasBeenSet = true;
    m_percentProgress = value;
  }
  inline DBSnapshot& WithPercentProgress(int value) {
    SetPercentProgress(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Region that the DB snapshot was created in or copied
   * from.</p>
   */
  inline const Aws::String& GetSourceRegion() const { return m_sourceRegion; }
  inline bool SourceRegionHasBeenSet() const { return m_sourceRegionHasBeenSet; }
  template <typename SourceRegionT = Aws::String>
  void SetSourceRegion(SourceRegionT&& value) {
    m_sourceRegionHasBeenSet = true;
    m_sourceRegion = std::forward<SourceRegionT>(value);
  }
  template <typename SourceRegionT = Aws::String>
  DBSnapshot& WithSourceRegion(SourceRegionT&& value) {
    SetSourceRegion(std::forward<SourceRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The DB snapshot Amazon Resource Name (ARN) that the DB snapshot was copied
   * from. It only has a value in the case of a cross-account or cross-Region
   * copy.</p>
   */
  inline const Aws::String& GetSourceDBSnapshotIdentifier() const { return m_sourceDBSnapshotIdentifier; }
  inline bool SourceDBSnapshotIdentifierHasBeenSet() const { return m_sourceDBSnapshotIdentifierHasBeenSet; }
  template <typename SourceDBSnapshotIdentifierT = Aws::String>
  void SetSourceDBSnapshotIdentifier(SourceDBSnapshotIdentifierT&& value) {
    m_sourceDBSnapshotIdentifierHasBeenSet = true;
    m_sourceDBSnapshotIdentifier = std::forward<SourceDBSnapshotIdentifierT>(value);
  }
  template <typename SourceDBSnapshotIdentifierT = Aws::String>
  DBSnapshot& WithSourceDBSnapshotIdentifier(SourceDBSnapshotIdentifierT&& value) {
    SetSourceDBSnapshotIdentifier(std::forward<SourceDBSnapshotIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the storage type associated with DB snapshot.</p>
   */
  inline const Aws::String& GetStorageType() const { return m_storageType; }
  inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
  template <typename StorageTypeT = Aws::String>
  void SetStorageType(StorageTypeT&& value) {
    m_storageTypeHasBeenSet = true;
    m_storageType = std::forward<StorageTypeT>(value);
  }
  template <typename StorageTypeT = Aws::String>
  DBSnapshot& WithStorageType(StorageTypeT&& value) {
    SetStorageType(std::forward<StorageTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN from the key store with which to associate the instance for TDE
   * encryption.</p>
   */
  inline const Aws::String& GetTdeCredentialArn() const { return m_tdeCredentialArn; }
  inline bool TdeCredentialArnHasBeenSet() const { return m_tdeCredentialArnHasBeenSet; }
  template <typename TdeCredentialArnT = Aws::String>
  void SetTdeCredentialArn(TdeCredentialArnT&& value) {
    m_tdeCredentialArnHasBeenSet = true;
    m_tdeCredentialArn = std::forward<TdeCredentialArnT>(value);
  }
  template <typename TdeCredentialArnT = Aws::String>
  DBSnapshot& WithTdeCredentialArn(TdeCredentialArnT&& value) {
    SetTdeCredentialArn(std::forward<TdeCredentialArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the DB snapshot is encrypted.</p>
   */
  inline bool GetEncrypted() const { return m_encrypted; }
  inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
  inline void SetEncrypted(bool value) {
    m_encryptedHasBeenSet = true;
    m_encrypted = value;
  }
  inline DBSnapshot& WithEncrypted(bool value) {
    SetEncrypted(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of encryption used to protect data at rest in the DB snapshot.
   * Possible values:</p> <ul> <li> <p> <code>none</code> - The DB snapshot is not
   * encrypted.</p> </li> <li> <p> <code>sse-rds</code> - The DB snapshot is
   * encrypted using an Amazon Web Services owned KMS key.</p> </li> <li> <p>
   * <code>sse-kms</code> - The DB snapshot is encrypted using a customer managed KMS
   * key or Amazon Web Services managed KMS key.</p> </li> </ul>
   */
  inline StorageEncryptionType GetStorageEncryptionType() const { return m_storageEncryptionType; }
  inline bool StorageEncryptionTypeHasBeenSet() const { return m_storageEncryptionTypeHasBeenSet; }
  inline void SetStorageEncryptionType(StorageEncryptionType value) {
    m_storageEncryptionTypeHasBeenSet = true;
    m_storageEncryptionType = value;
  }
  inline DBSnapshot& WithStorageEncryptionType(StorageEncryptionType value) {
    SetStorageEncryptionType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of days for which automatic DB snapshots are retained.</p>
   */
  inline int GetBackupRetentionPeriod() const { return m_backupRetentionPeriod; }
  inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }
  inline void SetBackupRetentionPeriod(int value) {
    m_backupRetentionPeriodHasBeenSet = true;
    m_backupRetentionPeriod = value;
  }
  inline DBSnapshot& WithBackupRetentionPeriod(int value) {
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
  DBSnapshot& WithPreferredBackupWindow(PreferredBackupWindowT&& value) {
    SetPreferredBackupWindow(std::forward<PreferredBackupWindowT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If <code>Encrypted</code> is true, the Amazon Web Services KMS key identifier
   * for the encrypted DB snapshot.</p> <p>The Amazon Web Services KMS key identifier
   * is the key ARN, key ID, alias ARN, or alias name for the KMS key.</p>
   */
  inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
  inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
  template <typename KmsKeyIdT = Aws::String>
  void SetKmsKeyId(KmsKeyIdT&& value) {
    m_kmsKeyIdHasBeenSet = true;
    m_kmsKeyId = std::forward<KmsKeyIdT>(value);
  }
  template <typename KmsKeyIdT = Aws::String>
  DBSnapshot& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) for the DB snapshot.</p>
   */
  inline const Aws::String& GetDBSnapshotArn() const { return m_dBSnapshotArn; }
  inline bool DBSnapshotArnHasBeenSet() const { return m_dBSnapshotArnHasBeenSet; }
  template <typename DBSnapshotArnT = Aws::String>
  void SetDBSnapshotArn(DBSnapshotArnT&& value) {
    m_dBSnapshotArnHasBeenSet = true;
    m_dBSnapshotArn = std::forward<DBSnapshotArnT>(value);
  }
  template <typename DBSnapshotArnT = Aws::String>
  DBSnapshot& WithDBSnapshotArn(DBSnapshotArnT&& value) {
    SetDBSnapshotArn(std::forward<DBSnapshotArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time zone of the DB snapshot. In most cases, the <code>Timezone</code>
   * element is empty. <code>Timezone</code> content appears only for snapshots taken
   * from Microsoft SQL Server DB instances that were created with a time zone
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
  DBSnapshot& WithTimezone(TimezoneT&& value) {
    SetTimezone(std::forward<TimezoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether mapping of Amazon Web Services Identity and Access
   * Management (IAM) accounts to database accounts is enabled.</p>
   */
  inline bool GetIAMDatabaseAuthenticationEnabled() const { return m_iAMDatabaseAuthenticationEnabled; }
  inline bool IAMDatabaseAuthenticationEnabledHasBeenSet() const { return m_iAMDatabaseAuthenticationEnabledHasBeenSet; }
  inline void SetIAMDatabaseAuthenticationEnabled(bool value) {
    m_iAMDatabaseAuthenticationEnabledHasBeenSet = true;
    m_iAMDatabaseAuthenticationEnabled = value;
  }
  inline DBSnapshot& WithIAMDatabaseAuthenticationEnabled(bool value) {
    SetIAMDatabaseAuthenticationEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of CPU cores and the number of threads per core for the DB
   * instance class of the DB instance when the DB snapshot was created.</p>
   */
  inline const Aws::Vector<ProcessorFeature>& GetProcessorFeatures() const { return m_processorFeatures; }
  inline bool ProcessorFeaturesHasBeenSet() const { return m_processorFeaturesHasBeenSet; }
  template <typename ProcessorFeaturesT = Aws::Vector<ProcessorFeature>>
  void SetProcessorFeatures(ProcessorFeaturesT&& value) {
    m_processorFeaturesHasBeenSet = true;
    m_processorFeatures = std::forward<ProcessorFeaturesT>(value);
  }
  template <typename ProcessorFeaturesT = Aws::Vector<ProcessorFeature>>
  DBSnapshot& WithProcessorFeatures(ProcessorFeaturesT&& value) {
    SetProcessorFeatures(std::forward<ProcessorFeaturesT>(value));
    return *this;
  }
  template <typename ProcessorFeaturesT = ProcessorFeature>
  DBSnapshot& AddProcessorFeatures(ProcessorFeaturesT&& value) {
    m_processorFeaturesHasBeenSet = true;
    m_processorFeatures.emplace_back(std::forward<ProcessorFeaturesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier for the source DB instance, which can't be changed and which
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
  DBSnapshot& WithDbiResourceId(DbiResourceIdT&& value) {
    SetDbiResourceId(std::forward<DbiResourceIdT>(value));
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
  DBSnapshot& WithTagList(TagListT&& value) {
    SetTagList(std::forward<TagListT>(value));
    return *this;
  }
  template <typename TagListT = Tag>
  DBSnapshot& AddTagList(TagListT&& value) {
    m_tagListHasBeenSet = true;
    m_tagList.emplace_back(std::forward<TagListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies where manual snapshots are stored: Dedicated Local Zones, Amazon
   * Web Services Outposts or the Amazon Web Services Region.</p>
   */
  inline const Aws::String& GetSnapshotTarget() const { return m_snapshotTarget; }
  inline bool SnapshotTargetHasBeenSet() const { return m_snapshotTargetHasBeenSet; }
  template <typename SnapshotTargetT = Aws::String>
  void SetSnapshotTarget(SnapshotTargetT&& value) {
    m_snapshotTargetHasBeenSet = true;
    m_snapshotTarget = std::forward<SnapshotTargetT>(value);
  }
  template <typename SnapshotTargetT = Aws::String>
  DBSnapshot& WithSnapshotTarget(SnapshotTargetT&& value) {
    SetSnapshotTarget(std::forward<SnapshotTargetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the time of the CreateDBSnapshot operation in Coordinated Universal
   * Time (UTC). Doesn't change when the snapshot is copied.</p>
   */
  inline const Aws::Utils::DateTime& GetOriginalSnapshotCreateTime() const { return m_originalSnapshotCreateTime; }
  inline bool OriginalSnapshotCreateTimeHasBeenSet() const { return m_originalSnapshotCreateTimeHasBeenSet; }
  template <typename OriginalSnapshotCreateTimeT = Aws::Utils::DateTime>
  void SetOriginalSnapshotCreateTime(OriginalSnapshotCreateTimeT&& value) {
    m_originalSnapshotCreateTimeHasBeenSet = true;
    m_originalSnapshotCreateTime = std::forward<OriginalSnapshotCreateTimeT>(value);
  }
  template <typename OriginalSnapshotCreateTimeT = Aws::Utils::DateTime>
  DBSnapshot& WithOriginalSnapshotCreateTime(OriginalSnapshotCreateTimeT&& value) {
    SetOriginalSnapshotCreateTime(std::forward<OriginalSnapshotCreateTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of the most recent transaction applied to the database that
   * you're backing up. Thus, if you restore a snapshot, SnapshotDatabaseTime is the
   * most recent transaction in the restored DB instance. In contrast,
   * originalSnapshotCreateTime specifies the system time that the snapshot
   * completed.</p> <p>If you back up a read replica, you can determine the replica
   * lag by comparing SnapshotDatabaseTime with originalSnapshotCreateTime. For
   * example, if originalSnapshotCreateTime is two hours later than
   * SnapshotDatabaseTime, then the replica lag is two hours.</p>
   */
  inline const Aws::Utils::DateTime& GetSnapshotDatabaseTime() const { return m_snapshotDatabaseTime; }
  inline bool SnapshotDatabaseTimeHasBeenSet() const { return m_snapshotDatabaseTimeHasBeenSet; }
  template <typename SnapshotDatabaseTimeT = Aws::Utils::DateTime>
  void SetSnapshotDatabaseTime(SnapshotDatabaseTimeT&& value) {
    m_snapshotDatabaseTimeHasBeenSet = true;
    m_snapshotDatabaseTime = std::forward<SnapshotDatabaseTimeT>(value);
  }
  template <typename SnapshotDatabaseTimeT = Aws::Utils::DateTime>
  DBSnapshot& WithSnapshotDatabaseTime(SnapshotDatabaseTimeT&& value) {
    SetSnapshotDatabaseTime(std::forward<SnapshotDatabaseTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Oracle system identifier (SID), which is the name of the Oracle database
   * instance that manages your database files. The Oracle SID is also the name of
   * your CDB.</p>
   */
  inline const Aws::String& GetDBSystemId() const { return m_dBSystemId; }
  inline bool DBSystemIdHasBeenSet() const { return m_dBSystemIdHasBeenSet; }
  template <typename DBSystemIdT = Aws::String>
  void SetDBSystemId(DBSystemIdT&& value) {
    m_dBSystemIdHasBeenSet = true;
    m_dBSystemId = std::forward<DBSystemIdT>(value);
  }
  template <typename DBSystemIdT = Aws::String>
  DBSnapshot& WithDBSystemId(DBSystemIdT&& value) {
    SetDBSystemId(std::forward<DBSystemIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the snapshot is of a DB instance using the multi-tenant
   * configuration (TRUE) or the single-tenant configuration (FALSE).</p>
   */
  inline bool GetMultiTenant() const { return m_multiTenant; }
  inline bool MultiTenantHasBeenSet() const { return m_multiTenantHasBeenSet; }
  inline void SetMultiTenant(bool value) {
    m_multiTenantHasBeenSet = true;
    m_multiTenant = value;
  }
  inline DBSnapshot& WithMultiTenant(bool value) {
    SetMultiTenant(value);
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
  inline DBSnapshot& WithDedicatedLogVolume(bool value) {
    SetDedicatedLogVolume(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The additional storage volumes associated with the DB snapshot. RDS supports
   * additional storage volumes for RDS for Oracle and RDS for SQL Server.</p>
   */
  inline const Aws::Vector<AdditionalStorageVolume>& GetAdditionalStorageVolumes() const { return m_additionalStorageVolumes; }
  inline bool AdditionalStorageVolumesHasBeenSet() const { return m_additionalStorageVolumesHasBeenSet; }
  template <typename AdditionalStorageVolumesT = Aws::Vector<AdditionalStorageVolume>>
  void SetAdditionalStorageVolumes(AdditionalStorageVolumesT&& value) {
    m_additionalStorageVolumesHasBeenSet = true;
    m_additionalStorageVolumes = std::forward<AdditionalStorageVolumesT>(value);
  }
  template <typename AdditionalStorageVolumesT = Aws::Vector<AdditionalStorageVolume>>
  DBSnapshot& WithAdditionalStorageVolumes(AdditionalStorageVolumesT&& value) {
    SetAdditionalStorageVolumes(std::forward<AdditionalStorageVolumesT>(value));
    return *this;
  }
  template <typename AdditionalStorageVolumesT = AdditionalStorageVolume>
  DBSnapshot& AddAdditionalStorageVolumes(AdditionalStorageVolumesT&& value) {
    m_additionalStorageVolumesHasBeenSet = true;
    m_additionalStorageVolumes.emplace_back(std::forward<AdditionalStorageVolumesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the name of the Availability Zone where RDS stores the DB snapshot.
   * This value is valid only for snapshots that RDS stores on a Dedicated Local
   * Zone.</p>
   */
  inline const Aws::String& GetSnapshotAvailabilityZone() const { return m_snapshotAvailabilityZone; }
  inline bool SnapshotAvailabilityZoneHasBeenSet() const { return m_snapshotAvailabilityZoneHasBeenSet; }
  template <typename SnapshotAvailabilityZoneT = Aws::String>
  void SetSnapshotAvailabilityZone(SnapshotAvailabilityZoneT&& value) {
    m_snapshotAvailabilityZoneHasBeenSet = true;
    m_snapshotAvailabilityZone = std::forward<SnapshotAvailabilityZoneT>(value);
  }
  template <typename SnapshotAvailabilityZoneT = Aws::String>
  DBSnapshot& WithSnapshotAvailabilityZone(SnapshotAvailabilityZoneT&& value) {
    SetSnapshotAvailabilityZone(std::forward<SnapshotAvailabilityZoneT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_dBSnapshotIdentifier;

  Aws::String m_dBInstanceIdentifier;

  Aws::Utils::DateTime m_snapshotCreateTime{};

  Aws::String m_engine;

  int m_allocatedStorage{0};

  Aws::String m_status;

  int m_port{0};

  Aws::String m_availabilityZone;

  Aws::String m_vpcId;

  Aws::Utils::DateTime m_instanceCreateTime{};

  Aws::String m_masterUsername;

  Aws::String m_engineVersion;

  Aws::String m_licenseModel;

  Aws::String m_snapshotType;

  int m_iops{0};

  int m_storageThroughput{0};

  Aws::String m_optionGroupName;

  int m_percentProgress{0};

  Aws::String m_sourceRegion;

  Aws::String m_sourceDBSnapshotIdentifier;

  Aws::String m_storageType;

  Aws::String m_tdeCredentialArn;

  bool m_encrypted{false};

  StorageEncryptionType m_storageEncryptionType{StorageEncryptionType::NOT_SET};

  int m_backupRetentionPeriod{0};

  Aws::String m_preferredBackupWindow;

  Aws::String m_kmsKeyId;

  Aws::String m_dBSnapshotArn;

  Aws::String m_timezone;

  bool m_iAMDatabaseAuthenticationEnabled{false};

  Aws::Vector<ProcessorFeature> m_processorFeatures;

  Aws::String m_dbiResourceId;

  Aws::Vector<Tag> m_tagList;

  Aws::String m_snapshotTarget;

  Aws::Utils::DateTime m_originalSnapshotCreateTime{};

  Aws::Utils::DateTime m_snapshotDatabaseTime{};

  Aws::String m_dBSystemId;

  bool m_multiTenant{false};

  bool m_dedicatedLogVolume{false};

  Aws::Vector<AdditionalStorageVolume> m_additionalStorageVolumes;

  Aws::String m_snapshotAvailabilityZone;
  bool m_dBSnapshotIdentifierHasBeenSet = false;
  bool m_dBInstanceIdentifierHasBeenSet = false;
  bool m_snapshotCreateTimeHasBeenSet = false;
  bool m_engineHasBeenSet = false;
  bool m_allocatedStorageHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_portHasBeenSet = false;
  bool m_availabilityZoneHasBeenSet = false;
  bool m_vpcIdHasBeenSet = false;
  bool m_instanceCreateTimeHasBeenSet = false;
  bool m_masterUsernameHasBeenSet = false;
  bool m_engineVersionHasBeenSet = false;
  bool m_licenseModelHasBeenSet = false;
  bool m_snapshotTypeHasBeenSet = false;
  bool m_iopsHasBeenSet = false;
  bool m_storageThroughputHasBeenSet = false;
  bool m_optionGroupNameHasBeenSet = false;
  bool m_percentProgressHasBeenSet = false;
  bool m_sourceRegionHasBeenSet = false;
  bool m_sourceDBSnapshotIdentifierHasBeenSet = false;
  bool m_storageTypeHasBeenSet = false;
  bool m_tdeCredentialArnHasBeenSet = false;
  bool m_encryptedHasBeenSet = false;
  bool m_storageEncryptionTypeHasBeenSet = false;
  bool m_backupRetentionPeriodHasBeenSet = false;
  bool m_preferredBackupWindowHasBeenSet = false;
  bool m_kmsKeyIdHasBeenSet = false;
  bool m_dBSnapshotArnHasBeenSet = false;
  bool m_timezoneHasBeenSet = false;
  bool m_iAMDatabaseAuthenticationEnabledHasBeenSet = false;
  bool m_processorFeaturesHasBeenSet = false;
  bool m_dbiResourceIdHasBeenSet = false;
  bool m_tagListHasBeenSet = false;
  bool m_snapshotTargetHasBeenSet = false;
  bool m_originalSnapshotCreateTimeHasBeenSet = false;
  bool m_snapshotDatabaseTimeHasBeenSet = false;
  bool m_dBSystemIdHasBeenSet = false;
  bool m_multiTenantHasBeenSet = false;
  bool m_dedicatedLogVolumeHasBeenSet = false;
  bool m_additionalStorageVolumesHasBeenSet = false;
  bool m_snapshotAvailabilityZoneHasBeenSet = false;
};

}  // namespace Model
}  // namespace RDS
}  // namespace Aws
