/**
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
    AWS_SECURITYHUB_API AwsRdsDbSnapshotDetails() = default;
    AWS_SECURITYHUB_API AwsRdsDbSnapshotDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRdsDbSnapshotDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name or ARN of the DB snapshot that is used to restore the DB
     * instance.</p>
     */
    inline const Aws::String& GetDbSnapshotIdentifier() const { return m_dbSnapshotIdentifier; }
    inline bool DbSnapshotIdentifierHasBeenSet() const { return m_dbSnapshotIdentifierHasBeenSet; }
    template<typename DbSnapshotIdentifierT = Aws::String>
    void SetDbSnapshotIdentifier(DbSnapshotIdentifierT&& value) { m_dbSnapshotIdentifierHasBeenSet = true; m_dbSnapshotIdentifier = std::forward<DbSnapshotIdentifierT>(value); }
    template<typename DbSnapshotIdentifierT = Aws::String>
    AwsRdsDbSnapshotDetails& WithDbSnapshotIdentifier(DbSnapshotIdentifierT&& value) { SetDbSnapshotIdentifier(std::forward<DbSnapshotIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the DB instance.</p>
     */
    inline const Aws::String& GetDbInstanceIdentifier() const { return m_dbInstanceIdentifier; }
    inline bool DbInstanceIdentifierHasBeenSet() const { return m_dbInstanceIdentifierHasBeenSet; }
    template<typename DbInstanceIdentifierT = Aws::String>
    void SetDbInstanceIdentifier(DbInstanceIdentifierT&& value) { m_dbInstanceIdentifierHasBeenSet = true; m_dbInstanceIdentifier = std::forward<DbInstanceIdentifierT>(value); }
    template<typename DbInstanceIdentifierT = Aws::String>
    AwsRdsDbSnapshotDetails& WithDbInstanceIdentifier(DbInstanceIdentifierT&& value) { SetDbInstanceIdentifier(std::forward<DbInstanceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the snapshot was taken in Coordinated Universal Time (UTC).</p>
     */
    inline const Aws::String& GetSnapshotCreateTime() const { return m_snapshotCreateTime; }
    inline bool SnapshotCreateTimeHasBeenSet() const { return m_snapshotCreateTimeHasBeenSet; }
    template<typename SnapshotCreateTimeT = Aws::String>
    void SetSnapshotCreateTime(SnapshotCreateTimeT&& value) { m_snapshotCreateTimeHasBeenSet = true; m_snapshotCreateTime = std::forward<SnapshotCreateTimeT>(value); }
    template<typename SnapshotCreateTimeT = Aws::String>
    AwsRdsDbSnapshotDetails& WithSnapshotCreateTime(SnapshotCreateTimeT&& value) { SetSnapshotCreateTime(std::forward<SnapshotCreateTimeT>(value)); return *this;}
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
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    AwsRdsDbSnapshotDetails& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of storage (in gigabytes) to be initially allocated for the
     * database instance.</p>
     */
    inline int GetAllocatedStorage() const { return m_allocatedStorage; }
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }
    inline AwsRdsDbSnapshotDetails& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of this DB snapshot.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    AwsRdsDbSnapshotDetails& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port that the database engine was listening on at the time of the
     * snapshot.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline AwsRdsDbSnapshotDetails& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the Availability Zone in which the DB instance was
     * located at the time of the DB snapshot.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    AwsRdsDbSnapshotDetails& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC ID associated with the DB snapshot.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    AwsRdsDbSnapshotDetails& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the time in Coordinated Universal Time (UTC) when the DB instance,
     * from which the snapshot was taken, was created.</p>
     */
    inline const Aws::String& GetInstanceCreateTime() const { return m_instanceCreateTime; }
    inline bool InstanceCreateTimeHasBeenSet() const { return m_instanceCreateTimeHasBeenSet; }
    template<typename InstanceCreateTimeT = Aws::String>
    void SetInstanceCreateTime(InstanceCreateTimeT&& value) { m_instanceCreateTimeHasBeenSet = true; m_instanceCreateTime = std::forward<InstanceCreateTimeT>(value); }
    template<typename InstanceCreateTimeT = Aws::String>
    AwsRdsDbSnapshotDetails& WithInstanceCreateTime(InstanceCreateTimeT&& value) { SetInstanceCreateTime(std::forward<InstanceCreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The master user name for the DB snapshot.</p>
     */
    inline const Aws::String& GetMasterUsername() const { return m_masterUsername; }
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }
    template<typename MasterUsernameT = Aws::String>
    void SetMasterUsername(MasterUsernameT&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::forward<MasterUsernameT>(value); }
    template<typename MasterUsernameT = Aws::String>
    AwsRdsDbSnapshotDetails& WithMasterUsername(MasterUsernameT&& value) { SetMasterUsername(std::forward<MasterUsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the database engine.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    AwsRdsDbSnapshotDetails& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>License model information for the restored DB instance.</p>
     */
    inline const Aws::String& GetLicenseModel() const { return m_licenseModel; }
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }
    template<typename LicenseModelT = Aws::String>
    void SetLicenseModel(LicenseModelT&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = std::forward<LicenseModelT>(value); }
    template<typename LicenseModelT = Aws::String>
    AwsRdsDbSnapshotDetails& WithLicenseModel(LicenseModelT&& value) { SetLicenseModel(std::forward<LicenseModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the DB snapshot.</p>
     */
    inline const Aws::String& GetSnapshotType() const { return m_snapshotType; }
    inline bool SnapshotTypeHasBeenSet() const { return m_snapshotTypeHasBeenSet; }
    template<typename SnapshotTypeT = Aws::String>
    void SetSnapshotType(SnapshotTypeT&& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = std::forward<SnapshotTypeT>(value); }
    template<typename SnapshotTypeT = Aws::String>
    AwsRdsDbSnapshotDetails& WithSnapshotType(SnapshotTypeT&& value) { SetSnapshotType(std::forward<SnapshotTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provisioned IOPS (I/O operations per second) value of the DB instance at
     * the time of the snapshot.</p>
     */
    inline int GetIops() const { return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline AwsRdsDbSnapshotDetails& WithIops(int value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The option group name for the DB snapshot.</p>
     */
    inline const Aws::String& GetOptionGroupName() const { return m_optionGroupName; }
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }
    template<typename OptionGroupNameT = Aws::String>
    void SetOptionGroupName(OptionGroupNameT&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::forward<OptionGroupNameT>(value); }
    template<typename OptionGroupNameT = Aws::String>
    AwsRdsDbSnapshotDetails& WithOptionGroupName(OptionGroupNameT&& value) { SetOptionGroupName(std::forward<OptionGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of the estimated data that has been transferred.</p>
     */
    inline int GetPercentProgress() const { return m_percentProgress; }
    inline bool PercentProgressHasBeenSet() const { return m_percentProgressHasBeenSet; }
    inline void SetPercentProgress(int value) { m_percentProgressHasBeenSet = true; m_percentProgress = value; }
    inline AwsRdsDbSnapshotDetails& WithPercentProgress(int value) { SetPercentProgress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region that the DB snapshot was created in or copied
     * from.</p>
     */
    inline const Aws::String& GetSourceRegion() const { return m_sourceRegion; }
    inline bool SourceRegionHasBeenSet() const { return m_sourceRegionHasBeenSet; }
    template<typename SourceRegionT = Aws::String>
    void SetSourceRegion(SourceRegionT&& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = std::forward<SourceRegionT>(value); }
    template<typename SourceRegionT = Aws::String>
    AwsRdsDbSnapshotDetails& WithSourceRegion(SourceRegionT&& value) { SetSourceRegion(std::forward<SourceRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DB snapshot ARN that the DB snapshot was copied from.</p>
     */
    inline const Aws::String& GetSourceDbSnapshotIdentifier() const { return m_sourceDbSnapshotIdentifier; }
    inline bool SourceDbSnapshotIdentifierHasBeenSet() const { return m_sourceDbSnapshotIdentifierHasBeenSet; }
    template<typename SourceDbSnapshotIdentifierT = Aws::String>
    void SetSourceDbSnapshotIdentifier(SourceDbSnapshotIdentifierT&& value) { m_sourceDbSnapshotIdentifierHasBeenSet = true; m_sourceDbSnapshotIdentifier = std::forward<SourceDbSnapshotIdentifierT>(value); }
    template<typename SourceDbSnapshotIdentifierT = Aws::String>
    AwsRdsDbSnapshotDetails& WithSourceDbSnapshotIdentifier(SourceDbSnapshotIdentifierT&& value) { SetSourceDbSnapshotIdentifier(std::forward<SourceDbSnapshotIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage type associated with the DB snapshot. Valid values are as
     * follows:</p> <ul> <li> <p> <code>gp2</code> </p> </li> <li> <p> <code>io1</code>
     * </p> </li> <li> <p> <code>standard</code> </p> </li> </ul>
     */
    inline const Aws::String& GetStorageType() const { return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    template<typename StorageTypeT = Aws::String>
    void SetStorageType(StorageTypeT&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::forward<StorageTypeT>(value); }
    template<typename StorageTypeT = Aws::String>
    AwsRdsDbSnapshotDetails& WithStorageType(StorageTypeT&& value) { SetStorageType(std::forward<StorageTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline const Aws::String& GetTdeCredentialArn() const { return m_tdeCredentialArn; }
    inline bool TdeCredentialArnHasBeenSet() const { return m_tdeCredentialArnHasBeenSet; }
    template<typename TdeCredentialArnT = Aws::String>
    void SetTdeCredentialArn(TdeCredentialArnT&& value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn = std::forward<TdeCredentialArnT>(value); }
    template<typename TdeCredentialArnT = Aws::String>
    AwsRdsDbSnapshotDetails& WithTdeCredentialArn(TdeCredentialArnT&& value) { SetTdeCredentialArn(std::forward<TdeCredentialArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the DB snapshot is encrypted.</p>
     */
    inline bool GetEncrypted() const { return m_encrypted; }
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline AwsRdsDbSnapshotDetails& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>Encrypted</code> is <code>true</code>, the KMS key identifier for
     * the encrypted DB snapshot.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    AwsRdsDbSnapshotDetails& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time zone of the DB snapshot.</p>
     */
    inline const Aws::String& GetTimezone() const { return m_timezone; }
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }
    template<typename TimezoneT = Aws::String>
    void SetTimezone(TimezoneT&& value) { m_timezoneHasBeenSet = true; m_timezone = std::forward<TimezoneT>(value); }
    template<typename TimezoneT = Aws::String>
    AwsRdsDbSnapshotDetails& WithTimezone(TimezoneT&& value) { SetTimezone(std::forward<TimezoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether mapping of IAM accounts to database accounts is enabled.</p>
     */
    inline bool GetIamDatabaseAuthenticationEnabled() const { return m_iamDatabaseAuthenticationEnabled; }
    inline bool IamDatabaseAuthenticationEnabledHasBeenSet() const { return m_iamDatabaseAuthenticationEnabledHasBeenSet; }
    inline void SetIamDatabaseAuthenticationEnabled(bool value) { m_iamDatabaseAuthenticationEnabledHasBeenSet = true; m_iamDatabaseAuthenticationEnabled = value; }
    inline AwsRdsDbSnapshotDetails& WithIamDatabaseAuthenticationEnabled(bool value) { SetIamDatabaseAuthenticationEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p>
     */
    inline const Aws::Vector<AwsRdsDbProcessorFeature>& GetProcessorFeatures() const { return m_processorFeatures; }
    inline bool ProcessorFeaturesHasBeenSet() const { return m_processorFeaturesHasBeenSet; }
    template<typename ProcessorFeaturesT = Aws::Vector<AwsRdsDbProcessorFeature>>
    void SetProcessorFeatures(ProcessorFeaturesT&& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures = std::forward<ProcessorFeaturesT>(value); }
    template<typename ProcessorFeaturesT = Aws::Vector<AwsRdsDbProcessorFeature>>
    AwsRdsDbSnapshotDetails& WithProcessorFeatures(ProcessorFeaturesT&& value) { SetProcessorFeatures(std::forward<ProcessorFeaturesT>(value)); return *this;}
    template<typename ProcessorFeaturesT = AwsRdsDbProcessorFeature>
    AwsRdsDbSnapshotDetails& AddProcessorFeatures(ProcessorFeaturesT&& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures.emplace_back(std::forward<ProcessorFeaturesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier for the source DB instance.</p>
     */
    inline const Aws::String& GetDbiResourceId() const { return m_dbiResourceId; }
    inline bool DbiResourceIdHasBeenSet() const { return m_dbiResourceIdHasBeenSet; }
    template<typename DbiResourceIdT = Aws::String>
    void SetDbiResourceId(DbiResourceIdT&& value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId = std::forward<DbiResourceIdT>(value); }
    template<typename DbiResourceIdT = Aws::String>
    AwsRdsDbSnapshotDetails& WithDbiResourceId(DbiResourceIdT&& value) { SetDbiResourceId(std::forward<DbiResourceIdT>(value)); return *this;}
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

    int m_allocatedStorage{0};
    bool m_allocatedStorageHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    int m_port{0};
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

    int m_iops{0};
    bool m_iopsHasBeenSet = false;

    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet = false;

    int m_percentProgress{0};
    bool m_percentProgressHasBeenSet = false;

    Aws::String m_sourceRegion;
    bool m_sourceRegionHasBeenSet = false;

    Aws::String m_sourceDbSnapshotIdentifier;
    bool m_sourceDbSnapshotIdentifierHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    Aws::String m_tdeCredentialArn;
    bool m_tdeCredentialArnHasBeenSet = false;

    bool m_encrypted{false};
    bool m_encryptedHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet = false;

    bool m_iamDatabaseAuthenticationEnabled{false};
    bool m_iamDatabaseAuthenticationEnabledHasBeenSet = false;

    Aws::Vector<AwsRdsDbProcessorFeature> m_processorFeatures;
    bool m_processorFeaturesHasBeenSet = false;

    Aws::String m_dbiResourceId;
    bool m_dbiResourceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
