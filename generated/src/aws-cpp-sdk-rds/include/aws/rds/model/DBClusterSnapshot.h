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
 * <p>Contains the details for an Amazon RDS DB cluster snapshot</p> <p>This data
 * type is used as a response element in the
 * <code>DescribeDBClusterSnapshots</code> action.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBClusterSnapshot">AWS
 * API Reference</a></p>
 */
class DBClusterSnapshot {
 public:
  AWS_RDS_API DBClusterSnapshot() = default;
  AWS_RDS_API DBClusterSnapshot(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_RDS_API DBClusterSnapshot& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The list of Availability Zones (AZs) where instances in the DB cluster
   * snapshot can be restored.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const { return m_availabilityZones; }
  inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
  template <typename AvailabilityZonesT = Aws::Vector<Aws::String>>
  void SetAvailabilityZones(AvailabilityZonesT&& value) {
    m_availabilityZonesHasBeenSet = true;
    m_availabilityZones = std::forward<AvailabilityZonesT>(value);
  }
  template <typename AvailabilityZonesT = Aws::Vector<Aws::String>>
  DBClusterSnapshot& WithAvailabilityZones(AvailabilityZonesT&& value) {
    SetAvailabilityZones(std::forward<AvailabilityZonesT>(value));
    return *this;
  }
  template <typename AvailabilityZonesT = Aws::String>
  DBClusterSnapshot& AddAvailabilityZones(AvailabilityZonesT&& value) {
    m_availabilityZonesHasBeenSet = true;
    m_availabilityZones.emplace_back(std::forward<AvailabilityZonesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier for the DB cluster snapshot.</p>
   */
  inline const Aws::String& GetDBClusterSnapshotIdentifier() const { return m_dBClusterSnapshotIdentifier; }
  inline bool DBClusterSnapshotIdentifierHasBeenSet() const { return m_dBClusterSnapshotIdentifierHasBeenSet; }
  template <typename DBClusterSnapshotIdentifierT = Aws::String>
  void SetDBClusterSnapshotIdentifier(DBClusterSnapshotIdentifierT&& value) {
    m_dBClusterSnapshotIdentifierHasBeenSet = true;
    m_dBClusterSnapshotIdentifier = std::forward<DBClusterSnapshotIdentifierT>(value);
  }
  template <typename DBClusterSnapshotIdentifierT = Aws::String>
  DBClusterSnapshot& WithDBClusterSnapshotIdentifier(DBClusterSnapshotIdentifierT&& value) {
    SetDBClusterSnapshotIdentifier(std::forward<DBClusterSnapshotIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The DB cluster identifier of the DB cluster that this DB cluster snapshot was
   * created from.</p>
   */
  inline const Aws::String& GetDBClusterIdentifier() const { return m_dBClusterIdentifier; }
  inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }
  template <typename DBClusterIdentifierT = Aws::String>
  void SetDBClusterIdentifier(DBClusterIdentifierT&& value) {
    m_dBClusterIdentifierHasBeenSet = true;
    m_dBClusterIdentifier = std::forward<DBClusterIdentifierT>(value);
  }
  template <typename DBClusterIdentifierT = Aws::String>
  DBClusterSnapshot& WithDBClusterIdentifier(DBClusterIdentifierT&& value) {
    SetDBClusterIdentifier(std::forward<DBClusterIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the snapshot was taken, in Universal Coordinated Time
   * (UTC).</p>
   */
  inline const Aws::Utils::DateTime& GetSnapshotCreateTime() const { return m_snapshotCreateTime; }
  inline bool SnapshotCreateTimeHasBeenSet() const { return m_snapshotCreateTimeHasBeenSet; }
  template <typename SnapshotCreateTimeT = Aws::Utils::DateTime>
  void SetSnapshotCreateTime(SnapshotCreateTimeT&& value) {
    m_snapshotCreateTimeHasBeenSet = true;
    m_snapshotCreateTime = std::forward<SnapshotCreateTimeT>(value);
  }
  template <typename SnapshotCreateTimeT = Aws::Utils::DateTime>
  DBClusterSnapshot& WithSnapshotCreateTime(SnapshotCreateTimeT&& value) {
    SetSnapshotCreateTime(std::forward<SnapshotCreateTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the database engine for this DB cluster snapshot.</p>
   */
  inline const Aws::String& GetEngine() const { return m_engine; }
  inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
  template <typename EngineT = Aws::String>
  void SetEngine(EngineT&& value) {
    m_engineHasBeenSet = true;
    m_engine = std::forward<EngineT>(value);
  }
  template <typename EngineT = Aws::String>
  DBClusterSnapshot& WithEngine(EngineT&& value) {
    SetEngine(std::forward<EngineT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The engine mode of the database engine for this DB cluster snapshot.</p>
   */
  inline const Aws::String& GetEngineMode() const { return m_engineMode; }
  inline bool EngineModeHasBeenSet() const { return m_engineModeHasBeenSet; }
  template <typename EngineModeT = Aws::String>
  void SetEngineMode(EngineModeT&& value) {
    m_engineModeHasBeenSet = true;
    m_engineMode = std::forward<EngineModeT>(value);
  }
  template <typename EngineModeT = Aws::String>
  DBClusterSnapshot& WithEngineMode(EngineModeT&& value) {
    SetEngineMode(std::forward<EngineModeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The allocated storage size of the DB cluster snapshot in gibibytes (GiB).</p>
   */
  inline int GetAllocatedStorage() const { return m_allocatedStorage; }
  inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
  inline void SetAllocatedStorage(int value) {
    m_allocatedStorageHasBeenSet = true;
    m_allocatedStorage = value;
  }
  inline DBClusterSnapshot& WithAllocatedStorage(int value) {
    SetAllocatedStorage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of this DB cluster snapshot. Valid statuses are the following:</p>
   * <ul> <li> <p> <code>available</code> </p> </li> <li> <p> <code>copying</code>
   * </p> </li> <li> <p> <code>creating</code> </p> </li> </ul>
   */
  inline const Aws::String& GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  template <typename StatusT = Aws::String>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = Aws::String>
  DBClusterSnapshot& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The port that the DB cluster was listening on at the time of the
   * snapshot.</p>
   */
  inline int GetPort() const { return m_port; }
  inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
  inline void SetPort(int value) {
    m_portHasBeenSet = true;
    m_port = value;
  }
  inline DBClusterSnapshot& WithPort(int value) {
    SetPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The VPC ID associated with the DB cluster snapshot.</p>
   */
  inline const Aws::String& GetVpcId() const { return m_vpcId; }
  inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
  template <typename VpcIdT = Aws::String>
  void SetVpcId(VpcIdT&& value) {
    m_vpcIdHasBeenSet = true;
    m_vpcId = std::forward<VpcIdT>(value);
  }
  template <typename VpcIdT = Aws::String>
  DBClusterSnapshot& WithVpcId(VpcIdT&& value) {
    SetVpcId(std::forward<VpcIdT>(value));
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
  DBClusterSnapshot& WithClusterCreateTime(ClusterCreateTimeT&& value) {
    SetClusterCreateTime(std::forward<ClusterCreateTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The master username for this DB cluster snapshot.</p>
   */
  inline const Aws::String& GetMasterUsername() const { return m_masterUsername; }
  inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }
  template <typename MasterUsernameT = Aws::String>
  void SetMasterUsername(MasterUsernameT&& value) {
    m_masterUsernameHasBeenSet = true;
    m_masterUsername = std::forward<MasterUsernameT>(value);
  }
  template <typename MasterUsernameT = Aws::String>
  DBClusterSnapshot& WithMasterUsername(MasterUsernameT&& value) {
    SetMasterUsername(std::forward<MasterUsernameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the database engine for this DB cluster snapshot.</p>
   */
  inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
  inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
  template <typename EngineVersionT = Aws::String>
  void SetEngineVersion(EngineVersionT&& value) {
    m_engineVersionHasBeenSet = true;
    m_engineVersion = std::forward<EngineVersionT>(value);
  }
  template <typename EngineVersionT = Aws::String>
  DBClusterSnapshot& WithEngineVersion(EngineVersionT&& value) {
    SetEngineVersion(std::forward<EngineVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The license model information for this DB cluster snapshot.</p>
   */
  inline const Aws::String& GetLicenseModel() const { return m_licenseModel; }
  inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }
  template <typename LicenseModelT = Aws::String>
  void SetLicenseModel(LicenseModelT&& value) {
    m_licenseModelHasBeenSet = true;
    m_licenseModel = std::forward<LicenseModelT>(value);
  }
  template <typename LicenseModelT = Aws::String>
  DBClusterSnapshot& WithLicenseModel(LicenseModelT&& value) {
    SetLicenseModel(std::forward<LicenseModelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the DB cluster snapshot.</p>
   */
  inline const Aws::String& GetSnapshotType() const { return m_snapshotType; }
  inline bool SnapshotTypeHasBeenSet() const { return m_snapshotTypeHasBeenSet; }
  template <typename SnapshotTypeT = Aws::String>
  void SetSnapshotType(SnapshotTypeT&& value) {
    m_snapshotTypeHasBeenSet = true;
    m_snapshotType = std::forward<SnapshotTypeT>(value);
  }
  template <typename SnapshotTypeT = Aws::String>
  DBClusterSnapshot& WithSnapshotType(SnapshotTypeT&& value) {
    SetSnapshotType(std::forward<SnapshotTypeT>(value));
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
  inline DBClusterSnapshot& WithPercentProgress(int value) {
    SetPercentProgress(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the DB cluster snapshot is encrypted.</p>
   */
  inline bool GetStorageEncrypted() const { return m_storageEncrypted; }
  inline bool StorageEncryptedHasBeenSet() const { return m_storageEncryptedHasBeenSet; }
  inline void SetStorageEncrypted(bool value) {
    m_storageEncryptedHasBeenSet = true;
    m_storageEncrypted = value;
  }
  inline DBClusterSnapshot& WithStorageEncrypted(bool value) {
    SetStorageEncrypted(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of encryption used to protect data at rest in the DB cluster
   * snapshot. Possible values:</p> <ul> <li> <p> <code>none</code> - The DB cluster
   * snapshot is not encrypted.</p> </li> <li> <p> <code>sse-rds</code> - The DB
   * cluster snapshot is encrypted using an Amazon Web Services owned KMS key.</p>
   * </li> <li> <p> <code>sse-kms</code> - The DB cluster snapshot is encrypted using
   * a customer managed KMS key or Amazon Web Services managed KMS key.</p> </li>
   * </ul>
   */
  inline StorageEncryptionType GetStorageEncryptionType() const { return m_storageEncryptionType; }
  inline bool StorageEncryptionTypeHasBeenSet() const { return m_storageEncryptionTypeHasBeenSet; }
  inline void SetStorageEncryptionType(StorageEncryptionType value) {
    m_storageEncryptionTypeHasBeenSet = true;
    m_storageEncryptionType = value;
  }
  inline DBClusterSnapshot& WithStorageEncryptionType(StorageEncryptionType value) {
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
  inline DBClusterSnapshot& WithBackupRetentionPeriod(int value) {
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
  DBClusterSnapshot& WithPreferredBackupWindow(PreferredBackupWindowT&& value) {
    SetPreferredBackupWindow(std::forward<PreferredBackupWindowT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If <code>StorageEncrypted</code> is true, the Amazon Web Services KMS key
   * identifier for the encrypted DB cluster snapshot.</p> <p>The Amazon Web Services
   * KMS key identifier is the key ARN, key ID, alias ARN, or alias name for the KMS
   * key.</p>
   */
  inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
  inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
  template <typename KmsKeyIdT = Aws::String>
  void SetKmsKeyId(KmsKeyIdT&& value) {
    m_kmsKeyIdHasBeenSet = true;
    m_kmsKeyId = std::forward<KmsKeyIdT>(value);
  }
  template <typename KmsKeyIdT = Aws::String>
  DBClusterSnapshot& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) for the DB cluster snapshot.</p>
   */
  inline const Aws::String& GetDBClusterSnapshotArn() const { return m_dBClusterSnapshotArn; }
  inline bool DBClusterSnapshotArnHasBeenSet() const { return m_dBClusterSnapshotArnHasBeenSet; }
  template <typename DBClusterSnapshotArnT = Aws::String>
  void SetDBClusterSnapshotArn(DBClusterSnapshotArnT&& value) {
    m_dBClusterSnapshotArnHasBeenSet = true;
    m_dBClusterSnapshotArn = std::forward<DBClusterSnapshotArnT>(value);
  }
  template <typename DBClusterSnapshotArnT = Aws::String>
  DBClusterSnapshot& WithDBClusterSnapshotArn(DBClusterSnapshotArnT&& value) {
    SetDBClusterSnapshotArn(std::forward<DBClusterSnapshotArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the DB cluster snapshot was copied from a source DB cluster snapshot, the
   * Amazon Resource Name (ARN) for the source DB cluster snapshot, otherwise, a null
   * value.</p>
   */
  inline const Aws::String& GetSourceDBClusterSnapshotArn() const { return m_sourceDBClusterSnapshotArn; }
  inline bool SourceDBClusterSnapshotArnHasBeenSet() const { return m_sourceDBClusterSnapshotArnHasBeenSet; }
  template <typename SourceDBClusterSnapshotArnT = Aws::String>
  void SetSourceDBClusterSnapshotArn(SourceDBClusterSnapshotArnT&& value) {
    m_sourceDBClusterSnapshotArnHasBeenSet = true;
    m_sourceDBClusterSnapshotArn = std::forward<SourceDBClusterSnapshotArnT>(value);
  }
  template <typename SourceDBClusterSnapshotArnT = Aws::String>
  DBClusterSnapshot& WithSourceDBClusterSnapshotArn(SourceDBClusterSnapshotArnT&& value) {
    SetSourceDBClusterSnapshotArn(std::forward<SourceDBClusterSnapshotArnT>(value));
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
  inline DBClusterSnapshot& WithIAMDatabaseAuthenticationEnabled(bool value) {
    SetIAMDatabaseAuthenticationEnabled(value);
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
  DBClusterSnapshot& WithTagList(TagListT&& value) {
    SetTagList(std::forward<TagListT>(value));
    return *this;
  }
  template <typename TagListT = Tag>
  DBClusterSnapshot& AddTagList(TagListT&& value) {
    m_tagListHasBeenSet = true;
    m_tagList.emplace_back(std::forward<TagListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The storage type associated with the DB cluster snapshot.</p> <p>This setting
   * is only for Aurora DB clusters.</p>
   */
  inline const Aws::String& GetStorageType() const { return m_storageType; }
  inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
  template <typename StorageTypeT = Aws::String>
  void SetStorageType(StorageTypeT&& value) {
    m_storageTypeHasBeenSet = true;
    m_storageType = std::forward<StorageTypeT>(value);
  }
  template <typename StorageTypeT = Aws::String>
  DBClusterSnapshot& WithStorageType(StorageTypeT&& value) {
    SetStorageType(std::forward<StorageTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The storage throughput for the DB cluster snapshot. The throughput is
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
  inline DBClusterSnapshot& WithStorageThroughput(int value) {
    SetStorageThroughput(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource ID of the DB cluster that this DB cluster snapshot was created
   * from.</p>
   */
  inline const Aws::String& GetDbClusterResourceId() const { return m_dbClusterResourceId; }
  inline bool DbClusterResourceIdHasBeenSet() const { return m_dbClusterResourceIdHasBeenSet; }
  template <typename DbClusterResourceIdT = Aws::String>
  void SetDbClusterResourceId(DbClusterResourceIdT&& value) {
    m_dbClusterResourceIdHasBeenSet = true;
    m_dbClusterResourceId = std::forward<DbClusterResourceIdT>(value);
  }
  template <typename DbClusterResourceIdT = Aws::String>
  DBClusterSnapshot& WithDbClusterResourceId(DbClusterResourceIdT&& value) {
    SetDbClusterResourceId(std::forward<DbClusterResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Reserved for future use.</p>
   */
  inline const Aws::String& GetDBSystemId() const { return m_dBSystemId; }
  inline bool DBSystemIdHasBeenSet() const { return m_dBSystemIdHasBeenSet; }
  template <typename DBSystemIdT = Aws::String>
  void SetDBSystemId(DBSystemIdT&& value) {
    m_dBSystemIdHasBeenSet = true;
    m_dBSystemId = std::forward<DBSystemIdT>(value);
  }
  template <typename DBSystemIdT = Aws::String>
  DBClusterSnapshot& WithDBSystemId(DBSystemIdT&& value) {
    SetDBSystemId(std::forward<DBSystemIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_availabilityZones;

  Aws::String m_dBClusterSnapshotIdentifier;

  Aws::String m_dBClusterIdentifier;

  Aws::Utils::DateTime m_snapshotCreateTime{};

  Aws::String m_engine;

  Aws::String m_engineMode;

  int m_allocatedStorage{0};

  Aws::String m_status;

  int m_port{0};

  Aws::String m_vpcId;

  Aws::Utils::DateTime m_clusterCreateTime{};

  Aws::String m_masterUsername;

  Aws::String m_engineVersion;

  Aws::String m_licenseModel;

  Aws::String m_snapshotType;

  int m_percentProgress{0};

  bool m_storageEncrypted{false};

  StorageEncryptionType m_storageEncryptionType{StorageEncryptionType::NOT_SET};

  int m_backupRetentionPeriod{0};

  Aws::String m_preferredBackupWindow;

  Aws::String m_kmsKeyId;

  Aws::String m_dBClusterSnapshotArn;

  Aws::String m_sourceDBClusterSnapshotArn;

  bool m_iAMDatabaseAuthenticationEnabled{false};

  Aws::Vector<Tag> m_tagList;

  Aws::String m_storageType;

  int m_storageThroughput{0};

  Aws::String m_dbClusterResourceId;

  Aws::String m_dBSystemId;
  bool m_availabilityZonesHasBeenSet = false;
  bool m_dBClusterSnapshotIdentifierHasBeenSet = false;
  bool m_dBClusterIdentifierHasBeenSet = false;
  bool m_snapshotCreateTimeHasBeenSet = false;
  bool m_engineHasBeenSet = false;
  bool m_engineModeHasBeenSet = false;
  bool m_allocatedStorageHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_portHasBeenSet = false;
  bool m_vpcIdHasBeenSet = false;
  bool m_clusterCreateTimeHasBeenSet = false;
  bool m_masterUsernameHasBeenSet = false;
  bool m_engineVersionHasBeenSet = false;
  bool m_licenseModelHasBeenSet = false;
  bool m_snapshotTypeHasBeenSet = false;
  bool m_percentProgressHasBeenSet = false;
  bool m_storageEncryptedHasBeenSet = false;
  bool m_storageEncryptionTypeHasBeenSet = false;
  bool m_backupRetentionPeriodHasBeenSet = false;
  bool m_preferredBackupWindowHasBeenSet = false;
  bool m_kmsKeyIdHasBeenSet = false;
  bool m_dBClusterSnapshotArnHasBeenSet = false;
  bool m_sourceDBClusterSnapshotArnHasBeenSet = false;
  bool m_iAMDatabaseAuthenticationEnabledHasBeenSet = false;
  bool m_tagListHasBeenSet = false;
  bool m_storageTypeHasBeenSet = false;
  bool m_storageThroughputHasBeenSet = false;
  bool m_dbClusterResourceIdHasBeenSet = false;
  bool m_dBSystemIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RDS
}  // namespace Aws
