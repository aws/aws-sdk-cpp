/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsRdsDbInstanceVpcSecurityGroup.h>
#include <aws/securityhub/model/AwsRdsDbClusterAssociatedRole.h>
#include <aws/securityhub/model/AwsRdsDbDomainMembership.h>
#include <aws/securityhub/model/AwsRdsDbClusterOptionGroupMembership.h>
#include <aws/securityhub/model/AwsRdsDbClusterMember.h>
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
   * <p>Information about an Amazon RDS DB cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRdsDbClusterDetails">AWS
   * API Reference</a></p>
   */
  class AwsRdsDbClusterDetails
  {
  public:
    AWS_SECURITYHUB_API AwsRdsDbClusterDetails() = default;
    AWS_SECURITYHUB_API AwsRdsDbClusterDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRdsDbClusterDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>For all database engines except Aurora, specifies the allocated storage size
     * in gibibytes (GiB).</p>
     */
    inline int GetAllocatedStorage() const { return m_allocatedStorage; }
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }
    inline AwsRdsDbClusterDetails& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Availability Zones (AZs) where instances in the DB cluster can be
     * created.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const { return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    template<typename AvailabilityZonesT = Aws::Vector<Aws::String>>
    void SetAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::forward<AvailabilityZonesT>(value); }
    template<typename AvailabilityZonesT = Aws::Vector<Aws::String>>
    AwsRdsDbClusterDetails& WithAvailabilityZones(AvailabilityZonesT&& value) { SetAvailabilityZones(std::forward<AvailabilityZonesT>(value)); return *this;}
    template<typename AvailabilityZonesT = Aws::String>
    AwsRdsDbClusterDetails& AddAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.emplace_back(std::forward<AvailabilityZonesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of days for which automated backups are retained.</p>
     */
    inline int GetBackupRetentionPeriod() const { return m_backupRetentionPeriod; }
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }
    inline AwsRdsDbClusterDetails& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    AwsRdsDbClusterDetails& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of this DB cluster.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    AwsRdsDbClusterDetails& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection endpoint for the primary instance of the DB cluster.</p>
     */
    inline const Aws::String& GetEndpoint() const { return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    template<typename EndpointT = Aws::String>
    void SetEndpoint(EndpointT&& value) { m_endpointHasBeenSet = true; m_endpoint = std::forward<EndpointT>(value); }
    template<typename EndpointT = Aws::String>
    AwsRdsDbClusterDetails& WithEndpoint(EndpointT&& value) { SetEndpoint(std::forward<EndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reader endpoint for the DB cluster.</p>
     */
    inline const Aws::String& GetReaderEndpoint() const { return m_readerEndpoint; }
    inline bool ReaderEndpointHasBeenSet() const { return m_readerEndpointHasBeenSet; }
    template<typename ReaderEndpointT = Aws::String>
    void SetReaderEndpoint(ReaderEndpointT&& value) { m_readerEndpointHasBeenSet = true; m_readerEndpoint = std::forward<ReaderEndpointT>(value); }
    template<typename ReaderEndpointT = Aws::String>
    AwsRdsDbClusterDetails& WithReaderEndpoint(ReaderEndpointT&& value) { SetReaderEndpoint(std::forward<ReaderEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of custom endpoints for the DB cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCustomEndpoints() const { return m_customEndpoints; }
    inline bool CustomEndpointsHasBeenSet() const { return m_customEndpointsHasBeenSet; }
    template<typename CustomEndpointsT = Aws::Vector<Aws::String>>
    void SetCustomEndpoints(CustomEndpointsT&& value) { m_customEndpointsHasBeenSet = true; m_customEndpoints = std::forward<CustomEndpointsT>(value); }
    template<typename CustomEndpointsT = Aws::Vector<Aws::String>>
    AwsRdsDbClusterDetails& WithCustomEndpoints(CustomEndpointsT&& value) { SetCustomEndpoints(std::forward<CustomEndpointsT>(value)); return *this;}
    template<typename CustomEndpointsT = Aws::String>
    AwsRdsDbClusterDetails& AddCustomEndpoints(CustomEndpointsT&& value) { m_customEndpointsHasBeenSet = true; m_customEndpoints.emplace_back(std::forward<CustomEndpointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether the DB cluster has instances in multiple Availability Zones.</p>
     */
    inline bool GetMultiAz() const { return m_multiAz; }
    inline bool MultiAzHasBeenSet() const { return m_multiAzHasBeenSet; }
    inline void SetMultiAz(bool value) { m_multiAzHasBeenSet = true; m_multiAz = value; }
    inline AwsRdsDbClusterDetails& WithMultiAz(bool value) { SetMultiAz(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database engine to use for this DB cluster. Valid values are
     * as follows:</p> <ul> <li> <p> <code>aurora</code> </p> </li> <li> <p>
     * <code>aurora-mysql</code> </p> </li> <li> <p> <code>aurora-postgresql</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    AwsRdsDbClusterDetails& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the database engine to use.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    AwsRdsDbClusterDetails& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number on which the DB instances in the DB cluster accept
     * connections.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline AwsRdsDbClusterDetails& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the master user for the DB cluster.</p>
     */
    inline const Aws::String& GetMasterUsername() const { return m_masterUsername; }
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }
    template<typename MasterUsernameT = Aws::String>
    void SetMasterUsername(MasterUsernameT&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::forward<MasterUsernameT>(value); }
    template<typename MasterUsernameT = Aws::String>
    AwsRdsDbClusterDetails& WithMasterUsername(MasterUsernameT&& value) { SetMasterUsername(std::forward<MasterUsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The range of time each day when automated backups are created, if automated
     * backups are enabled.</p> <p>Uses the format <code>HH:MM-HH:MM</code>. For
     * example, <code>04:52-05:22</code>.</p>
     */
    inline const Aws::String& GetPreferredBackupWindow() const { return m_preferredBackupWindow; }
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }
    template<typename PreferredBackupWindowT = Aws::String>
    void SetPreferredBackupWindow(PreferredBackupWindowT&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::forward<PreferredBackupWindowT>(value); }
    template<typename PreferredBackupWindowT = Aws::String>
    AwsRdsDbClusterDetails& WithPreferredBackupWindow(PreferredBackupWindowT&& value) { SetPreferredBackupWindow(std::forward<PreferredBackupWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Uses the format
     * <code>&lt;day&gt;:HH:MM-&lt;day&gt;:HH:MM</code>.</p> <p>For the day values, use
     * <code>mon</code>|<code>tue</code>|<code>wed</code>|<code>thu</code>|<code>fri</code>|<code>sat</code>|<code>sun</code>.</p>
     * <p>For example, <code>sun:09:32-sun:10:02</code>.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const { return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    void SetPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::forward<PreferredMaintenanceWindowT>(value); }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    AwsRdsDbClusterDetails& WithPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { SetPreferredMaintenanceWindow(std::forward<PreferredMaintenanceWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifiers of the read replicas that are associated with this DB
     * cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReadReplicaIdentifiers() const { return m_readReplicaIdentifiers; }
    inline bool ReadReplicaIdentifiersHasBeenSet() const { return m_readReplicaIdentifiersHasBeenSet; }
    template<typename ReadReplicaIdentifiersT = Aws::Vector<Aws::String>>
    void SetReadReplicaIdentifiers(ReadReplicaIdentifiersT&& value) { m_readReplicaIdentifiersHasBeenSet = true; m_readReplicaIdentifiers = std::forward<ReadReplicaIdentifiersT>(value); }
    template<typename ReadReplicaIdentifiersT = Aws::Vector<Aws::String>>
    AwsRdsDbClusterDetails& WithReadReplicaIdentifiers(ReadReplicaIdentifiersT&& value) { SetReadReplicaIdentifiers(std::forward<ReadReplicaIdentifiersT>(value)); return *this;}
    template<typename ReadReplicaIdentifiersT = Aws::String>
    AwsRdsDbClusterDetails& AddReadReplicaIdentifiers(ReadReplicaIdentifiersT&& value) { m_readReplicaIdentifiersHasBeenSet = true; m_readReplicaIdentifiers.emplace_back(std::forward<ReadReplicaIdentifiersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of VPC security groups that the DB cluster belongs to.</p>
     */
    inline const Aws::Vector<AwsRdsDbInstanceVpcSecurityGroup>& GetVpcSecurityGroups() const { return m_vpcSecurityGroups; }
    inline bool VpcSecurityGroupsHasBeenSet() const { return m_vpcSecurityGroupsHasBeenSet; }
    template<typename VpcSecurityGroupsT = Aws::Vector<AwsRdsDbInstanceVpcSecurityGroup>>
    void SetVpcSecurityGroups(VpcSecurityGroupsT&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = std::forward<VpcSecurityGroupsT>(value); }
    template<typename VpcSecurityGroupsT = Aws::Vector<AwsRdsDbInstanceVpcSecurityGroup>>
    AwsRdsDbClusterDetails& WithVpcSecurityGroups(VpcSecurityGroupsT&& value) { SetVpcSecurityGroups(std::forward<VpcSecurityGroupsT>(value)); return *this;}
    template<typename VpcSecurityGroupsT = AwsRdsDbInstanceVpcSecurityGroup>
    AwsRdsDbClusterDetails& AddVpcSecurityGroups(VpcSecurityGroupsT&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.emplace_back(std::forward<VpcSecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the identifier that Amazon Route 53 assigns when you create a
     * hosted zone.</p>
     */
    inline const Aws::String& GetHostedZoneId() const { return m_hostedZoneId; }
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }
    template<typename HostedZoneIdT = Aws::String>
    void SetHostedZoneId(HostedZoneIdT&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::forward<HostedZoneIdT>(value); }
    template<typename HostedZoneIdT = Aws::String>
    AwsRdsDbClusterDetails& WithHostedZoneId(HostedZoneIdT&& value) { SetHostedZoneId(std::forward<HostedZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the DB cluster is encrypted.</p>
     */
    inline bool GetStorageEncrypted() const { return m_storageEncrypted; }
    inline bool StorageEncryptedHasBeenSet() const { return m_storageEncryptedHasBeenSet; }
    inline void SetStorageEncrypted(bool value) { m_storageEncryptedHasBeenSet = true; m_storageEncrypted = value; }
    inline AwsRdsDbClusterDetails& WithStorageEncrypted(bool value) { SetStorageEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the KMS master key that is used to encrypt the database instances
     * in the DB cluster.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    AwsRdsDbClusterDetails& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the DB cluster. The identifier must be unique within each
     * Amazon Web Services Region and is immutable.</p>
     */
    inline const Aws::String& GetDbClusterResourceId() const { return m_dbClusterResourceId; }
    inline bool DbClusterResourceIdHasBeenSet() const { return m_dbClusterResourceIdHasBeenSet; }
    template<typename DbClusterResourceIdT = Aws::String>
    void SetDbClusterResourceId(DbClusterResourceIdT&& value) { m_dbClusterResourceIdHasBeenSet = true; m_dbClusterResourceId = std::forward<DbClusterResourceIdT>(value); }
    template<typename DbClusterResourceIdT = Aws::String>
    AwsRdsDbClusterDetails& WithDbClusterResourceId(DbClusterResourceIdT&& value) { SetDbClusterResourceId(std::forward<DbClusterResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the IAM roles that are associated with the DB cluster.</p>
     */
    inline const Aws::Vector<AwsRdsDbClusterAssociatedRole>& GetAssociatedRoles() const { return m_associatedRoles; }
    inline bool AssociatedRolesHasBeenSet() const { return m_associatedRolesHasBeenSet; }
    template<typename AssociatedRolesT = Aws::Vector<AwsRdsDbClusterAssociatedRole>>
    void SetAssociatedRoles(AssociatedRolesT&& value) { m_associatedRolesHasBeenSet = true; m_associatedRoles = std::forward<AssociatedRolesT>(value); }
    template<typename AssociatedRolesT = Aws::Vector<AwsRdsDbClusterAssociatedRole>>
    AwsRdsDbClusterDetails& WithAssociatedRoles(AssociatedRolesT&& value) { SetAssociatedRoles(std::forward<AssociatedRolesT>(value)); return *this;}
    template<typename AssociatedRolesT = AwsRdsDbClusterAssociatedRole>
    AwsRdsDbClusterDetails& AddAssociatedRoles(AssociatedRolesT&& value) { m_associatedRolesHasBeenSet = true; m_associatedRoles.emplace_back(std::forward<AssociatedRolesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates when the DB cluster was created, in Universal Coordinated Time
     * (UTC).</p> <p>For more information about the validation and formatting of
     * timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetClusterCreateTime() const { return m_clusterCreateTime; }
    inline bool ClusterCreateTimeHasBeenSet() const { return m_clusterCreateTimeHasBeenSet; }
    template<typename ClusterCreateTimeT = Aws::String>
    void SetClusterCreateTime(ClusterCreateTimeT&& value) { m_clusterCreateTimeHasBeenSet = true; m_clusterCreateTime = std::forward<ClusterCreateTimeT>(value); }
    template<typename ClusterCreateTimeT = Aws::String>
    AwsRdsDbClusterDetails& WithClusterCreateTime(ClusterCreateTimeT&& value) { SetClusterCreateTime(std::forward<ClusterCreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of log types that this DB cluster is configured to export to
     * CloudWatch Logs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnabledCloudWatchLogsExports() const { return m_enabledCloudWatchLogsExports; }
    inline bool EnabledCloudWatchLogsExportsHasBeenSet() const { return m_enabledCloudWatchLogsExportsHasBeenSet; }
    template<typename EnabledCloudWatchLogsExportsT = Aws::Vector<Aws::String>>
    void SetEnabledCloudWatchLogsExports(EnabledCloudWatchLogsExportsT&& value) { m_enabledCloudWatchLogsExportsHasBeenSet = true; m_enabledCloudWatchLogsExports = std::forward<EnabledCloudWatchLogsExportsT>(value); }
    template<typename EnabledCloudWatchLogsExportsT = Aws::Vector<Aws::String>>
    AwsRdsDbClusterDetails& WithEnabledCloudWatchLogsExports(EnabledCloudWatchLogsExportsT&& value) { SetEnabledCloudWatchLogsExports(std::forward<EnabledCloudWatchLogsExportsT>(value)); return *this;}
    template<typename EnabledCloudWatchLogsExportsT = Aws::String>
    AwsRdsDbClusterDetails& AddEnabledCloudWatchLogsExports(EnabledCloudWatchLogsExportsT&& value) { m_enabledCloudWatchLogsExportsHasBeenSet = true; m_enabledCloudWatchLogsExports.emplace_back(std::forward<EnabledCloudWatchLogsExportsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The database engine mode of the DB cluster.Valid values are as follows:</p>
     * <ul> <li> <p> <code>global</code> </p> </li> <li> <p> <code>multimaster</code>
     * </p> </li> <li> <p> <code>parallelquery</code> </p> </li> <li> <p>
     * <code>provisioned</code> </p> </li> <li> <p> <code>serverless</code> </p> </li>
     * </ul>
     */
    inline const Aws::String& GetEngineMode() const { return m_engineMode; }
    inline bool EngineModeHasBeenSet() const { return m_engineModeHasBeenSet; }
    template<typename EngineModeT = Aws::String>
    void SetEngineMode(EngineModeT&& value) { m_engineModeHasBeenSet = true; m_engineMode = std::forward<EngineModeT>(value); }
    template<typename EngineModeT = Aws::String>
    AwsRdsDbClusterDetails& WithEngineMode(EngineModeT&& value) { SetEngineMode(std::forward<EngineModeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the DB cluster has deletion protection enabled.</p>
     */
    inline bool GetDeletionProtection() const { return m_deletionProtection; }
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }
    inline AwsRdsDbClusterDetails& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the HTTP endpoint for an Aurora Serverless DB cluster is enabled.</p>
     */
    inline bool GetHttpEndpointEnabled() const { return m_httpEndpointEnabled; }
    inline bool HttpEndpointEnabledHasBeenSet() const { return m_httpEndpointEnabledHasBeenSet; }
    inline void SetHttpEndpointEnabled(bool value) { m_httpEndpointEnabledHasBeenSet = true; m_httpEndpointEnabled = value; }
    inline AwsRdsDbClusterDetails& WithHttpEndpointEnabled(bool value) { SetHttpEndpointEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the database activity stream. Valid values are as follows:</p>
     * <ul> <li> <p> <code>started</code> </p> </li> <li> <p> <code>starting</code>
     * </p> </li> <li> <p> <code>stopped</code> </p> </li> <li> <p>
     * <code>stopping</code> </p> </li> </ul>
     */
    inline const Aws::String& GetActivityStreamStatus() const { return m_activityStreamStatus; }
    inline bool ActivityStreamStatusHasBeenSet() const { return m_activityStreamStatusHasBeenSet; }
    template<typename ActivityStreamStatusT = Aws::String>
    void SetActivityStreamStatus(ActivityStreamStatusT&& value) { m_activityStreamStatusHasBeenSet = true; m_activityStreamStatus = std::forward<ActivityStreamStatusT>(value); }
    template<typename ActivityStreamStatusT = Aws::String>
    AwsRdsDbClusterDetails& WithActivityStreamStatus(ActivityStreamStatusT&& value) { SetActivityStreamStatus(std::forward<ActivityStreamStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether tags are copied from the DB cluster to snapshots of the DB
     * cluster.</p>
     */
    inline bool GetCopyTagsToSnapshot() const { return m_copyTagsToSnapshot; }
    inline bool CopyTagsToSnapshotHasBeenSet() const { return m_copyTagsToSnapshotHasBeenSet; }
    inline void SetCopyTagsToSnapshot(bool value) { m_copyTagsToSnapshotHasBeenSet = true; m_copyTagsToSnapshot = value; }
    inline AwsRdsDbClusterDetails& WithCopyTagsToSnapshot(bool value) { SetCopyTagsToSnapshot(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the DB cluster is a clone of a DB cluster owned by a different Amazon
     * Web Services account.</p>
     */
    inline bool GetCrossAccountClone() const { return m_crossAccountClone; }
    inline bool CrossAccountCloneHasBeenSet() const { return m_crossAccountCloneHasBeenSet; }
    inline void SetCrossAccountClone(bool value) { m_crossAccountCloneHasBeenSet = true; m_crossAccountClone = value; }
    inline AwsRdsDbClusterDetails& WithCrossAccountClone(bool value) { SetCrossAccountClone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Active Directory domain membership records that are associated with the
     * DB cluster.</p>
     */
    inline const Aws::Vector<AwsRdsDbDomainMembership>& GetDomainMemberships() const { return m_domainMemberships; }
    inline bool DomainMembershipsHasBeenSet() const { return m_domainMembershipsHasBeenSet; }
    template<typename DomainMembershipsT = Aws::Vector<AwsRdsDbDomainMembership>>
    void SetDomainMemberships(DomainMembershipsT&& value) { m_domainMembershipsHasBeenSet = true; m_domainMemberships = std::forward<DomainMembershipsT>(value); }
    template<typename DomainMembershipsT = Aws::Vector<AwsRdsDbDomainMembership>>
    AwsRdsDbClusterDetails& WithDomainMemberships(DomainMembershipsT&& value) { SetDomainMemberships(std::forward<DomainMembershipsT>(value)); return *this;}
    template<typename DomainMembershipsT = AwsRdsDbDomainMembership>
    AwsRdsDbClusterDetails& AddDomainMemberships(DomainMembershipsT&& value) { m_domainMembershipsHasBeenSet = true; m_domainMemberships.emplace_back(std::forward<DomainMembershipsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the DB cluster parameter group for the DB cluster.</p>
     */
    inline const Aws::String& GetDbClusterParameterGroup() const { return m_dbClusterParameterGroup; }
    inline bool DbClusterParameterGroupHasBeenSet() const { return m_dbClusterParameterGroupHasBeenSet; }
    template<typename DbClusterParameterGroupT = Aws::String>
    void SetDbClusterParameterGroup(DbClusterParameterGroupT&& value) { m_dbClusterParameterGroupHasBeenSet = true; m_dbClusterParameterGroup = std::forward<DbClusterParameterGroupT>(value); }
    template<typename DbClusterParameterGroupT = Aws::String>
    AwsRdsDbClusterDetails& WithDbClusterParameterGroup(DbClusterParameterGroupT&& value) { SetDbClusterParameterGroup(std::forward<DbClusterParameterGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnet group that is associated with the DB cluster, including the name,
     * description, and subnets in the subnet group.</p>
     */
    inline const Aws::String& GetDbSubnetGroup() const { return m_dbSubnetGroup; }
    inline bool DbSubnetGroupHasBeenSet() const { return m_dbSubnetGroupHasBeenSet; }
    template<typename DbSubnetGroupT = Aws::String>
    void SetDbSubnetGroup(DbSubnetGroupT&& value) { m_dbSubnetGroupHasBeenSet = true; m_dbSubnetGroup = std::forward<DbSubnetGroupT>(value); }
    template<typename DbSubnetGroupT = Aws::String>
    AwsRdsDbClusterDetails& WithDbSubnetGroup(DbSubnetGroupT&& value) { SetDbSubnetGroup(std::forward<DbSubnetGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of option group memberships for this DB cluster.</p>
     */
    inline const Aws::Vector<AwsRdsDbClusterOptionGroupMembership>& GetDbClusterOptionGroupMemberships() const { return m_dbClusterOptionGroupMemberships; }
    inline bool DbClusterOptionGroupMembershipsHasBeenSet() const { return m_dbClusterOptionGroupMembershipsHasBeenSet; }
    template<typename DbClusterOptionGroupMembershipsT = Aws::Vector<AwsRdsDbClusterOptionGroupMembership>>
    void SetDbClusterOptionGroupMemberships(DbClusterOptionGroupMembershipsT&& value) { m_dbClusterOptionGroupMembershipsHasBeenSet = true; m_dbClusterOptionGroupMemberships = std::forward<DbClusterOptionGroupMembershipsT>(value); }
    template<typename DbClusterOptionGroupMembershipsT = Aws::Vector<AwsRdsDbClusterOptionGroupMembership>>
    AwsRdsDbClusterDetails& WithDbClusterOptionGroupMemberships(DbClusterOptionGroupMembershipsT&& value) { SetDbClusterOptionGroupMemberships(std::forward<DbClusterOptionGroupMembershipsT>(value)); return *this;}
    template<typename DbClusterOptionGroupMembershipsT = AwsRdsDbClusterOptionGroupMembership>
    AwsRdsDbClusterDetails& AddDbClusterOptionGroupMemberships(DbClusterOptionGroupMembershipsT&& value) { m_dbClusterOptionGroupMembershipsHasBeenSet = true; m_dbClusterOptionGroupMemberships.emplace_back(std::forward<DbClusterOptionGroupMembershipsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The DB cluster identifier that the user assigned to the cluster. This
     * identifier is the unique key that identifies a DB cluster.</p>
     */
    inline const Aws::String& GetDbClusterIdentifier() const { return m_dbClusterIdentifier; }
    inline bool DbClusterIdentifierHasBeenSet() const { return m_dbClusterIdentifierHasBeenSet; }
    template<typename DbClusterIdentifierT = Aws::String>
    void SetDbClusterIdentifier(DbClusterIdentifierT&& value) { m_dbClusterIdentifierHasBeenSet = true; m_dbClusterIdentifier = std::forward<DbClusterIdentifierT>(value); }
    template<typename DbClusterIdentifierT = Aws::String>
    AwsRdsDbClusterDetails& WithDbClusterIdentifier(DbClusterIdentifierT&& value) { SetDbClusterIdentifier(std::forward<DbClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of instances that make up the DB cluster.</p>
     */
    inline const Aws::Vector<AwsRdsDbClusterMember>& GetDbClusterMembers() const { return m_dbClusterMembers; }
    inline bool DbClusterMembersHasBeenSet() const { return m_dbClusterMembersHasBeenSet; }
    template<typename DbClusterMembersT = Aws::Vector<AwsRdsDbClusterMember>>
    void SetDbClusterMembers(DbClusterMembersT&& value) { m_dbClusterMembersHasBeenSet = true; m_dbClusterMembers = std::forward<DbClusterMembersT>(value); }
    template<typename DbClusterMembersT = Aws::Vector<AwsRdsDbClusterMember>>
    AwsRdsDbClusterDetails& WithDbClusterMembers(DbClusterMembersT&& value) { SetDbClusterMembers(std::forward<DbClusterMembersT>(value)); return *this;}
    template<typename DbClusterMembersT = AwsRdsDbClusterMember>
    AwsRdsDbClusterDetails& AddDbClusterMembers(DbClusterMembersT&& value) { m_dbClusterMembersHasBeenSet = true; m_dbClusterMembers.emplace_back(std::forward<DbClusterMembersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether the mapping of IAM accounts to database accounts is enabled.</p>
     */
    inline bool GetIamDatabaseAuthenticationEnabled() const { return m_iamDatabaseAuthenticationEnabled; }
    inline bool IamDatabaseAuthenticationEnabledHasBeenSet() const { return m_iamDatabaseAuthenticationEnabledHasBeenSet; }
    inline void SetIamDatabaseAuthenticationEnabled(bool value) { m_iamDatabaseAuthenticationEnabledHasBeenSet = true; m_iamDatabaseAuthenticationEnabled = value; }
    inline AwsRdsDbClusterDetails& WithIamDatabaseAuthenticationEnabled(bool value) { SetIamDatabaseAuthenticationEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates if minor version upgrades are automatically applied to the
     * cluster.</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const { return m_autoMinorVersionUpgrade; }
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }
    inline AwsRdsDbClusterDetails& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}
    ///@}
  private:

    int m_allocatedStorage{0};
    bool m_allocatedStorageHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    int m_backupRetentionPeriod{0};
    bool m_backupRetentionPeriodHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::String m_readerEndpoint;
    bool m_readerEndpointHasBeenSet = false;

    Aws::Vector<Aws::String> m_customEndpoints;
    bool m_customEndpointsHasBeenSet = false;

    bool m_multiAz{false};
    bool m_multiAzHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    Aws::String m_masterUsername;
    bool m_masterUsernameHasBeenSet = false;

    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    Aws::Vector<Aws::String> m_readReplicaIdentifiers;
    bool m_readReplicaIdentifiersHasBeenSet = false;

    Aws::Vector<AwsRdsDbInstanceVpcSecurityGroup> m_vpcSecurityGroups;
    bool m_vpcSecurityGroupsHasBeenSet = false;

    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet = false;

    bool m_storageEncrypted{false};
    bool m_storageEncryptedHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_dbClusterResourceId;
    bool m_dbClusterResourceIdHasBeenSet = false;

    Aws::Vector<AwsRdsDbClusterAssociatedRole> m_associatedRoles;
    bool m_associatedRolesHasBeenSet = false;

    Aws::String m_clusterCreateTime;
    bool m_clusterCreateTimeHasBeenSet = false;

    Aws::Vector<Aws::String> m_enabledCloudWatchLogsExports;
    bool m_enabledCloudWatchLogsExportsHasBeenSet = false;

    Aws::String m_engineMode;
    bool m_engineModeHasBeenSet = false;

    bool m_deletionProtection{false};
    bool m_deletionProtectionHasBeenSet = false;

    bool m_httpEndpointEnabled{false};
    bool m_httpEndpointEnabledHasBeenSet = false;

    Aws::String m_activityStreamStatus;
    bool m_activityStreamStatusHasBeenSet = false;

    bool m_copyTagsToSnapshot{false};
    bool m_copyTagsToSnapshotHasBeenSet = false;

    bool m_crossAccountClone{false};
    bool m_crossAccountCloneHasBeenSet = false;

    Aws::Vector<AwsRdsDbDomainMembership> m_domainMemberships;
    bool m_domainMembershipsHasBeenSet = false;

    Aws::String m_dbClusterParameterGroup;
    bool m_dbClusterParameterGroupHasBeenSet = false;

    Aws::String m_dbSubnetGroup;
    bool m_dbSubnetGroupHasBeenSet = false;

    Aws::Vector<AwsRdsDbClusterOptionGroupMembership> m_dbClusterOptionGroupMemberships;
    bool m_dbClusterOptionGroupMembershipsHasBeenSet = false;

    Aws::String m_dbClusterIdentifier;
    bool m_dbClusterIdentifierHasBeenSet = false;

    Aws::Vector<AwsRdsDbClusterMember> m_dbClusterMembers;
    bool m_dbClusterMembersHasBeenSet = false;

    bool m_iamDatabaseAuthenticationEnabled{false};
    bool m_iamDatabaseAuthenticationEnabledHasBeenSet = false;

    bool m_autoMinorVersionUpgrade{false};
    bool m_autoMinorVersionUpgradeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
