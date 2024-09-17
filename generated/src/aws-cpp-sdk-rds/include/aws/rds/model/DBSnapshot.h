/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ProcessorFeature.h>
#include <aws/rds/model/Tag.h>
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
   * <p>Contains the details of an Amazon RDS DB snapshot.</p> <p>This data type is
   * used as a response element in the <code>DescribeDBSnapshots</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBSnapshot">AWS API
   * Reference</a></p>
   */
  class DBSnapshot
  {
  public:
    AWS_RDS_API DBSnapshot();
    AWS_RDS_API DBSnapshot(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API DBSnapshot& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Specifies the identifier for the DB snapshot.</p>
     */
    inline const Aws::String& GetDBSnapshotIdentifier() const{ return m_dBSnapshotIdentifier; }
    inline bool DBSnapshotIdentifierHasBeenSet() const { return m_dBSnapshotIdentifierHasBeenSet; }
    inline void SetDBSnapshotIdentifier(const Aws::String& value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier = value; }
    inline void SetDBSnapshotIdentifier(Aws::String&& value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier = std::move(value); }
    inline void SetDBSnapshotIdentifier(const char* value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier.assign(value); }
    inline DBSnapshot& WithDBSnapshotIdentifier(const Aws::String& value) { SetDBSnapshotIdentifier(value); return *this;}
    inline DBSnapshot& WithDBSnapshotIdentifier(Aws::String&& value) { SetDBSnapshotIdentifier(std::move(value)); return *this;}
    inline DBSnapshot& WithDBSnapshotIdentifier(const char* value) { SetDBSnapshotIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the DB instance identifier of the DB instance this DB snapshot was
     * created from.</p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }
    inline DBSnapshot& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}
    inline DBSnapshot& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}
    inline DBSnapshot& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies when the snapshot was taken in Coordinated Universal Time (UTC).
     * Changes for the copy when the snapshot is copied.</p>
     */
    inline const Aws::Utils::DateTime& GetSnapshotCreateTime() const{ return m_snapshotCreateTime; }
    inline bool SnapshotCreateTimeHasBeenSet() const { return m_snapshotCreateTimeHasBeenSet; }
    inline void SetSnapshotCreateTime(const Aws::Utils::DateTime& value) { m_snapshotCreateTimeHasBeenSet = true; m_snapshotCreateTime = value; }
    inline void SetSnapshotCreateTime(Aws::Utils::DateTime&& value) { m_snapshotCreateTimeHasBeenSet = true; m_snapshotCreateTime = std::move(value); }
    inline DBSnapshot& WithSnapshotCreateTime(const Aws::Utils::DateTime& value) { SetSnapshotCreateTime(value); return *this;}
    inline DBSnapshot& WithSnapshotCreateTime(Aws::Utils::DateTime&& value) { SetSnapshotCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the database engine.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline DBSnapshot& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline DBSnapshot& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline DBSnapshot& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the allocated storage size in gibibytes (GiB).</p>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }
    inline DBSnapshot& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the status of this DB snapshot.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline DBSnapshot& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline DBSnapshot& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline DBSnapshot& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the port that the database engine was listening on at the time of
     * the snapshot.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline DBSnapshot& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the Availability Zone the DB instance was located in at
     * the time of the DB snapshot.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline DBSnapshot& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline DBSnapshot& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline DBSnapshot& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the VPC ID associated with the DB snapshot.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline DBSnapshot& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline DBSnapshot& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline DBSnapshot& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the time in Coordinated Universal Time (UTC) when the DB instance,
     * from which the snapshot was taken, was created.</p>
     */
    inline const Aws::Utils::DateTime& GetInstanceCreateTime() const{ return m_instanceCreateTime; }
    inline bool InstanceCreateTimeHasBeenSet() const { return m_instanceCreateTimeHasBeenSet; }
    inline void SetInstanceCreateTime(const Aws::Utils::DateTime& value) { m_instanceCreateTimeHasBeenSet = true; m_instanceCreateTime = value; }
    inline void SetInstanceCreateTime(Aws::Utils::DateTime&& value) { m_instanceCreateTimeHasBeenSet = true; m_instanceCreateTime = std::move(value); }
    inline DBSnapshot& WithInstanceCreateTime(const Aws::Utils::DateTime& value) { SetInstanceCreateTime(value); return *this;}
    inline DBSnapshot& WithInstanceCreateTime(Aws::Utils::DateTime&& value) { SetInstanceCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the master username for the DB snapshot.</p>
     */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }
    inline void SetMasterUsername(Aws::String&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::move(value); }
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }
    inline DBSnapshot& WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}
    inline DBSnapshot& WithMasterUsername(Aws::String&& value) { SetMasterUsername(std::move(value)); return *this;}
    inline DBSnapshot& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the version of the database engine.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline DBSnapshot& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline DBSnapshot& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline DBSnapshot& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>License model information for the restored DB instance.</p>
     */
    inline const Aws::String& GetLicenseModel() const{ return m_licenseModel; }
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }
    inline void SetLicenseModel(const Aws::String& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }
    inline void SetLicenseModel(Aws::String&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = std::move(value); }
    inline void SetLicenseModel(const char* value) { m_licenseModelHasBeenSet = true; m_licenseModel.assign(value); }
    inline DBSnapshot& WithLicenseModel(const Aws::String& value) { SetLicenseModel(value); return *this;}
    inline DBSnapshot& WithLicenseModel(Aws::String&& value) { SetLicenseModel(std::move(value)); return *this;}
    inline DBSnapshot& WithLicenseModel(const char* value) { SetLicenseModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the type of the DB snapshot.</p>
     */
    inline const Aws::String& GetSnapshotType() const{ return m_snapshotType; }
    inline bool SnapshotTypeHasBeenSet() const { return m_snapshotTypeHasBeenSet; }
    inline void SetSnapshotType(const Aws::String& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = value; }
    inline void SetSnapshotType(Aws::String&& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = std::move(value); }
    inline void SetSnapshotType(const char* value) { m_snapshotTypeHasBeenSet = true; m_snapshotType.assign(value); }
    inline DBSnapshot& WithSnapshotType(const Aws::String& value) { SetSnapshotType(value); return *this;}
    inline DBSnapshot& WithSnapshotType(Aws::String&& value) { SetSnapshotType(std::move(value)); return *this;}
    inline DBSnapshot& WithSnapshotType(const char* value) { SetSnapshotType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Provisioned IOPS (I/O operations per second) value of the DB
     * instance at the time of the snapshot.</p>
     */
    inline int GetIops() const{ return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline DBSnapshot& WithIops(int value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the option group name for the DB snapshot.</p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::move(value); }
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }
    inline DBSnapshot& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}
    inline DBSnapshot& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(std::move(value)); return *this;}
    inline DBSnapshot& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of the estimated data that has been transferred.</p>
     */
    inline int GetPercentProgress() const{ return m_percentProgress; }
    inline bool PercentProgressHasBeenSet() const { return m_percentProgressHasBeenSet; }
    inline void SetPercentProgress(int value) { m_percentProgressHasBeenSet = true; m_percentProgress = value; }
    inline DBSnapshot& WithPercentProgress(int value) { SetPercentProgress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region that the DB snapshot was created in or copied
     * from.</p>
     */
    inline const Aws::String& GetSourceRegion() const{ return m_sourceRegion; }
    inline bool SourceRegionHasBeenSet() const { return m_sourceRegionHasBeenSet; }
    inline void SetSourceRegion(const Aws::String& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = value; }
    inline void SetSourceRegion(Aws::String&& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = std::move(value); }
    inline void SetSourceRegion(const char* value) { m_sourceRegionHasBeenSet = true; m_sourceRegion.assign(value); }
    inline DBSnapshot& WithSourceRegion(const Aws::String& value) { SetSourceRegion(value); return *this;}
    inline DBSnapshot& WithSourceRegion(Aws::String&& value) { SetSourceRegion(std::move(value)); return *this;}
    inline DBSnapshot& WithSourceRegion(const char* value) { SetSourceRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DB snapshot Amazon Resource Name (ARN) that the DB snapshot was copied
     * from. It only has a value in the case of a cross-account or cross-Region
     * copy.</p>
     */
    inline const Aws::String& GetSourceDBSnapshotIdentifier() const{ return m_sourceDBSnapshotIdentifier; }
    inline bool SourceDBSnapshotIdentifierHasBeenSet() const { return m_sourceDBSnapshotIdentifierHasBeenSet; }
    inline void SetSourceDBSnapshotIdentifier(const Aws::String& value) { m_sourceDBSnapshotIdentifierHasBeenSet = true; m_sourceDBSnapshotIdentifier = value; }
    inline void SetSourceDBSnapshotIdentifier(Aws::String&& value) { m_sourceDBSnapshotIdentifierHasBeenSet = true; m_sourceDBSnapshotIdentifier = std::move(value); }
    inline void SetSourceDBSnapshotIdentifier(const char* value) { m_sourceDBSnapshotIdentifierHasBeenSet = true; m_sourceDBSnapshotIdentifier.assign(value); }
    inline DBSnapshot& WithSourceDBSnapshotIdentifier(const Aws::String& value) { SetSourceDBSnapshotIdentifier(value); return *this;}
    inline DBSnapshot& WithSourceDBSnapshotIdentifier(Aws::String&& value) { SetSourceDBSnapshotIdentifier(std::move(value)); return *this;}
    inline DBSnapshot& WithSourceDBSnapshotIdentifier(const char* value) { SetSourceDBSnapshotIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the storage type associated with DB snapshot.</p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }
    inline DBSnapshot& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}
    inline DBSnapshot& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}
    inline DBSnapshot& WithStorageType(const char* value) { SetStorageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline const Aws::String& GetTdeCredentialArn() const{ return m_tdeCredentialArn; }
    inline bool TdeCredentialArnHasBeenSet() const { return m_tdeCredentialArnHasBeenSet; }
    inline void SetTdeCredentialArn(const Aws::String& value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn = value; }
    inline void SetTdeCredentialArn(Aws::String&& value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn = std::move(value); }
    inline void SetTdeCredentialArn(const char* value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn.assign(value); }
    inline DBSnapshot& WithTdeCredentialArn(const Aws::String& value) { SetTdeCredentialArn(value); return *this;}
    inline DBSnapshot& WithTdeCredentialArn(Aws::String&& value) { SetTdeCredentialArn(std::move(value)); return *this;}
    inline DBSnapshot& WithTdeCredentialArn(const char* value) { SetTdeCredentialArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the DB snapshot is encrypted.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline DBSnapshot& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>Encrypted</code> is true, the Amazon Web Services KMS key identifier
     * for the encrypted DB snapshot.</p> <p>The Amazon Web Services KMS key identifier
     * is the key ARN, key ID, alias ARN, or alias name for the KMS key.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline DBSnapshot& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline DBSnapshot& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline DBSnapshot& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the DB snapshot.</p>
     */
    inline const Aws::String& GetDBSnapshotArn() const{ return m_dBSnapshotArn; }
    inline bool DBSnapshotArnHasBeenSet() const { return m_dBSnapshotArnHasBeenSet; }
    inline void SetDBSnapshotArn(const Aws::String& value) { m_dBSnapshotArnHasBeenSet = true; m_dBSnapshotArn = value; }
    inline void SetDBSnapshotArn(Aws::String&& value) { m_dBSnapshotArnHasBeenSet = true; m_dBSnapshotArn = std::move(value); }
    inline void SetDBSnapshotArn(const char* value) { m_dBSnapshotArnHasBeenSet = true; m_dBSnapshotArn.assign(value); }
    inline DBSnapshot& WithDBSnapshotArn(const Aws::String& value) { SetDBSnapshotArn(value); return *this;}
    inline DBSnapshot& WithDBSnapshotArn(Aws::String&& value) { SetDBSnapshotArn(std::move(value)); return *this;}
    inline DBSnapshot& WithDBSnapshotArn(const char* value) { SetDBSnapshotArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time zone of the DB snapshot. In most cases, the <code>Timezone</code>
     * element is empty. <code>Timezone</code> content appears only for snapshots taken
     * from Microsoft SQL Server DB instances that were created with a time zone
     * specified.</p>
     */
    inline const Aws::String& GetTimezone() const{ return m_timezone; }
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }
    inline void SetTimezone(const Aws::String& value) { m_timezoneHasBeenSet = true; m_timezone = value; }
    inline void SetTimezone(Aws::String&& value) { m_timezoneHasBeenSet = true; m_timezone = std::move(value); }
    inline void SetTimezone(const char* value) { m_timezoneHasBeenSet = true; m_timezone.assign(value); }
    inline DBSnapshot& WithTimezone(const Aws::String& value) { SetTimezone(value); return *this;}
    inline DBSnapshot& WithTimezone(Aws::String&& value) { SetTimezone(std::move(value)); return *this;}
    inline DBSnapshot& WithTimezone(const char* value) { SetTimezone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether mapping of Amazon Web Services Identity and Access
     * Management (IAM) accounts to database accounts is enabled.</p>
     */
    inline bool GetIAMDatabaseAuthenticationEnabled() const{ return m_iAMDatabaseAuthenticationEnabled; }
    inline bool IAMDatabaseAuthenticationEnabledHasBeenSet() const { return m_iAMDatabaseAuthenticationEnabledHasBeenSet; }
    inline void SetIAMDatabaseAuthenticationEnabled(bool value) { m_iAMDatabaseAuthenticationEnabledHasBeenSet = true; m_iAMDatabaseAuthenticationEnabled = value; }
    inline DBSnapshot& WithIAMDatabaseAuthenticationEnabled(bool value) { SetIAMDatabaseAuthenticationEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance when the DB snapshot was created.</p>
     */
    inline const Aws::Vector<ProcessorFeature>& GetProcessorFeatures() const{ return m_processorFeatures; }
    inline bool ProcessorFeaturesHasBeenSet() const { return m_processorFeaturesHasBeenSet; }
    inline void SetProcessorFeatures(const Aws::Vector<ProcessorFeature>& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures = value; }
    inline void SetProcessorFeatures(Aws::Vector<ProcessorFeature>&& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures = std::move(value); }
    inline DBSnapshot& WithProcessorFeatures(const Aws::Vector<ProcessorFeature>& value) { SetProcessorFeatures(value); return *this;}
    inline DBSnapshot& WithProcessorFeatures(Aws::Vector<ProcessorFeature>&& value) { SetProcessorFeatures(std::move(value)); return *this;}
    inline DBSnapshot& AddProcessorFeatures(const ProcessorFeature& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures.push_back(value); return *this; }
    inline DBSnapshot& AddProcessorFeatures(ProcessorFeature&& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier for the source DB instance, which can't be changed and which
     * is unique to an Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetDbiResourceId() const{ return m_dbiResourceId; }
    inline bool DbiResourceIdHasBeenSet() const { return m_dbiResourceIdHasBeenSet; }
    inline void SetDbiResourceId(const Aws::String& value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId = value; }
    inline void SetDbiResourceId(Aws::String&& value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId = std::move(value); }
    inline void SetDbiResourceId(const char* value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId.assign(value); }
    inline DBSnapshot& WithDbiResourceId(const Aws::String& value) { SetDbiResourceId(value); return *this;}
    inline DBSnapshot& WithDbiResourceId(Aws::String&& value) { SetDbiResourceId(std::move(value)); return *this;}
    inline DBSnapshot& WithDbiResourceId(const char* value) { SetDbiResourceId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTagList() const{ return m_tagList; }
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }
    inline void SetTagList(const Aws::Vector<Tag>& value) { m_tagListHasBeenSet = true; m_tagList = value; }
    inline void SetTagList(Aws::Vector<Tag>&& value) { m_tagListHasBeenSet = true; m_tagList = std::move(value); }
    inline DBSnapshot& WithTagList(const Aws::Vector<Tag>& value) { SetTagList(value); return *this;}
    inline DBSnapshot& WithTagList(Aws::Vector<Tag>&& value) { SetTagList(std::move(value)); return *this;}
    inline DBSnapshot& AddTagList(const Tag& value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }
    inline DBSnapshot& AddTagList(Tag&& value) { m_tagListHasBeenSet = true; m_tagList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the time of the CreateDBSnapshot operation in Coordinated Universal
     * Time (UTC). Doesn't change when the snapshot is copied.</p>
     */
    inline const Aws::Utils::DateTime& GetOriginalSnapshotCreateTime() const{ return m_originalSnapshotCreateTime; }
    inline bool OriginalSnapshotCreateTimeHasBeenSet() const { return m_originalSnapshotCreateTimeHasBeenSet; }
    inline void SetOriginalSnapshotCreateTime(const Aws::Utils::DateTime& value) { m_originalSnapshotCreateTimeHasBeenSet = true; m_originalSnapshotCreateTime = value; }
    inline void SetOriginalSnapshotCreateTime(Aws::Utils::DateTime&& value) { m_originalSnapshotCreateTimeHasBeenSet = true; m_originalSnapshotCreateTime = std::move(value); }
    inline DBSnapshot& WithOriginalSnapshotCreateTime(const Aws::Utils::DateTime& value) { SetOriginalSnapshotCreateTime(value); return *this;}
    inline DBSnapshot& WithOriginalSnapshotCreateTime(Aws::Utils::DateTime&& value) { SetOriginalSnapshotCreateTime(std::move(value)); return *this;}
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
    inline const Aws::Utils::DateTime& GetSnapshotDatabaseTime() const{ return m_snapshotDatabaseTime; }
    inline bool SnapshotDatabaseTimeHasBeenSet() const { return m_snapshotDatabaseTimeHasBeenSet; }
    inline void SetSnapshotDatabaseTime(const Aws::Utils::DateTime& value) { m_snapshotDatabaseTimeHasBeenSet = true; m_snapshotDatabaseTime = value; }
    inline void SetSnapshotDatabaseTime(Aws::Utils::DateTime&& value) { m_snapshotDatabaseTimeHasBeenSet = true; m_snapshotDatabaseTime = std::move(value); }
    inline DBSnapshot& WithSnapshotDatabaseTime(const Aws::Utils::DateTime& value) { SetSnapshotDatabaseTime(value); return *this;}
    inline DBSnapshot& WithSnapshotDatabaseTime(Aws::Utils::DateTime&& value) { SetSnapshotDatabaseTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies where manual snapshots are stored: Amazon Web Services Outposts or
     * the Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetSnapshotTarget() const{ return m_snapshotTarget; }
    inline bool SnapshotTargetHasBeenSet() const { return m_snapshotTargetHasBeenSet; }
    inline void SetSnapshotTarget(const Aws::String& value) { m_snapshotTargetHasBeenSet = true; m_snapshotTarget = value; }
    inline void SetSnapshotTarget(Aws::String&& value) { m_snapshotTargetHasBeenSet = true; m_snapshotTarget = std::move(value); }
    inline void SetSnapshotTarget(const char* value) { m_snapshotTargetHasBeenSet = true; m_snapshotTarget.assign(value); }
    inline DBSnapshot& WithSnapshotTarget(const Aws::String& value) { SetSnapshotTarget(value); return *this;}
    inline DBSnapshot& WithSnapshotTarget(Aws::String&& value) { SetSnapshotTarget(std::move(value)); return *this;}
    inline DBSnapshot& WithSnapshotTarget(const char* value) { SetSnapshotTarget(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the storage throughput for the DB snapshot.</p>
     */
    inline int GetStorageThroughput() const{ return m_storageThroughput; }
    inline bool StorageThroughputHasBeenSet() const { return m_storageThroughputHasBeenSet; }
    inline void SetStorageThroughput(int value) { m_storageThroughputHasBeenSet = true; m_storageThroughput = value; }
    inline DBSnapshot& WithStorageThroughput(int value) { SetStorageThroughput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Oracle system identifier (SID), which is the name of the Oracle database
     * instance that manages your database files. The Oracle SID is also the name of
     * your CDB.</p>
     */
    inline const Aws::String& GetDBSystemId() const{ return m_dBSystemId; }
    inline bool DBSystemIdHasBeenSet() const { return m_dBSystemIdHasBeenSet; }
    inline void SetDBSystemId(const Aws::String& value) { m_dBSystemIdHasBeenSet = true; m_dBSystemId = value; }
    inline void SetDBSystemId(Aws::String&& value) { m_dBSystemIdHasBeenSet = true; m_dBSystemId = std::move(value); }
    inline void SetDBSystemId(const char* value) { m_dBSystemIdHasBeenSet = true; m_dBSystemId.assign(value); }
    inline DBSnapshot& WithDBSystemId(const Aws::String& value) { SetDBSystemId(value); return *this;}
    inline DBSnapshot& WithDBSystemId(Aws::String&& value) { SetDBSystemId(std::move(value)); return *this;}
    inline DBSnapshot& WithDBSystemId(const char* value) { SetDBSystemId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the DB instance has a dedicated log volume (DLV)
     * enabled.</p>
     */
    inline bool GetDedicatedLogVolume() const{ return m_dedicatedLogVolume; }
    inline bool DedicatedLogVolumeHasBeenSet() const { return m_dedicatedLogVolumeHasBeenSet; }
    inline void SetDedicatedLogVolume(bool value) { m_dedicatedLogVolumeHasBeenSet = true; m_dedicatedLogVolume = value; }
    inline DBSnapshot& WithDedicatedLogVolume(bool value) { SetDedicatedLogVolume(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the snapshot is of a DB instance using the multi-tenant
     * configuration (TRUE) or the single-tenant configuration (FALSE).</p>
     */
    inline bool GetMultiTenant() const{ return m_multiTenant; }
    inline bool MultiTenantHasBeenSet() const { return m_multiTenantHasBeenSet; }
    inline void SetMultiTenant(bool value) { m_multiTenantHasBeenSet = true; m_multiTenant = value; }
    inline DBSnapshot& WithMultiTenant(bool value) { SetMultiTenant(value); return *this;}
    ///@}
  private:

    Aws::String m_dBSnapshotIdentifier;
    bool m_dBSnapshotIdentifierHasBeenSet = false;

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_snapshotCreateTime;
    bool m_snapshotCreateTimeHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    int m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Utils::DateTime m_instanceCreateTime;
    bool m_instanceCreateTimeHasBeenSet = false;

    Aws::String m_masterUsername;
    bool m_masterUsernameHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_licenseModel;
    bool m_licenseModelHasBeenSet = false;

    Aws::String m_snapshotType;
    bool m_snapshotTypeHasBeenSet = false;

    int m_iops;
    bool m_iopsHasBeenSet = false;

    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet = false;

    int m_percentProgress;
    bool m_percentProgressHasBeenSet = false;

    Aws::String m_sourceRegion;
    bool m_sourceRegionHasBeenSet = false;

    Aws::String m_sourceDBSnapshotIdentifier;
    bool m_sourceDBSnapshotIdentifierHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    Aws::String m_tdeCredentialArn;
    bool m_tdeCredentialArnHasBeenSet = false;

    bool m_encrypted;
    bool m_encryptedHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_dBSnapshotArn;
    bool m_dBSnapshotArnHasBeenSet = false;

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet = false;

    bool m_iAMDatabaseAuthenticationEnabled;
    bool m_iAMDatabaseAuthenticationEnabledHasBeenSet = false;

    Aws::Vector<ProcessorFeature> m_processorFeatures;
    bool m_processorFeaturesHasBeenSet = false;

    Aws::String m_dbiResourceId;
    bool m_dbiResourceIdHasBeenSet = false;

    Aws::Vector<Tag> m_tagList;
    bool m_tagListHasBeenSet = false;

    Aws::Utils::DateTime m_originalSnapshotCreateTime;
    bool m_originalSnapshotCreateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_snapshotDatabaseTime;
    bool m_snapshotDatabaseTimeHasBeenSet = false;

    Aws::String m_snapshotTarget;
    bool m_snapshotTargetHasBeenSet = false;

    int m_storageThroughput;
    bool m_storageThroughputHasBeenSet = false;

    Aws::String m_dBSystemId;
    bool m_dBSystemIdHasBeenSet = false;

    bool m_dedicatedLogVolume;
    bool m_dedicatedLogVolumeHasBeenSet = false;

    bool m_multiTenant;
    bool m_multiTenantHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
