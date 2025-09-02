/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/neptune/model/ClusterPendingModifiedValues.h>
#include <aws/neptune/model/ServerlessV2ScalingConfigurationInfo.h>
#include <aws/neptune/model/DBClusterOptionGroupStatus.h>
#include <aws/neptune/model/DBClusterMember.h>
#include <aws/neptune/model/VpcSecurityGroupMembership.h>
#include <aws/neptune/model/DBClusterRole.h>
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
   * <p>Contains the details of an Amazon Neptune DB cluster.</p> <p>This data type
   * is used as a response element in the <a>DescribeDBClusters</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DBCluster">AWS
   * API Reference</a></p>
   */
  class DBCluster
  {
  public:
    AWS_NEPTUNE_API DBCluster() = default;
    AWS_NEPTUNE_API DBCluster(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_NEPTUNE_API DBCluster& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p> <code>AllocatedStorage</code> always returns 1, because Neptune DB cluster
     * storage size is not fixed, but instead automatically adjusts as needed.</p>
     */
    inline int GetAllocatedStorage() const { return m_allocatedStorage; }
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }
    inline DBCluster& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the list of EC2 Availability Zones that instances in the DB cluster
     * can be created in.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const { return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    template<typename AvailabilityZonesT = Aws::Vector<Aws::String>>
    void SetAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::forward<AvailabilityZonesT>(value); }
    template<typename AvailabilityZonesT = Aws::Vector<Aws::String>>
    DBCluster& WithAvailabilityZones(AvailabilityZonesT&& value) { SetAvailabilityZones(std::forward<AvailabilityZonesT>(value)); return *this;}
    template<typename AvailabilityZonesT = Aws::String>
    DBCluster& AddAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.emplace_back(std::forward<AvailabilityZonesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the number of days for which automatic DB snapshots are
     * retained.</p>
     */
    inline int GetBackupRetentionPeriod() const { return m_backupRetentionPeriod; }
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }
    inline DBCluster& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not supported by Neptune.</p>
     */
    inline const Aws::String& GetCharacterSetName() const { return m_characterSetName; }
    inline bool CharacterSetNameHasBeenSet() const { return m_characterSetNameHasBeenSet; }
    template<typename CharacterSetNameT = Aws::String>
    void SetCharacterSetName(CharacterSetNameT&& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = std::forward<CharacterSetNameT>(value); }
    template<typename CharacterSetNameT = Aws::String>
    DBCluster& WithCharacterSetName(CharacterSetNameT&& value) { SetCharacterSetName(std::forward<CharacterSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the name of the initial database of this DB cluster that was
     * provided at create time, if one was specified when the DB cluster was created.
     * This same name is returned for the life of the DB cluster.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    DBCluster& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a user-supplied DB cluster identifier. This identifier is the unique
     * key that identifies a DB cluster.</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const { return m_dBClusterIdentifier; }
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }
    template<typename DBClusterIdentifierT = Aws::String>
    void SetDBClusterIdentifier(DBClusterIdentifierT&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::forward<DBClusterIdentifierT>(value); }
    template<typename DBClusterIdentifierT = Aws::String>
    DBCluster& WithDBClusterIdentifier(DBClusterIdentifierT&& value) { SetDBClusterIdentifier(std::forward<DBClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the DB cluster parameter group for the DB cluster.</p>
     */
    inline const Aws::String& GetDBClusterParameterGroup() const { return m_dBClusterParameterGroup; }
    inline bool DBClusterParameterGroupHasBeenSet() const { return m_dBClusterParameterGroupHasBeenSet; }
    template<typename DBClusterParameterGroupT = Aws::String>
    void SetDBClusterParameterGroup(DBClusterParameterGroupT&& value) { m_dBClusterParameterGroupHasBeenSet = true; m_dBClusterParameterGroup = std::forward<DBClusterParameterGroupT>(value); }
    template<typename DBClusterParameterGroupT = Aws::String>
    DBCluster& WithDBClusterParameterGroup(DBClusterParameterGroupT&& value) { SetDBClusterParameterGroup(std::forward<DBClusterParameterGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies information on the subnet group associated with the DB cluster,
     * including the name, description, and subnets in the subnet group.</p>
     */
    inline const Aws::String& GetDBSubnetGroup() const { return m_dBSubnetGroup; }
    inline bool DBSubnetGroupHasBeenSet() const { return m_dBSubnetGroupHasBeenSet; }
    template<typename DBSubnetGroupT = Aws::String>
    void SetDBSubnetGroup(DBSubnetGroupT&& value) { m_dBSubnetGroupHasBeenSet = true; m_dBSubnetGroup = std::forward<DBSubnetGroupT>(value); }
    template<typename DBSubnetGroupT = Aws::String>
    DBCluster& WithDBSubnetGroup(DBSubnetGroupT&& value) { SetDBSubnetGroup(std::forward<DBSubnetGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the current state of this DB cluster.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    DBCluster& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the progress of the operation as a percentage.</p>
     */
    inline const Aws::String& GetPercentProgress() const { return m_percentProgress; }
    inline bool PercentProgressHasBeenSet() const { return m_percentProgressHasBeenSet; }
    template<typename PercentProgressT = Aws::String>
    void SetPercentProgress(PercentProgressT&& value) { m_percentProgressHasBeenSet = true; m_percentProgress = std::forward<PercentProgressT>(value); }
    template<typename PercentProgressT = Aws::String>
    DBCluster& WithPercentProgress(PercentProgressT&& value) { SetPercentProgress(std::forward<PercentProgressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the earliest time to which a database can be restored with
     * point-in-time restore.</p>
     */
    inline const Aws::Utils::DateTime& GetEarliestRestorableTime() const { return m_earliestRestorableTime; }
    inline bool EarliestRestorableTimeHasBeenSet() const { return m_earliestRestorableTimeHasBeenSet; }
    template<typename EarliestRestorableTimeT = Aws::Utils::DateTime>
    void SetEarliestRestorableTime(EarliestRestorableTimeT&& value) { m_earliestRestorableTimeHasBeenSet = true; m_earliestRestorableTime = std::forward<EarliestRestorableTimeT>(value); }
    template<typename EarliestRestorableTimeT = Aws::Utils::DateTime>
    DBCluster& WithEarliestRestorableTime(EarliestRestorableTimeT&& value) { SetEarliestRestorableTime(std::forward<EarliestRestorableTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the connection endpoint for the primary instance of the DB
     * cluster.</p>
     */
    inline const Aws::String& GetEndpoint() const { return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    template<typename EndpointT = Aws::String>
    void SetEndpoint(EndpointT&& value) { m_endpointHasBeenSet = true; m_endpoint = std::forward<EndpointT>(value); }
    template<typename EndpointT = Aws::String>
    DBCluster& WithEndpoint(EndpointT&& value) { SetEndpoint(std::forward<EndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reader endpoint for the DB cluster. The reader endpoint for a DB cluster
     * load-balances connections across the Read Replicas that are available in a DB
     * cluster. As clients request new connections to the reader endpoint, Neptune
     * distributes the connection requests among the Read Replicas in the DB cluster.
     * This functionality can help balance your read workload across multiple Read
     * Replicas in your DB cluster.</p> <p>If a failover occurs, and the Read Replica
     * that you are connected to is promoted to be the primary instance, your
     * connection is dropped. To continue sending your read workload to other Read
     * Replicas in the cluster, you can then reconnect to the reader endpoint.</p>
     */
    inline const Aws::String& GetReaderEndpoint() const { return m_readerEndpoint; }
    inline bool ReaderEndpointHasBeenSet() const { return m_readerEndpointHasBeenSet; }
    template<typename ReaderEndpointT = Aws::String>
    void SetReaderEndpoint(ReaderEndpointT&& value) { m_readerEndpointHasBeenSet = true; m_readerEndpoint = std::forward<ReaderEndpointT>(value); }
    template<typename ReaderEndpointT = Aws::String>
    DBCluster& WithReaderEndpoint(ReaderEndpointT&& value) { SetReaderEndpoint(std::forward<ReaderEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the DB cluster has instances in multiple Availability
     * Zones.</p>
     */
    inline bool GetMultiAZ() const { return m_multiAZ; }
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }
    inline DBCluster& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the name of the database engine to be used for this DB cluster.</p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    DBCluster& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the database engine version.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    DBCluster& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the latest time to which a database can be restored with
     * point-in-time restore.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestRestorableTime() const { return m_latestRestorableTime; }
    inline bool LatestRestorableTimeHasBeenSet() const { return m_latestRestorableTimeHasBeenSet; }
    template<typename LatestRestorableTimeT = Aws::Utils::DateTime>
    void SetLatestRestorableTime(LatestRestorableTimeT&& value) { m_latestRestorableTimeHasBeenSet = true; m_latestRestorableTime = std::forward<LatestRestorableTimeT>(value); }
    template<typename LatestRestorableTimeT = Aws::Utils::DateTime>
    DBCluster& WithLatestRestorableTime(LatestRestorableTimeT&& value) { SetLatestRestorableTime(std::forward<LatestRestorableTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the port that the database engine is listening on.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline DBCluster& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not supported by Neptune.</p>
     */
    inline const Aws::String& GetMasterUsername() const { return m_masterUsername; }
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }
    template<typename MasterUsernameT = Aws::String>
    void SetMasterUsername(MasterUsernameT&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::forward<MasterUsernameT>(value); }
    template<typename MasterUsernameT = Aws::String>
    DBCluster& WithMasterUsername(MasterUsernameT&& value) { SetMasterUsername(std::forward<MasterUsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not supported by Neptune.</p>
     */
    inline const Aws::Vector<DBClusterOptionGroupStatus>& GetDBClusterOptionGroupMemberships() const { return m_dBClusterOptionGroupMemberships; }
    inline bool DBClusterOptionGroupMembershipsHasBeenSet() const { return m_dBClusterOptionGroupMembershipsHasBeenSet; }
    template<typename DBClusterOptionGroupMembershipsT = Aws::Vector<DBClusterOptionGroupStatus>>
    void SetDBClusterOptionGroupMemberships(DBClusterOptionGroupMembershipsT&& value) { m_dBClusterOptionGroupMembershipsHasBeenSet = true; m_dBClusterOptionGroupMemberships = std::forward<DBClusterOptionGroupMembershipsT>(value); }
    template<typename DBClusterOptionGroupMembershipsT = Aws::Vector<DBClusterOptionGroupStatus>>
    DBCluster& WithDBClusterOptionGroupMemberships(DBClusterOptionGroupMembershipsT&& value) { SetDBClusterOptionGroupMemberships(std::forward<DBClusterOptionGroupMembershipsT>(value)); return *this;}
    template<typename DBClusterOptionGroupMembershipsT = DBClusterOptionGroupStatus>
    DBCluster& AddDBClusterOptionGroupMemberships(DBClusterOptionGroupMembershipsT&& value) { m_dBClusterOptionGroupMembershipsHasBeenSet = true; m_dBClusterOptionGroupMemberships.emplace_back(std::forward<DBClusterOptionGroupMembershipsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the daily time range during which automated backups are created if
     * automated backups are enabled, as determined by the
     * <code>BackupRetentionPeriod</code>.</p>
     */
    inline const Aws::String& GetPreferredBackupWindow() const { return m_preferredBackupWindow; }
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }
    template<typename PreferredBackupWindowT = Aws::String>
    void SetPreferredBackupWindow(PreferredBackupWindowT&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::forward<PreferredBackupWindowT>(value); }
    template<typename PreferredBackupWindowT = Aws::String>
    DBCluster& WithPreferredBackupWindow(PreferredBackupWindowT&& value) { SetPreferredBackupWindow(std::forward<PreferredBackupWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the weekly time range during which system maintenance can occur, in
     * Universal Coordinated Time (UTC).</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const { return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    void SetPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::forward<PreferredMaintenanceWindowT>(value); }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    DBCluster& WithPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { SetPreferredMaintenanceWindow(std::forward<PreferredMaintenanceWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not supported by Neptune.</p>
     */
    inline const Aws::String& GetReplicationSourceIdentifier() const { return m_replicationSourceIdentifier; }
    inline bool ReplicationSourceIdentifierHasBeenSet() const { return m_replicationSourceIdentifierHasBeenSet; }
    template<typename ReplicationSourceIdentifierT = Aws::String>
    void SetReplicationSourceIdentifier(ReplicationSourceIdentifierT&& value) { m_replicationSourceIdentifierHasBeenSet = true; m_replicationSourceIdentifier = std::forward<ReplicationSourceIdentifierT>(value); }
    template<typename ReplicationSourceIdentifierT = Aws::String>
    DBCluster& WithReplicationSourceIdentifier(ReplicationSourceIdentifierT&& value) { SetReplicationSourceIdentifier(std::forward<ReplicationSourceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains one or more identifiers of the Read Replicas associated with this DB
     * cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReadReplicaIdentifiers() const { return m_readReplicaIdentifiers; }
    inline bool ReadReplicaIdentifiersHasBeenSet() const { return m_readReplicaIdentifiersHasBeenSet; }
    template<typename ReadReplicaIdentifiersT = Aws::Vector<Aws::String>>
    void SetReadReplicaIdentifiers(ReadReplicaIdentifiersT&& value) { m_readReplicaIdentifiersHasBeenSet = true; m_readReplicaIdentifiers = std::forward<ReadReplicaIdentifiersT>(value); }
    template<typename ReadReplicaIdentifiersT = Aws::Vector<Aws::String>>
    DBCluster& WithReadReplicaIdentifiers(ReadReplicaIdentifiersT&& value) { SetReadReplicaIdentifiers(std::forward<ReadReplicaIdentifiersT>(value)); return *this;}
    template<typename ReadReplicaIdentifiersT = Aws::String>
    DBCluster& AddReadReplicaIdentifiers(ReadReplicaIdentifiersT&& value) { m_readReplicaIdentifiersHasBeenSet = true; m_readReplicaIdentifiers.emplace_back(std::forward<ReadReplicaIdentifiersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides the list of instances that make up the DB cluster.</p>
     */
    inline const Aws::Vector<DBClusterMember>& GetDBClusterMembers() const { return m_dBClusterMembers; }
    inline bool DBClusterMembersHasBeenSet() const { return m_dBClusterMembersHasBeenSet; }
    template<typename DBClusterMembersT = Aws::Vector<DBClusterMember>>
    void SetDBClusterMembers(DBClusterMembersT&& value) { m_dBClusterMembersHasBeenSet = true; m_dBClusterMembers = std::forward<DBClusterMembersT>(value); }
    template<typename DBClusterMembersT = Aws::Vector<DBClusterMember>>
    DBCluster& WithDBClusterMembers(DBClusterMembersT&& value) { SetDBClusterMembers(std::forward<DBClusterMembersT>(value)); return *this;}
    template<typename DBClusterMembersT = DBClusterMember>
    DBCluster& AddDBClusterMembers(DBClusterMembersT&& value) { m_dBClusterMembersHasBeenSet = true; m_dBClusterMembers.emplace_back(std::forward<DBClusterMembersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides a list of VPC security groups that the DB cluster belongs to.</p>
     */
    inline const Aws::Vector<VpcSecurityGroupMembership>& GetVpcSecurityGroups() const { return m_vpcSecurityGroups; }
    inline bool VpcSecurityGroupsHasBeenSet() const { return m_vpcSecurityGroupsHasBeenSet; }
    template<typename VpcSecurityGroupsT = Aws::Vector<VpcSecurityGroupMembership>>
    void SetVpcSecurityGroups(VpcSecurityGroupsT&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = std::forward<VpcSecurityGroupsT>(value); }
    template<typename VpcSecurityGroupsT = Aws::Vector<VpcSecurityGroupMembership>>
    DBCluster& WithVpcSecurityGroups(VpcSecurityGroupsT&& value) { SetVpcSecurityGroups(std::forward<VpcSecurityGroupsT>(value)); return *this;}
    template<typename VpcSecurityGroupsT = VpcSecurityGroupMembership>
    DBCluster& AddVpcSecurityGroups(VpcSecurityGroupsT&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.emplace_back(std::forward<VpcSecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the ID that Amazon Route 53 assigns when you create a hosted
     * zone.</p>
     */
    inline const Aws::String& GetHostedZoneId() const { return m_hostedZoneId; }
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }
    template<typename HostedZoneIdT = Aws::String>
    void SetHostedZoneId(HostedZoneIdT&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::forward<HostedZoneIdT>(value); }
    template<typename HostedZoneIdT = Aws::String>
    DBCluster& WithHostedZoneId(HostedZoneIdT&& value) { SetHostedZoneId(std::forward<HostedZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the DB cluster is encrypted.</p>
     */
    inline bool GetStorageEncrypted() const { return m_storageEncrypted; }
    inline bool StorageEncryptedHasBeenSet() const { return m_storageEncryptedHasBeenSet; }
    inline void SetStorageEncrypted(bool value) { m_storageEncryptedHasBeenSet = true; m_storageEncrypted = value; }
    inline DBCluster& WithStorageEncrypted(bool value) { SetStorageEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>StorageEncrypted</code> is true, the Amazon KMS key identifier for
     * the encrypted DB cluster.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    DBCluster& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Region-unique, immutable identifier for the DB cluster. This
     * identifier is found in Amazon CloudTrail log entries whenever the Amazon KMS key
     * for the DB cluster is accessed.</p>
     */
    inline const Aws::String& GetDbClusterResourceId() const { return m_dbClusterResourceId; }
    inline bool DbClusterResourceIdHasBeenSet() const { return m_dbClusterResourceIdHasBeenSet; }
    template<typename DbClusterResourceIdT = Aws::String>
    void SetDbClusterResourceId(DbClusterResourceIdT&& value) { m_dbClusterResourceIdHasBeenSet = true; m_dbClusterResourceId = std::forward<DbClusterResourceIdT>(value); }
    template<typename DbClusterResourceIdT = Aws::String>
    DBCluster& WithDbClusterResourceId(DbClusterResourceIdT&& value) { SetDbClusterResourceId(std::forward<DbClusterResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the DB cluster.</p>
     */
    inline const Aws::String& GetDBClusterArn() const { return m_dBClusterArn; }
    inline bool DBClusterArnHasBeenSet() const { return m_dBClusterArnHasBeenSet; }
    template<typename DBClusterArnT = Aws::String>
    void SetDBClusterArn(DBClusterArnT&& value) { m_dBClusterArnHasBeenSet = true; m_dBClusterArn = std::forward<DBClusterArnT>(value); }
    template<typename DBClusterArnT = Aws::String>
    DBCluster& WithDBClusterArn(DBClusterArnT&& value) { SetDBClusterArn(std::forward<DBClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides a list of the Amazon Identity and Access Management (IAM) roles that
     * are associated with the DB cluster. IAM roles that are associated with a DB
     * cluster grant permission for the DB cluster to access other Amazon services on
     * your behalf.</p>
     */
    inline const Aws::Vector<DBClusterRole>& GetAssociatedRoles() const { return m_associatedRoles; }
    inline bool AssociatedRolesHasBeenSet() const { return m_associatedRolesHasBeenSet; }
    template<typename AssociatedRolesT = Aws::Vector<DBClusterRole>>
    void SetAssociatedRoles(AssociatedRolesT&& value) { m_associatedRolesHasBeenSet = true; m_associatedRoles = std::forward<AssociatedRolesT>(value); }
    template<typename AssociatedRolesT = Aws::Vector<DBClusterRole>>
    DBCluster& WithAssociatedRoles(AssociatedRolesT&& value) { SetAssociatedRoles(std::forward<AssociatedRolesT>(value)); return *this;}
    template<typename AssociatedRolesT = DBClusterRole>
    DBCluster& AddAssociatedRoles(AssociatedRolesT&& value) { m_associatedRolesHasBeenSet = true; m_associatedRoles.emplace_back(std::forward<AssociatedRolesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>True if mapping of Amazon Identity and Access Management (IAM) accounts to
     * database accounts is enabled, and otherwise false.</p>
     */
    inline bool GetIAMDatabaseAuthenticationEnabled() const { return m_iAMDatabaseAuthenticationEnabled; }
    inline bool IAMDatabaseAuthenticationEnabledHasBeenSet() const { return m_iAMDatabaseAuthenticationEnabledHasBeenSet; }
    inline void SetIAMDatabaseAuthenticationEnabled(bool value) { m_iAMDatabaseAuthenticationEnabledHasBeenSet = true; m_iAMDatabaseAuthenticationEnabled = value; }
    inline DBCluster& WithIAMDatabaseAuthenticationEnabled(bool value) { SetIAMDatabaseAuthenticationEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the clone group to which the DB cluster is associated.</p>
     */
    inline const Aws::String& GetCloneGroupId() const { return m_cloneGroupId; }
    inline bool CloneGroupIdHasBeenSet() const { return m_cloneGroupIdHasBeenSet; }
    template<typename CloneGroupIdT = Aws::String>
    void SetCloneGroupId(CloneGroupIdT&& value) { m_cloneGroupIdHasBeenSet = true; m_cloneGroupId = std::forward<CloneGroupIdT>(value); }
    template<typename CloneGroupIdT = Aws::String>
    DBCluster& WithCloneGroupId(CloneGroupIdT&& value) { SetCloneGroupId(std::forward<CloneGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the time when the DB cluster was created, in Universal Coordinated
     * Time (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetClusterCreateTime() const { return m_clusterCreateTime; }
    inline bool ClusterCreateTimeHasBeenSet() const { return m_clusterCreateTimeHasBeenSet; }
    template<typename ClusterCreateTimeT = Aws::Utils::DateTime>
    void SetClusterCreateTime(ClusterCreateTimeT&& value) { m_clusterCreateTimeHasBeenSet = true; m_clusterCreateTime = std::forward<ClusterCreateTimeT>(value); }
    template<typename ClusterCreateTimeT = Aws::Utils::DateTime>
    DBCluster& WithClusterCreateTime(ClusterCreateTimeT&& value) { SetClusterCreateTime(std::forward<ClusterCreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <i>If set to <code>true</code>, tags are copied to any snapshot of the DB
     * cluster that is created.</i> </p>
     */
    inline bool GetCopyTagsToSnapshot() const { return m_copyTagsToSnapshot; }
    inline bool CopyTagsToSnapshotHasBeenSet() const { return m_copyTagsToSnapshotHasBeenSet; }
    inline void SetCopyTagsToSnapshot(bool value) { m_copyTagsToSnapshotHasBeenSet = true; m_copyTagsToSnapshot = value; }
    inline DBCluster& WithCopyTagsToSnapshot(bool value) { SetCopyTagsToSnapshot(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the log types that this DB cluster is configured to export to
     * CloudWatch Logs. Valid log types are: <code>audit</code> (to publish audit logs
     * to CloudWatch) and slowquery (to publish slow-query logs to CloudWatch). See <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/cloudwatch-logs.html">Publishing
     * Neptune logs to Amazon CloudWatch logs</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnabledCloudwatchLogsExports() const { return m_enabledCloudwatchLogsExports; }
    inline bool EnabledCloudwatchLogsExportsHasBeenSet() const { return m_enabledCloudwatchLogsExportsHasBeenSet; }
    template<typename EnabledCloudwatchLogsExportsT = Aws::Vector<Aws::String>>
    void SetEnabledCloudwatchLogsExports(EnabledCloudwatchLogsExportsT&& value) { m_enabledCloudwatchLogsExportsHasBeenSet = true; m_enabledCloudwatchLogsExports = std::forward<EnabledCloudwatchLogsExportsT>(value); }
    template<typename EnabledCloudwatchLogsExportsT = Aws::Vector<Aws::String>>
    DBCluster& WithEnabledCloudwatchLogsExports(EnabledCloudwatchLogsExportsT&& value) { SetEnabledCloudwatchLogsExports(std::forward<EnabledCloudwatchLogsExportsT>(value)); return *this;}
    template<typename EnabledCloudwatchLogsExportsT = Aws::String>
    DBCluster& AddEnabledCloudwatchLogsExports(EnabledCloudwatchLogsExportsT&& value) { m_enabledCloudwatchLogsExportsHasBeenSet = true; m_enabledCloudwatchLogsExports.emplace_back(std::forward<EnabledCloudwatchLogsExportsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>This data type is used as a response element in the
     * <code>ModifyDBCluster</code> operation and contains changes that will be applied
     * during the next maintenance window.</p>
     */
    inline const ClusterPendingModifiedValues& GetPendingModifiedValues() const { return m_pendingModifiedValues; }
    inline bool PendingModifiedValuesHasBeenSet() const { return m_pendingModifiedValuesHasBeenSet; }
    template<typename PendingModifiedValuesT = ClusterPendingModifiedValues>
    void SetPendingModifiedValues(PendingModifiedValuesT&& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = std::forward<PendingModifiedValuesT>(value); }
    template<typename PendingModifiedValuesT = ClusterPendingModifiedValues>
    DBCluster& WithPendingModifiedValues(PendingModifiedValuesT&& value) { SetPendingModifiedValues(std::forward<PendingModifiedValuesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether or not the DB cluster has deletion protection enabled. The
     * database can't be deleted when deletion protection is enabled.</p>
     */
    inline bool GetDeletionProtection() const { return m_deletionProtection; }
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }
    inline DBCluster& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to <code>true</code>, the DB cluster can be cloned across
     * accounts.</p>
     */
    inline bool GetCrossAccountClone() const { return m_crossAccountClone; }
    inline bool CrossAccountCloneHasBeenSet() const { return m_crossAccountCloneHasBeenSet; }
    inline void SetCrossAccountClone(bool value) { m_crossAccountCloneHasBeenSet = true; m_crossAccountClone = value; }
    inline DBCluster& WithCrossAccountClone(bool value) { SetCrossAccountClone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time at which the DB cluster will be automatically restarted.</p>
     */
    inline const Aws::Utils::DateTime& GetAutomaticRestartTime() const { return m_automaticRestartTime; }
    inline bool AutomaticRestartTimeHasBeenSet() const { return m_automaticRestartTimeHasBeenSet; }
    template<typename AutomaticRestartTimeT = Aws::Utils::DateTime>
    void SetAutomaticRestartTime(AutomaticRestartTimeT&& value) { m_automaticRestartTimeHasBeenSet = true; m_automaticRestartTime = std::forward<AutomaticRestartTimeT>(value); }
    template<typename AutomaticRestartTimeT = Aws::Utils::DateTime>
    DBCluster& WithAutomaticRestartTime(AutomaticRestartTimeT&& value) { SetAutomaticRestartTime(std::forward<AutomaticRestartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows the scaling configuration for a Neptune Serverless DB cluster.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/neptune-serverless-using.html">Using
     * Amazon Neptune Serverless</a> in the <i>Amazon Neptune User Guide</i>.</p>
     */
    inline const ServerlessV2ScalingConfigurationInfo& GetServerlessV2ScalingConfiguration() const { return m_serverlessV2ScalingConfiguration; }
    inline bool ServerlessV2ScalingConfigurationHasBeenSet() const { return m_serverlessV2ScalingConfigurationHasBeenSet; }
    template<typename ServerlessV2ScalingConfigurationT = ServerlessV2ScalingConfigurationInfo>
    void SetServerlessV2ScalingConfiguration(ServerlessV2ScalingConfigurationT&& value) { m_serverlessV2ScalingConfigurationHasBeenSet = true; m_serverlessV2ScalingConfiguration = std::forward<ServerlessV2ScalingConfigurationT>(value); }
    template<typename ServerlessV2ScalingConfigurationT = ServerlessV2ScalingConfigurationInfo>
    DBCluster& WithServerlessV2ScalingConfiguration(ServerlessV2ScalingConfigurationT&& value) { SetServerlessV2ScalingConfiguration(std::forward<ServerlessV2ScalingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a user-supplied global database cluster identifier. This identifier
     * is the unique key that identifies a global database.</p>
     */
    inline const Aws::String& GetGlobalClusterIdentifier() const { return m_globalClusterIdentifier; }
    inline bool GlobalClusterIdentifierHasBeenSet() const { return m_globalClusterIdentifierHasBeenSet; }
    template<typename GlobalClusterIdentifierT = Aws::String>
    void SetGlobalClusterIdentifier(GlobalClusterIdentifierT&& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = std::forward<GlobalClusterIdentifierT>(value); }
    template<typename GlobalClusterIdentifierT = Aws::String>
    DBCluster& WithGlobalClusterIdentifier(GlobalClusterIdentifierT&& value) { SetGlobalClusterIdentifier(std::forward<GlobalClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next time you can modify the DB cluster to use the <code>iopt1</code>
     * storage type.</p>
     */
    inline const Aws::Utils::DateTime& GetIOOptimizedNextAllowedModificationTime() const { return m_iOOptimizedNextAllowedModificationTime; }
    inline bool IOOptimizedNextAllowedModificationTimeHasBeenSet() const { return m_iOOptimizedNextAllowedModificationTimeHasBeenSet; }
    template<typename IOOptimizedNextAllowedModificationTimeT = Aws::Utils::DateTime>
    void SetIOOptimizedNextAllowedModificationTime(IOOptimizedNextAllowedModificationTimeT&& value) { m_iOOptimizedNextAllowedModificationTimeHasBeenSet = true; m_iOOptimizedNextAllowedModificationTime = std::forward<IOOptimizedNextAllowedModificationTimeT>(value); }
    template<typename IOOptimizedNextAllowedModificationTimeT = Aws::Utils::DateTime>
    DBCluster& WithIOOptimizedNextAllowedModificationTime(IOOptimizedNextAllowedModificationTimeT&& value) { SetIOOptimizedNextAllowedModificationTime(std::forward<IOOptimizedNextAllowedModificationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage type used by the DB cluster.</p> <p>Valid Values:</p> <ul> <li>
     * <p> <b> <code>standard</code> </b>   –   ( <i>the default</i> ) Provides
     * cost-effective database storage for applications with moderate to small I/O
     * usage.</p> </li> <li> <p> <b> <code>iopt1</code> </b>   –   Enables <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/storage-types.html#provisioned-iops-storage">I/O-Optimized
     * storage</a> that's designed to meet the needs of I/O-intensive graph workloads
     * that require predictable pricing with low I/O latency and consistent I/O
     * throughput.</p> <p>Neptune I/O-Optimized storage is only available starting with
     * engine release 1.3.0.0.</p> </li> </ul>
     */
    inline const Aws::String& GetStorageType() const { return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    template<typename StorageTypeT = Aws::String>
    void SetStorageType(StorageTypeT&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::forward<StorageTypeT>(value); }
    template<typename StorageTypeT = Aws::String>
    DBCluster& WithStorageType(StorageTypeT&& value) { SetStorageType(std::forward<StorageTypeT>(value)); return *this;}
    ///@}
  private:

    int m_allocatedStorage{0};
    bool m_allocatedStorageHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    int m_backupRetentionPeriod{0};
    bool m_backupRetentionPeriodHasBeenSet = false;

    Aws::String m_characterSetName;
    bool m_characterSetNameHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;

    Aws::String m_dBClusterParameterGroup;
    bool m_dBClusterParameterGroupHasBeenSet = false;

    Aws::String m_dBSubnetGroup;
    bool m_dBSubnetGroupHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_percentProgress;
    bool m_percentProgressHasBeenSet = false;

    Aws::Utils::DateTime m_earliestRestorableTime{};
    bool m_earliestRestorableTimeHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::String m_readerEndpoint;
    bool m_readerEndpointHasBeenSet = false;

    bool m_multiAZ{false};
    bool m_multiAZHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::Utils::DateTime m_latestRestorableTime{};
    bool m_latestRestorableTimeHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    Aws::String m_masterUsername;
    bool m_masterUsernameHasBeenSet = false;

    Aws::Vector<DBClusterOptionGroupStatus> m_dBClusterOptionGroupMemberships;
    bool m_dBClusterOptionGroupMembershipsHasBeenSet = false;

    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    Aws::String m_replicationSourceIdentifier;
    bool m_replicationSourceIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_readReplicaIdentifiers;
    bool m_readReplicaIdentifiersHasBeenSet = false;

    Aws::Vector<DBClusterMember> m_dBClusterMembers;
    bool m_dBClusterMembersHasBeenSet = false;

    Aws::Vector<VpcSecurityGroupMembership> m_vpcSecurityGroups;
    bool m_vpcSecurityGroupsHasBeenSet = false;

    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet = false;

    bool m_storageEncrypted{false};
    bool m_storageEncryptedHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_dbClusterResourceId;
    bool m_dbClusterResourceIdHasBeenSet = false;

    Aws::String m_dBClusterArn;
    bool m_dBClusterArnHasBeenSet = false;

    Aws::Vector<DBClusterRole> m_associatedRoles;
    bool m_associatedRolesHasBeenSet = false;

    bool m_iAMDatabaseAuthenticationEnabled{false};
    bool m_iAMDatabaseAuthenticationEnabledHasBeenSet = false;

    Aws::String m_cloneGroupId;
    bool m_cloneGroupIdHasBeenSet = false;

    Aws::Utils::DateTime m_clusterCreateTime{};
    bool m_clusterCreateTimeHasBeenSet = false;

    bool m_copyTagsToSnapshot{false};
    bool m_copyTagsToSnapshotHasBeenSet = false;

    Aws::Vector<Aws::String> m_enabledCloudwatchLogsExports;
    bool m_enabledCloudwatchLogsExportsHasBeenSet = false;

    ClusterPendingModifiedValues m_pendingModifiedValues;
    bool m_pendingModifiedValuesHasBeenSet = false;

    bool m_deletionProtection{false};
    bool m_deletionProtectionHasBeenSet = false;

    bool m_crossAccountClone{false};
    bool m_crossAccountCloneHasBeenSet = false;

    Aws::Utils::DateTime m_automaticRestartTime{};
    bool m_automaticRestartTimeHasBeenSet = false;

    ServerlessV2ScalingConfigurationInfo m_serverlessV2ScalingConfiguration;
    bool m_serverlessV2ScalingConfigurationHasBeenSet = false;

    Aws::String m_globalClusterIdentifier;
    bool m_globalClusterIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_iOOptimizedNextAllowedModificationTime{};
    bool m_iOOptimizedNextAllowedModificationTimeHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
