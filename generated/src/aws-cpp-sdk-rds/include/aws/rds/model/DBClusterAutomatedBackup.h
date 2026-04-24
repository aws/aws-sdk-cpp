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
 * <p>An automated backup of a DB cluster. It consists of system backups,
 * transaction logs, and the database cluster properties that existed at the time
 * you deleted the source cluster.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBClusterAutomatedBackup">AWS
 * API Reference</a></p>
 */
class DBClusterAutomatedBackup {
 public:
  AWS_RDS_API DBClusterAutomatedBackup() = default;
  AWS_RDS_API DBClusterAutomatedBackup(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_RDS_API DBClusterAutomatedBackup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

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
  DBClusterAutomatedBackup& WithEngine(EngineT&& value) {
    SetEngine(std::forward<EngineT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The VPC ID associated with the DB cluster.</p>
   */
  inline const Aws::String& GetVpcId() const { return m_vpcId; }
  inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
  template <typename VpcIdT = Aws::String>
  void SetVpcId(VpcIdT&& value) {
    m_vpcIdHasBeenSet = true;
    m_vpcId = std::forward<VpcIdT>(value);
  }
  template <typename VpcIdT = Aws::String>
  DBClusterAutomatedBackup& WithVpcId(VpcIdT&& value) {
    SetVpcId(std::forward<VpcIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) for the automated backups.</p>
   */
  inline const Aws::String& GetDBClusterAutomatedBackupsArn() const { return m_dBClusterAutomatedBackupsArn; }
  inline bool DBClusterAutomatedBackupsArnHasBeenSet() const { return m_dBClusterAutomatedBackupsArnHasBeenSet; }
  template <typename DBClusterAutomatedBackupsArnT = Aws::String>
  void SetDBClusterAutomatedBackupsArn(DBClusterAutomatedBackupsArnT&& value) {
    m_dBClusterAutomatedBackupsArnHasBeenSet = true;
    m_dBClusterAutomatedBackupsArn = std::forward<DBClusterAutomatedBackupsArnT>(value);
  }
  template <typename DBClusterAutomatedBackupsArnT = Aws::String>
  DBClusterAutomatedBackup& WithDBClusterAutomatedBackupsArn(DBClusterAutomatedBackupsArnT&& value) {
    SetDBClusterAutomatedBackupsArn(std::forward<DBClusterAutomatedBackupsArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier for the source DB cluster, which can't be changed and which is
   * unique to an Amazon Web Services Region.</p>
   */
  inline const Aws::String& GetDBClusterIdentifier() const { return m_dBClusterIdentifier; }
  inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }
  template <typename DBClusterIdentifierT = Aws::String>
  void SetDBClusterIdentifier(DBClusterIdentifierT&& value) {
    m_dBClusterIdentifierHasBeenSet = true;
    m_dBClusterIdentifier = std::forward<DBClusterIdentifierT>(value);
  }
  template <typename DBClusterIdentifierT = Aws::String>
  DBClusterAutomatedBackup& WithDBClusterIdentifier(DBClusterIdentifierT&& value) {
    SetDBClusterIdentifier(std::forward<DBClusterIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const RestoreWindow& GetRestoreWindow() const { return m_restoreWindow; }
  inline bool RestoreWindowHasBeenSet() const { return m_restoreWindowHasBeenSet; }
  template <typename RestoreWindowT = RestoreWindow>
  void SetRestoreWindow(RestoreWindowT&& value) {
    m_restoreWindowHasBeenSet = true;
    m_restoreWindow = std::forward<RestoreWindowT>(value);
  }
  template <typename RestoreWindowT = RestoreWindow>
  DBClusterAutomatedBackup& WithRestoreWindow(RestoreWindowT&& value) {
    SetRestoreWindow(std::forward<RestoreWindowT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The master user name of the automated backup.</p>
   */
  inline const Aws::String& GetMasterUsername() const { return m_masterUsername; }
  inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }
  template <typename MasterUsernameT = Aws::String>
  void SetMasterUsername(MasterUsernameT&& value) {
    m_masterUsernameHasBeenSet = true;
    m_masterUsername = std::forward<MasterUsernameT>(value);
  }
  template <typename MasterUsernameT = Aws::String>
  DBClusterAutomatedBackup& WithMasterUsername(MasterUsernameT&& value) {
    SetMasterUsername(std::forward<MasterUsernameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource ID for the source DB cluster, which can't be changed and which
   * is unique to an Amazon Web Services Region.</p>
   */
  inline const Aws::String& GetDbClusterResourceId() const { return m_dbClusterResourceId; }
  inline bool DbClusterResourceIdHasBeenSet() const { return m_dbClusterResourceIdHasBeenSet; }
  template <typename DbClusterResourceIdT = Aws::String>
  void SetDbClusterResourceId(DbClusterResourceIdT&& value) {
    m_dbClusterResourceIdHasBeenSet = true;
    m_dbClusterResourceId = std::forward<DbClusterResourceIdT>(value);
  }
  template <typename DbClusterResourceIdT = Aws::String>
  DBClusterAutomatedBackup& WithDbClusterResourceId(DbClusterResourceIdT&& value) {
    SetDbClusterResourceId(std::forward<DbClusterResourceIdT>(value));
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
  DBClusterAutomatedBackup& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The license model information for this DB cluster automated backup.</p>
   */
  inline const Aws::String& GetLicenseModel() const { return m_licenseModel; }
  inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }
  template <typename LicenseModelT = Aws::String>
  void SetLicenseModel(LicenseModelT&& value) {
    m_licenseModelHasBeenSet = true;
    m_licenseModel = std::forward<LicenseModelT>(value);
  }
  template <typename LicenseModelT = Aws::String>
  DBClusterAutomatedBackup& WithLicenseModel(LicenseModelT&& value) {
    SetLicenseModel(std::forward<LicenseModelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of status information for an automated backup:</p> <ul> <li> <p>
   * <code>retained</code> - Automated backups for deleted clusters.</p> </li> </ul>
   */
  inline const Aws::String& GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  template <typename StatusT = Aws::String>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = Aws::String>
  DBClusterAutomatedBackup& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
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
  inline DBClusterAutomatedBackup& WithIAMDatabaseAuthenticationEnabled(bool value) {
    SetIAMDatabaseAuthenticationEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the DB cluster was created, in Universal Coordinated Time
   * (UTC).</p>
   */
  inline const Aws::Utils::DateTime& GetClusterCreateTime() const { return m_clusterCreateTime; }
  inline bool ClusterCreateTimeHasBeenSet() const { return m_clusterCreateTimeHasBeenSet; }
  template <typename ClusterCreateTimeT = Aws::Utils::DateTime>
  void SetClusterCreateTime(ClusterCreateTimeT&& value) {
    m_clusterCreateTimeHasBeenSet = true;
    m_clusterCreateTime = std::forward<ClusterCreateTimeT>(value);
  }
  template <typename ClusterCreateTimeT = Aws::Utils::DateTime>
  DBClusterAutomatedBackup& WithClusterCreateTime(ClusterCreateTimeT&& value) {
    SetClusterCreateTime(std::forward<ClusterCreateTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the source DB cluster is encrypted.</p>
   */
  inline bool GetStorageEncrypted() const { return m_storageEncrypted; }
  inline bool StorageEncryptedHasBeenSet() const { return m_storageEncryptedHasBeenSet; }
  inline void SetStorageEncrypted(bool value) {
    m_storageEncryptedHasBeenSet = true;
    m_storageEncrypted = value;
  }
  inline DBClusterAutomatedBackup& WithStorageEncrypted(bool value) {
    SetStorageEncrypted(value);
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
  inline DBClusterAutomatedBackup& WithStorageEncryptionType(StorageEncryptionType value) {
    SetStorageEncryptionType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>For all database engines except Amazon Aurora, <code>AllocatedStorage</code>
   * specifies the allocated storage size in gibibytes (GiB). For Aurora,
   * <code>AllocatedStorage</code> always returns 1, because Aurora DB cluster
   * storage size isn't fixed, but instead automatically adjusts as needed.</p>
   */
  inline int GetAllocatedStorage() const { return m_allocatedStorage; }
  inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
  inline void SetAllocatedStorage(int value) {
    m_allocatedStorageHasBeenSet = true;
    m_allocatedStorage = value;
  }
  inline DBClusterAutomatedBackup& WithAllocatedStorage(int value) {
    SetAllocatedStorage(value);
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
  DBClusterAutomatedBackup& WithEngineVersion(EngineVersionT&& value) {
    SetEngineVersion(std::forward<EngineVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) for the source DB cluster.</p>
   */
  inline const Aws::String& GetDBClusterArn() const { return m_dBClusterArn; }
  inline bool DBClusterArnHasBeenSet() const { return m_dBClusterArnHasBeenSet; }
  template <typename DBClusterArnT = Aws::String>
  void SetDBClusterArn(DBClusterArnT&& value) {
    m_dBClusterArnHasBeenSet = true;
    m_dBClusterArn = std::forward<DBClusterArnT>(value);
  }
  template <typename DBClusterArnT = Aws::String>
  DBClusterAutomatedBackup& WithDBClusterArn(DBClusterArnT&& value) {
    SetDBClusterArn(std::forward<DBClusterArnT>(value));
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
  inline DBClusterAutomatedBackup& WithBackupRetentionPeriod(int value) {
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
  DBClusterAutomatedBackup& WithPreferredBackupWindow(PreferredBackupWindowT&& value) {
    SetPreferredBackupWindow(std::forward<PreferredBackupWindowT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The engine mode of the database engine for the automated backup.</p>
   */
  inline const Aws::String& GetEngineMode() const { return m_engineMode; }
  inline bool EngineModeHasBeenSet() const { return m_engineModeHasBeenSet; }
  template <typename EngineModeT = Aws::String>
  void SetEngineMode(EngineModeT&& value) {
    m_engineModeHasBeenSet = true;
    m_engineMode = std::forward<EngineModeT>(value);
  }
  template <typename EngineModeT = Aws::String>
  DBClusterAutomatedBackup& WithEngineMode(EngineModeT&& value) {
    SetEngineMode(std::forward<EngineModeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Availability Zones where instances in the DB cluster can be created. For
   * information on Amazon Web Services Regions and Availability Zones, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Concepts.RegionsAndAvailabilityZones.html">Regions
   * and Availability Zones</a>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const { return m_availabilityZones; }
  inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
  template <typename AvailabilityZonesT = Aws::Vector<Aws::String>>
  void SetAvailabilityZones(AvailabilityZonesT&& value) {
    m_availabilityZonesHasBeenSet = true;
    m_availabilityZones = std::forward<AvailabilityZonesT>(value);
  }
  template <typename AvailabilityZonesT = Aws::Vector<Aws::String>>
  DBClusterAutomatedBackup& WithAvailabilityZones(AvailabilityZonesT&& value) {
    SetAvailabilityZones(std::forward<AvailabilityZonesT>(value));
    return *this;
  }
  template <typename AvailabilityZonesT = Aws::String>
  DBClusterAutomatedBackup& AddAvailabilityZones(AvailabilityZonesT&& value) {
    m_availabilityZonesHasBeenSet = true;
    m_availabilityZones.emplace_back(std::forward<AvailabilityZonesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The port number that the automated backup used for connections.</p>
   * <p>Default: Inherits from the source DB cluster</p> <p>Valid Values:
   * <code>1150-65535</code> </p>
   */
  inline int GetPort() const { return m_port; }
  inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
  inline void SetPort(int value) {
    m_portHasBeenSet = true;
    m_port = value;
  }
  inline DBClusterAutomatedBackup& WithPort(int value) {
    SetPort(value);
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
  DBClusterAutomatedBackup& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The storage type associated with the DB cluster.</p> <p>This setting is only
   * for non-Aurora Multi-AZ DB clusters.</p>
   */
  inline const Aws::String& GetStorageType() const { return m_storageType; }
  inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
  template <typename StorageTypeT = Aws::String>
  void SetStorageType(StorageTypeT&& value) {
    m_storageTypeHasBeenSet = true;
    m_storageType = std::forward<StorageTypeT>(value);
  }
  template <typename StorageTypeT = Aws::String>
  DBClusterAutomatedBackup& WithStorageType(StorageTypeT&& value) {
    SetStorageType(std::forward<StorageTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IOPS (I/O operations per second) value for the automated backup.</p>
   * <p>This setting is only for non-Aurora Multi-AZ DB clusters.</p>
   */
  inline int GetIops() const { return m_iops; }
  inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
  inline void SetIops(int value) {
    m_iopsHasBeenSet = true;
    m_iops = value;
  }
  inline DBClusterAutomatedBackup& WithIops(int value) {
    SetIops(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The storage throughput for the automated backup. The throughput is
   * automatically set based on the IOPS that you provision, and is not
   * configurable.</p> <p>This setting is only for non-Aurora Multi-AZ DB
   * clusters.</p>
   */
  inline int GetStorageThroughput() const { return m_storageThroughput; }
  inline bool StorageThroughputHasBeenSet() const { return m_storageThroughputHasBeenSet; }
  inline void SetStorageThroughput(int value) {
    m_storageThroughputHasBeenSet = true;
    m_storageThroughput = value;
  }
  inline DBClusterAutomatedBackup& WithStorageThroughput(int value) {
    SetStorageThroughput(value);
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
  DBClusterAutomatedBackup& WithAwsBackupRecoveryPointArn(AwsBackupRecoveryPointArnT&& value) {
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
  DBClusterAutomatedBackup& WithTagList(TagListT&& value) {
    SetTagList(std::forward<TagListT>(value));
    return *this;
  }
  template <typename TagListT = Tag>
  DBClusterAutomatedBackup& AddTagList(TagListT&& value) {
    m_tagListHasBeenSet = true;
    m_tagList.emplace_back(std::forward<TagListT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_engine;

  Aws::String m_vpcId;

  Aws::String m_dBClusterAutomatedBackupsArn;

  Aws::String m_dBClusterIdentifier;

  RestoreWindow m_restoreWindow;

  Aws::String m_masterUsername;

  Aws::String m_dbClusterResourceId;

  Aws::String m_region;

  Aws::String m_licenseModel;

  Aws::String m_status;

  bool m_iAMDatabaseAuthenticationEnabled{false};

  Aws::Utils::DateTime m_clusterCreateTime{};

  bool m_storageEncrypted{false};

  StorageEncryptionType m_storageEncryptionType{StorageEncryptionType::NOT_SET};

  int m_allocatedStorage{0};

  Aws::String m_engineVersion;

  Aws::String m_dBClusterArn;

  int m_backupRetentionPeriod{0};

  Aws::String m_preferredBackupWindow;

  Aws::String m_engineMode;

  Aws::Vector<Aws::String> m_availabilityZones;

  int m_port{0};

  Aws::String m_kmsKeyId;

  Aws::String m_storageType;

  int m_iops{0};

  int m_storageThroughput{0};

  Aws::String m_awsBackupRecoveryPointArn;

  Aws::Vector<Tag> m_tagList;
  bool m_engineHasBeenSet = false;
  bool m_vpcIdHasBeenSet = false;
  bool m_dBClusterAutomatedBackupsArnHasBeenSet = false;
  bool m_dBClusterIdentifierHasBeenSet = false;
  bool m_restoreWindowHasBeenSet = false;
  bool m_masterUsernameHasBeenSet = false;
  bool m_dbClusterResourceIdHasBeenSet = false;
  bool m_regionHasBeenSet = false;
  bool m_licenseModelHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_iAMDatabaseAuthenticationEnabledHasBeenSet = false;
  bool m_clusterCreateTimeHasBeenSet = false;
  bool m_storageEncryptedHasBeenSet = false;
  bool m_storageEncryptionTypeHasBeenSet = false;
  bool m_allocatedStorageHasBeenSet = false;
  bool m_engineVersionHasBeenSet = false;
  bool m_dBClusterArnHasBeenSet = false;
  bool m_backupRetentionPeriodHasBeenSet = false;
  bool m_preferredBackupWindowHasBeenSet = false;
  bool m_engineModeHasBeenSet = false;
  bool m_availabilityZonesHasBeenSet = false;
  bool m_portHasBeenSet = false;
  bool m_kmsKeyIdHasBeenSet = false;
  bool m_storageTypeHasBeenSet = false;
  bool m_iopsHasBeenSet = false;
  bool m_storageThroughputHasBeenSet = false;
  bool m_awsBackupRecoveryPointArnHasBeenSet = false;
  bool m_tagListHasBeenSet = false;
};

}  // namespace Model
}  // namespace RDS
}  // namespace Aws
