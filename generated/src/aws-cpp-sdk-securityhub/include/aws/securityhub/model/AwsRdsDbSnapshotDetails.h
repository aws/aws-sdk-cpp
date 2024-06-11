﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsRdsDbProcessorFeature.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides details about an Amazon RDS DB cluster snapshot.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRdsDbSnapshotDetails">AWS
   * API Reference</a></p>
   */
  class AwsRdsDbSnapshotDetails
  {
  public:
    AWS_SECURITYHUB_API AwsRdsDbSnapshotDetails();
    AWS_SECURITYHUB_API AwsRdsDbSnapshotDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRdsDbSnapshotDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name or ARN of the DB snapshot that is used to restore the DB
     * instance.</p>
     */
    inline const Aws::String& GetDbSnapshotIdentifier() const{ return m_dbSnapshotIdentifier; }
    inline bool DbSnapshotIdentifierHasBeenSet() const { return m_dbSnapshotIdentifierHasBeenSet; }
    inline void SetDbSnapshotIdentifier(const Aws::String& value) { m_dbSnapshotIdentifierHasBeenSet = true; m_dbSnapshotIdentifier = value; }
    inline void SetDbSnapshotIdentifier(Aws::String&& value) { m_dbSnapshotIdentifierHasBeenSet = true; m_dbSnapshotIdentifier = std::move(value); }
    inline void SetDbSnapshotIdentifier(const char* value) { m_dbSnapshotIdentifierHasBeenSet = true; m_dbSnapshotIdentifier.assign(value); }
    inline AwsRdsDbSnapshotDetails& WithDbSnapshotIdentifier(const Aws::String& value) { SetDbSnapshotIdentifier(value); return *this;}
    inline AwsRdsDbSnapshotDetails& WithDbSnapshotIdentifier(Aws::String&& value) { SetDbSnapshotIdentifier(std::move(value)); return *this;}
    inline AwsRdsDbSnapshotDetails& WithDbSnapshotIdentifier(const char* value) { SetDbSnapshotIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the DB instance.</p>
     */
    inline const Aws::String& GetDbInstanceIdentifier() const{ return m_dbInstanceIdentifier; }
    inline bool DbInstanceIdentifierHasBeenSet() const { return m_dbInstanceIdentifierHasBeenSet; }
    inline void SetDbInstanceIdentifier(const Aws::String& value) { m_dbInstanceIdentifierHasBeenSet = true; m_dbInstanceIdentifier = value; }
    inline void SetDbInstanceIdentifier(Aws::String&& value) { m_dbInstanceIdentifierHasBeenSet = true; m_dbInstanceIdentifier = std::move(value); }
    inline void SetDbInstanceIdentifier(const char* value) { m_dbInstanceIdentifierHasBeenSet = true; m_dbInstanceIdentifier.assign(value); }
    inline AwsRdsDbSnapshotDetails& WithDbInstanceIdentifier(const Aws::String& value) { SetDbInstanceIdentifier(value); return *this;}
    inline AwsRdsDbSnapshotDetails& WithDbInstanceIdentifier(Aws::String&& value) { SetDbInstanceIdentifier(std::move(value)); return *this;}
    inline AwsRdsDbSnapshotDetails& WithDbInstanceIdentifier(const char* value) { SetDbInstanceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the snapshot was taken in Coordinated Universal Time (UTC).</p>
     */
    inline const Aws::String& GetSnapshotCreateTime() const{ return m_snapshotCreateTime; }
    inline bool SnapshotCreateTimeHasBeenSet() const { return m_snapshotCreateTimeHasBeenSet; }
    inline void SetSnapshotCreateTime(const Aws::String& value) { m_snapshotCreateTimeHasBeenSet = true; m_snapshotCreateTime = value; }
    inline void SetSnapshotCreateTime(Aws::String&& value) { m_snapshotCreateTimeHasBeenSet = true; m_snapshotCreateTime = std::move(value); }
    inline void SetSnapshotCreateTime(const char* value) { m_snapshotCreateTimeHasBeenSet = true; m_snapshotCreateTime.assign(value); }
    inline AwsRdsDbSnapshotDetails& WithSnapshotCreateTime(const Aws::String& value) { SetSnapshotCreateTime(value); return *this;}
    inline AwsRdsDbSnapshotDetails& WithSnapshotCreateTime(Aws::String&& value) { SetSnapshotCreateTime(std::move(value)); return *this;}
    inline AwsRdsDbSnapshotDetails& WithSnapshotCreateTime(const char* value) { SetSnapshotCreateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database engine to use for this DB instance. Valid values are
     * as follows:</p> <ul> <li> <p> <code>aurora</code> </p> </li> <li> <p>
     * <code>aurora-mysql</code> </p> </li> <li> <p> <code>aurora-postgresql</code>
     * </p> </li> <li> <p> <code>c</code> </p> </li> <li> <p> <code>mariadb</code> </p>
     * </li> <li> <p> <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code>
     * </p> </li> <li> <p> <code>oracle-se</code> </p> </li> <li> <p>
     * <code>oracle-se1</code> </p> </li> <li> <p> <code>oracle-se2</code> </p> </li>
     * <li> <p> <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-ex</code>
     * </p> </li> <li> <p> <code>sqlserver-se</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline AwsRdsDbSnapshotDetails& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline AwsRdsDbSnapshotDetails& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline AwsRdsDbSnapshotDetails& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of storage (in gigabytes) to be initially allocated for the
     * database instance.</p>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }
    inline AwsRdsDbSnapshotDetails& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of this DB snapshot.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline AwsRdsDbSnapshotDetails& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline AwsRdsDbSnapshotDetails& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline AwsRdsDbSnapshotDetails& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port that the database engine was listening on at the time of the
     * snapshot.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline AwsRdsDbSnapshotDetails& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the Availability Zone in which the DB instance was
     * located at the time of the DB snapshot.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline AwsRdsDbSnapshotDetails& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline AwsRdsDbSnapshotDetails& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline AwsRdsDbSnapshotDetails& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC ID associated with the DB snapshot.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline AwsRdsDbSnapshotDetails& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline AwsRdsDbSnapshotDetails& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline AwsRdsDbSnapshotDetails& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the time in Coordinated Universal Time (UTC) when the DB instance,
     * from which the snapshot was taken, was created.</p>
     */
    inline const Aws::String& GetInstanceCreateTime() const{ return m_instanceCreateTime; }
    inline bool InstanceCreateTimeHasBeenSet() const { return m_instanceCreateTimeHasBeenSet; }
    inline void SetInstanceCreateTime(const Aws::String& value) { m_instanceCreateTimeHasBeenSet = true; m_instanceCreateTime = value; }
    inline void SetInstanceCreateTime(Aws::String&& value) { m_instanceCreateTimeHasBeenSet = true; m_instanceCreateTime = std::move(value); }
    inline void SetInstanceCreateTime(const char* value) { m_instanceCreateTimeHasBeenSet = true; m_instanceCreateTime.assign(value); }
    inline AwsRdsDbSnapshotDetails& WithInstanceCreateTime(const Aws::String& value) { SetInstanceCreateTime(value); return *this;}
    inline AwsRdsDbSnapshotDetails& WithInstanceCreateTime(Aws::String&& value) { SetInstanceCreateTime(std::move(value)); return *this;}
    inline AwsRdsDbSnapshotDetails& WithInstanceCreateTime(const char* value) { SetInstanceCreateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The master user name for the DB snapshot.</p>
     */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }
    inline void SetMasterUsername(Aws::String&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::move(value); }
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }
    inline AwsRdsDbSnapshotDetails& WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}
    inline AwsRdsDbSnapshotDetails& WithMasterUsername(Aws::String&& value) { SetMasterUsername(std::move(value)); return *this;}
    inline AwsRdsDbSnapshotDetails& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the database engine.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline AwsRdsDbSnapshotDetails& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline AwsRdsDbSnapshotDetails& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline AwsRdsDbSnapshotDetails& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
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
    inline AwsRdsDbSnapshotDetails& WithLicenseModel(const Aws::String& value) { SetLicenseModel(value); return *this;}
    inline AwsRdsDbSnapshotDetails& WithLicenseModel(Aws::String&& value) { SetLicenseModel(std::move(value)); return *this;}
    inline AwsRdsDbSnapshotDetails& WithLicenseModel(const char* value) { SetLicenseModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the DB snapshot.</p>
     */
    inline const Aws::String& GetSnapshotType() const{ return m_snapshotType; }
    inline bool SnapshotTypeHasBeenSet() const { return m_snapshotTypeHasBeenSet; }
    inline void SetSnapshotType(const Aws::String& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = value; }
    inline void SetSnapshotType(Aws::String&& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = std::move(value); }
    inline void SetSnapshotType(const char* value) { m_snapshotTypeHasBeenSet = true; m_snapshotType.assign(value); }
    inline AwsRdsDbSnapshotDetails& WithSnapshotType(const Aws::String& value) { SetSnapshotType(value); return *this;}
    inline AwsRdsDbSnapshotDetails& WithSnapshotType(Aws::String&& value) { SetSnapshotType(std::move(value)); return *this;}
    inline AwsRdsDbSnapshotDetails& WithSnapshotType(const char* value) { SetSnapshotType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provisioned IOPS (I/O operations per second) value of the DB instance at
     * the time of the snapshot.</p>
     */
    inline int GetIops() const{ return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline AwsRdsDbSnapshotDetails& WithIops(int value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The option group name for the DB snapshot.</p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::move(value); }
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }
    inline AwsRdsDbSnapshotDetails& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}
    inline AwsRdsDbSnapshotDetails& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(std::move(value)); return *this;}
    inline AwsRdsDbSnapshotDetails& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of the estimated data that has been transferred.</p>
     */
    inline int GetPercentProgress() const{ return m_percentProgress; }
    inline bool PercentProgressHasBeenSet() const { return m_percentProgressHasBeenSet; }
    inline void SetPercentProgress(int value) { m_percentProgressHasBeenSet = true; m_percentProgress = value; }
    inline AwsRdsDbSnapshotDetails& WithPercentProgress(int value) { SetPercentProgress(value); return *this;}
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
    inline AwsRdsDbSnapshotDetails& WithSourceRegion(const Aws::String& value) { SetSourceRegion(value); return *this;}
    inline AwsRdsDbSnapshotDetails& WithSourceRegion(Aws::String&& value) { SetSourceRegion(std::move(value)); return *this;}
    inline AwsRdsDbSnapshotDetails& WithSourceRegion(const char* value) { SetSourceRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DB snapshot ARN that the DB snapshot was copied from.</p>
     */
    inline const Aws::String& GetSourceDbSnapshotIdentifier() const{ return m_sourceDbSnapshotIdentifier; }
    inline bool SourceDbSnapshotIdentifierHasBeenSet() const { return m_sourceDbSnapshotIdentifierHasBeenSet; }
    inline void SetSourceDbSnapshotIdentifier(const Aws::String& value) { m_sourceDbSnapshotIdentifierHasBeenSet = true; m_sourceDbSnapshotIdentifier = value; }
    inline void SetSourceDbSnapshotIdentifier(Aws::String&& value) { m_sourceDbSnapshotIdentifierHasBeenSet = true; m_sourceDbSnapshotIdentifier = std::move(value); }
    inline void SetSourceDbSnapshotIdentifier(const char* value) { m_sourceDbSnapshotIdentifierHasBeenSet = true; m_sourceDbSnapshotIdentifier.assign(value); }
    inline AwsRdsDbSnapshotDetails& WithSourceDbSnapshotIdentifier(const Aws::String& value) { SetSourceDbSnapshotIdentifier(value); return *this;}
    inline AwsRdsDbSnapshotDetails& WithSourceDbSnapshotIdentifier(Aws::String&& value) { SetSourceDbSnapshotIdentifier(std::move(value)); return *this;}
    inline AwsRdsDbSnapshotDetails& WithSourceDbSnapshotIdentifier(const char* value) { SetSourceDbSnapshotIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage type associated with the DB snapshot. Valid values are as
     * follows:</p> <ul> <li> <p> <code>gp2</code> </p> </li> <li> <p> <code>io1</code>
     * </p> </li> <li> <p> <code>standard</code> </p> </li> </ul>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }
    inline AwsRdsDbSnapshotDetails& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}
    inline AwsRdsDbSnapshotDetails& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}
    inline AwsRdsDbSnapshotDetails& WithStorageType(const char* value) { SetStorageType(value); return *this;}
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
    inline AwsRdsDbSnapshotDetails& WithTdeCredentialArn(const Aws::String& value) { SetTdeCredentialArn(value); return *this;}
    inline AwsRdsDbSnapshotDetails& WithTdeCredentialArn(Aws::String&& value) { SetTdeCredentialArn(std::move(value)); return *this;}
    inline AwsRdsDbSnapshotDetails& WithTdeCredentialArn(const char* value) { SetTdeCredentialArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the DB snapshot is encrypted.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline AwsRdsDbSnapshotDetails& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>Encrypted</code> is <code>true</code>, the KMS key identifier for
     * the encrypted DB snapshot.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline AwsRdsDbSnapshotDetails& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline AwsRdsDbSnapshotDetails& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline AwsRdsDbSnapshotDetails& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time zone of the DB snapshot.</p>
     */
    inline const Aws::String& GetTimezone() const{ return m_timezone; }
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }
    inline void SetTimezone(const Aws::String& value) { m_timezoneHasBeenSet = true; m_timezone = value; }
    inline void SetTimezone(Aws::String&& value) { m_timezoneHasBeenSet = true; m_timezone = std::move(value); }
    inline void SetTimezone(const char* value) { m_timezoneHasBeenSet = true; m_timezone.assign(value); }
    inline AwsRdsDbSnapshotDetails& WithTimezone(const Aws::String& value) { SetTimezone(value); return *this;}
    inline AwsRdsDbSnapshotDetails& WithTimezone(Aws::String&& value) { SetTimezone(std::move(value)); return *this;}
    inline AwsRdsDbSnapshotDetails& WithTimezone(const char* value) { SetTimezone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether mapping of IAM accounts to database accounts is enabled.</p>
     */
    inline bool GetIamDatabaseAuthenticationEnabled() const{ return m_iamDatabaseAuthenticationEnabled; }
    inline bool IamDatabaseAuthenticationEnabledHasBeenSet() const { return m_iamDatabaseAuthenticationEnabledHasBeenSet; }
    inline void SetIamDatabaseAuthenticationEnabled(bool value) { m_iamDatabaseAuthenticationEnabledHasBeenSet = true; m_iamDatabaseAuthenticationEnabled = value; }
    inline AwsRdsDbSnapshotDetails& WithIamDatabaseAuthenticationEnabled(bool value) { SetIamDatabaseAuthenticationEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p>
     */
    inline const Aws::Vector<AwsRdsDbProcessorFeature>& GetProcessorFeatures() const{ return m_processorFeatures; }
    inline bool ProcessorFeaturesHasBeenSet() const { return m_processorFeaturesHasBeenSet; }
    inline void SetProcessorFeatures(const Aws::Vector<AwsRdsDbProcessorFeature>& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures = value; }
    inline void SetProcessorFeatures(Aws::Vector<AwsRdsDbProcessorFeature>&& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures = std::move(value); }
    inline AwsRdsDbSnapshotDetails& WithProcessorFeatures(const Aws::Vector<AwsRdsDbProcessorFeature>& value) { SetProcessorFeatures(value); return *this;}
    inline AwsRdsDbSnapshotDetails& WithProcessorFeatures(Aws::Vector<AwsRdsDbProcessorFeature>&& value) { SetProcessorFeatures(std::move(value)); return *this;}
    inline AwsRdsDbSnapshotDetails& AddProcessorFeatures(const AwsRdsDbProcessorFeature& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures.push_back(value); return *this; }
    inline AwsRdsDbSnapshotDetails& AddProcessorFeatures(AwsRdsDbProcessorFeature&& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier for the source DB instance.</p>
     */
    inline const Aws::String& GetDbiResourceId() const{ return m_dbiResourceId; }
    inline bool DbiResourceIdHasBeenSet() const { return m_dbiResourceIdHasBeenSet; }
    inline void SetDbiResourceId(const Aws::String& value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId = value; }
    inline void SetDbiResourceId(Aws::String&& value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId = std::move(value); }
    inline void SetDbiResourceId(const char* value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId.assign(value); }
    inline AwsRdsDbSnapshotDetails& WithDbiResourceId(const Aws::String& value) { SetDbiResourceId(value); return *this;}
    inline AwsRdsDbSnapshotDetails& WithDbiResourceId(Aws::String&& value) { SetDbiResourceId(std::move(value)); return *this;}
    inline AwsRdsDbSnapshotDetails& WithDbiResourceId(const char* value) { SetDbiResourceId(value); return *this;}
    ///@}
  private:

    Aws::String m_dbSnapshotIdentifier;
    bool m_dbSnapshotIdentifierHasBeenSet = false;

    Aws::String m_dbInstanceIdentifier;
    bool m_dbInstanceIdentifierHasBeenSet = false;

    Aws::String m_snapshotCreateTime;
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

    Aws::String m_instanceCreateTime;
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

    Aws::String m_sourceDbSnapshotIdentifier;
    bool m_sourceDbSnapshotIdentifierHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    Aws::String m_tdeCredentialArn;
    bool m_tdeCredentialArnHasBeenSet = false;

    bool m_encrypted;
    bool m_encryptedHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet = false;

    bool m_iamDatabaseAuthenticationEnabled;
    bool m_iamDatabaseAuthenticationEnabledHasBeenSet = false;

    Aws::Vector<AwsRdsDbProcessorFeature> m_processorFeatures;
    bool m_processorFeaturesHasBeenSet = false;

    Aws::String m_dbiResourceId;
    bool m_dbiResourceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
