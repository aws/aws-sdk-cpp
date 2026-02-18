/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/ActivityStreamMode.h>
#include <aws/rds/model/ActivityStreamStatus.h>
#include <aws/rds/model/CertificateDetails.h>
#include <aws/rds/model/ClusterPendingModifiedValues.h>
#include <aws/rds/model/ClusterScalabilityType.h>
#include <aws/rds/model/DBClusterMember.h>
#include <aws/rds/model/DBClusterOptionGroupStatus.h>
#include <aws/rds/model/DBClusterRole.h>
#include <aws/rds/model/DBClusterStatusInfo.h>
#include <aws/rds/model/DatabaseInsightsMode.h>
#include <aws/rds/model/DomainMembership.h>
#include <aws/rds/model/LimitlessDatabase.h>
#include <aws/rds/model/LocalWriteForwardingStatus.h>
#include <aws/rds/model/MasterUserSecret.h>
#include <aws/rds/model/RdsCustomClusterConfiguration.h>
#include <aws/rds/model/ScalingConfigurationInfo.h>
#include <aws/rds/model/ServerlessV2ScalingConfigurationInfo.h>
#include <aws/rds/model/StorageEncryptionType.h>
#include <aws/rds/model/Tag.h>
#include <aws/rds/model/UpgradeRolloutOrder.h>
#include <aws/rds/model/VpcSecurityGroupMembership.h>
#include <aws/rds/model/WriteForwardingStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace RDS {
namespace Model {

/**
 * <p>Contains the details of an Amazon Aurora DB cluster or Multi-AZ DB cluster.
 * </p> <p>For an Amazon Aurora DB cluster, this data type is used as a response
 * element in the operations <code>CreateDBCluster</code>,
 * <code>DeleteDBCluster</code>, <code>DescribeDBClusters</code>,
 * <code>FailoverDBCluster</code>, <code>ModifyDBCluster</code>,
 * <code>PromoteReadReplicaDBCluster</code>, <code>RestoreDBClusterFromS3</code>,
 * <code>RestoreDBClusterFromSnapshot</code>,
 * <code>RestoreDBClusterToPointInTime</code>, <code>StartDBCluster</code>, and
 * <code>StopDBCluster</code>.</p> <p>For a Multi-AZ DB cluster, this data type is
 * used as a response element in the operations <code>CreateDBCluster</code>,
 * <code>DeleteDBCluster</code>, <code>DescribeDBClusters</code>,
 * <code>FailoverDBCluster</code>, <code>ModifyDBCluster</code>,
 * <code>RebootDBCluster</code>, <code>RestoreDBClusterFromSnapshot</code>, and
 * <code>RestoreDBClusterToPointInTime</code>.</p> <p>For more information on
 * Amazon Aurora DB clusters, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
 * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide.</i> </p> <p>For
 * more information on Multi-AZ DB clusters, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html">
 * Multi-AZ deployments with two readable standby DB instances</a> in the <i>Amazon
 * RDS User Guide.</i> </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBCluster">AWS API
 * Reference</a></p>
 */
class DBCluster {
 public:
  AWS_RDS_API DBCluster() = default;
  AWS_RDS_API DBCluster(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_RDS_API DBCluster& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p> <code>AllocatedStorage</code> specifies the allocated storage size in
   * gibibytes (GiB). For Aurora, <code>AllocatedStorage</code> can vary because
   * Aurora DB cluster storage size adjusts as needed.</p>
   */
  inline int GetAllocatedStorage() const { return m_allocatedStorage; }
  inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
  inline void SetAllocatedStorage(int value) {
    m_allocatedStorageHasBeenSet = true;
    m_allocatedStorage = value;
  }
  inline DBCluster& WithAllocatedStorage(int value) {
    SetAllocatedStorage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of Availability Zones (AZs) where instances in the DB cluster can be
   * created.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const { return m_availabilityZones; }
  inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
  template <typename AvailabilityZonesT = Aws::Vector<Aws::String>>
  void SetAvailabilityZones(AvailabilityZonesT&& value) {
    m_availabilityZonesHasBeenSet = true;
    m_availabilityZones = std::forward<AvailabilityZonesT>(value);
  }
  template <typename AvailabilityZonesT = Aws::Vector<Aws::String>>
  DBCluster& WithAvailabilityZones(AvailabilityZonesT&& value) {
    SetAvailabilityZones(std::forward<AvailabilityZonesT>(value));
    return *this;
  }
  template <typename AvailabilityZonesT = Aws::String>
  DBCluster& AddAvailabilityZones(AvailabilityZonesT&& value) {
    m_availabilityZonesHasBeenSet = true;
    m_availabilityZones.emplace_back(std::forward<AvailabilityZonesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of days for which automatic DB snapshots are retained.</p>
   */
  inline int GetBackupRetentionPeriod() const { return m_backupRetentionPeriod; }
  inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }
  inline void SetBackupRetentionPeriod(int value) {
    m_backupRetentionPeriodHasBeenSet = true;
    m_backupRetentionPeriod = value;
  }
  inline DBCluster& WithBackupRetentionPeriod(int value) {
    SetBackupRetentionPeriod(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If present, specifies the name of the character set that this cluster is
   * associated with.</p>
   */
  inline const Aws::String& GetCharacterSetName() const { return m_characterSetName; }
  inline bool CharacterSetNameHasBeenSet() const { return m_characterSetNameHasBeenSet; }
  template <typename CharacterSetNameT = Aws::String>
  void SetCharacterSetName(CharacterSetNameT&& value) {
    m_characterSetNameHasBeenSet = true;
    m_characterSetName = std::forward<CharacterSetNameT>(value);
  }
  template <typename CharacterSetNameT = Aws::String>
  DBCluster& WithCharacterSetName(CharacterSetNameT&& value) {
    SetCharacterSetName(std::forward<CharacterSetNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the initial database that was specified for the DB cluster when
   * it was created, if one was provided. This same name is returned for the life of
   * the DB cluster.</p>
   */
  inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
  inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
  template <typename DatabaseNameT = Aws::String>
  void SetDatabaseName(DatabaseNameT&& value) {
    m_databaseNameHasBeenSet = true;
    m_databaseName = std::forward<DatabaseNameT>(value);
  }
  template <typename DatabaseNameT = Aws::String>
  DBCluster& WithDatabaseName(DatabaseNameT&& value) {
    SetDatabaseName(std::forward<DatabaseNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user-supplied identifier for the DB cluster. This identifier is the
   * unique key that identifies a DB cluster.</p>
   */
  inline const Aws::String& GetDBClusterIdentifier() const { return m_dBClusterIdentifier; }
  inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }
  template <typename DBClusterIdentifierT = Aws::String>
  void SetDBClusterIdentifier(DBClusterIdentifierT&& value) {
    m_dBClusterIdentifierHasBeenSet = true;
    m_dBClusterIdentifier = std::forward<DBClusterIdentifierT>(value);
  }
  template <typename DBClusterIdentifierT = Aws::String>
  DBCluster& WithDBClusterIdentifier(DBClusterIdentifierT&& value) {
    SetDBClusterIdentifier(std::forward<DBClusterIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the DB cluster parameter group for the DB cluster.</p>
   */
  inline const Aws::String& GetDBClusterParameterGroup() const { return m_dBClusterParameterGroup; }
  inline bool DBClusterParameterGroupHasBeenSet() const { return m_dBClusterParameterGroupHasBeenSet; }
  template <typename DBClusterParameterGroupT = Aws::String>
  void SetDBClusterParameterGroup(DBClusterParameterGroupT&& value) {
    m_dBClusterParameterGroupHasBeenSet = true;
    m_dBClusterParameterGroup = std::forward<DBClusterParameterGroupT>(value);
  }
  template <typename DBClusterParameterGroupT = Aws::String>
  DBCluster& WithDBClusterParameterGroup(DBClusterParameterGroupT&& value) {
    SetDBClusterParameterGroup(std::forward<DBClusterParameterGroupT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about the subnet group associated with the DB cluster, including
   * the name, description, and subnets in the subnet group.</p>
   */
  inline const Aws::String& GetDBSubnetGroup() const { return m_dBSubnetGroup; }
  inline bool DBSubnetGroupHasBeenSet() const { return m_dBSubnetGroupHasBeenSet; }
  template <typename DBSubnetGroupT = Aws::String>
  void SetDBSubnetGroup(DBSubnetGroupT&& value) {
    m_dBSubnetGroupHasBeenSet = true;
    m_dBSubnetGroup = std::forward<DBSubnetGroupT>(value);
  }
  template <typename DBSubnetGroupT = Aws::String>
  DBCluster& WithDBSubnetGroup(DBSubnetGroupT&& value) {
    SetDBSubnetGroup(std::forward<DBSubnetGroupT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of this DB cluster.</p>
   */
  inline const Aws::String& GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  template <typename StatusT = Aws::String>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = Aws::String>
  DBCluster& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The progress of the operation as a percentage.</p>
   */
  inline const Aws::String& GetPercentProgress() const { return m_percentProgress; }
  inline bool PercentProgressHasBeenSet() const { return m_percentProgressHasBeenSet; }
  template <typename PercentProgressT = Aws::String>
  void SetPercentProgress(PercentProgressT&& value) {
    m_percentProgressHasBeenSet = true;
    m_percentProgress = std::forward<PercentProgressT>(value);
  }
  template <typename PercentProgressT = Aws::String>
  DBCluster& WithPercentProgress(PercentProgressT&& value) {
    SetPercentProgress(std::forward<PercentProgressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The earliest time to which a database can be restored with point-in-time
   * restore.</p>
   */
  inline const Aws::Utils::DateTime& GetEarliestRestorableTime() const { return m_earliestRestorableTime; }
  inline bool EarliestRestorableTimeHasBeenSet() const { return m_earliestRestorableTimeHasBeenSet; }
  template <typename EarliestRestorableTimeT = Aws::Utils::DateTime>
  void SetEarliestRestorableTime(EarliestRestorableTimeT&& value) {
    m_earliestRestorableTimeHasBeenSet = true;
    m_earliestRestorableTime = std::forward<EarliestRestorableTimeT>(value);
  }
  template <typename EarliestRestorableTimeT = Aws::Utils::DateTime>
  DBCluster& WithEarliestRestorableTime(EarliestRestorableTimeT&& value) {
    SetEarliestRestorableTime(std::forward<EarliestRestorableTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The connection endpoint for the primary instance of the DB cluster.</p>
   */
  inline const Aws::String& GetEndpoint() const { return m_endpoint; }
  inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
  template <typename EndpointT = Aws::String>
  void SetEndpoint(EndpointT&& value) {
    m_endpointHasBeenSet = true;
    m_endpoint = std::forward<EndpointT>(value);
  }
  template <typename EndpointT = Aws::String>
  DBCluster& WithEndpoint(EndpointT&& value) {
    SetEndpoint(std::forward<EndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reader endpoint for the DB cluster. The reader endpoint for a DB cluster
   * load-balances connections across the Aurora Replicas that are available in a DB
   * cluster. As clients request new connections to the reader endpoint, Aurora
   * distributes the connection requests among the Aurora Replicas in the DB cluster.
   * This functionality can help balance your read workload across multiple Aurora
   * Replicas in your DB cluster.</p> <p>If a failover occurs, and the Aurora Replica
   * that you are connected to is promoted to be the primary instance, your
   * connection is dropped. To continue sending your read workload to other Aurora
   * Replicas in the cluster, you can then reconnect to the reader endpoint.</p>
   */
  inline const Aws::String& GetReaderEndpoint() const { return m_readerEndpoint; }
  inline bool ReaderEndpointHasBeenSet() const { return m_readerEndpointHasBeenSet; }
  template <typename ReaderEndpointT = Aws::String>
  void SetReaderEndpoint(ReaderEndpointT&& value) {
    m_readerEndpointHasBeenSet = true;
    m_readerEndpoint = std::forward<ReaderEndpointT>(value);
  }
  template <typename ReaderEndpointT = Aws::String>
  DBCluster& WithReaderEndpoint(ReaderEndpointT&& value) {
    SetReaderEndpoint(std::forward<ReaderEndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The custom endpoints associated with the DB cluster.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCustomEndpoints() const { return m_customEndpoints; }
  inline bool CustomEndpointsHasBeenSet() const { return m_customEndpointsHasBeenSet; }
  template <typename CustomEndpointsT = Aws::Vector<Aws::String>>
  void SetCustomEndpoints(CustomEndpointsT&& value) {
    m_customEndpointsHasBeenSet = true;
    m_customEndpoints = std::forward<CustomEndpointsT>(value);
  }
  template <typename CustomEndpointsT = Aws::Vector<Aws::String>>
  DBCluster& WithCustomEndpoints(CustomEndpointsT&& value) {
    SetCustomEndpoints(std::forward<CustomEndpointsT>(value));
    return *this;
  }
  template <typename CustomEndpointsT = Aws::String>
  DBCluster& AddCustomEndpoints(CustomEndpointsT&& value) {
    m_customEndpointsHasBeenSet = true;
    m_customEndpoints.emplace_back(std::forward<CustomEndpointsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the DB cluster has instances in multiple Availability
   * Zones.</p>
   */
  inline bool GetMultiAZ() const { return m_multiAZ; }
  inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }
  inline void SetMultiAZ(bool value) {
    m_multiAZHasBeenSet = true;
    m_multiAZ = value;
  }
  inline DBCluster& WithMultiAZ(bool value) {
    SetMultiAZ(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The database engine used for this DB cluster.</p>
   */
  inline const Aws::String& GetEngine() const { return m_engine; }
  inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
  template <typename EngineT = Aws::String>
  void SetEngine(EngineT&& value) {
    m_engineHasBeenSet = true;
    m_engine = std::forward<EngineT>(value);
  }
  template <typename EngineT = Aws::String>
  DBCluster& WithEngine(EngineT&& value) {
    SetEngine(std::forward<EngineT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the database engine.</p>
   */
  inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
  inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
  template <typename EngineVersionT = Aws::String>
  void SetEngineVersion(EngineVersionT&& value) {
    m_engineVersionHasBeenSet = true;
    m_engineVersion = std::forward<EngineVersionT>(value);
  }
  template <typename EngineVersionT = Aws::String>
  DBCluster& WithEngineVersion(EngineVersionT&& value) {
    SetEngineVersion(std::forward<EngineVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The latest time to which a database can be restored with point-in-time
   * restore.</p>
   */
  inline const Aws::Utils::DateTime& GetLatestRestorableTime() const { return m_latestRestorableTime; }
  inline bool LatestRestorableTimeHasBeenSet() const { return m_latestRestorableTimeHasBeenSet; }
  template <typename LatestRestorableTimeT = Aws::Utils::DateTime>
  void SetLatestRestorableTime(LatestRestorableTimeT&& value) {
    m_latestRestorableTimeHasBeenSet = true;
    m_latestRestorableTime = std::forward<LatestRestorableTimeT>(value);
  }
  template <typename LatestRestorableTimeT = Aws::Utils::DateTime>
  DBCluster& WithLatestRestorableTime(LatestRestorableTimeT&& value) {
    SetLatestRestorableTime(std::forward<LatestRestorableTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The port that the database engine is listening on.</p>
   */
  inline int GetPort() const { return m_port; }
  inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
  inline void SetPort(int value) {
    m_portHasBeenSet = true;
    m_port = value;
  }
  inline DBCluster& WithPort(int value) {
    SetPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The master username for the DB cluster.</p>
   */
  inline const Aws::String& GetMasterUsername() const { return m_masterUsername; }
  inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }
  template <typename MasterUsernameT = Aws::String>
  void SetMasterUsername(MasterUsernameT&& value) {
    m_masterUsernameHasBeenSet = true;
    m_masterUsername = std::forward<MasterUsernameT>(value);
  }
  template <typename MasterUsernameT = Aws::String>
  DBCluster& WithMasterUsername(MasterUsernameT&& value) {
    SetMasterUsername(std::forward<MasterUsernameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of option group memberships for this DB cluster.</p>
   */
  inline const Aws::Vector<DBClusterOptionGroupStatus>& GetDBClusterOptionGroupMemberships() const {
    return m_dBClusterOptionGroupMemberships;
  }
  inline bool DBClusterOptionGroupMembershipsHasBeenSet() const { return m_dBClusterOptionGroupMembershipsHasBeenSet; }
  template <typename DBClusterOptionGroupMembershipsT = Aws::Vector<DBClusterOptionGroupStatus>>
  void SetDBClusterOptionGroupMemberships(DBClusterOptionGroupMembershipsT&& value) {
    m_dBClusterOptionGroupMembershipsHasBeenSet = true;
    m_dBClusterOptionGroupMemberships = std::forward<DBClusterOptionGroupMembershipsT>(value);
  }
  template <typename DBClusterOptionGroupMembershipsT = Aws::Vector<DBClusterOptionGroupStatus>>
  DBCluster& WithDBClusterOptionGroupMemberships(DBClusterOptionGroupMembershipsT&& value) {
    SetDBClusterOptionGroupMemberships(std::forward<DBClusterOptionGroupMembershipsT>(value));
    return *this;
  }
  template <typename DBClusterOptionGroupMembershipsT = DBClusterOptionGroupStatus>
  DBCluster& AddDBClusterOptionGroupMemberships(DBClusterOptionGroupMembershipsT&& value) {
    m_dBClusterOptionGroupMembershipsHasBeenSet = true;
    m_dBClusterOptionGroupMemberships.emplace_back(std::forward<DBClusterOptionGroupMembershipsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The daily time range during which automated backups are created if automated
   * backups are enabled, as determined by the
   * <code>BackupRetentionPeriod</code>.</p>
   */
  inline const Aws::String& GetPreferredBackupWindow() const { return m_preferredBackupWindow; }
  inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }
  template <typename PreferredBackupWindowT = Aws::String>
  void SetPreferredBackupWindow(PreferredBackupWindowT&& value) {
    m_preferredBackupWindowHasBeenSet = true;
    m_preferredBackupWindow = std::forward<PreferredBackupWindowT>(value);
  }
  template <typename PreferredBackupWindowT = Aws::String>
  DBCluster& WithPreferredBackupWindow(PreferredBackupWindowT&& value) {
    SetPreferredBackupWindow(std::forward<PreferredBackupWindowT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The weekly time range during which system maintenance can occur, in Universal
   * Coordinated Time (UTC).</p>
   */
  inline const Aws::String& GetPreferredMaintenanceWindow() const { return m_preferredMaintenanceWindow; }
  inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
  template <typename PreferredMaintenanceWindowT = Aws::String>
  void SetPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) {
    m_preferredMaintenanceWindowHasBeenSet = true;
    m_preferredMaintenanceWindow = std::forward<PreferredMaintenanceWindowT>(value);
  }
  template <typename PreferredMaintenanceWindowT = Aws::String>
  DBCluster& WithPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) {
    SetPreferredMaintenanceWindow(std::forward<PreferredMaintenanceWindowT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>This data type represents the order in which the clusters are upgraded.</p>
   * <ul> <li> <p>[first] - Typically used for development or testing
   * environments.</p> </li> <li> <p>[second] - Default order for resources not
   * specifically configured.</p> </li> <li> <p>[last] - Usually reserved for
   * production environments.</p> </li> </ul>
   */
  inline UpgradeRolloutOrder GetUpgradeRolloutOrder() const { return m_upgradeRolloutOrder; }
  inline bool UpgradeRolloutOrderHasBeenSet() const { return m_upgradeRolloutOrderHasBeenSet; }
  inline void SetUpgradeRolloutOrder(UpgradeRolloutOrder value) {
    m_upgradeRolloutOrderHasBeenSet = true;
    m_upgradeRolloutOrder = value;
  }
  inline DBCluster& WithUpgradeRolloutOrder(UpgradeRolloutOrder value) {
    SetUpgradeRolloutOrder(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the source DB cluster if this DB cluster is a read
   * replica.</p>
   */
  inline const Aws::String& GetReplicationSourceIdentifier() const { return m_replicationSourceIdentifier; }
  inline bool ReplicationSourceIdentifierHasBeenSet() const { return m_replicationSourceIdentifierHasBeenSet; }
  template <typename ReplicationSourceIdentifierT = Aws::String>
  void SetReplicationSourceIdentifier(ReplicationSourceIdentifierT&& value) {
    m_replicationSourceIdentifierHasBeenSet = true;
    m_replicationSourceIdentifier = std::forward<ReplicationSourceIdentifierT>(value);
  }
  template <typename ReplicationSourceIdentifierT = Aws::String>
  DBCluster& WithReplicationSourceIdentifier(ReplicationSourceIdentifierT&& value) {
    SetReplicationSourceIdentifier(std::forward<ReplicationSourceIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains one or more identifiers of the read replicas associated with this DB
   * cluster.</p>
   */
  inline const Aws::Vector<Aws::String>& GetReadReplicaIdentifiers() const { return m_readReplicaIdentifiers; }
  inline bool ReadReplicaIdentifiersHasBeenSet() const { return m_readReplicaIdentifiersHasBeenSet; }
  template <typename ReadReplicaIdentifiersT = Aws::Vector<Aws::String>>
  void SetReadReplicaIdentifiers(ReadReplicaIdentifiersT&& value) {
    m_readReplicaIdentifiersHasBeenSet = true;
    m_readReplicaIdentifiers = std::forward<ReadReplicaIdentifiersT>(value);
  }
  template <typename ReadReplicaIdentifiersT = Aws::Vector<Aws::String>>
  DBCluster& WithReadReplicaIdentifiers(ReadReplicaIdentifiersT&& value) {
    SetReadReplicaIdentifiers(std::forward<ReadReplicaIdentifiersT>(value));
    return *this;
  }
  template <typename ReadReplicaIdentifiersT = Aws::String>
  DBCluster& AddReadReplicaIdentifiers(ReadReplicaIdentifiersT&& value) {
    m_readReplicaIdentifiersHasBeenSet = true;
    m_readReplicaIdentifiers.emplace_back(std::forward<ReadReplicaIdentifiersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Reserved for future use.</p>
   */
  inline const Aws::Vector<DBClusterStatusInfo>& GetStatusInfos() const { return m_statusInfos; }
  inline bool StatusInfosHasBeenSet() const { return m_statusInfosHasBeenSet; }
  template <typename StatusInfosT = Aws::Vector<DBClusterStatusInfo>>
  void SetStatusInfos(StatusInfosT&& value) {
    m_statusInfosHasBeenSet = true;
    m_statusInfos = std::forward<StatusInfosT>(value);
  }
  template <typename StatusInfosT = Aws::Vector<DBClusterStatusInfo>>
  DBCluster& WithStatusInfos(StatusInfosT&& value) {
    SetStatusInfos(std::forward<StatusInfosT>(value));
    return *this;
  }
  template <typename StatusInfosT = DBClusterStatusInfo>
  DBCluster& AddStatusInfos(StatusInfosT&& value) {
    m_statusInfosHasBeenSet = true;
    m_statusInfos.emplace_back(std::forward<StatusInfosT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of DB instances that make up the DB cluster.</p>
   */
  inline const Aws::Vector<DBClusterMember>& GetDBClusterMembers() const { return m_dBClusterMembers; }
  inline bool DBClusterMembersHasBeenSet() const { return m_dBClusterMembersHasBeenSet; }
  template <typename DBClusterMembersT = Aws::Vector<DBClusterMember>>
  void SetDBClusterMembers(DBClusterMembersT&& value) {
    m_dBClusterMembersHasBeenSet = true;
    m_dBClusterMembers = std::forward<DBClusterMembersT>(value);
  }
  template <typename DBClusterMembersT = Aws::Vector<DBClusterMember>>
  DBCluster& WithDBClusterMembers(DBClusterMembersT&& value) {
    SetDBClusterMembers(std::forward<DBClusterMembersT>(value));
    return *this;
  }
  template <typename DBClusterMembersT = DBClusterMember>
  DBCluster& AddDBClusterMembers(DBClusterMembersT&& value) {
    m_dBClusterMembersHasBeenSet = true;
    m_dBClusterMembers.emplace_back(std::forward<DBClusterMembersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of VPC security groups that the DB cluster belongs to.</p>
   */
  inline const Aws::Vector<VpcSecurityGroupMembership>& GetVpcSecurityGroups() const { return m_vpcSecurityGroups; }
  inline bool VpcSecurityGroupsHasBeenSet() const { return m_vpcSecurityGroupsHasBeenSet; }
  template <typename VpcSecurityGroupsT = Aws::Vector<VpcSecurityGroupMembership>>
  void SetVpcSecurityGroups(VpcSecurityGroupsT&& value) {
    m_vpcSecurityGroupsHasBeenSet = true;
    m_vpcSecurityGroups = std::forward<VpcSecurityGroupsT>(value);
  }
  template <typename VpcSecurityGroupsT = Aws::Vector<VpcSecurityGroupMembership>>
  DBCluster& WithVpcSecurityGroups(VpcSecurityGroupsT&& value) {
    SetVpcSecurityGroups(std::forward<VpcSecurityGroupsT>(value));
    return *this;
  }
  template <typename VpcSecurityGroupsT = VpcSecurityGroupMembership>
  DBCluster& AddVpcSecurityGroups(VpcSecurityGroupsT&& value) {
    m_vpcSecurityGroupsHasBeenSet = true;
    m_vpcSecurityGroups.emplace_back(std::forward<VpcSecurityGroupsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID that Amazon Route 53 assigns when you create a hosted zone.</p>
   */
  inline const Aws::String& GetHostedZoneId() const { return m_hostedZoneId; }
  inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }
  template <typename HostedZoneIdT = Aws::String>
  void SetHostedZoneId(HostedZoneIdT&& value) {
    m_hostedZoneIdHasBeenSet = true;
    m_hostedZoneId = std::forward<HostedZoneIdT>(value);
  }
  template <typename HostedZoneIdT = Aws::String>
  DBCluster& WithHostedZoneId(HostedZoneIdT&& value) {
    SetHostedZoneId(std::forward<HostedZoneIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the DB cluster is encrypted.</p>
   */
  inline bool GetStorageEncrypted() const { return m_storageEncrypted; }
  inline bool StorageEncryptedHasBeenSet() const { return m_storageEncryptedHasBeenSet; }
  inline void SetStorageEncrypted(bool value) {
    m_storageEncryptedHasBeenSet = true;
    m_storageEncrypted = value;
  }
  inline DBCluster& WithStorageEncrypted(bool value) {
    SetStorageEncrypted(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of encryption used to protect data at rest in the DB cluster.
   * Possible values:</p> <ul> <li> <p> <code>none</code> - The DB cluster is not
   * encrypted.</p> </li> <li> <p> <code>sse-rds</code> - The DB cluster is encrypted
   * using an Amazon Web Services owned KMS key.</p> </li> <li> <p>
   * <code>sse-kms</code> - The DB cluster is encrypted using a customer managed KMS
   * key or Amazon Web Services managed KMS key.</p> </li> </ul>
   */
  inline StorageEncryptionType GetStorageEncryptionType() const { return m_storageEncryptionType; }
  inline bool StorageEncryptionTypeHasBeenSet() const { return m_storageEncryptionTypeHasBeenSet; }
  inline void SetStorageEncryptionType(StorageEncryptionType value) {
    m_storageEncryptionTypeHasBeenSet = true;
    m_storageEncryptionType = value;
  }
  inline DBCluster& WithStorageEncryptionType(StorageEncryptionType value) {
    SetStorageEncryptionType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If <code>StorageEncrypted</code> is enabled, the Amazon Web Services KMS key
   * identifier for the encrypted DB cluster.</p> <p>The Amazon Web Services KMS key
   * identifier is the key ARN, key ID, alias ARN, or alias name for the KMS key.</p>
   */
  inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
  inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
  template <typename KmsKeyIdT = Aws::String>
  void SetKmsKeyId(KmsKeyIdT&& value) {
    m_kmsKeyIdHasBeenSet = true;
    m_kmsKeyId = std::forward<KmsKeyIdT>(value);
  }
  template <typename KmsKeyIdT = Aws::String>
  DBCluster& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Region-unique, immutable identifier for the DB
   * cluster. This identifier is found in Amazon Web Services CloudTrail log entries
   * whenever the KMS key for the DB cluster is accessed.</p>
   */
  inline const Aws::String& GetDbClusterResourceId() const { return m_dbClusterResourceId; }
  inline bool DbClusterResourceIdHasBeenSet() const { return m_dbClusterResourceIdHasBeenSet; }
  template <typename DbClusterResourceIdT = Aws::String>
  void SetDbClusterResourceId(DbClusterResourceIdT&& value) {
    m_dbClusterResourceIdHasBeenSet = true;
    m_dbClusterResourceId = std::forward<DbClusterResourceIdT>(value);
  }
  template <typename DbClusterResourceIdT = Aws::String>
  DBCluster& WithDbClusterResourceId(DbClusterResourceIdT&& value) {
    SetDbClusterResourceId(std::forward<DbClusterResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) for the DB cluster.</p>
   */
  inline const Aws::String& GetDBClusterArn() const { return m_dBClusterArn; }
  inline bool DBClusterArnHasBeenSet() const { return m_dBClusterArnHasBeenSet; }
  template <typename DBClusterArnT = Aws::String>
  void SetDBClusterArn(DBClusterArnT&& value) {
    m_dBClusterArnHasBeenSet = true;
    m_dBClusterArn = std::forward<DBClusterArnT>(value);
  }
  template <typename DBClusterArnT = Aws::String>
  DBCluster& WithDBClusterArn(DBClusterArnT&& value) {
    SetDBClusterArn(std::forward<DBClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of the Amazon Web Services Identity and Access Management (IAM) roles
   * that are associated with the DB cluster. IAM roles that are associated with a DB
   * cluster grant permission for the DB cluster to access other Amazon Web Services
   * on your behalf.</p>
   */
  inline const Aws::Vector<DBClusterRole>& GetAssociatedRoles() const { return m_associatedRoles; }
  inline bool AssociatedRolesHasBeenSet() const { return m_associatedRolesHasBeenSet; }
  template <typename AssociatedRolesT = Aws::Vector<DBClusterRole>>
  void SetAssociatedRoles(AssociatedRolesT&& value) {
    m_associatedRolesHasBeenSet = true;
    m_associatedRoles = std::forward<AssociatedRolesT>(value);
  }
  template <typename AssociatedRolesT = Aws::Vector<DBClusterRole>>
  DBCluster& WithAssociatedRoles(AssociatedRolesT&& value) {
    SetAssociatedRoles(std::forward<AssociatedRolesT>(value));
    return *this;
  }
  template <typename AssociatedRolesT = DBClusterRole>
  DBCluster& AddAssociatedRoles(AssociatedRolesT&& value) {
    m_associatedRolesHasBeenSet = true;
    m_associatedRoles.emplace_back(std::forward<AssociatedRolesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the mapping of Amazon Web Services Identity and Access
   * Management (IAM) accounts to database accounts is enabled.</p>
   */
  inline bool GetIAMDatabaseAuthenticationEnabled() const { return m_iAMDatabaseAuthenticationEnabled; }
  inline bool IAMDatabaseAuthenticationEnabledHasBeenSet() const { return m_iAMDatabaseAuthenticationEnabledHasBeenSet; }
  inline void SetIAMDatabaseAuthenticationEnabled(bool value) {
    m_iAMDatabaseAuthenticationEnabledHasBeenSet = true;
    m_iAMDatabaseAuthenticationEnabled = value;
  }
  inline DBCluster& WithIAMDatabaseAuthenticationEnabled(bool value) {
    SetIAMDatabaseAuthenticationEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the clone group with which the DB cluster is associated. For newly
   * created clusters, the ID is typically null. </p> <p>If you clone a DB cluster
   * when the ID is null, the operation populates the ID value for the source cluster
   * and the clone because both clusters become part of the same clone group. Even if
   * you delete the clone cluster, the clone group ID remains for the lifetime of the
   * source cluster to show that it was used in a cloning operation.</p> <p>For PITR,
   * the clone group ID is inherited from the source cluster. For snapshot restore
   * operations, the clone group ID isn't inherited from the source cluster.</p>
   */
  inline const Aws::String& GetCloneGroupId() const { return m_cloneGroupId; }
  inline bool CloneGroupIdHasBeenSet() const { return m_cloneGroupIdHasBeenSet; }
  template <typename CloneGroupIdT = Aws::String>
  void SetCloneGroupId(CloneGroupIdT&& value) {
    m_cloneGroupIdHasBeenSet = true;
    m_cloneGroupId = std::forward<CloneGroupIdT>(value);
  }
  template <typename CloneGroupIdT = Aws::String>
  DBCluster& WithCloneGroupId(CloneGroupIdT&& value) {
    SetCloneGroupId(std::forward<CloneGroupIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the DB cluster was created, in Universal Coordinated Time
   * (UTC).</p>
   */
  inline const Aws::Utils::DateTime& GetClusterCreateTime() const { return m_clusterCreateTime; }
  inline bool ClusterCreateTimeHasBeenSet() const { return m_clusterCreateTimeHasBeenSet; }
  template <typename ClusterCreateTimeT = Aws::Utils::DateTime>
  void SetClusterCreateTime(ClusterCreateTimeT&& value) {
    m_clusterCreateTimeHasBeenSet = true;
    m_clusterCreateTime = std::forward<ClusterCreateTimeT>(value);
  }
  template <typename ClusterCreateTimeT = Aws::Utils::DateTime>
  DBCluster& WithClusterCreateTime(ClusterCreateTimeT&& value) {
    SetClusterCreateTime(std::forward<ClusterCreateTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The earliest time to which a DB cluster can be backtracked.</p>
   */
  inline const Aws::Utils::DateTime& GetEarliestBacktrackTime() const { return m_earliestBacktrackTime; }
  inline bool EarliestBacktrackTimeHasBeenSet() const { return m_earliestBacktrackTimeHasBeenSet; }
  template <typename EarliestBacktrackTimeT = Aws::Utils::DateTime>
  void SetEarliestBacktrackTime(EarliestBacktrackTimeT&& value) {
    m_earliestBacktrackTimeHasBeenSet = true;
    m_earliestBacktrackTime = std::forward<EarliestBacktrackTimeT>(value);
  }
  template <typename EarliestBacktrackTimeT = Aws::Utils::DateTime>
  DBCluster& WithEarliestBacktrackTime(EarliestBacktrackTimeT&& value) {
    SetEarliestBacktrackTime(std::forward<EarliestBacktrackTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target backtrack window, in seconds. If this value is set to
   * <code>0</code>, backtracking is disabled for the DB cluster. Otherwise,
   * backtracking is enabled.</p>
   */
  inline long long GetBacktrackWindow() const { return m_backtrackWindow; }
  inline bool BacktrackWindowHasBeenSet() const { return m_backtrackWindowHasBeenSet; }
  inline void SetBacktrackWindow(long long value) {
    m_backtrackWindowHasBeenSet = true;
    m_backtrackWindow = value;
  }
  inline DBCluster& WithBacktrackWindow(long long value) {
    SetBacktrackWindow(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of change records stored for Backtrack.</p>
   */
  inline long long GetBacktrackConsumedChangeRecords() const { return m_backtrackConsumedChangeRecords; }
  inline bool BacktrackConsumedChangeRecordsHasBeenSet() const { return m_backtrackConsumedChangeRecordsHasBeenSet; }
  inline void SetBacktrackConsumedChangeRecords(long long value) {
    m_backtrackConsumedChangeRecordsHasBeenSet = true;
    m_backtrackConsumedChangeRecords = value;
  }
  inline DBCluster& WithBacktrackConsumedChangeRecords(long long value) {
    SetBacktrackConsumedChangeRecords(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of log types that this DB cluster is configured to export to
   * CloudWatch Logs.</p> <p>Log types vary by DB engine. For information about the
   * log types for each DB engine, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html">Amazon
   * RDS Database Log Files</a> in the <i>Amazon Aurora User Guide.</i> </p>
   */
  inline const Aws::Vector<Aws::String>& GetEnabledCloudwatchLogsExports() const { return m_enabledCloudwatchLogsExports; }
  inline bool EnabledCloudwatchLogsExportsHasBeenSet() const { return m_enabledCloudwatchLogsExportsHasBeenSet; }
  template <typename EnabledCloudwatchLogsExportsT = Aws::Vector<Aws::String>>
  void SetEnabledCloudwatchLogsExports(EnabledCloudwatchLogsExportsT&& value) {
    m_enabledCloudwatchLogsExportsHasBeenSet = true;
    m_enabledCloudwatchLogsExports = std::forward<EnabledCloudwatchLogsExportsT>(value);
  }
  template <typename EnabledCloudwatchLogsExportsT = Aws::Vector<Aws::String>>
  DBCluster& WithEnabledCloudwatchLogsExports(EnabledCloudwatchLogsExportsT&& value) {
    SetEnabledCloudwatchLogsExports(std::forward<EnabledCloudwatchLogsExportsT>(value));
    return *this;
  }
  template <typename EnabledCloudwatchLogsExportsT = Aws::String>
  DBCluster& AddEnabledCloudwatchLogsExports(EnabledCloudwatchLogsExportsT&& value) {
    m_enabledCloudwatchLogsExportsHasBeenSet = true;
    m_enabledCloudwatchLogsExports.emplace_back(std::forward<EnabledCloudwatchLogsExportsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current capacity of an Aurora Serverless v1 DB cluster. The capacity is
   * <code>0</code> (zero) when the cluster is paused.</p> <p>For more information
   * about Aurora Serverless v1, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless.html">Using
   * Amazon Aurora Serverless v1</a> in the <i>Amazon Aurora User Guide</i>.</p>
   */
  inline int GetCapacity() const { return m_capacity; }
  inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }
  inline void SetCapacity(int value) {
    m_capacityHasBeenSet = true;
    m_capacity = value;
  }
  inline DBCluster& WithCapacity(int value) {
    SetCapacity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about pending changes to the DB cluster. This information is
   * returned only when there are pending changes. Specific changes are identified by
   * subelements.</p>
   */
  inline const ClusterPendingModifiedValues& GetPendingModifiedValues() const { return m_pendingModifiedValues; }
  inline bool PendingModifiedValuesHasBeenSet() const { return m_pendingModifiedValuesHasBeenSet; }
  template <typename PendingModifiedValuesT = ClusterPendingModifiedValues>
  void SetPendingModifiedValues(PendingModifiedValuesT&& value) {
    m_pendingModifiedValuesHasBeenSet = true;
    m_pendingModifiedValues = std::forward<PendingModifiedValuesT>(value);
  }
  template <typename PendingModifiedValuesT = ClusterPendingModifiedValues>
  DBCluster& WithPendingModifiedValues(PendingModifiedValuesT&& value) {
    SetPendingModifiedValues(std::forward<PendingModifiedValuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The DB engine mode of the DB cluster, either <code>provisioned</code> or
   * <code>serverless</code>.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_CreateDBCluster.html">
   * CreateDBCluster</a>.</p>
   */
  inline const Aws::String& GetEngineMode() const { return m_engineMode; }
  inline bool EngineModeHasBeenSet() const { return m_engineModeHasBeenSet; }
  template <typename EngineModeT = Aws::String>
  void SetEngineMode(EngineModeT&& value) {
    m_engineModeHasBeenSet = true;
    m_engineMode = std::forward<EngineModeT>(value);
  }
  template <typename EngineModeT = Aws::String>
  DBCluster& WithEngineMode(EngineModeT&& value) {
    SetEngineMode(std::forward<EngineModeT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ScalingConfigurationInfo& GetScalingConfigurationInfo() const { return m_scalingConfigurationInfo; }
  inline bool ScalingConfigurationInfoHasBeenSet() const { return m_scalingConfigurationInfoHasBeenSet; }
  template <typename ScalingConfigurationInfoT = ScalingConfigurationInfo>
  void SetScalingConfigurationInfo(ScalingConfigurationInfoT&& value) {
    m_scalingConfigurationInfoHasBeenSet = true;
    m_scalingConfigurationInfo = std::forward<ScalingConfigurationInfoT>(value);
  }
  template <typename ScalingConfigurationInfoT = ScalingConfigurationInfo>
  DBCluster& WithScalingConfigurationInfo(ScalingConfigurationInfoT&& value) {
    SetScalingConfigurationInfo(std::forward<ScalingConfigurationInfoT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Reserved for future use.</p>
   */
  inline const RdsCustomClusterConfiguration& GetRdsCustomClusterConfiguration() const { return m_rdsCustomClusterConfiguration; }
  inline bool RdsCustomClusterConfigurationHasBeenSet() const { return m_rdsCustomClusterConfigurationHasBeenSet; }
  template <typename RdsCustomClusterConfigurationT = RdsCustomClusterConfiguration>
  void SetRdsCustomClusterConfiguration(RdsCustomClusterConfigurationT&& value) {
    m_rdsCustomClusterConfigurationHasBeenSet = true;
    m_rdsCustomClusterConfiguration = std::forward<RdsCustomClusterConfigurationT>(value);
  }
  template <typename RdsCustomClusterConfigurationT = RdsCustomClusterConfiguration>
  DBCluster& WithRdsCustomClusterConfiguration(RdsCustomClusterConfigurationT&& value) {
    SetRdsCustomClusterConfiguration(std::forward<RdsCustomClusterConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the compute and memory capacity class of the DB instance.</p>
   * <p>This setting is only for non-Aurora Multi-AZ DB clusters.</p>
   */
  inline const Aws::String& GetDBClusterInstanceClass() const { return m_dBClusterInstanceClass; }
  inline bool DBClusterInstanceClassHasBeenSet() const { return m_dBClusterInstanceClassHasBeenSet; }
  template <typename DBClusterInstanceClassT = Aws::String>
  void SetDBClusterInstanceClass(DBClusterInstanceClassT&& value) {
    m_dBClusterInstanceClassHasBeenSet = true;
    m_dBClusterInstanceClass = std::forward<DBClusterInstanceClassT>(value);
  }
  template <typename DBClusterInstanceClassT = Aws::String>
  DBCluster& WithDBClusterInstanceClass(DBClusterInstanceClassT&& value) {
    SetDBClusterInstanceClass(std::forward<DBClusterInstanceClassT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The storage type associated with the DB cluster.</p>
   */
  inline const Aws::String& GetStorageType() const { return m_storageType; }
  inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
  template <typename StorageTypeT = Aws::String>
  void SetStorageType(StorageTypeT&& value) {
    m_storageTypeHasBeenSet = true;
    m_storageType = std::forward<StorageTypeT>(value);
  }
  template <typename StorageTypeT = Aws::String>
  DBCluster& WithStorageType(StorageTypeT&& value) {
    SetStorageType(std::forward<StorageTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Provisioned IOPS (I/O operations per second) value.</p> <p>This setting
   * is only for non-Aurora Multi-AZ DB clusters.</p>
   */
  inline int GetIops() const { return m_iops; }
  inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
  inline void SetIops(int value) {
    m_iopsHasBeenSet = true;
    m_iops = value;
  }
  inline DBCluster& WithIops(int value) {
    SetIops(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The storage throughput for the DB cluster. The throughput is automatically
   * set based on the IOPS that you provision, and is not configurable.</p> <p>This
   * setting is only for non-Aurora Multi-AZ DB clusters.</p>
   */
  inline int GetStorageThroughput() const { return m_storageThroughput; }
  inline bool StorageThroughputHasBeenSet() const { return m_storageThroughputHasBeenSet; }
  inline void SetStorageThroughput(int value) {
    m_storageThroughputHasBeenSet = true;
    m_storageThroughput = value;
  }
  inline DBCluster& WithStorageThroughput(int value) {
    SetStorageThroughput(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The next time you can modify the DB cluster to use the
   * <code>aurora-iopt1</code> storage type.</p> <p>This setting is only for Aurora
   * DB clusters.</p>
   */
  inline const Aws::Utils::DateTime& GetIOOptimizedNextAllowedModificationTime() const { return m_iOOptimizedNextAllowedModificationTime; }
  inline bool IOOptimizedNextAllowedModificationTimeHasBeenSet() const { return m_iOOptimizedNextAllowedModificationTimeHasBeenSet; }
  template <typename IOOptimizedNextAllowedModificationTimeT = Aws::Utils::DateTime>
  void SetIOOptimizedNextAllowedModificationTime(IOOptimizedNextAllowedModificationTimeT&& value) {
    m_iOOptimizedNextAllowedModificationTimeHasBeenSet = true;
    m_iOOptimizedNextAllowedModificationTime = std::forward<IOOptimizedNextAllowedModificationTimeT>(value);
  }
  template <typename IOOptimizedNextAllowedModificationTimeT = Aws::Utils::DateTime>
  DBCluster& WithIOOptimizedNextAllowedModificationTime(IOOptimizedNextAllowedModificationTimeT&& value) {
    SetIOOptimizedNextAllowedModificationTime(std::forward<IOOptimizedNextAllowedModificationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the DB cluster is publicly accessible.</p> <p>When the DB
   * cluster is publicly accessible and you connect from outside of the DB cluster's
   * virtual private cloud (VPC), its Domain Name System (DNS) endpoint resolves to
   * the public IP address. When you connect from within the same VPC as the DB
   * cluster, the endpoint resolves to the private IP address. Access to the DB
   * cluster is ultimately controlled by the security group it uses. That public
   * access isn't permitted if the security group assigned to the DB cluster doesn't
   * permit it.</p> <p>When the DB cluster isn't publicly accessible, it is an
   * internal DB cluster with a DNS name that resolves to a private IP address.</p>
   * <p>For more information, see <a>CreateDBCluster</a>.</p> <p>This setting is only
   * for non-Aurora Multi-AZ DB clusters.</p>
   */
  inline bool GetPubliclyAccessible() const { return m_publiclyAccessible; }
  inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }
  inline void SetPubliclyAccessible(bool value) {
    m_publiclyAccessibleHasBeenSet = true;
    m_publiclyAccessible = value;
  }
  inline DBCluster& WithPubliclyAccessible(bool value) {
    SetPubliclyAccessible(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether minor version patches are applied automatically.</p>
   * <p>This setting is for Aurora DB clusters and Multi-AZ DB clusters.</p> <p>For
   * more information about automatic minor version upgrades, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_UpgradeDBInstance.Upgrading.html#USER_UpgradeDBInstance.Upgrading.AutoMinorVersionUpgrades">Automatically
   * upgrading the minor engine version</a>.</p>
   */
  inline bool GetAutoMinorVersionUpgrade() const { return m_autoMinorVersionUpgrade; }
  inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }
  inline void SetAutoMinorVersionUpgrade(bool value) {
    m_autoMinorVersionUpgradeHasBeenSet = true;
    m_autoMinorVersionUpgrade = value;
  }
  inline DBCluster& WithAutoMinorVersionUpgrade(bool value) {
    SetAutoMinorVersionUpgrade(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the DB cluster has deletion protection enabled. The
   * database can't be deleted when deletion protection is enabled.</p>
   */
  inline bool GetDeletionProtection() const { return m_deletionProtection; }
  inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
  inline void SetDeletionProtection(bool value) {
    m_deletionProtectionHasBeenSet = true;
    m_deletionProtection = value;
  }
  inline DBCluster& WithDeletionProtection(bool value) {
    SetDeletionProtection(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the HTTP endpoint is enabled for an Aurora DB cluster.</p>
   * <p>When enabled, the HTTP endpoint provides a connectionless web service API
   * (RDS Data API) for running SQL queries on the DB cluster. You can also query
   * your database from inside the RDS console with the RDS query editor.</p> <p>For
   * more information, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/data-api.html">Using
   * RDS Data API</a> in the <i>Amazon Aurora User Guide</i>.</p>
   */
  inline bool GetHttpEndpointEnabled() const { return m_httpEndpointEnabled; }
  inline bool HttpEndpointEnabledHasBeenSet() const { return m_httpEndpointEnabledHasBeenSet; }
  inline void SetHttpEndpointEnabled(bool value) {
    m_httpEndpointEnabledHasBeenSet = true;
    m_httpEndpointEnabled = value;
  }
  inline DBCluster& WithHttpEndpointEnabled(bool value) {
    SetHttpEndpointEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The mode of the database activity stream. Database events such as a change or
   * access generate an activity stream event. The database session can handle these
   * events either synchronously or asynchronously.</p>
   */
  inline ActivityStreamMode GetActivityStreamMode() const { return m_activityStreamMode; }
  inline bool ActivityStreamModeHasBeenSet() const { return m_activityStreamModeHasBeenSet; }
  inline void SetActivityStreamMode(ActivityStreamMode value) {
    m_activityStreamModeHasBeenSet = true;
    m_activityStreamMode = value;
  }
  inline DBCluster& WithActivityStreamMode(ActivityStreamMode value) {
    SetActivityStreamMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the database activity stream.</p>
   */
  inline ActivityStreamStatus GetActivityStreamStatus() const { return m_activityStreamStatus; }
  inline bool ActivityStreamStatusHasBeenSet() const { return m_activityStreamStatusHasBeenSet; }
  inline void SetActivityStreamStatus(ActivityStreamStatus value) {
    m_activityStreamStatusHasBeenSet = true;
    m_activityStreamStatus = value;
  }
  inline DBCluster& WithActivityStreamStatus(ActivityStreamStatus value) {
    SetActivityStreamStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services KMS key identifier used for encrypting messages in
   * the database activity stream.</p> <p>The Amazon Web Services KMS key identifier
   * is the key ARN, key ID, alias ARN, or alias name for the KMS key.</p>
   */
  inline const Aws::String& GetActivityStreamKmsKeyId() const { return m_activityStreamKmsKeyId; }
  inline bool ActivityStreamKmsKeyIdHasBeenSet() const { return m_activityStreamKmsKeyIdHasBeenSet; }
  template <typename ActivityStreamKmsKeyIdT = Aws::String>
  void SetActivityStreamKmsKeyId(ActivityStreamKmsKeyIdT&& value) {
    m_activityStreamKmsKeyIdHasBeenSet = true;
    m_activityStreamKmsKeyId = std::forward<ActivityStreamKmsKeyIdT>(value);
  }
  template <typename ActivityStreamKmsKeyIdT = Aws::String>
  DBCluster& WithActivityStreamKmsKeyId(ActivityStreamKmsKeyIdT&& value) {
    SetActivityStreamKmsKeyId(std::forward<ActivityStreamKmsKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Amazon Kinesis data stream used for the database activity
   * stream.</p>
   */
  inline const Aws::String& GetActivityStreamKinesisStreamName() const { return m_activityStreamKinesisStreamName; }
  inline bool ActivityStreamKinesisStreamNameHasBeenSet() const { return m_activityStreamKinesisStreamNameHasBeenSet; }
  template <typename ActivityStreamKinesisStreamNameT = Aws::String>
  void SetActivityStreamKinesisStreamName(ActivityStreamKinesisStreamNameT&& value) {
    m_activityStreamKinesisStreamNameHasBeenSet = true;
    m_activityStreamKinesisStreamName = std::forward<ActivityStreamKinesisStreamNameT>(value);
  }
  template <typename ActivityStreamKinesisStreamNameT = Aws::String>
  DBCluster& WithActivityStreamKinesisStreamName(ActivityStreamKinesisStreamNameT&& value) {
    SetActivityStreamKinesisStreamName(std::forward<ActivityStreamKinesisStreamNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether tags are copied from the DB cluster to snapshots of the DB
   * cluster.</p>
   */
  inline bool GetCopyTagsToSnapshot() const { return m_copyTagsToSnapshot; }
  inline bool CopyTagsToSnapshotHasBeenSet() const { return m_copyTagsToSnapshotHasBeenSet; }
  inline void SetCopyTagsToSnapshot(bool value) {
    m_copyTagsToSnapshotHasBeenSet = true;
    m_copyTagsToSnapshot = value;
  }
  inline DBCluster& WithCopyTagsToSnapshot(bool value) {
    SetCopyTagsToSnapshot(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the DB cluster is a clone of a DB cluster owned by a
   * different Amazon Web Services account.</p>
   */
  inline bool GetCrossAccountClone() const { return m_crossAccountClone; }
  inline bool CrossAccountCloneHasBeenSet() const { return m_crossAccountCloneHasBeenSet; }
  inline void SetCrossAccountClone(bool value) {
    m_crossAccountCloneHasBeenSet = true;
    m_crossAccountClone = value;
  }
  inline DBCluster& WithCrossAccountClone(bool value) {
    SetCrossAccountClone(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Active Directory Domain membership records associated with the DB
   * cluster.</p>
   */
  inline const Aws::Vector<DomainMembership>& GetDomainMemberships() const { return m_domainMemberships; }
  inline bool DomainMembershipsHasBeenSet() const { return m_domainMembershipsHasBeenSet; }
  template <typename DomainMembershipsT = Aws::Vector<DomainMembership>>
  void SetDomainMemberships(DomainMembershipsT&& value) {
    m_domainMembershipsHasBeenSet = true;
    m_domainMemberships = std::forward<DomainMembershipsT>(value);
  }
  template <typename DomainMembershipsT = Aws::Vector<DomainMembership>>
  DBCluster& WithDomainMemberships(DomainMembershipsT&& value) {
    SetDomainMemberships(std::forward<DomainMembershipsT>(value));
    return *this;
  }
  template <typename DomainMembershipsT = DomainMembership>
  DBCluster& AddDomainMemberships(DomainMembershipsT&& value) {
    m_domainMembershipsHasBeenSet = true;
    m_domainMemberships.emplace_back(std::forward<DomainMembershipsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Tag>& GetTagList() const { return m_tagList; }
  inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }
  template <typename TagListT = Aws::Vector<Tag>>
  void SetTagList(TagListT&& value) {
    m_tagListHasBeenSet = true;
    m_tagList = std::forward<TagListT>(value);
  }
  template <typename TagListT = Aws::Vector<Tag>>
  DBCluster& WithTagList(TagListT&& value) {
    SetTagList(std::forward<TagListT>(value));
    return *this;
  }
  template <typename TagListT = Tag>
  DBCluster& AddTagList(TagListT&& value) {
    m_tagListHasBeenSet = true;
    m_tagList.emplace_back(std::forward<TagListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains a user-supplied global database cluster identifier. This identifier
   * is the unique key that identifies a global database cluster.</p>
   */
  inline const Aws::String& GetGlobalClusterIdentifier() const { return m_globalClusterIdentifier; }
  inline bool GlobalClusterIdentifierHasBeenSet() const { return m_globalClusterIdentifierHasBeenSet; }
  template <typename GlobalClusterIdentifierT = Aws::String>
  void SetGlobalClusterIdentifier(GlobalClusterIdentifierT&& value) {
    m_globalClusterIdentifierHasBeenSet = true;
    m_globalClusterIdentifier = std::forward<GlobalClusterIdentifierT>(value);
  }
  template <typename GlobalClusterIdentifierT = Aws::String>
  DBCluster& WithGlobalClusterIdentifier(GlobalClusterIdentifierT&& value) {
    SetGlobalClusterIdentifier(std::forward<GlobalClusterIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of write forwarding for a secondary cluster in an Aurora global
   * database.</p>
   */
  inline WriteForwardingStatus GetGlobalWriteForwardingStatus() const { return m_globalWriteForwardingStatus; }
  inline bool GlobalWriteForwardingStatusHasBeenSet() const { return m_globalWriteForwardingStatusHasBeenSet; }
  inline void SetGlobalWriteForwardingStatus(WriteForwardingStatus value) {
    m_globalWriteForwardingStatusHasBeenSet = true;
    m_globalWriteForwardingStatus = value;
  }
  inline DBCluster& WithGlobalWriteForwardingStatus(WriteForwardingStatus value) {
    SetGlobalWriteForwardingStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether write forwarding is enabled for a secondary cluster in an
   * Aurora global database. Because write forwarding takes time to enable, check the
   * value of <code>GlobalWriteForwardingStatus</code> to confirm that the request
   * has completed before using the write forwarding feature for this cluster.</p>
   */
  inline bool GetGlobalWriteForwardingRequested() const { return m_globalWriteForwardingRequested; }
  inline bool GlobalWriteForwardingRequestedHasBeenSet() const { return m_globalWriteForwardingRequestedHasBeenSet; }
  inline void SetGlobalWriteForwardingRequested(bool value) {
    m_globalWriteForwardingRequestedHasBeenSet = true;
    m_globalWriteForwardingRequested = value;
  }
  inline DBCluster& WithGlobalWriteForwardingRequested(bool value) {
    SetGlobalWriteForwardingRequested(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The network type of the DB instance.</p> <p>The network type is determined by
   * the <code>DBSubnetGroup</code> specified for the DB cluster. A
   * <code>DBSubnetGroup</code> can support only the IPv4 protocol or the IPv4 and
   * the IPv6 protocols (<code>DUAL</code>).</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
   * Working with a DB instance in a VPC</a> in the <i>Amazon Aurora User Guide.</i>
   * </p> <p>This setting is only for Aurora DB clusters.</p> <p>Valid Values:
   * <code>IPV4 | DUAL</code> </p>
   */
  inline const Aws::String& GetNetworkType() const { return m_networkType; }
  inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
  template <typename NetworkTypeT = Aws::String>
  void SetNetworkType(NetworkTypeT&& value) {
    m_networkTypeHasBeenSet = true;
    m_networkType = std::forward<NetworkTypeT>(value);
  }
  template <typename NetworkTypeT = Aws::String>
  DBCluster& WithNetworkType(NetworkTypeT&& value) {
    SetNetworkType(std::forward<NetworkTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when a stopped DB cluster is restarted automatically.</p>
   */
  inline const Aws::Utils::DateTime& GetAutomaticRestartTime() const { return m_automaticRestartTime; }
  inline bool AutomaticRestartTimeHasBeenSet() const { return m_automaticRestartTimeHasBeenSet; }
  template <typename AutomaticRestartTimeT = Aws::Utils::DateTime>
  void SetAutomaticRestartTime(AutomaticRestartTimeT&& value) {
    m_automaticRestartTimeHasBeenSet = true;
    m_automaticRestartTime = std::forward<AutomaticRestartTimeT>(value);
  }
  template <typename AutomaticRestartTimeT = Aws::Utils::DateTime>
  DBCluster& WithAutomaticRestartTime(AutomaticRestartTimeT&& value) {
    SetAutomaticRestartTime(std::forward<AutomaticRestartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ServerlessV2ScalingConfigurationInfo& GetServerlessV2ScalingConfiguration() const {
    return m_serverlessV2ScalingConfiguration;
  }
  inline bool ServerlessV2ScalingConfigurationHasBeenSet() const { return m_serverlessV2ScalingConfigurationHasBeenSet; }
  template <typename ServerlessV2ScalingConfigurationT = ServerlessV2ScalingConfigurationInfo>
  void SetServerlessV2ScalingConfiguration(ServerlessV2ScalingConfigurationT&& value) {
    m_serverlessV2ScalingConfigurationHasBeenSet = true;
    m_serverlessV2ScalingConfiguration = std::forward<ServerlessV2ScalingConfigurationT>(value);
  }
  template <typename ServerlessV2ScalingConfigurationT = ServerlessV2ScalingConfigurationInfo>
  DBCluster& WithServerlessV2ScalingConfiguration(ServerlessV2ScalingConfigurationT&& value) {
    SetServerlessV2ScalingConfiguration(std::forward<ServerlessV2ScalingConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the Aurora Serverless V2 platform used by the DB cluster. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless-v2.html">Using
   * Aurora Serverless v2</a> in the <i>Amazon Aurora User Guide</i>.</p>
   */
  inline const Aws::String& GetServerlessV2PlatformVersion() const { return m_serverlessV2PlatformVersion; }
  inline bool ServerlessV2PlatformVersionHasBeenSet() const { return m_serverlessV2PlatformVersionHasBeenSet; }
  template <typename ServerlessV2PlatformVersionT = Aws::String>
  void SetServerlessV2PlatformVersion(ServerlessV2PlatformVersionT&& value) {
    m_serverlessV2PlatformVersionHasBeenSet = true;
    m_serverlessV2PlatformVersion = std::forward<ServerlessV2PlatformVersionT>(value);
  }
  template <typename ServerlessV2PlatformVersionT = Aws::String>
  DBCluster& WithServerlessV2PlatformVersion(ServerlessV2PlatformVersionT&& value) {
    SetServerlessV2PlatformVersion(std::forward<ServerlessV2PlatformVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
   * collected for the DB cluster.</p> <p>This setting is only for -Aurora DB
   * clusters and Multi-AZ DB clusters.</p>
   */
  inline int GetMonitoringInterval() const { return m_monitoringInterval; }
  inline bool MonitoringIntervalHasBeenSet() const { return m_monitoringIntervalHasBeenSet; }
  inline void SetMonitoringInterval(int value) {
    m_monitoringIntervalHasBeenSet = true;
    m_monitoringInterval = value;
  }
  inline DBCluster& WithMonitoringInterval(int value) {
    SetMonitoringInterval(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN for the IAM role that permits RDS to send Enhanced Monitoring metrics
   * to Amazon CloudWatch Logs.</p> <p>This setting is only for Aurora DB clusters
   * and Multi-AZ DB clusters.</p>
   */
  inline const Aws::String& GetMonitoringRoleArn() const { return m_monitoringRoleArn; }
  inline bool MonitoringRoleArnHasBeenSet() const { return m_monitoringRoleArnHasBeenSet; }
  template <typename MonitoringRoleArnT = Aws::String>
  void SetMonitoringRoleArn(MonitoringRoleArnT&& value) {
    m_monitoringRoleArnHasBeenSet = true;
    m_monitoringRoleArn = std::forward<MonitoringRoleArnT>(value);
  }
  template <typename MonitoringRoleArnT = Aws::String>
  DBCluster& WithMonitoringRoleArn(MonitoringRoleArnT&& value) {
    SetMonitoringRoleArn(std::forward<MonitoringRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The mode of Database Insights that is enabled for the DB cluster.</p>
   */
  inline DatabaseInsightsMode GetDatabaseInsightsMode() const { return m_databaseInsightsMode; }
  inline bool DatabaseInsightsModeHasBeenSet() const { return m_databaseInsightsModeHasBeenSet; }
  inline void SetDatabaseInsightsMode(DatabaseInsightsMode value) {
    m_databaseInsightsModeHasBeenSet = true;
    m_databaseInsightsMode = value;
  }
  inline DBCluster& WithDatabaseInsightsMode(DatabaseInsightsMode value) {
    SetDatabaseInsightsMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether Performance Insights is enabled for the DB cluster.</p>
   * <p>This setting is only for Aurora DB clusters and Multi-AZ DB clusters.</p>
   */
  inline bool GetPerformanceInsightsEnabled() const { return m_performanceInsightsEnabled; }
  inline bool PerformanceInsightsEnabledHasBeenSet() const { return m_performanceInsightsEnabledHasBeenSet; }
  inline void SetPerformanceInsightsEnabled(bool value) {
    m_performanceInsightsEnabledHasBeenSet = true;
    m_performanceInsightsEnabled = value;
  }
  inline DBCluster& WithPerformanceInsightsEnabled(bool value) {
    SetPerformanceInsightsEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services KMS key identifier for encryption of Performance
   * Insights data.</p> <p>The Amazon Web Services KMS key identifier is the key ARN,
   * key ID, alias ARN, or alias name for the KMS key.</p> <p>This setting is only
   * for Aurora DB clusters and Multi-AZ DB clusters.</p>
   */
  inline const Aws::String& GetPerformanceInsightsKMSKeyId() const { return m_performanceInsightsKMSKeyId; }
  inline bool PerformanceInsightsKMSKeyIdHasBeenSet() const { return m_performanceInsightsKMSKeyIdHasBeenSet; }
  template <typename PerformanceInsightsKMSKeyIdT = Aws::String>
  void SetPerformanceInsightsKMSKeyId(PerformanceInsightsKMSKeyIdT&& value) {
    m_performanceInsightsKMSKeyIdHasBeenSet = true;
    m_performanceInsightsKMSKeyId = std::forward<PerformanceInsightsKMSKeyIdT>(value);
  }
  template <typename PerformanceInsightsKMSKeyIdT = Aws::String>
  DBCluster& WithPerformanceInsightsKMSKeyId(PerformanceInsightsKMSKeyIdT&& value) {
    SetPerformanceInsightsKMSKeyId(std::forward<PerformanceInsightsKMSKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of days to retain Performance Insights data.</p> <p>This setting
   * is only for Aurora DB clusters and Multi-AZ DB clusters.</p> <p>Valid
   * Values:</p> <ul> <li> <p> <code>7</code> </p> </li> <li> <p> <i>month</i> * 31,
   * where <i>month</i> is a number of months from 1-23. Examples: <code>93</code> (3
   * months * 31), <code>341</code> (11 months * 31), <code>589</code> (19 months *
   * 31)</p> </li> <li> <p> <code>731</code> </p> </li> </ul> <p>Default:
   * <code>7</code> days</p>
   */
  inline int GetPerformanceInsightsRetentionPeriod() const { return m_performanceInsightsRetentionPeriod; }
  inline bool PerformanceInsightsRetentionPeriodHasBeenSet() const { return m_performanceInsightsRetentionPeriodHasBeenSet; }
  inline void SetPerformanceInsightsRetentionPeriod(int value) {
    m_performanceInsightsRetentionPeriodHasBeenSet = true;
    m_performanceInsightsRetentionPeriod = value;
  }
  inline DBCluster& WithPerformanceInsightsRetentionPeriod(int value) {
    SetPerformanceInsightsRetentionPeriod(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Reserved for future use.</p>
   */
  inline const Aws::String& GetDBSystemId() const { return m_dBSystemId; }
  inline bool DBSystemIdHasBeenSet() const { return m_dBSystemIdHasBeenSet; }
  template <typename DBSystemIdT = Aws::String>
  void SetDBSystemId(DBSystemIdT&& value) {
    m_dBSystemIdHasBeenSet = true;
    m_dBSystemId = std::forward<DBSystemIdT>(value);
  }
  template <typename DBSystemIdT = Aws::String>
  DBCluster& WithDBSystemId(DBSystemIdT&& value) {
    SetDBSystemId(std::forward<DBSystemIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The secret managed by RDS in Amazon Web Services Secrets Manager for the
   * master user password.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-secrets-manager.html">Password
   * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon RDS
   * User Guide</i> and <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/rds-secrets-manager.html">Password
   * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon Aurora
   * User Guide.</i> </p>
   */
  inline const MasterUserSecret& GetMasterUserSecret() const { return m_masterUserSecret; }
  inline bool MasterUserSecretHasBeenSet() const { return m_masterUserSecretHasBeenSet; }
  template <typename MasterUserSecretT = MasterUserSecret>
  void SetMasterUserSecret(MasterUserSecretT&& value) {
    m_masterUserSecretHasBeenSet = true;
    m_masterUserSecret = std::forward<MasterUserSecretT>(value);
  }
  template <typename MasterUserSecretT = MasterUserSecret>
  DBCluster& WithMasterUserSecret(MasterUserSecretT&& value) {
    SetMasterUserSecret(std::forward<MasterUserSecretT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether an Aurora DB cluster has in-cluster write forwarding
   * enabled, not enabled, requested, or is in the process of enabling it.</p>
   */
  inline LocalWriteForwardingStatus GetLocalWriteForwardingStatus() const { return m_localWriteForwardingStatus; }
  inline bool LocalWriteForwardingStatusHasBeenSet() const { return m_localWriteForwardingStatusHasBeenSet; }
  inline void SetLocalWriteForwardingStatus(LocalWriteForwardingStatus value) {
    m_localWriteForwardingStatusHasBeenSet = true;
    m_localWriteForwardingStatus = value;
  }
  inline DBCluster& WithLocalWriteForwardingStatus(LocalWriteForwardingStatus value) {
    SetLocalWriteForwardingStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the recovery point in Amazon Web Services
   * Backup.</p>
   */
  inline const Aws::String& GetAwsBackupRecoveryPointArn() const { return m_awsBackupRecoveryPointArn; }
  inline bool AwsBackupRecoveryPointArnHasBeenSet() const { return m_awsBackupRecoveryPointArnHasBeenSet; }
  template <typename AwsBackupRecoveryPointArnT = Aws::String>
  void SetAwsBackupRecoveryPointArn(AwsBackupRecoveryPointArnT&& value) {
    m_awsBackupRecoveryPointArnHasBeenSet = true;
    m_awsBackupRecoveryPointArn = std::forward<AwsBackupRecoveryPointArnT>(value);
  }
  template <typename AwsBackupRecoveryPointArnT = Aws::String>
  DBCluster& WithAwsBackupRecoveryPointArn(AwsBackupRecoveryPointArnT&& value) {
    SetAwsBackupRecoveryPointArn(std::forward<AwsBackupRecoveryPointArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details for Aurora Limitless Database.</p>
   */
  inline const LimitlessDatabase& GetLimitlessDatabase() const { return m_limitlessDatabase; }
  inline bool LimitlessDatabaseHasBeenSet() const { return m_limitlessDatabaseHasBeenSet; }
  template <typename LimitlessDatabaseT = LimitlessDatabase>
  void SetLimitlessDatabase(LimitlessDatabaseT&& value) {
    m_limitlessDatabaseHasBeenSet = true;
    m_limitlessDatabase = std::forward<LimitlessDatabaseT>(value);
  }
  template <typename LimitlessDatabaseT = LimitlessDatabase>
  DBCluster& WithLimitlessDatabase(LimitlessDatabaseT&& value) {
    SetLimitlessDatabase(std::forward<LimitlessDatabaseT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scalability mode of the Aurora DB cluster. When set to
   * <code>limitless</code>, the cluster operates as an Aurora Limitless Database.
   * When set to <code>standard</code> (the default), the cluster uses normal DB
   * instance creation.</p>
   */
  inline ClusterScalabilityType GetClusterScalabilityType() const { return m_clusterScalabilityType; }
  inline bool ClusterScalabilityTypeHasBeenSet() const { return m_clusterScalabilityTypeHasBeenSet; }
  inline void SetClusterScalabilityType(ClusterScalabilityType value) {
    m_clusterScalabilityTypeHasBeenSet = true;
    m_clusterScalabilityType = value;
  }
  inline DBCluster& WithClusterScalabilityType(ClusterScalabilityType value) {
    SetClusterScalabilityType(value);
    return *this;
  }
  ///@}

  ///@{

  inline const CertificateDetails& GetCertificateDetails() const { return m_certificateDetails; }
  inline bool CertificateDetailsHasBeenSet() const { return m_certificateDetailsHasBeenSet; }
  template <typename CertificateDetailsT = CertificateDetails>
  void SetCertificateDetails(CertificateDetailsT&& value) {
    m_certificateDetailsHasBeenSet = true;
    m_certificateDetails = std::forward<CertificateDetailsT>(value);
  }
  template <typename CertificateDetailsT = CertificateDetails>
  DBCluster& WithCertificateDetails(CertificateDetailsT&& value) {
    SetCertificateDetails(std::forward<CertificateDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The lifecycle type for the DB cluster.</p> <p>For more information, see
   * CreateDBCluster.</p>
   */
  inline const Aws::String& GetEngineLifecycleSupport() const { return m_engineLifecycleSupport; }
  inline bool EngineLifecycleSupportHasBeenSet() const { return m_engineLifecycleSupportHasBeenSet; }
  template <typename EngineLifecycleSupportT = Aws::String>
  void SetEngineLifecycleSupport(EngineLifecycleSupportT&& value) {
    m_engineLifecycleSupportHasBeenSet = true;
    m_engineLifecycleSupport = std::forward<EngineLifecycleSupportT>(value);
  }
  template <typename EngineLifecycleSupportT = Aws::String>
  DBCluster& WithEngineLifecycleSupport(EngineLifecycleSupportT&& value) {
    SetEngineLifecycleSupport(std::forward<EngineLifecycleSupportT>(value));
    return *this;
  }
  ///@}
 private:
  int m_allocatedStorage{0};

  Aws::Vector<Aws::String> m_availabilityZones;

  int m_backupRetentionPeriod{0};

  Aws::String m_characterSetName;

  Aws::String m_databaseName;

  Aws::String m_dBClusterIdentifier;

  Aws::String m_dBClusterParameterGroup;

  Aws::String m_dBSubnetGroup;

  Aws::String m_status;

  Aws::String m_percentProgress;

  Aws::Utils::DateTime m_earliestRestorableTime{};

  Aws::String m_endpoint;

  Aws::String m_readerEndpoint;

  Aws::Vector<Aws::String> m_customEndpoints;

  bool m_multiAZ{false};

  Aws::String m_engine;

  Aws::String m_engineVersion;

  Aws::Utils::DateTime m_latestRestorableTime{};

  int m_port{0};

  Aws::String m_masterUsername;

  Aws::Vector<DBClusterOptionGroupStatus> m_dBClusterOptionGroupMemberships;

  Aws::String m_preferredBackupWindow;

  Aws::String m_preferredMaintenanceWindow;

  UpgradeRolloutOrder m_upgradeRolloutOrder{UpgradeRolloutOrder::NOT_SET};

  Aws::String m_replicationSourceIdentifier;

  Aws::Vector<Aws::String> m_readReplicaIdentifiers;

  Aws::Vector<DBClusterStatusInfo> m_statusInfos;

  Aws::Vector<DBClusterMember> m_dBClusterMembers;

  Aws::Vector<VpcSecurityGroupMembership> m_vpcSecurityGroups;

  Aws::String m_hostedZoneId;

  bool m_storageEncrypted{false};

  StorageEncryptionType m_storageEncryptionType{StorageEncryptionType::NOT_SET};

  Aws::String m_kmsKeyId;

  Aws::String m_dbClusterResourceId;

  Aws::String m_dBClusterArn;

  Aws::Vector<DBClusterRole> m_associatedRoles;

  bool m_iAMDatabaseAuthenticationEnabled{false};

  Aws::String m_cloneGroupId;

  Aws::Utils::DateTime m_clusterCreateTime{};

  Aws::Utils::DateTime m_earliestBacktrackTime{};

  long long m_backtrackWindow{0};

  long long m_backtrackConsumedChangeRecords{0};

  Aws::Vector<Aws::String> m_enabledCloudwatchLogsExports;

  int m_capacity{0};

  ClusterPendingModifiedValues m_pendingModifiedValues;

  Aws::String m_engineMode;

  ScalingConfigurationInfo m_scalingConfigurationInfo;

  RdsCustomClusterConfiguration m_rdsCustomClusterConfiguration;

  Aws::String m_dBClusterInstanceClass;

  Aws::String m_storageType;

  int m_iops{0};

  int m_storageThroughput{0};

  Aws::Utils::DateTime m_iOOptimizedNextAllowedModificationTime{};

  bool m_publiclyAccessible{false};

  bool m_autoMinorVersionUpgrade{false};

  bool m_deletionProtection{false};

  bool m_httpEndpointEnabled{false};

  ActivityStreamMode m_activityStreamMode{ActivityStreamMode::NOT_SET};

  ActivityStreamStatus m_activityStreamStatus{ActivityStreamStatus::NOT_SET};

  Aws::String m_activityStreamKmsKeyId;

  Aws::String m_activityStreamKinesisStreamName;

  bool m_copyTagsToSnapshot{false};

  bool m_crossAccountClone{false};

  Aws::Vector<DomainMembership> m_domainMemberships;

  Aws::Vector<Tag> m_tagList;

  Aws::String m_globalClusterIdentifier;

  WriteForwardingStatus m_globalWriteForwardingStatus{WriteForwardingStatus::NOT_SET};

  bool m_globalWriteForwardingRequested{false};

  Aws::String m_networkType;

  Aws::Utils::DateTime m_automaticRestartTime{};

  ServerlessV2ScalingConfigurationInfo m_serverlessV2ScalingConfiguration;

  Aws::String m_serverlessV2PlatformVersion;

  int m_monitoringInterval{0};

  Aws::String m_monitoringRoleArn;

  DatabaseInsightsMode m_databaseInsightsMode{DatabaseInsightsMode::NOT_SET};

  bool m_performanceInsightsEnabled{false};

  Aws::String m_performanceInsightsKMSKeyId;

  int m_performanceInsightsRetentionPeriod{0};

  Aws::String m_dBSystemId;

  MasterUserSecret m_masterUserSecret;

  LocalWriteForwardingStatus m_localWriteForwardingStatus{LocalWriteForwardingStatus::NOT_SET};

  Aws::String m_awsBackupRecoveryPointArn;

  LimitlessDatabase m_limitlessDatabase;

  ClusterScalabilityType m_clusterScalabilityType{ClusterScalabilityType::NOT_SET};

  CertificateDetails m_certificateDetails;

  Aws::String m_engineLifecycleSupport;
  bool m_allocatedStorageHasBeenSet = false;
  bool m_availabilityZonesHasBeenSet = false;
  bool m_backupRetentionPeriodHasBeenSet = false;
  bool m_characterSetNameHasBeenSet = false;
  bool m_databaseNameHasBeenSet = false;
  bool m_dBClusterIdentifierHasBeenSet = false;
  bool m_dBClusterParameterGroupHasBeenSet = false;
  bool m_dBSubnetGroupHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_percentProgressHasBeenSet = false;
  bool m_earliestRestorableTimeHasBeenSet = false;
  bool m_endpointHasBeenSet = false;
  bool m_readerEndpointHasBeenSet = false;
  bool m_customEndpointsHasBeenSet = false;
  bool m_multiAZHasBeenSet = false;
  bool m_engineHasBeenSet = false;
  bool m_engineVersionHasBeenSet = false;
  bool m_latestRestorableTimeHasBeenSet = false;
  bool m_portHasBeenSet = false;
  bool m_masterUsernameHasBeenSet = false;
  bool m_dBClusterOptionGroupMembershipsHasBeenSet = false;
  bool m_preferredBackupWindowHasBeenSet = false;
  bool m_preferredMaintenanceWindowHasBeenSet = false;
  bool m_upgradeRolloutOrderHasBeenSet = false;
  bool m_replicationSourceIdentifierHasBeenSet = false;
  bool m_readReplicaIdentifiersHasBeenSet = false;
  bool m_statusInfosHasBeenSet = false;
  bool m_dBClusterMembersHasBeenSet = false;
  bool m_vpcSecurityGroupsHasBeenSet = false;
  bool m_hostedZoneIdHasBeenSet = false;
  bool m_storageEncryptedHasBeenSet = false;
  bool m_storageEncryptionTypeHasBeenSet = false;
  bool m_kmsKeyIdHasBeenSet = false;
  bool m_dbClusterResourceIdHasBeenSet = false;
  bool m_dBClusterArnHasBeenSet = false;
  bool m_associatedRolesHasBeenSet = false;
  bool m_iAMDatabaseAuthenticationEnabledHasBeenSet = false;
  bool m_cloneGroupIdHasBeenSet = false;
  bool m_clusterCreateTimeHasBeenSet = false;
  bool m_earliestBacktrackTimeHasBeenSet = false;
  bool m_backtrackWindowHasBeenSet = false;
  bool m_backtrackConsumedChangeRecordsHasBeenSet = false;
  bool m_enabledCloudwatchLogsExportsHasBeenSet = false;
  bool m_capacityHasBeenSet = false;
  bool m_pendingModifiedValuesHasBeenSet = false;
  bool m_engineModeHasBeenSet = false;
  bool m_scalingConfigurationInfoHasBeenSet = false;
  bool m_rdsCustomClusterConfigurationHasBeenSet = false;
  bool m_dBClusterInstanceClassHasBeenSet = false;
  bool m_storageTypeHasBeenSet = false;
  bool m_iopsHasBeenSet = false;
  bool m_storageThroughputHasBeenSet = false;
  bool m_iOOptimizedNextAllowedModificationTimeHasBeenSet = false;
  bool m_publiclyAccessibleHasBeenSet = false;
  bool m_autoMinorVersionUpgradeHasBeenSet = false;
  bool m_deletionProtectionHasBeenSet = false;
  bool m_httpEndpointEnabledHasBeenSet = false;
  bool m_activityStreamModeHasBeenSet = false;
  bool m_activityStreamStatusHasBeenSet = false;
  bool m_activityStreamKmsKeyIdHasBeenSet = false;
  bool m_activityStreamKinesisStreamNameHasBeenSet = false;
  bool m_copyTagsToSnapshotHasBeenSet = false;
  bool m_crossAccountCloneHasBeenSet = false;
  bool m_domainMembershipsHasBeenSet = false;
  bool m_tagListHasBeenSet = false;
  bool m_globalClusterIdentifierHasBeenSet = false;
  bool m_globalWriteForwardingStatusHasBeenSet = false;
  bool m_globalWriteForwardingRequestedHasBeenSet = false;
  bool m_networkTypeHasBeenSet = false;
  bool m_automaticRestartTimeHasBeenSet = false;
  bool m_serverlessV2ScalingConfigurationHasBeenSet = false;
  bool m_serverlessV2PlatformVersionHasBeenSet = false;
  bool m_monitoringIntervalHasBeenSet = false;
  bool m_monitoringRoleArnHasBeenSet = false;
  bool m_databaseInsightsModeHasBeenSet = false;
  bool m_performanceInsightsEnabledHasBeenSet = false;
  bool m_performanceInsightsKMSKeyIdHasBeenSet = false;
  bool m_performanceInsightsRetentionPeriodHasBeenSet = false;
  bool m_dBSystemIdHasBeenSet = false;
  bool m_masterUserSecretHasBeenSet = false;
  bool m_localWriteForwardingStatusHasBeenSet = false;
  bool m_awsBackupRecoveryPointArnHasBeenSet = false;
  bool m_limitlessDatabaseHasBeenSet = false;
  bool m_clusterScalabilityTypeHasBeenSet = false;
  bool m_certificateDetailsHasBeenSet = false;
  bool m_engineLifecycleSupportHasBeenSet = false;
};

}  // namespace Model
}  // namespace RDS
}  // namespace Aws
