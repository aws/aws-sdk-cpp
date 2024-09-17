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
    AWS_NEPTUNE_API DBCluster();
    AWS_NEPTUNE_API DBCluster(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_NEPTUNE_API DBCluster& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p> <code>AllocatedStorage</code> always returns 1, because Neptune DB cluster
     * storage size is not fixed, but instead automatically adjusts as needed.</p>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }
    inline DBCluster& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the list of EC2 Availability Zones that instances in the DB cluster
     * can be created in.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }
    inline DBCluster& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}
    inline DBCluster& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}
    inline DBCluster& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }
    inline DBCluster& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }
    inline DBCluster& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the number of days for which automatic DB snapshots are
     * retained.</p>
     */
    inline int GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }
    inline DBCluster& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not supported by Neptune.</p>
     */
    inline const Aws::String& GetCharacterSetName() const{ return m_characterSetName; }
    inline bool CharacterSetNameHasBeenSet() const { return m_characterSetNameHasBeenSet; }
    inline void SetCharacterSetName(const Aws::String& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = value; }
    inline void SetCharacterSetName(Aws::String&& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = std::move(value); }
    inline void SetCharacterSetName(const char* value) { m_characterSetNameHasBeenSet = true; m_characterSetName.assign(value); }
    inline DBCluster& WithCharacterSetName(const Aws::String& value) { SetCharacterSetName(value); return *this;}
    inline DBCluster& WithCharacterSetName(Aws::String&& value) { SetCharacterSetName(std::move(value)); return *this;}
    inline DBCluster& WithCharacterSetName(const char* value) { SetCharacterSetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the name of the initial database of this DB cluster that was
     * provided at create time, if one was specified when the DB cluster was created.
     * This same name is returned for the life of the DB cluster.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline DBCluster& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline DBCluster& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline DBCluster& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a user-supplied DB cluster identifier. This identifier is the unique
     * key that identifies a DB cluster.</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }
    inline DBCluster& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}
    inline DBCluster& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}
    inline DBCluster& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the DB cluster parameter group for the DB cluster.</p>
     */
    inline const Aws::String& GetDBClusterParameterGroup() const{ return m_dBClusterParameterGroup; }
    inline bool DBClusterParameterGroupHasBeenSet() const { return m_dBClusterParameterGroupHasBeenSet; }
    inline void SetDBClusterParameterGroup(const Aws::String& value) { m_dBClusterParameterGroupHasBeenSet = true; m_dBClusterParameterGroup = value; }
    inline void SetDBClusterParameterGroup(Aws::String&& value) { m_dBClusterParameterGroupHasBeenSet = true; m_dBClusterParameterGroup = std::move(value); }
    inline void SetDBClusterParameterGroup(const char* value) { m_dBClusterParameterGroupHasBeenSet = true; m_dBClusterParameterGroup.assign(value); }
    inline DBCluster& WithDBClusterParameterGroup(const Aws::String& value) { SetDBClusterParameterGroup(value); return *this;}
    inline DBCluster& WithDBClusterParameterGroup(Aws::String&& value) { SetDBClusterParameterGroup(std::move(value)); return *this;}
    inline DBCluster& WithDBClusterParameterGroup(const char* value) { SetDBClusterParameterGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies information on the subnet group associated with the DB cluster,
     * including the name, description, and subnets in the subnet group.</p>
     */
    inline const Aws::String& GetDBSubnetGroup() const{ return m_dBSubnetGroup; }
    inline bool DBSubnetGroupHasBeenSet() const { return m_dBSubnetGroupHasBeenSet; }
    inline void SetDBSubnetGroup(const Aws::String& value) { m_dBSubnetGroupHasBeenSet = true; m_dBSubnetGroup = value; }
    inline void SetDBSubnetGroup(Aws::String&& value) { m_dBSubnetGroupHasBeenSet = true; m_dBSubnetGroup = std::move(value); }
    inline void SetDBSubnetGroup(const char* value) { m_dBSubnetGroupHasBeenSet = true; m_dBSubnetGroup.assign(value); }
    inline DBCluster& WithDBSubnetGroup(const Aws::String& value) { SetDBSubnetGroup(value); return *this;}
    inline DBCluster& WithDBSubnetGroup(Aws::String&& value) { SetDBSubnetGroup(std::move(value)); return *this;}
    inline DBCluster& WithDBSubnetGroup(const char* value) { SetDBSubnetGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the current state of this DB cluster.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline DBCluster& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline DBCluster& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline DBCluster& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the progress of the operation as a percentage.</p>
     */
    inline const Aws::String& GetPercentProgress() const{ return m_percentProgress; }
    inline bool PercentProgressHasBeenSet() const { return m_percentProgressHasBeenSet; }
    inline void SetPercentProgress(const Aws::String& value) { m_percentProgressHasBeenSet = true; m_percentProgress = value; }
    inline void SetPercentProgress(Aws::String&& value) { m_percentProgressHasBeenSet = true; m_percentProgress = std::move(value); }
    inline void SetPercentProgress(const char* value) { m_percentProgressHasBeenSet = true; m_percentProgress.assign(value); }
    inline DBCluster& WithPercentProgress(const Aws::String& value) { SetPercentProgress(value); return *this;}
    inline DBCluster& WithPercentProgress(Aws::String&& value) { SetPercentProgress(std::move(value)); return *this;}
    inline DBCluster& WithPercentProgress(const char* value) { SetPercentProgress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the earliest time to which a database can be restored with
     * point-in-time restore.</p>
     */
    inline const Aws::Utils::DateTime& GetEarliestRestorableTime() const{ return m_earliestRestorableTime; }
    inline bool EarliestRestorableTimeHasBeenSet() const { return m_earliestRestorableTimeHasBeenSet; }
    inline void SetEarliestRestorableTime(const Aws::Utils::DateTime& value) { m_earliestRestorableTimeHasBeenSet = true; m_earliestRestorableTime = value; }
    inline void SetEarliestRestorableTime(Aws::Utils::DateTime&& value) { m_earliestRestorableTimeHasBeenSet = true; m_earliestRestorableTime = std::move(value); }
    inline DBCluster& WithEarliestRestorableTime(const Aws::Utils::DateTime& value) { SetEarliestRestorableTime(value); return *this;}
    inline DBCluster& WithEarliestRestorableTime(Aws::Utils::DateTime&& value) { SetEarliestRestorableTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the connection endpoint for the primary instance of the DB
     * cluster.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }
    inline DBCluster& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}
    inline DBCluster& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}
    inline DBCluster& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}
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
    inline const Aws::String& GetReaderEndpoint() const{ return m_readerEndpoint; }
    inline bool ReaderEndpointHasBeenSet() const { return m_readerEndpointHasBeenSet; }
    inline void SetReaderEndpoint(const Aws::String& value) { m_readerEndpointHasBeenSet = true; m_readerEndpoint = value; }
    inline void SetReaderEndpoint(Aws::String&& value) { m_readerEndpointHasBeenSet = true; m_readerEndpoint = std::move(value); }
    inline void SetReaderEndpoint(const char* value) { m_readerEndpointHasBeenSet = true; m_readerEndpoint.assign(value); }
    inline DBCluster& WithReaderEndpoint(const Aws::String& value) { SetReaderEndpoint(value); return *this;}
    inline DBCluster& WithReaderEndpoint(Aws::String&& value) { SetReaderEndpoint(std::move(value)); return *this;}
    inline DBCluster& WithReaderEndpoint(const char* value) { SetReaderEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the DB cluster has instances in multiple Availability
     * Zones.</p>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }
    inline DBCluster& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the name of the database engine to be used for this DB cluster.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline DBCluster& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline DBCluster& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline DBCluster& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the database engine version.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline DBCluster& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline DBCluster& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline DBCluster& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the latest time to which a database can be restored with
     * point-in-time restore.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestRestorableTime() const{ return m_latestRestorableTime; }
    inline bool LatestRestorableTimeHasBeenSet() const { return m_latestRestorableTimeHasBeenSet; }
    inline void SetLatestRestorableTime(const Aws::Utils::DateTime& value) { m_latestRestorableTimeHasBeenSet = true; m_latestRestorableTime = value; }
    inline void SetLatestRestorableTime(Aws::Utils::DateTime&& value) { m_latestRestorableTimeHasBeenSet = true; m_latestRestorableTime = std::move(value); }
    inline DBCluster& WithLatestRestorableTime(const Aws::Utils::DateTime& value) { SetLatestRestorableTime(value); return *this;}
    inline DBCluster& WithLatestRestorableTime(Aws::Utils::DateTime&& value) { SetLatestRestorableTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the port that the database engine is listening on.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline DBCluster& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not supported by Neptune.</p>
     */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }
    inline void SetMasterUsername(Aws::String&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::move(value); }
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }
    inline DBCluster& WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}
    inline DBCluster& WithMasterUsername(Aws::String&& value) { SetMasterUsername(std::move(value)); return *this;}
    inline DBCluster& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not supported by Neptune.</p>
     */
    inline const Aws::Vector<DBClusterOptionGroupStatus>& GetDBClusterOptionGroupMemberships() const{ return m_dBClusterOptionGroupMemberships; }
    inline bool DBClusterOptionGroupMembershipsHasBeenSet() const { return m_dBClusterOptionGroupMembershipsHasBeenSet; }
    inline void SetDBClusterOptionGroupMemberships(const Aws::Vector<DBClusterOptionGroupStatus>& value) { m_dBClusterOptionGroupMembershipsHasBeenSet = true; m_dBClusterOptionGroupMemberships = value; }
    inline void SetDBClusterOptionGroupMemberships(Aws::Vector<DBClusterOptionGroupStatus>&& value) { m_dBClusterOptionGroupMembershipsHasBeenSet = true; m_dBClusterOptionGroupMemberships = std::move(value); }
    inline DBCluster& WithDBClusterOptionGroupMemberships(const Aws::Vector<DBClusterOptionGroupStatus>& value) { SetDBClusterOptionGroupMemberships(value); return *this;}
    inline DBCluster& WithDBClusterOptionGroupMemberships(Aws::Vector<DBClusterOptionGroupStatus>&& value) { SetDBClusterOptionGroupMemberships(std::move(value)); return *this;}
    inline DBCluster& AddDBClusterOptionGroupMemberships(const DBClusterOptionGroupStatus& value) { m_dBClusterOptionGroupMembershipsHasBeenSet = true; m_dBClusterOptionGroupMemberships.push_back(value); return *this; }
    inline DBCluster& AddDBClusterOptionGroupMemberships(DBClusterOptionGroupStatus&& value) { m_dBClusterOptionGroupMembershipsHasBeenSet = true; m_dBClusterOptionGroupMemberships.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the daily time range during which automated backups are created if
     * automated backups are enabled, as determined by the
     * <code>BackupRetentionPeriod</code>.</p>
     */
    inline const Aws::String& GetPreferredBackupWindow() const{ return m_preferredBackupWindow; }
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }
    inline void SetPreferredBackupWindow(const Aws::String& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }
    inline void SetPreferredBackupWindow(Aws::String&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::move(value); }
    inline void SetPreferredBackupWindow(const char* value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow.assign(value); }
    inline DBCluster& WithPreferredBackupWindow(const Aws::String& value) { SetPreferredBackupWindow(value); return *this;}
    inline DBCluster& WithPreferredBackupWindow(Aws::String&& value) { SetPreferredBackupWindow(std::move(value)); return *this;}
    inline DBCluster& WithPreferredBackupWindow(const char* value) { SetPreferredBackupWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the weekly time range during which system maintenance can occur, in
     * Universal Coordinated Time (UTC).</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }
    inline DBCluster& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}
    inline DBCluster& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}
    inline DBCluster& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not supported by Neptune.</p>
     */
    inline const Aws::String& GetReplicationSourceIdentifier() const{ return m_replicationSourceIdentifier; }
    inline bool ReplicationSourceIdentifierHasBeenSet() const { return m_replicationSourceIdentifierHasBeenSet; }
    inline void SetReplicationSourceIdentifier(const Aws::String& value) { m_replicationSourceIdentifierHasBeenSet = true; m_replicationSourceIdentifier = value; }
    inline void SetReplicationSourceIdentifier(Aws::String&& value) { m_replicationSourceIdentifierHasBeenSet = true; m_replicationSourceIdentifier = std::move(value); }
    inline void SetReplicationSourceIdentifier(const char* value) { m_replicationSourceIdentifierHasBeenSet = true; m_replicationSourceIdentifier.assign(value); }
    inline DBCluster& WithReplicationSourceIdentifier(const Aws::String& value) { SetReplicationSourceIdentifier(value); return *this;}
    inline DBCluster& WithReplicationSourceIdentifier(Aws::String&& value) { SetReplicationSourceIdentifier(std::move(value)); return *this;}
    inline DBCluster& WithReplicationSourceIdentifier(const char* value) { SetReplicationSourceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains one or more identifiers of the Read Replicas associated with this DB
     * cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReadReplicaIdentifiers() const{ return m_readReplicaIdentifiers; }
    inline bool ReadReplicaIdentifiersHasBeenSet() const { return m_readReplicaIdentifiersHasBeenSet; }
    inline void SetReadReplicaIdentifiers(const Aws::Vector<Aws::String>& value) { m_readReplicaIdentifiersHasBeenSet = true; m_readReplicaIdentifiers = value; }
    inline void SetReadReplicaIdentifiers(Aws::Vector<Aws::String>&& value) { m_readReplicaIdentifiersHasBeenSet = true; m_readReplicaIdentifiers = std::move(value); }
    inline DBCluster& WithReadReplicaIdentifiers(const Aws::Vector<Aws::String>& value) { SetReadReplicaIdentifiers(value); return *this;}
    inline DBCluster& WithReadReplicaIdentifiers(Aws::Vector<Aws::String>&& value) { SetReadReplicaIdentifiers(std::move(value)); return *this;}
    inline DBCluster& AddReadReplicaIdentifiers(const Aws::String& value) { m_readReplicaIdentifiersHasBeenSet = true; m_readReplicaIdentifiers.push_back(value); return *this; }
    inline DBCluster& AddReadReplicaIdentifiers(Aws::String&& value) { m_readReplicaIdentifiersHasBeenSet = true; m_readReplicaIdentifiers.push_back(std::move(value)); return *this; }
    inline DBCluster& AddReadReplicaIdentifiers(const char* value) { m_readReplicaIdentifiersHasBeenSet = true; m_readReplicaIdentifiers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides the list of instances that make up the DB cluster.</p>
     */
    inline const Aws::Vector<DBClusterMember>& GetDBClusterMembers() const{ return m_dBClusterMembers; }
    inline bool DBClusterMembersHasBeenSet() const { return m_dBClusterMembersHasBeenSet; }
    inline void SetDBClusterMembers(const Aws::Vector<DBClusterMember>& value) { m_dBClusterMembersHasBeenSet = true; m_dBClusterMembers = value; }
    inline void SetDBClusterMembers(Aws::Vector<DBClusterMember>&& value) { m_dBClusterMembersHasBeenSet = true; m_dBClusterMembers = std::move(value); }
    inline DBCluster& WithDBClusterMembers(const Aws::Vector<DBClusterMember>& value) { SetDBClusterMembers(value); return *this;}
    inline DBCluster& WithDBClusterMembers(Aws::Vector<DBClusterMember>&& value) { SetDBClusterMembers(std::move(value)); return *this;}
    inline DBCluster& AddDBClusterMembers(const DBClusterMember& value) { m_dBClusterMembersHasBeenSet = true; m_dBClusterMembers.push_back(value); return *this; }
    inline DBCluster& AddDBClusterMembers(DBClusterMember&& value) { m_dBClusterMembersHasBeenSet = true; m_dBClusterMembers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides a list of VPC security groups that the DB cluster belongs to.</p>
     */
    inline const Aws::Vector<VpcSecurityGroupMembership>& GetVpcSecurityGroups() const{ return m_vpcSecurityGroups; }
    inline bool VpcSecurityGroupsHasBeenSet() const { return m_vpcSecurityGroupsHasBeenSet; }
    inline void SetVpcSecurityGroups(const Aws::Vector<VpcSecurityGroupMembership>& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = value; }
    inline void SetVpcSecurityGroups(Aws::Vector<VpcSecurityGroupMembership>&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = std::move(value); }
    inline DBCluster& WithVpcSecurityGroups(const Aws::Vector<VpcSecurityGroupMembership>& value) { SetVpcSecurityGroups(value); return *this;}
    inline DBCluster& WithVpcSecurityGroups(Aws::Vector<VpcSecurityGroupMembership>&& value) { SetVpcSecurityGroups(std::move(value)); return *this;}
    inline DBCluster& AddVpcSecurityGroups(const VpcSecurityGroupMembership& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.push_back(value); return *this; }
    inline DBCluster& AddVpcSecurityGroups(VpcSecurityGroupMembership&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the ID that Amazon Route 53 assigns when you create a hosted
     * zone.</p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::move(value); }
    inline void SetHostedZoneId(const char* value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId.assign(value); }
    inline DBCluster& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}
    inline DBCluster& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(std::move(value)); return *this;}
    inline DBCluster& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the DB cluster is encrypted.</p>
     */
    inline bool GetStorageEncrypted() const{ return m_storageEncrypted; }
    inline bool StorageEncryptedHasBeenSet() const { return m_storageEncryptedHasBeenSet; }
    inline void SetStorageEncrypted(bool value) { m_storageEncryptedHasBeenSet = true; m_storageEncrypted = value; }
    inline DBCluster& WithStorageEncrypted(bool value) { SetStorageEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>StorageEncrypted</code> is true, the Amazon KMS key identifier for
     * the encrypted DB cluster.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline DBCluster& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline DBCluster& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline DBCluster& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Region-unique, immutable identifier for the DB cluster. This
     * identifier is found in Amazon CloudTrail log entries whenever the Amazon KMS key
     * for the DB cluster is accessed.</p>
     */
    inline const Aws::String& GetDbClusterResourceId() const{ return m_dbClusterResourceId; }
    inline bool DbClusterResourceIdHasBeenSet() const { return m_dbClusterResourceIdHasBeenSet; }
    inline void SetDbClusterResourceId(const Aws::String& value) { m_dbClusterResourceIdHasBeenSet = true; m_dbClusterResourceId = value; }
    inline void SetDbClusterResourceId(Aws::String&& value) { m_dbClusterResourceIdHasBeenSet = true; m_dbClusterResourceId = std::move(value); }
    inline void SetDbClusterResourceId(const char* value) { m_dbClusterResourceIdHasBeenSet = true; m_dbClusterResourceId.assign(value); }
    inline DBCluster& WithDbClusterResourceId(const Aws::String& value) { SetDbClusterResourceId(value); return *this;}
    inline DBCluster& WithDbClusterResourceId(Aws::String&& value) { SetDbClusterResourceId(std::move(value)); return *this;}
    inline DBCluster& WithDbClusterResourceId(const char* value) { SetDbClusterResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the DB cluster.</p>
     */
    inline const Aws::String& GetDBClusterArn() const{ return m_dBClusterArn; }
    inline bool DBClusterArnHasBeenSet() const { return m_dBClusterArnHasBeenSet; }
    inline void SetDBClusterArn(const Aws::String& value) { m_dBClusterArnHasBeenSet = true; m_dBClusterArn = value; }
    inline void SetDBClusterArn(Aws::String&& value) { m_dBClusterArnHasBeenSet = true; m_dBClusterArn = std::move(value); }
    inline void SetDBClusterArn(const char* value) { m_dBClusterArnHasBeenSet = true; m_dBClusterArn.assign(value); }
    inline DBCluster& WithDBClusterArn(const Aws::String& value) { SetDBClusterArn(value); return *this;}
    inline DBCluster& WithDBClusterArn(Aws::String&& value) { SetDBClusterArn(std::move(value)); return *this;}
    inline DBCluster& WithDBClusterArn(const char* value) { SetDBClusterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides a list of the Amazon Identity and Access Management (IAM) roles that
     * are associated with the DB cluster. IAM roles that are associated with a DB
     * cluster grant permission for the DB cluster to access other Amazon services on
     * your behalf.</p>
     */
    inline const Aws::Vector<DBClusterRole>& GetAssociatedRoles() const{ return m_associatedRoles; }
    inline bool AssociatedRolesHasBeenSet() const { return m_associatedRolesHasBeenSet; }
    inline void SetAssociatedRoles(const Aws::Vector<DBClusterRole>& value) { m_associatedRolesHasBeenSet = true; m_associatedRoles = value; }
    inline void SetAssociatedRoles(Aws::Vector<DBClusterRole>&& value) { m_associatedRolesHasBeenSet = true; m_associatedRoles = std::move(value); }
    inline DBCluster& WithAssociatedRoles(const Aws::Vector<DBClusterRole>& value) { SetAssociatedRoles(value); return *this;}
    inline DBCluster& WithAssociatedRoles(Aws::Vector<DBClusterRole>&& value) { SetAssociatedRoles(std::move(value)); return *this;}
    inline DBCluster& AddAssociatedRoles(const DBClusterRole& value) { m_associatedRolesHasBeenSet = true; m_associatedRoles.push_back(value); return *this; }
    inline DBCluster& AddAssociatedRoles(DBClusterRole&& value) { m_associatedRolesHasBeenSet = true; m_associatedRoles.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>True if mapping of Amazon Identity and Access Management (IAM) accounts to
     * database accounts is enabled, and otherwise false.</p>
     */
    inline bool GetIAMDatabaseAuthenticationEnabled() const{ return m_iAMDatabaseAuthenticationEnabled; }
    inline bool IAMDatabaseAuthenticationEnabledHasBeenSet() const { return m_iAMDatabaseAuthenticationEnabledHasBeenSet; }
    inline void SetIAMDatabaseAuthenticationEnabled(bool value) { m_iAMDatabaseAuthenticationEnabledHasBeenSet = true; m_iAMDatabaseAuthenticationEnabled = value; }
    inline DBCluster& WithIAMDatabaseAuthenticationEnabled(bool value) { SetIAMDatabaseAuthenticationEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the clone group to which the DB cluster is associated.</p>
     */
    inline const Aws::String& GetCloneGroupId() const{ return m_cloneGroupId; }
    inline bool CloneGroupIdHasBeenSet() const { return m_cloneGroupIdHasBeenSet; }
    inline void SetCloneGroupId(const Aws::String& value) { m_cloneGroupIdHasBeenSet = true; m_cloneGroupId = value; }
    inline void SetCloneGroupId(Aws::String&& value) { m_cloneGroupIdHasBeenSet = true; m_cloneGroupId = std::move(value); }
    inline void SetCloneGroupId(const char* value) { m_cloneGroupIdHasBeenSet = true; m_cloneGroupId.assign(value); }
    inline DBCluster& WithCloneGroupId(const Aws::String& value) { SetCloneGroupId(value); return *this;}
    inline DBCluster& WithCloneGroupId(Aws::String&& value) { SetCloneGroupId(std::move(value)); return *this;}
    inline DBCluster& WithCloneGroupId(const char* value) { SetCloneGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the time when the DB cluster was created, in Universal Coordinated
     * Time (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetClusterCreateTime() const{ return m_clusterCreateTime; }
    inline bool ClusterCreateTimeHasBeenSet() const { return m_clusterCreateTimeHasBeenSet; }
    inline void SetClusterCreateTime(const Aws::Utils::DateTime& value) { m_clusterCreateTimeHasBeenSet = true; m_clusterCreateTime = value; }
    inline void SetClusterCreateTime(Aws::Utils::DateTime&& value) { m_clusterCreateTimeHasBeenSet = true; m_clusterCreateTime = std::move(value); }
    inline DBCluster& WithClusterCreateTime(const Aws::Utils::DateTime& value) { SetClusterCreateTime(value); return *this;}
    inline DBCluster& WithClusterCreateTime(Aws::Utils::DateTime&& value) { SetClusterCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <i>If set to <code>true</code>, tags are copied to any snapshot of the DB
     * cluster that is created.</i> </p>
     */
    inline bool GetCopyTagsToSnapshot() const{ return m_copyTagsToSnapshot; }
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
    inline const Aws::Vector<Aws::String>& GetEnabledCloudwatchLogsExports() const{ return m_enabledCloudwatchLogsExports; }
    inline bool EnabledCloudwatchLogsExportsHasBeenSet() const { return m_enabledCloudwatchLogsExportsHasBeenSet; }
    inline void SetEnabledCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { m_enabledCloudwatchLogsExportsHasBeenSet = true; m_enabledCloudwatchLogsExports = value; }
    inline void SetEnabledCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { m_enabledCloudwatchLogsExportsHasBeenSet = true; m_enabledCloudwatchLogsExports = std::move(value); }
    inline DBCluster& WithEnabledCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { SetEnabledCloudwatchLogsExports(value); return *this;}
    inline DBCluster& WithEnabledCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { SetEnabledCloudwatchLogsExports(std::move(value)); return *this;}
    inline DBCluster& AddEnabledCloudwatchLogsExports(const Aws::String& value) { m_enabledCloudwatchLogsExportsHasBeenSet = true; m_enabledCloudwatchLogsExports.push_back(value); return *this; }
    inline DBCluster& AddEnabledCloudwatchLogsExports(Aws::String&& value) { m_enabledCloudwatchLogsExportsHasBeenSet = true; m_enabledCloudwatchLogsExports.push_back(std::move(value)); return *this; }
    inline DBCluster& AddEnabledCloudwatchLogsExports(const char* value) { m_enabledCloudwatchLogsExportsHasBeenSet = true; m_enabledCloudwatchLogsExports.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>This data type is used as a response element in the
     * <code>ModifyDBCluster</code> operation and contains changes that will be applied
     * during the next maintenance window.</p>
     */
    inline const ClusterPendingModifiedValues& GetPendingModifiedValues() const{ return m_pendingModifiedValues; }
    inline bool PendingModifiedValuesHasBeenSet() const { return m_pendingModifiedValuesHasBeenSet; }
    inline void SetPendingModifiedValues(const ClusterPendingModifiedValues& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = value; }
    inline void SetPendingModifiedValues(ClusterPendingModifiedValues&& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = std::move(value); }
    inline DBCluster& WithPendingModifiedValues(const ClusterPendingModifiedValues& value) { SetPendingModifiedValues(value); return *this;}
    inline DBCluster& WithPendingModifiedValues(ClusterPendingModifiedValues&& value) { SetPendingModifiedValues(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether or not the DB cluster has deletion protection enabled. The
     * database can't be deleted when deletion protection is enabled.</p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }
    inline DBCluster& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to <code>true</code>, the DB cluster can be cloned across
     * accounts.</p>
     */
    inline bool GetCrossAccountClone() const{ return m_crossAccountClone; }
    inline bool CrossAccountCloneHasBeenSet() const { return m_crossAccountCloneHasBeenSet; }
    inline void SetCrossAccountClone(bool value) { m_crossAccountCloneHasBeenSet = true; m_crossAccountClone = value; }
    inline DBCluster& WithCrossAccountClone(bool value) { SetCrossAccountClone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time at which the DB cluster will be automatically restarted.</p>
     */
    inline const Aws::Utils::DateTime& GetAutomaticRestartTime() const{ return m_automaticRestartTime; }
    inline bool AutomaticRestartTimeHasBeenSet() const { return m_automaticRestartTimeHasBeenSet; }
    inline void SetAutomaticRestartTime(const Aws::Utils::DateTime& value) { m_automaticRestartTimeHasBeenSet = true; m_automaticRestartTime = value; }
    inline void SetAutomaticRestartTime(Aws::Utils::DateTime&& value) { m_automaticRestartTimeHasBeenSet = true; m_automaticRestartTime = std::move(value); }
    inline DBCluster& WithAutomaticRestartTime(const Aws::Utils::DateTime& value) { SetAutomaticRestartTime(value); return *this;}
    inline DBCluster& WithAutomaticRestartTime(Aws::Utils::DateTime&& value) { SetAutomaticRestartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows the scaling configuration for a Neptune Serverless DB cluster.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/neptune-serverless-using.html">Using
     * Amazon Neptune Serverless</a> in the <i>Amazon Neptune User Guide</i>.</p>
     */
    inline const ServerlessV2ScalingConfigurationInfo& GetServerlessV2ScalingConfiguration() const{ return m_serverlessV2ScalingConfiguration; }
    inline bool ServerlessV2ScalingConfigurationHasBeenSet() const { return m_serverlessV2ScalingConfigurationHasBeenSet; }
    inline void SetServerlessV2ScalingConfiguration(const ServerlessV2ScalingConfigurationInfo& value) { m_serverlessV2ScalingConfigurationHasBeenSet = true; m_serverlessV2ScalingConfiguration = value; }
    inline void SetServerlessV2ScalingConfiguration(ServerlessV2ScalingConfigurationInfo&& value) { m_serverlessV2ScalingConfigurationHasBeenSet = true; m_serverlessV2ScalingConfiguration = std::move(value); }
    inline DBCluster& WithServerlessV2ScalingConfiguration(const ServerlessV2ScalingConfigurationInfo& value) { SetServerlessV2ScalingConfiguration(value); return *this;}
    inline DBCluster& WithServerlessV2ScalingConfiguration(ServerlessV2ScalingConfigurationInfo&& value) { SetServerlessV2ScalingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a user-supplied global database cluster identifier. This identifier
     * is the unique key that identifies a global database.</p>
     */
    inline const Aws::String& GetGlobalClusterIdentifier() const{ return m_globalClusterIdentifier; }
    inline bool GlobalClusterIdentifierHasBeenSet() const { return m_globalClusterIdentifierHasBeenSet; }
    inline void SetGlobalClusterIdentifier(const Aws::String& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = value; }
    inline void SetGlobalClusterIdentifier(Aws::String&& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = std::move(value); }
    inline void SetGlobalClusterIdentifier(const char* value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier.assign(value); }
    inline DBCluster& WithGlobalClusterIdentifier(const Aws::String& value) { SetGlobalClusterIdentifier(value); return *this;}
    inline DBCluster& WithGlobalClusterIdentifier(Aws::String&& value) { SetGlobalClusterIdentifier(std::move(value)); return *this;}
    inline DBCluster& WithGlobalClusterIdentifier(const char* value) { SetGlobalClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next time you can modify the DB cluster to use the <code>iopt1</code>
     * storage type.</p>
     */
    inline const Aws::Utils::DateTime& GetIOOptimizedNextAllowedModificationTime() const{ return m_iOOptimizedNextAllowedModificationTime; }
    inline bool IOOptimizedNextAllowedModificationTimeHasBeenSet() const { return m_iOOptimizedNextAllowedModificationTimeHasBeenSet; }
    inline void SetIOOptimizedNextAllowedModificationTime(const Aws::Utils::DateTime& value) { m_iOOptimizedNextAllowedModificationTimeHasBeenSet = true; m_iOOptimizedNextAllowedModificationTime = value; }
    inline void SetIOOptimizedNextAllowedModificationTime(Aws::Utils::DateTime&& value) { m_iOOptimizedNextAllowedModificationTimeHasBeenSet = true; m_iOOptimizedNextAllowedModificationTime = std::move(value); }
    inline DBCluster& WithIOOptimizedNextAllowedModificationTime(const Aws::Utils::DateTime& value) { SetIOOptimizedNextAllowedModificationTime(value); return *this;}
    inline DBCluster& WithIOOptimizedNextAllowedModificationTime(Aws::Utils::DateTime&& value) { SetIOOptimizedNextAllowedModificationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage type associated with the DB cluster.</p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }
    inline DBCluster& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}
    inline DBCluster& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}
    inline DBCluster& WithStorageType(const char* value) { SetStorageType(value); return *this;}
    ///@}
  private:

    int m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    int m_backupRetentionPeriod;
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

    Aws::Utils::DateTime m_earliestRestorableTime;
    bool m_earliestRestorableTimeHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::String m_readerEndpoint;
    bool m_readerEndpointHasBeenSet = false;

    bool m_multiAZ;
    bool m_multiAZHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::Utils::DateTime m_latestRestorableTime;
    bool m_latestRestorableTimeHasBeenSet = false;

    int m_port;
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

    bool m_storageEncrypted;
    bool m_storageEncryptedHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_dbClusterResourceId;
    bool m_dbClusterResourceIdHasBeenSet = false;

    Aws::String m_dBClusterArn;
    bool m_dBClusterArnHasBeenSet = false;

    Aws::Vector<DBClusterRole> m_associatedRoles;
    bool m_associatedRolesHasBeenSet = false;

    bool m_iAMDatabaseAuthenticationEnabled;
    bool m_iAMDatabaseAuthenticationEnabledHasBeenSet = false;

    Aws::String m_cloneGroupId;
    bool m_cloneGroupIdHasBeenSet = false;

    Aws::Utils::DateTime m_clusterCreateTime;
    bool m_clusterCreateTimeHasBeenSet = false;

    bool m_copyTagsToSnapshot;
    bool m_copyTagsToSnapshotHasBeenSet = false;

    Aws::Vector<Aws::String> m_enabledCloudwatchLogsExports;
    bool m_enabledCloudwatchLogsExportsHasBeenSet = false;

    ClusterPendingModifiedValues m_pendingModifiedValues;
    bool m_pendingModifiedValuesHasBeenSet = false;

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet = false;

    bool m_crossAccountClone;
    bool m_crossAccountCloneHasBeenSet = false;

    Aws::Utils::DateTime m_automaticRestartTime;
    bool m_automaticRestartTimeHasBeenSet = false;

    ServerlessV2ScalingConfigurationInfo m_serverlessV2ScalingConfiguration;
    bool m_serverlessV2ScalingConfigurationHasBeenSet = false;

    Aws::String m_globalClusterIdentifier;
    bool m_globalClusterIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_iOOptimizedNextAllowedModificationTime;
    bool m_iOOptimizedNextAllowedModificationTimeHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
