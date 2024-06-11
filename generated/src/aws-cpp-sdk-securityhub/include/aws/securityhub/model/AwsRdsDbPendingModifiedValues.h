/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsRdsPendingCloudWatchLogsExports.h>
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
   * <p>Changes to a DB instance that are currently pending.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRdsDbPendingModifiedValues">AWS
   * API Reference</a></p>
   */
  class AwsRdsDbPendingModifiedValues
  {
  public:
    AWS_SECURITYHUB_API AwsRdsDbPendingModifiedValues();
    AWS_SECURITYHUB_API AwsRdsDbPendingModifiedValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRdsDbPendingModifiedValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The new DB instance class for the DB instance.</p>
     */
    inline const Aws::String& GetDbInstanceClass() const{ return m_dbInstanceClass; }
    inline bool DbInstanceClassHasBeenSet() const { return m_dbInstanceClassHasBeenSet; }
    inline void SetDbInstanceClass(const Aws::String& value) { m_dbInstanceClassHasBeenSet = true; m_dbInstanceClass = value; }
    inline void SetDbInstanceClass(Aws::String&& value) { m_dbInstanceClassHasBeenSet = true; m_dbInstanceClass = std::move(value); }
    inline void SetDbInstanceClass(const char* value) { m_dbInstanceClassHasBeenSet = true; m_dbInstanceClass.assign(value); }
    inline AwsRdsDbPendingModifiedValues& WithDbInstanceClass(const Aws::String& value) { SetDbInstanceClass(value); return *this;}
    inline AwsRdsDbPendingModifiedValues& WithDbInstanceClass(Aws::String&& value) { SetDbInstanceClass(std::move(value)); return *this;}
    inline AwsRdsDbPendingModifiedValues& WithDbInstanceClass(const char* value) { SetDbInstanceClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new value of the allocated storage for the DB instance.</p>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }
    inline AwsRdsDbPendingModifiedValues& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new master user password for the DB instance.</p>
     */
    inline const Aws::String& GetMasterUserPassword() const{ return m_masterUserPassword; }
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }
    inline void SetMasterUserPassword(const Aws::String& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }
    inline void SetMasterUserPassword(Aws::String&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::move(value); }
    inline void SetMasterUserPassword(const char* value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword.assign(value); }
    inline AwsRdsDbPendingModifiedValues& WithMasterUserPassword(const Aws::String& value) { SetMasterUserPassword(value); return *this;}
    inline AwsRdsDbPendingModifiedValues& WithMasterUserPassword(Aws::String&& value) { SetMasterUserPassword(std::move(value)); return *this;}
    inline AwsRdsDbPendingModifiedValues& WithMasterUserPassword(const char* value) { SetMasterUserPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new port for the DB instance.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline AwsRdsDbPendingModifiedValues& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new backup retention period for the DB instance.</p>
     */
    inline int GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }
    inline AwsRdsDbPendingModifiedValues& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates that a single Availability Zone DB instance is changing to a
     * multiple Availability Zone deployment.</p>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }
    inline AwsRdsDbPendingModifiedValues& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new engine version for the DB instance.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline AwsRdsDbPendingModifiedValues& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline AwsRdsDbPendingModifiedValues& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline AwsRdsDbPendingModifiedValues& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new license model value for the DB instance.</p>
     */
    inline const Aws::String& GetLicenseModel() const{ return m_licenseModel; }
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }
    inline void SetLicenseModel(const Aws::String& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }
    inline void SetLicenseModel(Aws::String&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = std::move(value); }
    inline void SetLicenseModel(const char* value) { m_licenseModelHasBeenSet = true; m_licenseModel.assign(value); }
    inline AwsRdsDbPendingModifiedValues& WithLicenseModel(const Aws::String& value) { SetLicenseModel(value); return *this;}
    inline AwsRdsDbPendingModifiedValues& WithLicenseModel(Aws::String&& value) { SetLicenseModel(std::move(value)); return *this;}
    inline AwsRdsDbPendingModifiedValues& WithLicenseModel(const char* value) { SetLicenseModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new provisioned IOPS value for the DB instance.</p>
     */
    inline int GetIops() const{ return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline AwsRdsDbPendingModifiedValues& WithIops(int value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new DB instance identifier for the DB instance.</p>
     */
    inline const Aws::String& GetDbInstanceIdentifier() const{ return m_dbInstanceIdentifier; }
    inline bool DbInstanceIdentifierHasBeenSet() const { return m_dbInstanceIdentifierHasBeenSet; }
    inline void SetDbInstanceIdentifier(const Aws::String& value) { m_dbInstanceIdentifierHasBeenSet = true; m_dbInstanceIdentifier = value; }
    inline void SetDbInstanceIdentifier(Aws::String&& value) { m_dbInstanceIdentifierHasBeenSet = true; m_dbInstanceIdentifier = std::move(value); }
    inline void SetDbInstanceIdentifier(const char* value) { m_dbInstanceIdentifierHasBeenSet = true; m_dbInstanceIdentifier.assign(value); }
    inline AwsRdsDbPendingModifiedValues& WithDbInstanceIdentifier(const Aws::String& value) { SetDbInstanceIdentifier(value); return *this;}
    inline AwsRdsDbPendingModifiedValues& WithDbInstanceIdentifier(Aws::String&& value) { SetDbInstanceIdentifier(std::move(value)); return *this;}
    inline AwsRdsDbPendingModifiedValues& WithDbInstanceIdentifier(const char* value) { SetDbInstanceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new storage type for the DB instance.</p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }
    inline AwsRdsDbPendingModifiedValues& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}
    inline AwsRdsDbPendingModifiedValues& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}
    inline AwsRdsDbPendingModifiedValues& WithStorageType(const char* value) { SetStorageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new CA certificate identifier for the DB instance.</p>
     */
    inline const Aws::String& GetCaCertificateIdentifier() const{ return m_caCertificateIdentifier; }
    inline bool CaCertificateIdentifierHasBeenSet() const { return m_caCertificateIdentifierHasBeenSet; }
    inline void SetCaCertificateIdentifier(const Aws::String& value) { m_caCertificateIdentifierHasBeenSet = true; m_caCertificateIdentifier = value; }
    inline void SetCaCertificateIdentifier(Aws::String&& value) { m_caCertificateIdentifierHasBeenSet = true; m_caCertificateIdentifier = std::move(value); }
    inline void SetCaCertificateIdentifier(const char* value) { m_caCertificateIdentifierHasBeenSet = true; m_caCertificateIdentifier.assign(value); }
    inline AwsRdsDbPendingModifiedValues& WithCaCertificateIdentifier(const Aws::String& value) { SetCaCertificateIdentifier(value); return *this;}
    inline AwsRdsDbPendingModifiedValues& WithCaCertificateIdentifier(Aws::String&& value) { SetCaCertificateIdentifier(std::move(value)); return *this;}
    inline AwsRdsDbPendingModifiedValues& WithCaCertificateIdentifier(const char* value) { SetCaCertificateIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the new subnet group for the DB instance.</p>
     */
    inline const Aws::String& GetDbSubnetGroupName() const{ return m_dbSubnetGroupName; }
    inline bool DbSubnetGroupNameHasBeenSet() const { return m_dbSubnetGroupNameHasBeenSet; }
    inline void SetDbSubnetGroupName(const Aws::String& value) { m_dbSubnetGroupNameHasBeenSet = true; m_dbSubnetGroupName = value; }
    inline void SetDbSubnetGroupName(Aws::String&& value) { m_dbSubnetGroupNameHasBeenSet = true; m_dbSubnetGroupName = std::move(value); }
    inline void SetDbSubnetGroupName(const char* value) { m_dbSubnetGroupNameHasBeenSet = true; m_dbSubnetGroupName.assign(value); }
    inline AwsRdsDbPendingModifiedValues& WithDbSubnetGroupName(const Aws::String& value) { SetDbSubnetGroupName(value); return *this;}
    inline AwsRdsDbPendingModifiedValues& WithDbSubnetGroupName(Aws::String&& value) { SetDbSubnetGroupName(std::move(value)); return *this;}
    inline AwsRdsDbPendingModifiedValues& WithDbSubnetGroupName(const char* value) { SetDbSubnetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of log types that are being enabled or disabled.</p>
     */
    inline const AwsRdsPendingCloudWatchLogsExports& GetPendingCloudWatchLogsExports() const{ return m_pendingCloudWatchLogsExports; }
    inline bool PendingCloudWatchLogsExportsHasBeenSet() const { return m_pendingCloudWatchLogsExportsHasBeenSet; }
    inline void SetPendingCloudWatchLogsExports(const AwsRdsPendingCloudWatchLogsExports& value) { m_pendingCloudWatchLogsExportsHasBeenSet = true; m_pendingCloudWatchLogsExports = value; }
    inline void SetPendingCloudWatchLogsExports(AwsRdsPendingCloudWatchLogsExports&& value) { m_pendingCloudWatchLogsExportsHasBeenSet = true; m_pendingCloudWatchLogsExports = std::move(value); }
    inline AwsRdsDbPendingModifiedValues& WithPendingCloudWatchLogsExports(const AwsRdsPendingCloudWatchLogsExports& value) { SetPendingCloudWatchLogsExports(value); return *this;}
    inline AwsRdsDbPendingModifiedValues& WithPendingCloudWatchLogsExports(AwsRdsPendingCloudWatchLogsExports&& value) { SetPendingCloudWatchLogsExports(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Processor features that are being updated.</p>
     */
    inline const Aws::Vector<AwsRdsDbProcessorFeature>& GetProcessorFeatures() const{ return m_processorFeatures; }
    inline bool ProcessorFeaturesHasBeenSet() const { return m_processorFeaturesHasBeenSet; }
    inline void SetProcessorFeatures(const Aws::Vector<AwsRdsDbProcessorFeature>& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures = value; }
    inline void SetProcessorFeatures(Aws::Vector<AwsRdsDbProcessorFeature>&& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures = std::move(value); }
    inline AwsRdsDbPendingModifiedValues& WithProcessorFeatures(const Aws::Vector<AwsRdsDbProcessorFeature>& value) { SetProcessorFeatures(value); return *this;}
    inline AwsRdsDbPendingModifiedValues& WithProcessorFeatures(Aws::Vector<AwsRdsDbProcessorFeature>&& value) { SetProcessorFeatures(std::move(value)); return *this;}
    inline AwsRdsDbPendingModifiedValues& AddProcessorFeatures(const AwsRdsDbProcessorFeature& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures.push_back(value); return *this; }
    inline AwsRdsDbPendingModifiedValues& AddProcessorFeatures(AwsRdsDbProcessorFeature&& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_dbInstanceClass;
    bool m_dbInstanceClassHasBeenSet = false;

    int m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet = false;

    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    int m_backupRetentionPeriod;
    bool m_backupRetentionPeriodHasBeenSet = false;

    bool m_multiAZ;
    bool m_multiAZHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_licenseModel;
    bool m_licenseModelHasBeenSet = false;

    int m_iops;
    bool m_iopsHasBeenSet = false;

    Aws::String m_dbInstanceIdentifier;
    bool m_dbInstanceIdentifierHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    Aws::String m_caCertificateIdentifier;
    bool m_caCertificateIdentifierHasBeenSet = false;

    Aws::String m_dbSubnetGroupName;
    bool m_dbSubnetGroupNameHasBeenSet = false;

    AwsRdsPendingCloudWatchLogsExports m_pendingCloudWatchLogsExports;
    bool m_pendingCloudWatchLogsExportsHasBeenSet = false;

    Aws::Vector<AwsRdsDbProcessorFeature> m_processorFeatures;
    bool m_processorFeaturesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
