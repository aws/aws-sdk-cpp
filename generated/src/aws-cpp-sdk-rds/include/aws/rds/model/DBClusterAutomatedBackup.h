/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/RestoreWindow.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p>An automated backup of a DB cluster. It consists of system backups,
   * transaction logs, and the database cluster properties that existed at the time
   * you deleted the source cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBClusterAutomatedBackup">AWS
   * API Reference</a></p>
   */
  class DBClusterAutomatedBackup
  {
  public:
    AWS_RDS_API DBClusterAutomatedBackup();
    AWS_RDS_API DBClusterAutomatedBackup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API DBClusterAutomatedBackup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the database engine for this automated backup.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline DBClusterAutomatedBackup& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline DBClusterAutomatedBackup& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline DBClusterAutomatedBackup& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC ID associated with the DB cluster.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline DBClusterAutomatedBackup& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline DBClusterAutomatedBackup& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline DBClusterAutomatedBackup& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the automated backups.</p>
     */
    inline const Aws::String& GetDBClusterAutomatedBackupsArn() const{ return m_dBClusterAutomatedBackupsArn; }
    inline bool DBClusterAutomatedBackupsArnHasBeenSet() const { return m_dBClusterAutomatedBackupsArnHasBeenSet; }
    inline void SetDBClusterAutomatedBackupsArn(const Aws::String& value) { m_dBClusterAutomatedBackupsArnHasBeenSet = true; m_dBClusterAutomatedBackupsArn = value; }
    inline void SetDBClusterAutomatedBackupsArn(Aws::String&& value) { m_dBClusterAutomatedBackupsArnHasBeenSet = true; m_dBClusterAutomatedBackupsArn = std::move(value); }
    inline void SetDBClusterAutomatedBackupsArn(const char* value) { m_dBClusterAutomatedBackupsArnHasBeenSet = true; m_dBClusterAutomatedBackupsArn.assign(value); }
    inline DBClusterAutomatedBackup& WithDBClusterAutomatedBackupsArn(const Aws::String& value) { SetDBClusterAutomatedBackupsArn(value); return *this;}
    inline DBClusterAutomatedBackup& WithDBClusterAutomatedBackupsArn(Aws::String&& value) { SetDBClusterAutomatedBackupsArn(std::move(value)); return *this;}
    inline DBClusterAutomatedBackup& WithDBClusterAutomatedBackupsArn(const char* value) { SetDBClusterAutomatedBackupsArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the source DB cluster, which can't be changed and which is
     * unique to an Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }
    inline DBClusterAutomatedBackup& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}
    inline DBClusterAutomatedBackup& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}
    inline DBClusterAutomatedBackup& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    
    inline const RestoreWindow& GetRestoreWindow() const{ return m_restoreWindow; }
    inline bool RestoreWindowHasBeenSet() const { return m_restoreWindowHasBeenSet; }
    inline void SetRestoreWindow(const RestoreWindow& value) { m_restoreWindowHasBeenSet = true; m_restoreWindow = value; }
    inline void SetRestoreWindow(RestoreWindow&& value) { m_restoreWindowHasBeenSet = true; m_restoreWindow = std::move(value); }
    inline DBClusterAutomatedBackup& WithRestoreWindow(const RestoreWindow& value) { SetRestoreWindow(value); return *this;}
    inline DBClusterAutomatedBackup& WithRestoreWindow(RestoreWindow&& value) { SetRestoreWindow(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The master user name of the automated backup.</p>
     */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }
    inline void SetMasterUsername(Aws::String&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::move(value); }
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }
    inline DBClusterAutomatedBackup& WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}
    inline DBClusterAutomatedBackup& WithMasterUsername(Aws::String&& value) { SetMasterUsername(std::move(value)); return *this;}
    inline DBClusterAutomatedBackup& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource ID for the source DB cluster, which can't be changed and which
     * is unique to an Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetDbClusterResourceId() const{ return m_dbClusterResourceId; }
    inline bool DbClusterResourceIdHasBeenSet() const { return m_dbClusterResourceIdHasBeenSet; }
    inline void SetDbClusterResourceId(const Aws::String& value) { m_dbClusterResourceIdHasBeenSet = true; m_dbClusterResourceId = value; }
    inline void SetDbClusterResourceId(Aws::String&& value) { m_dbClusterResourceIdHasBeenSet = true; m_dbClusterResourceId = std::move(value); }
    inline void SetDbClusterResourceId(const char* value) { m_dbClusterResourceIdHasBeenSet = true; m_dbClusterResourceId.assign(value); }
    inline DBClusterAutomatedBackup& WithDbClusterResourceId(const Aws::String& value) { SetDbClusterResourceId(value); return *this;}
    inline DBClusterAutomatedBackup& WithDbClusterResourceId(Aws::String&& value) { SetDbClusterResourceId(std::move(value)); return *this;}
    inline DBClusterAutomatedBackup& WithDbClusterResourceId(const char* value) { SetDbClusterResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region associated with the automated backup.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline DBClusterAutomatedBackup& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline DBClusterAutomatedBackup& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline DBClusterAutomatedBackup& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The license model information for this DB cluster automated backup.</p>
     */
    inline const Aws::String& GetLicenseModel() const{ return m_licenseModel; }
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }
    inline void SetLicenseModel(const Aws::String& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }
    inline void SetLicenseModel(Aws::String&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = std::move(value); }
    inline void SetLicenseModel(const char* value) { m_licenseModelHasBeenSet = true; m_licenseModel.assign(value); }
    inline DBClusterAutomatedBackup& WithLicenseModel(const Aws::String& value) { SetLicenseModel(value); return *this;}
    inline DBClusterAutomatedBackup& WithLicenseModel(Aws::String&& value) { SetLicenseModel(std::move(value)); return *this;}
    inline DBClusterAutomatedBackup& WithLicenseModel(const char* value) { SetLicenseModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of status information for an automated backup:</p> <ul> <li> <p>
     * <code>retained</code> - Automated backups for deleted clusters.</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline DBClusterAutomatedBackup& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline DBClusterAutomatedBackup& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline DBClusterAutomatedBackup& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether mapping of Amazon Web Services Identity and Access
     * Management (IAM) accounts to database accounts is enabled.</p>
     */
    inline bool GetIAMDatabaseAuthenticationEnabled() const{ return m_iAMDatabaseAuthenticationEnabled; }
    inline bool IAMDatabaseAuthenticationEnabledHasBeenSet() const { return m_iAMDatabaseAuthenticationEnabledHasBeenSet; }
    inline void SetIAMDatabaseAuthenticationEnabled(bool value) { m_iAMDatabaseAuthenticationEnabledHasBeenSet = true; m_iAMDatabaseAuthenticationEnabled = value; }
    inline DBClusterAutomatedBackup& WithIAMDatabaseAuthenticationEnabled(bool value) { SetIAMDatabaseAuthenticationEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the DB cluster was created, in Universal Coordinated Time
     * (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetClusterCreateTime() const{ return m_clusterCreateTime; }
    inline bool ClusterCreateTimeHasBeenSet() const { return m_clusterCreateTimeHasBeenSet; }
    inline void SetClusterCreateTime(const Aws::Utils::DateTime& value) { m_clusterCreateTimeHasBeenSet = true; m_clusterCreateTime = value; }
    inline void SetClusterCreateTime(Aws::Utils::DateTime&& value) { m_clusterCreateTimeHasBeenSet = true; m_clusterCreateTime = std::move(value); }
    inline DBClusterAutomatedBackup& WithClusterCreateTime(const Aws::Utils::DateTime& value) { SetClusterCreateTime(value); return *this;}
    inline DBClusterAutomatedBackup& WithClusterCreateTime(Aws::Utils::DateTime&& value) { SetClusterCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the source DB cluster is encrypted.</p>
     */
    inline bool GetStorageEncrypted() const{ return m_storageEncrypted; }
    inline bool StorageEncryptedHasBeenSet() const { return m_storageEncryptedHasBeenSet; }
    inline void SetStorageEncrypted(bool value) { m_storageEncryptedHasBeenSet = true; m_storageEncrypted = value; }
    inline DBClusterAutomatedBackup& WithStorageEncrypted(bool value) { SetStorageEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For all database engines except Amazon Aurora, <code>AllocatedStorage</code>
     * specifies the allocated storage size in gibibytes (GiB). For Aurora,
     * <code>AllocatedStorage</code> always returns 1, because Aurora DB cluster
     * storage size isn't fixed, but instead automatically adjusts as needed.</p>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }
    inline DBClusterAutomatedBackup& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the database engine for the automated backup.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline DBClusterAutomatedBackup& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline DBClusterAutomatedBackup& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline DBClusterAutomatedBackup& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the source DB cluster.</p>
     */
    inline const Aws::String& GetDBClusterArn() const{ return m_dBClusterArn; }
    inline bool DBClusterArnHasBeenSet() const { return m_dBClusterArnHasBeenSet; }
    inline void SetDBClusterArn(const Aws::String& value) { m_dBClusterArnHasBeenSet = true; m_dBClusterArn = value; }
    inline void SetDBClusterArn(Aws::String&& value) { m_dBClusterArnHasBeenSet = true; m_dBClusterArn = std::move(value); }
    inline void SetDBClusterArn(const char* value) { m_dBClusterArnHasBeenSet = true; m_dBClusterArn.assign(value); }
    inline DBClusterAutomatedBackup& WithDBClusterArn(const Aws::String& value) { SetDBClusterArn(value); return *this;}
    inline DBClusterAutomatedBackup& WithDBClusterArn(Aws::String&& value) { SetDBClusterArn(std::move(value)); return *this;}
    inline DBClusterAutomatedBackup& WithDBClusterArn(const char* value) { SetDBClusterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retention period for the automated backups.</p>
     */
    inline int GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }
    inline DBClusterAutomatedBackup& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The engine mode of the database engine for the automated backup.</p>
     */
    inline const Aws::String& GetEngineMode() const{ return m_engineMode; }
    inline bool EngineModeHasBeenSet() const { return m_engineModeHasBeenSet; }
    inline void SetEngineMode(const Aws::String& value) { m_engineModeHasBeenSet = true; m_engineMode = value; }
    inline void SetEngineMode(Aws::String&& value) { m_engineModeHasBeenSet = true; m_engineMode = std::move(value); }
    inline void SetEngineMode(const char* value) { m_engineModeHasBeenSet = true; m_engineMode.assign(value); }
    inline DBClusterAutomatedBackup& WithEngineMode(const Aws::String& value) { SetEngineMode(value); return *this;}
    inline DBClusterAutomatedBackup& WithEngineMode(Aws::String&& value) { SetEngineMode(std::move(value)); return *this;}
    inline DBClusterAutomatedBackup& WithEngineMode(const char* value) { SetEngineMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zones where instances in the DB cluster can be created. For
     * information on Amazon Web Services Regions and Availability Zones, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Concepts.RegionsAndAvailabilityZones.html">Regions
     * and Availability Zones</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }
    inline DBClusterAutomatedBackup& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}
    inline DBClusterAutomatedBackup& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}
    inline DBClusterAutomatedBackup& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }
    inline DBClusterAutomatedBackup& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }
    inline DBClusterAutomatedBackup& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The port number that the automated backup used for connections.</p>
     * <p>Default: Inherits from the source DB cluster</p> <p>Valid Values:
     * <code>1150-65535</code> </p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline DBClusterAutomatedBackup& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS key ID for an automated backup.</p> <p>The Amazon
     * Web Services KMS key identifier is the key ARN, key ID, alias ARN, or alias name
     * for the KMS key.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline DBClusterAutomatedBackup& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline DBClusterAutomatedBackup& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline DBClusterAutomatedBackup& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage type associated with the DB cluster.</p> <p>This setting is only
     * for non-Aurora Multi-AZ DB clusters.</p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }
    inline DBClusterAutomatedBackup& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}
    inline DBClusterAutomatedBackup& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}
    inline DBClusterAutomatedBackup& WithStorageType(const char* value) { SetStorageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IOPS (I/O operations per second) value for the automated backup.</p>
     * <p>This setting is only for non-Aurora Multi-AZ DB clusters.</p>
     */
    inline int GetIops() const{ return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline DBClusterAutomatedBackup& WithIops(int value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the recovery point in Amazon Web Services
     * Backup.</p>
     */
    inline const Aws::String& GetAwsBackupRecoveryPointArn() const{ return m_awsBackupRecoveryPointArn; }
    inline bool AwsBackupRecoveryPointArnHasBeenSet() const { return m_awsBackupRecoveryPointArnHasBeenSet; }
    inline void SetAwsBackupRecoveryPointArn(const Aws::String& value) { m_awsBackupRecoveryPointArnHasBeenSet = true; m_awsBackupRecoveryPointArn = value; }
    inline void SetAwsBackupRecoveryPointArn(Aws::String&& value) { m_awsBackupRecoveryPointArnHasBeenSet = true; m_awsBackupRecoveryPointArn = std::move(value); }
    inline void SetAwsBackupRecoveryPointArn(const char* value) { m_awsBackupRecoveryPointArnHasBeenSet = true; m_awsBackupRecoveryPointArn.assign(value); }
    inline DBClusterAutomatedBackup& WithAwsBackupRecoveryPointArn(const Aws::String& value) { SetAwsBackupRecoveryPointArn(value); return *this;}
    inline DBClusterAutomatedBackup& WithAwsBackupRecoveryPointArn(Aws::String&& value) { SetAwsBackupRecoveryPointArn(std::move(value)); return *this;}
    inline DBClusterAutomatedBackup& WithAwsBackupRecoveryPointArn(const char* value) { SetAwsBackupRecoveryPointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage throughput for the automated backup. The throughput is
     * automatically set based on the IOPS that you provision, and is not
     * configurable.</p> <p>This setting is only for non-Aurora Multi-AZ DB
     * clusters.</p>
     */
    inline int GetStorageThroughput() const{ return m_storageThroughput; }
    inline bool StorageThroughputHasBeenSet() const { return m_storageThroughputHasBeenSet; }
    inline void SetStorageThroughput(int value) { m_storageThroughputHasBeenSet = true; m_storageThroughput = value; }
    inline DBClusterAutomatedBackup& WithStorageThroughput(int value) { SetStorageThroughput(value); return *this;}
    ///@}
  private:

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_dBClusterAutomatedBackupsArn;
    bool m_dBClusterAutomatedBackupsArnHasBeenSet = false;

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;

    RestoreWindow m_restoreWindow;
    bool m_restoreWindowHasBeenSet = false;

    Aws::String m_masterUsername;
    bool m_masterUsernameHasBeenSet = false;

    Aws::String m_dbClusterResourceId;
    bool m_dbClusterResourceIdHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_licenseModel;
    bool m_licenseModelHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    bool m_iAMDatabaseAuthenticationEnabled;
    bool m_iAMDatabaseAuthenticationEnabledHasBeenSet = false;

    Aws::Utils::DateTime m_clusterCreateTime;
    bool m_clusterCreateTimeHasBeenSet = false;

    bool m_storageEncrypted;
    bool m_storageEncryptedHasBeenSet = false;

    int m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_dBClusterArn;
    bool m_dBClusterArnHasBeenSet = false;

    int m_backupRetentionPeriod;
    bool m_backupRetentionPeriodHasBeenSet = false;

    Aws::String m_engineMode;
    bool m_engineModeHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    int m_iops;
    bool m_iopsHasBeenSet = false;

    Aws::String m_awsBackupRecoveryPointArn;
    bool m_awsBackupRecoveryPointArnHasBeenSet = false;

    int m_storageThroughput;
    bool m_storageThroughputHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
