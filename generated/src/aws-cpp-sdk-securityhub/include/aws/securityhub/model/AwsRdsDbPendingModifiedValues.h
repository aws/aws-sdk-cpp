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
    AWS_SECURITYHUB_API AwsRdsDbPendingModifiedValues() = default;
    AWS_SECURITYHUB_API AwsRdsDbPendingModifiedValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRdsDbPendingModifiedValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The new DB instance class for the DB instance.</p>
     */
    inline const Aws::String& GetDbInstanceClass() const { return m_dbInstanceClass; }
    inline bool DbInstanceClassHasBeenSet() const { return m_dbInstanceClassHasBeenSet; }
    template<typename DbInstanceClassT = Aws::String>
    void SetDbInstanceClass(DbInstanceClassT&& value) { m_dbInstanceClassHasBeenSet = true; m_dbInstanceClass = std::forward<DbInstanceClassT>(value); }
    template<typename DbInstanceClassT = Aws::String>
    AwsRdsDbPendingModifiedValues& WithDbInstanceClass(DbInstanceClassT&& value) { SetDbInstanceClass(std::forward<DbInstanceClassT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new value of the allocated storage for the DB instance.</p>
     */
    inline int GetAllocatedStorage() const { return m_allocatedStorage; }
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }
    inline AwsRdsDbPendingModifiedValues& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new master user password for the DB instance.</p>
     */
    inline const Aws::String& GetMasterUserPassword() const { return m_masterUserPassword; }
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }
    template<typename MasterUserPasswordT = Aws::String>
    void SetMasterUserPassword(MasterUserPasswordT&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::forward<MasterUserPasswordT>(value); }
    template<typename MasterUserPasswordT = Aws::String>
    AwsRdsDbPendingModifiedValues& WithMasterUserPassword(MasterUserPasswordT&& value) { SetMasterUserPassword(std::forward<MasterUserPasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new port for the DB instance.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline AwsRdsDbPendingModifiedValues& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new backup retention period for the DB instance.</p>
     */
    inline int GetBackupRetentionPeriod() const { return m_backupRetentionPeriod; }
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }
    inline AwsRdsDbPendingModifiedValues& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates that a single Availability Zone DB instance is changing to a
     * multiple Availability Zone deployment.</p>
     */
    inline bool GetMultiAZ() const { return m_multiAZ; }
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }
    inline AwsRdsDbPendingModifiedValues& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new engine version for the DB instance.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    AwsRdsDbPendingModifiedValues& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new license model value for the DB instance.</p>
     */
    inline const Aws::String& GetLicenseModel() const { return m_licenseModel; }
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }
    template<typename LicenseModelT = Aws::String>
    void SetLicenseModel(LicenseModelT&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = std::forward<LicenseModelT>(value); }
    template<typename LicenseModelT = Aws::String>
    AwsRdsDbPendingModifiedValues& WithLicenseModel(LicenseModelT&& value) { SetLicenseModel(std::forward<LicenseModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new provisioned IOPS value for the DB instance.</p>
     */
    inline int GetIops() const { return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline AwsRdsDbPendingModifiedValues& WithIops(int value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new DB instance identifier for the DB instance.</p>
     */
    inline const Aws::String& GetDbInstanceIdentifier() const { return m_dbInstanceIdentifier; }
    inline bool DbInstanceIdentifierHasBeenSet() const { return m_dbInstanceIdentifierHasBeenSet; }
    template<typename DbInstanceIdentifierT = Aws::String>
    void SetDbInstanceIdentifier(DbInstanceIdentifierT&& value) { m_dbInstanceIdentifierHasBeenSet = true; m_dbInstanceIdentifier = std::forward<DbInstanceIdentifierT>(value); }
    template<typename DbInstanceIdentifierT = Aws::String>
    AwsRdsDbPendingModifiedValues& WithDbInstanceIdentifier(DbInstanceIdentifierT&& value) { SetDbInstanceIdentifier(std::forward<DbInstanceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new storage type for the DB instance.</p>
     */
    inline const Aws::String& GetStorageType() const { return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    template<typename StorageTypeT = Aws::String>
    void SetStorageType(StorageTypeT&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::forward<StorageTypeT>(value); }
    template<typename StorageTypeT = Aws::String>
    AwsRdsDbPendingModifiedValues& WithStorageType(StorageTypeT&& value) { SetStorageType(std::forward<StorageTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new CA certificate identifier for the DB instance.</p>
     */
    inline const Aws::String& GetCaCertificateIdentifier() const { return m_caCertificateIdentifier; }
    inline bool CaCertificateIdentifierHasBeenSet() const { return m_caCertificateIdentifierHasBeenSet; }
    template<typename CaCertificateIdentifierT = Aws::String>
    void SetCaCertificateIdentifier(CaCertificateIdentifierT&& value) { m_caCertificateIdentifierHasBeenSet = true; m_caCertificateIdentifier = std::forward<CaCertificateIdentifierT>(value); }
    template<typename CaCertificateIdentifierT = Aws::String>
    AwsRdsDbPendingModifiedValues& WithCaCertificateIdentifier(CaCertificateIdentifierT&& value) { SetCaCertificateIdentifier(std::forward<CaCertificateIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the new subnet group for the DB instance.</p>
     */
    inline const Aws::String& GetDbSubnetGroupName() const { return m_dbSubnetGroupName; }
    inline bool DbSubnetGroupNameHasBeenSet() const { return m_dbSubnetGroupNameHasBeenSet; }
    template<typename DbSubnetGroupNameT = Aws::String>
    void SetDbSubnetGroupName(DbSubnetGroupNameT&& value) { m_dbSubnetGroupNameHasBeenSet = true; m_dbSubnetGroupName = std::forward<DbSubnetGroupNameT>(value); }
    template<typename DbSubnetGroupNameT = Aws::String>
    AwsRdsDbPendingModifiedValues& WithDbSubnetGroupName(DbSubnetGroupNameT&& value) { SetDbSubnetGroupName(std::forward<DbSubnetGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of log types that are being enabled or disabled.</p>
     */
    inline const AwsRdsPendingCloudWatchLogsExports& GetPendingCloudWatchLogsExports() const { return m_pendingCloudWatchLogsExports; }
    inline bool PendingCloudWatchLogsExportsHasBeenSet() const { return m_pendingCloudWatchLogsExportsHasBeenSet; }
    template<typename PendingCloudWatchLogsExportsT = AwsRdsPendingCloudWatchLogsExports>
    void SetPendingCloudWatchLogsExports(PendingCloudWatchLogsExportsT&& value) { m_pendingCloudWatchLogsExportsHasBeenSet = true; m_pendingCloudWatchLogsExports = std::forward<PendingCloudWatchLogsExportsT>(value); }
    template<typename PendingCloudWatchLogsExportsT = AwsRdsPendingCloudWatchLogsExports>
    AwsRdsDbPendingModifiedValues& WithPendingCloudWatchLogsExports(PendingCloudWatchLogsExportsT&& value) { SetPendingCloudWatchLogsExports(std::forward<PendingCloudWatchLogsExportsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Processor features that are being updated.</p>
     */
    inline const Aws::Vector<AwsRdsDbProcessorFeature>& GetProcessorFeatures() const { return m_processorFeatures; }
    inline bool ProcessorFeaturesHasBeenSet() const { return m_processorFeaturesHasBeenSet; }
    template<typename ProcessorFeaturesT = Aws::Vector<AwsRdsDbProcessorFeature>>
    void SetProcessorFeatures(ProcessorFeaturesT&& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures = std::forward<ProcessorFeaturesT>(value); }
    template<typename ProcessorFeaturesT = Aws::Vector<AwsRdsDbProcessorFeature>>
    AwsRdsDbPendingModifiedValues& WithProcessorFeatures(ProcessorFeaturesT&& value) { SetProcessorFeatures(std::forward<ProcessorFeaturesT>(value)); return *this;}
    template<typename ProcessorFeaturesT = AwsRdsDbProcessorFeature>
    AwsRdsDbPendingModifiedValues& AddProcessorFeatures(ProcessorFeaturesT&& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures.emplace_back(std::forward<ProcessorFeaturesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_dbInstanceClass;
    bool m_dbInstanceClassHasBeenSet = false;

    int m_allocatedStorage{0};
    bool m_allocatedStorageHasBeenSet = false;

    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    int m_backupRetentionPeriod{0};
    bool m_backupRetentionPeriodHasBeenSet = false;

    bool m_multiAZ{false};
    bool m_multiAZHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_licenseModel;
    bool m_licenseModelHasBeenSet = false;

    int m_iops{0};
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
