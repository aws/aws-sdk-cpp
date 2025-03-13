/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/rds/model/PendingCloudwatchLogsExports.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/RdsCustomClusterConfiguration.h>
#include <aws/rds/model/CertificateDetails.h>
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
   * <p>This data type is used as a response element in the
   * <code>ModifyDBCluster</code> operation and contains changes that will be applied
   * during the next maintenance window.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ClusterPendingModifiedValues">AWS
   * API Reference</a></p>
   */
  class ClusterPendingModifiedValues
  {
  public:
    AWS_RDS_API ClusterPendingModifiedValues() = default;
    AWS_RDS_API ClusterPendingModifiedValues(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API ClusterPendingModifiedValues& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    
    inline const PendingCloudwatchLogsExports& GetPendingCloudwatchLogsExports() const { return m_pendingCloudwatchLogsExports; }
    inline bool PendingCloudwatchLogsExportsHasBeenSet() const { return m_pendingCloudwatchLogsExportsHasBeenSet; }
    template<typename PendingCloudwatchLogsExportsT = PendingCloudwatchLogsExports>
    void SetPendingCloudwatchLogsExports(PendingCloudwatchLogsExportsT&& value) { m_pendingCloudwatchLogsExportsHasBeenSet = true; m_pendingCloudwatchLogsExports = std::forward<PendingCloudwatchLogsExportsT>(value); }
    template<typename PendingCloudwatchLogsExportsT = PendingCloudwatchLogsExports>
    ClusterPendingModifiedValues& WithPendingCloudwatchLogsExports(PendingCloudwatchLogsExportsT&& value) { SetPendingCloudwatchLogsExports(std::forward<PendingCloudwatchLogsExportsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DBClusterIdentifier value for the DB cluster.</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const { return m_dBClusterIdentifier; }
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }
    template<typename DBClusterIdentifierT = Aws::String>
    void SetDBClusterIdentifier(DBClusterIdentifierT&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::forward<DBClusterIdentifierT>(value); }
    template<typename DBClusterIdentifierT = Aws::String>
    ClusterPendingModifiedValues& WithDBClusterIdentifier(DBClusterIdentifierT&& value) { SetDBClusterIdentifier(std::forward<DBClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The master credentials for the DB cluster.</p>
     */
    inline const Aws::String& GetMasterUserPassword() const { return m_masterUserPassword; }
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }
    template<typename MasterUserPasswordT = Aws::String>
    void SetMasterUserPassword(MasterUserPasswordT&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::forward<MasterUserPasswordT>(value); }
    template<typename MasterUserPasswordT = Aws::String>
    ClusterPendingModifiedValues& WithMasterUserPassword(MasterUserPasswordT&& value) { SetMasterUserPassword(std::forward<MasterUserPasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether mapping of Amazon Web Services Identity and Access
     * Management (IAM) accounts to database accounts is enabled.</p>
     */
    inline bool GetIAMDatabaseAuthenticationEnabled() const { return m_iAMDatabaseAuthenticationEnabled; }
    inline bool IAMDatabaseAuthenticationEnabledHasBeenSet() const { return m_iAMDatabaseAuthenticationEnabledHasBeenSet; }
    inline void SetIAMDatabaseAuthenticationEnabled(bool value) { m_iAMDatabaseAuthenticationEnabledHasBeenSet = true; m_iAMDatabaseAuthenticationEnabled = value; }
    inline ClusterPendingModifiedValues& WithIAMDatabaseAuthenticationEnabled(bool value) { SetIAMDatabaseAuthenticationEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database engine version.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    ClusterPendingModifiedValues& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days for which automatic DB snapshots are retained.</p>
     */
    inline int GetBackupRetentionPeriod() const { return m_backupRetentionPeriod; }
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }
    inline ClusterPendingModifiedValues& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The allocated storage size in gibibytes (GiB) for all database engines except
     * Amazon Aurora. For Aurora, <code>AllocatedStorage</code> always returns 1,
     * because Aurora DB cluster storage size isn't fixed, but instead automatically
     * adjusts as needed.</p>
     */
    inline int GetAllocatedStorage() const { return m_allocatedStorage; }
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }
    inline ClusterPendingModifiedValues& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline const RdsCustomClusterConfiguration& GetRdsCustomClusterConfiguration() const { return m_rdsCustomClusterConfiguration; }
    inline bool RdsCustomClusterConfigurationHasBeenSet() const { return m_rdsCustomClusterConfigurationHasBeenSet; }
    template<typename RdsCustomClusterConfigurationT = RdsCustomClusterConfiguration>
    void SetRdsCustomClusterConfiguration(RdsCustomClusterConfigurationT&& value) { m_rdsCustomClusterConfigurationHasBeenSet = true; m_rdsCustomClusterConfiguration = std::forward<RdsCustomClusterConfigurationT>(value); }
    template<typename RdsCustomClusterConfigurationT = RdsCustomClusterConfiguration>
    ClusterPendingModifiedValues& WithRdsCustomClusterConfiguration(RdsCustomClusterConfigurationT&& value) { SetRdsCustomClusterConfiguration(std::forward<RdsCustomClusterConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Provisioned IOPS (I/O operations per second) value. This setting is only
     * for non-Aurora Multi-AZ DB clusters.</p>
     */
    inline int GetIops() const { return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline ClusterPendingModifiedValues& WithIops(int value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage type for the DB cluster.</p>
     */
    inline const Aws::String& GetStorageType() const { return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    template<typename StorageTypeT = Aws::String>
    void SetStorageType(StorageTypeT&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::forward<StorageTypeT>(value); }
    template<typename StorageTypeT = Aws::String>
    ClusterPendingModifiedValues& WithStorageType(StorageTypeT&& value) { SetStorageType(std::forward<StorageTypeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CertificateDetails& GetCertificateDetails() const { return m_certificateDetails; }
    inline bool CertificateDetailsHasBeenSet() const { return m_certificateDetailsHasBeenSet; }
    template<typename CertificateDetailsT = CertificateDetails>
    void SetCertificateDetails(CertificateDetailsT&& value) { m_certificateDetailsHasBeenSet = true; m_certificateDetails = std::forward<CertificateDetailsT>(value); }
    template<typename CertificateDetailsT = CertificateDetails>
    ClusterPendingModifiedValues& WithCertificateDetails(CertificateDetailsT&& value) { SetCertificateDetails(std::forward<CertificateDetailsT>(value)); return *this;}
    ///@}
  private:

    PendingCloudwatchLogsExports m_pendingCloudwatchLogsExports;
    bool m_pendingCloudwatchLogsExportsHasBeenSet = false;

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;

    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet = false;

    bool m_iAMDatabaseAuthenticationEnabled{false};
    bool m_iAMDatabaseAuthenticationEnabledHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    int m_backupRetentionPeriod{0};
    bool m_backupRetentionPeriodHasBeenSet = false;

    int m_allocatedStorage{0};
    bool m_allocatedStorageHasBeenSet = false;

    RdsCustomClusterConfiguration m_rdsCustomClusterConfiguration;
    bool m_rdsCustomClusterConfigurationHasBeenSet = false;

    int m_iops{0};
    bool m_iopsHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    CertificateDetails m_certificateDetails;
    bool m_certificateDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
