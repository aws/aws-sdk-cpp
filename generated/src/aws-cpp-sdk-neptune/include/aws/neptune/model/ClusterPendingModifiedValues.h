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


    /**
     * <p>This <code>PendingCloudwatchLogsExports</code> structure specifies pending
     * changes to which CloudWatch logs are enabled and which are disabled.</p>
     */
    inline const PendingCloudwatchLogsExports& GetPendingCloudwatchLogsExports() const{ return m_pendingCloudwatchLogsExports; }

    /**
     * <p>This <code>PendingCloudwatchLogsExports</code> structure specifies pending
     * changes to which CloudWatch logs are enabled and which are disabled.</p>
     */
    inline bool PendingCloudwatchLogsExportsHasBeenSet() const { return m_pendingCloudwatchLogsExportsHasBeenSet; }

    /**
     * <p>This <code>PendingCloudwatchLogsExports</code> structure specifies pending
     * changes to which CloudWatch logs are enabled and which are disabled.</p>
     */
    inline void SetPendingCloudwatchLogsExports(const PendingCloudwatchLogsExports& value) { m_pendingCloudwatchLogsExportsHasBeenSet = true; m_pendingCloudwatchLogsExports = value; }

    /**
     * <p>This <code>PendingCloudwatchLogsExports</code> structure specifies pending
     * changes to which CloudWatch logs are enabled and which are disabled.</p>
     */
    inline void SetPendingCloudwatchLogsExports(PendingCloudwatchLogsExports&& value) { m_pendingCloudwatchLogsExportsHasBeenSet = true; m_pendingCloudwatchLogsExports = std::move(value); }

    /**
     * <p>This <code>PendingCloudwatchLogsExports</code> structure specifies pending
     * changes to which CloudWatch logs are enabled and which are disabled.</p>
     */
    inline ClusterPendingModifiedValues& WithPendingCloudwatchLogsExports(const PendingCloudwatchLogsExports& value) { SetPendingCloudwatchLogsExports(value); return *this;}

    /**
     * <p>This <code>PendingCloudwatchLogsExports</code> structure specifies pending
     * changes to which CloudWatch logs are enabled and which are disabled.</p>
     */
    inline ClusterPendingModifiedValues& WithPendingCloudwatchLogsExports(PendingCloudwatchLogsExports&& value) { SetPendingCloudwatchLogsExports(std::move(value)); return *this;}


    /**
     * <p>The DBClusterIdentifier value for the DB cluster.</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>The DBClusterIdentifier value for the DB cluster.</p>
     */
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }

    /**
     * <p>The DBClusterIdentifier value for the DB cluster.</p>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>The DBClusterIdentifier value for the DB cluster.</p>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }

    /**
     * <p>The DBClusterIdentifier value for the DB cluster.</p>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>The DBClusterIdentifier value for the DB cluster.</p>
     */
    inline ClusterPendingModifiedValues& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>The DBClusterIdentifier value for the DB cluster.</p>
     */
    inline ClusterPendingModifiedValues& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The DBClusterIdentifier value for the DB cluster.</p>
     */
    inline ClusterPendingModifiedValues& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}


    /**
     * <p>A value that indicates whether mapping of Amazon Web Services Identity and
     * Access Management (IAM) accounts to database accounts is enabled.</p>
     */
    inline bool GetIAMDatabaseAuthenticationEnabled() const{ return m_iAMDatabaseAuthenticationEnabled; }

    /**
     * <p>A value that indicates whether mapping of Amazon Web Services Identity and
     * Access Management (IAM) accounts to database accounts is enabled.</p>
     */
    inline bool IAMDatabaseAuthenticationEnabledHasBeenSet() const { return m_iAMDatabaseAuthenticationEnabledHasBeenSet; }

    /**
     * <p>A value that indicates whether mapping of Amazon Web Services Identity and
     * Access Management (IAM) accounts to database accounts is enabled.</p>
     */
    inline void SetIAMDatabaseAuthenticationEnabled(bool value) { m_iAMDatabaseAuthenticationEnabledHasBeenSet = true; m_iAMDatabaseAuthenticationEnabled = value; }

    /**
     * <p>A value that indicates whether mapping of Amazon Web Services Identity and
     * Access Management (IAM) accounts to database accounts is enabled.</p>
     */
    inline ClusterPendingModifiedValues& WithIAMDatabaseAuthenticationEnabled(bool value) { SetIAMDatabaseAuthenticationEnabled(value); return *this;}


    /**
     * <p>The database engine version.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The database engine version.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The database engine version.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The database engine version.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The database engine version.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The database engine version.</p>
     */
    inline ClusterPendingModifiedValues& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The database engine version.</p>
     */
    inline ClusterPendingModifiedValues& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The database engine version.</p>
     */
    inline ClusterPendingModifiedValues& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The number of days for which automatic DB snapshots are retained.</p>
     */
    inline int GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }

    /**
     * <p>The number of days for which automatic DB snapshots are retained.</p>
     */
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }

    /**
     * <p>The number of days for which automatic DB snapshots are retained.</p>
     */
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }

    /**
     * <p>The number of days for which automatic DB snapshots are retained.</p>
     */
    inline ClusterPendingModifiedValues& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}


    /**
     * <p>The storage type for the DB cluster.</p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }

    /**
     * <p>The storage type for the DB cluster.</p>
     */
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }

    /**
     * <p>The storage type for the DB cluster.</p>
     */
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>The storage type for the DB cluster.</p>
     */
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }

    /**
     * <p>The storage type for the DB cluster.</p>
     */
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }

    /**
     * <p>The storage type for the DB cluster.</p>
     */
    inline ClusterPendingModifiedValues& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}

    /**
     * <p>The storage type for the DB cluster.</p>
     */
    inline ClusterPendingModifiedValues& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}

    /**
     * <p>The storage type for the DB cluster.</p>
     */
    inline ClusterPendingModifiedValues& WithStorageType(const char* value) { SetStorageType(value); return *this;}


    /**
     * <p>The allocated storage size in gibibytes (GiB) for database engines. For
     * Neptune, <code>AllocatedStorage</code> always returns 1, because Neptune DB
     * cluster storage size isn't fixed, but instead automatically adjusts as
     * needed.</p>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }

    /**
     * <p>The allocated storage size in gibibytes (GiB) for database engines. For
     * Neptune, <code>AllocatedStorage</code> always returns 1, because Neptune DB
     * cluster storage size isn't fixed, but instead automatically adjusts as
     * needed.</p>
     */
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }

    /**
     * <p>The allocated storage size in gibibytes (GiB) for database engines. For
     * Neptune, <code>AllocatedStorage</code> always returns 1, because Neptune DB
     * cluster storage size isn't fixed, but instead automatically adjusts as
     * needed.</p>
     */
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }

    /**
     * <p>The allocated storage size in gibibytes (GiB) for database engines. For
     * Neptune, <code>AllocatedStorage</code> always returns 1, because Neptune DB
     * cluster storage size isn't fixed, but instead automatically adjusts as
     * needed.</p>
     */
    inline ClusterPendingModifiedValues& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}


    /**
     * <p>The Provisioned IOPS (I/O operations per second) value. This setting is only
     * for non-Aurora Multi-AZ DB clusters.</p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>The Provisioned IOPS (I/O operations per second) value. This setting is only
     * for non-Aurora Multi-AZ DB clusters.</p>
     */
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }

    /**
     * <p>The Provisioned IOPS (I/O operations per second) value. This setting is only
     * for non-Aurora Multi-AZ DB clusters.</p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>The Provisioned IOPS (I/O operations per second) value. This setting is only
     * for non-Aurora Multi-AZ DB clusters.</p>
     */
    inline ClusterPendingModifiedValues& WithIops(int value) { SetIops(value); return *this;}

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
