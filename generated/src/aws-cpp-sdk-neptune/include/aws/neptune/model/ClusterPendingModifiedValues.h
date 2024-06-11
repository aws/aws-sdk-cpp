/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/neptune/model/PendingCloudwatchLogsExports.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Neptune
{
namespace Model
{

  /**
   * <p>This data type is used as a response element in the
   * <code>ModifyDBCluster</code> operation and contains changes that will be applied
   * during the next maintenance window.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ClusterPendingModifiedValues">AWS
   * API Reference</a></p>
   */
  class ClusterPendingModifiedValues
  {
  public:
    AWS_NEPTUNE_API ClusterPendingModifiedValues();
    AWS_NEPTUNE_API ClusterPendingModifiedValues(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_NEPTUNE_API ClusterPendingModifiedValues& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>This <code>PendingCloudwatchLogsExports</code> structure specifies pending
     * changes to which CloudWatch logs are enabled and which are disabled.</p>
     */
    inline const PendingCloudwatchLogsExports& GetPendingCloudwatchLogsExports() const{ return m_pendingCloudwatchLogsExports; }
    inline bool PendingCloudwatchLogsExportsHasBeenSet() const { return m_pendingCloudwatchLogsExportsHasBeenSet; }
    inline void SetPendingCloudwatchLogsExports(const PendingCloudwatchLogsExports& value) { m_pendingCloudwatchLogsExportsHasBeenSet = true; m_pendingCloudwatchLogsExports = value; }
    inline void SetPendingCloudwatchLogsExports(PendingCloudwatchLogsExports&& value) { m_pendingCloudwatchLogsExportsHasBeenSet = true; m_pendingCloudwatchLogsExports = std::move(value); }
    inline ClusterPendingModifiedValues& WithPendingCloudwatchLogsExports(const PendingCloudwatchLogsExports& value) { SetPendingCloudwatchLogsExports(value); return *this;}
    inline ClusterPendingModifiedValues& WithPendingCloudwatchLogsExports(PendingCloudwatchLogsExports&& value) { SetPendingCloudwatchLogsExports(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DBClusterIdentifier value for the DB cluster.</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }
    inline ClusterPendingModifiedValues& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}
    inline ClusterPendingModifiedValues& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}
    inline ClusterPendingModifiedValues& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates whether mapping of Amazon Web Services Identity and
     * Access Management (IAM) accounts to database accounts is enabled.</p>
     */
    inline bool GetIAMDatabaseAuthenticationEnabled() const{ return m_iAMDatabaseAuthenticationEnabled; }
    inline bool IAMDatabaseAuthenticationEnabledHasBeenSet() const { return m_iAMDatabaseAuthenticationEnabledHasBeenSet; }
    inline void SetIAMDatabaseAuthenticationEnabled(bool value) { m_iAMDatabaseAuthenticationEnabledHasBeenSet = true; m_iAMDatabaseAuthenticationEnabled = value; }
    inline ClusterPendingModifiedValues& WithIAMDatabaseAuthenticationEnabled(bool value) { SetIAMDatabaseAuthenticationEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database engine version.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline ClusterPendingModifiedValues& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline ClusterPendingModifiedValues& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline ClusterPendingModifiedValues& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days for which automatic DB snapshots are retained.</p>
     */
    inline int GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }
    inline ClusterPendingModifiedValues& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage type for the DB cluster.</p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }
    inline ClusterPendingModifiedValues& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}
    inline ClusterPendingModifiedValues& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}
    inline ClusterPendingModifiedValues& WithStorageType(const char* value) { SetStorageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The allocated storage size in gibibytes (GiB) for database engines. For
     * Neptune, <code>AllocatedStorage</code> always returns 1, because Neptune DB
     * cluster storage size isn't fixed, but instead automatically adjusts as
     * needed.</p>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }
    inline ClusterPendingModifiedValues& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Provisioned IOPS (I/O operations per second) value. This setting is only
     * for non-Aurora Multi-AZ DB clusters.</p>
     */
    inline int GetIops() const{ return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline ClusterPendingModifiedValues& WithIops(int value) { SetIops(value); return *this;}
    ///@}
  private:

    PendingCloudwatchLogsExports m_pendingCloudwatchLogsExports;
    bool m_pendingCloudwatchLogsExportsHasBeenSet = false;

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;

    bool m_iAMDatabaseAuthenticationEnabled;
    bool m_iAMDatabaseAuthenticationEnabledHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    int m_backupRetentionPeriod;
    bool m_backupRetentionPeriodHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    int m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet = false;

    int m_iops;
    bool m_iopsHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
