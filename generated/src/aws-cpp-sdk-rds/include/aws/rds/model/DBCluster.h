/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/rds/model/ScalingConfigurationInfo.h>
#include <aws/rds/model/RdsCustomClusterConfiguration.h>
#include <aws/rds/model/ActivityStreamMode.h>
#include <aws/rds/model/ActivityStreamStatus.h>
#include <aws/rds/model/WriteForwardingStatus.h>
#include <aws/rds/model/ClusterPendingModifiedValues.h>
#include <aws/rds/model/DatabaseInsightsMode.h>
#include <aws/rds/model/ServerlessV2ScalingConfigurationInfo.h>
#include <aws/rds/model/MasterUserSecret.h>
#include <aws/rds/model/LocalWriteForwardingStatus.h>
#include <aws/rds/model/LimitlessDatabase.h>
#include <aws/rds/model/ClusterScalabilityType.h>
#include <aws/rds/model/CertificateDetails.h>
#include <aws/rds/model/DBClusterOptionGroupStatus.h>
#include <aws/rds/model/DBClusterStatusInfo.h>
#include <aws/rds/model/DBClusterMember.h>
#include <aws/rds/model/VpcSecurityGroupMembership.h>
#include <aws/rds/model/DBClusterRole.h>
#include <aws/rds/model/DomainMembership.h>
#include <aws/rds/model/Tag.h>
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
   * <p>Contains the details of an Amazon Aurora DB cluster or Multi-AZ DB
   * cluster.</p> <p>For an Amazon Aurora DB cluster, this data type is used as a
   * response element in the operations <code>CreateDBCluster</code>,
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
  class DBCluster
  {
  public:
    AWS_RDS_API DBCluster();
    AWS_RDS_API DBCluster(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API DBCluster& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>For all database engines except Amazon Aurora, <code>AllocatedStorage</code>
     * specifies the allocated storage size in gibibytes (GiB). For Aurora,
     * <code>AllocatedStorage</code> always returns 1, because Aurora DB cluster
     * storage size isn't fixed, but instead automatically adjusts as needed.</p>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }
    inline DBCluster& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of Availability Zones (AZs) where instances in the DB cluster can be
     * created.</p>
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
     * <p>The number of days for which automatic DB snapshots are retained.</p>
     */
    inline int GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }
    inline DBCluster& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If present, specifies the name of the character set that this cluster is
     * associated with.</p>
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
     * <p>The name of the initial database that was specified for the DB cluster when
     * it was created, if one was provided. This same name is returned for the life of
     * the DB cluster.</p>
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
     * <p>The user-supplied identifier for the DB cluster. This identifier is the
     * unique key that identifies a DB cluster.</p>
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
     * <p>The name of the DB cluster parameter group for the DB cluster.</p>
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
     * <p>Information about the subnet group associated with the DB cluster, including
     * the name, description, and subnets in the subnet group.</p>
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
     * <p>The current state of this DB cluster.</p>
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
     * <p>The time when a stopped DB cluster is restarted automatically.</p>
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
     * <p>The progress of the operation as a percentage.</p>
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
     * <p>The earliest time to which a database can be restored with point-in-time
     * restore.</p>
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
     * <p>The connection endpoint for the primary instance of the DB cluster.</p>
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
     * load-balances connections across the Aurora Replicas that are available in a DB
     * cluster. As clients request new connections to the reader endpoint, Aurora
     * distributes the connection requests among the Aurora Replicas in the DB cluster.
     * This functionality can help balance your read workload across multiple Aurora
     * Replicas in your DB cluster.</p> <p>If a failover occurs, and the Aurora Replica
     * that you are connected to is promoted to be the primary instance, your
     * connection is dropped. To continue sending your read workload to other Aurora
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
     * <p>The custom endpoints associated with the DB cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCustomEndpoints() const{ return m_customEndpoints; }
    inline bool CustomEndpointsHasBeenSet() const { return m_customEndpointsHasBeenSet; }
    inline void SetCustomEndpoints(const Aws::Vector<Aws::String>& value) { m_customEndpointsHasBeenSet = true; m_customEndpoints = value; }
    inline void SetCustomEndpoints(Aws::Vector<Aws::String>&& value) { m_customEndpointsHasBeenSet = true; m_customEndpoints = std::move(value); }
    inline DBCluster& WithCustomEndpoints(const Aws::Vector<Aws::String>& value) { SetCustomEndpoints(value); return *this;}
    inline DBCluster& WithCustomEndpoints(Aws::Vector<Aws::String>&& value) { SetCustomEndpoints(std::move(value)); return *this;}
    inline DBCluster& AddCustomEndpoints(const Aws::String& value) { m_customEndpointsHasBeenSet = true; m_customEndpoints.push_back(value); return *this; }
    inline DBCluster& AddCustomEndpoints(Aws::String&& value) { m_customEndpointsHasBeenSet = true; m_customEndpoints.push_back(std::move(value)); return *this; }
    inline DBCluster& AddCustomEndpoints(const char* value) { m_customEndpointsHasBeenSet = true; m_customEndpoints.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the DB cluster has instances in multiple Availability
     * Zones.</p>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }
    inline DBCluster& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database engine used for this DB cluster.</p>
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
     * <p>The version of the database engine.</p>
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
     * <p>The latest time to which a database can be restored with point-in-time
     * restore.</p>
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
     * <p>The port that the database engine is listening on.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline DBCluster& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The master username for the DB cluster.</p>
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
     * <p>The list of option group memberships for this DB cluster.</p>
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
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled, as determined by the
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
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p>
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
     * <p>The identifier of the source DB cluster if this DB cluster is a read
     * replica.</p>
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
     * <p>Contains one or more identifiers of the read replicas associated with this DB
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
     * <p>Reserved for future use.</p>
     */
    inline const Aws::Vector<DBClusterStatusInfo>& GetStatusInfos() const{ return m_statusInfos; }
    inline bool StatusInfosHasBeenSet() const { return m_statusInfosHasBeenSet; }
    inline void SetStatusInfos(const Aws::Vector<DBClusterStatusInfo>& value) { m_statusInfosHasBeenSet = true; m_statusInfos = value; }
    inline void SetStatusInfos(Aws::Vector<DBClusterStatusInfo>&& value) { m_statusInfosHasBeenSet = true; m_statusInfos = std::move(value); }
    inline DBCluster& WithStatusInfos(const Aws::Vector<DBClusterStatusInfo>& value) { SetStatusInfos(value); return *this;}
    inline DBCluster& WithStatusInfos(Aws::Vector<DBClusterStatusInfo>&& value) { SetStatusInfos(std::move(value)); return *this;}
    inline DBCluster& AddStatusInfos(const DBClusterStatusInfo& value) { m_statusInfosHasBeenSet = true; m_statusInfos.push_back(value); return *this; }
    inline DBCluster& AddStatusInfos(DBClusterStatusInfo&& value) { m_statusInfosHasBeenSet = true; m_statusInfos.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of DB instances that make up the DB cluster.</p>
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
     * <p>The list of VPC security groups that the DB cluster belongs to.</p>
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
     * <p>The ID that Amazon Route 53 assigns when you create a hosted zone.</p>
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
     * <p>Indicates whether the DB cluster is encrypted.</p>
     */
    inline bool GetStorageEncrypted() const{ return m_storageEncrypted; }
    inline bool StorageEncryptedHasBeenSet() const { return m_storageEncryptedHasBeenSet; }
    inline void SetStorageEncrypted(bool value) { m_storageEncryptedHasBeenSet = true; m_storageEncrypted = value; }
    inline DBCluster& WithStorageEncrypted(bool value) { SetStorageEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>StorageEncrypted</code> is enabled, the Amazon Web Services KMS key
     * identifier for the encrypted DB cluster.</p> <p>The Amazon Web Services KMS key
     * identifier is the key ARN, key ID, alias ARN, or alias name for the KMS key.</p>
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
     * <p>The Amazon Web Services Region-unique, immutable identifier for the DB
     * cluster. This identifier is found in Amazon Web Services CloudTrail log entries
     * whenever the KMS key for the DB cluster is accessed.</p>
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
     * <p>A list of the Amazon Web Services Identity and Access Management (IAM) roles
     * that are associated with the DB cluster. IAM roles that are associated with a DB
     * cluster grant permission for the DB cluster to access other Amazon Web Services
     * on your behalf.</p>
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
     * <p>Indicates whether the mapping of Amazon Web Services Identity and Access
     * Management (IAM) accounts to database accounts is enabled.</p>
     */
    inline bool GetIAMDatabaseAuthenticationEnabled() const{ return m_iAMDatabaseAuthenticationEnabled; }
    inline bool IAMDatabaseAuthenticationEnabledHasBeenSet() const { return m_iAMDatabaseAuthenticationEnabledHasBeenSet; }
    inline void SetIAMDatabaseAuthenticationEnabled(bool value) { m_iAMDatabaseAuthenticationEnabledHasBeenSet = true; m_iAMDatabaseAuthenticationEnabled = value; }
    inline DBCluster& WithIAMDatabaseAuthenticationEnabled(bool value) { SetIAMDatabaseAuthenticationEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the clone group with which the DB cluster is associated.</p>
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
     * <p>The time when the DB cluster was created, in Universal Coordinated Time
     * (UTC).</p>
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
     * <p>The earliest time to which a DB cluster can be backtracked.</p>
     */
    inline const Aws::Utils::DateTime& GetEarliestBacktrackTime() const{ return m_earliestBacktrackTime; }
    inline bool EarliestBacktrackTimeHasBeenSet() const { return m_earliestBacktrackTimeHasBeenSet; }
    inline void SetEarliestBacktrackTime(const Aws::Utils::DateTime& value) { m_earliestBacktrackTimeHasBeenSet = true; m_earliestBacktrackTime = value; }
    inline void SetEarliestBacktrackTime(Aws::Utils::DateTime&& value) { m_earliestBacktrackTimeHasBeenSet = true; m_earliestBacktrackTime = std::move(value); }
    inline DBCluster& WithEarliestBacktrackTime(const Aws::Utils::DateTime& value) { SetEarliestBacktrackTime(value); return *this;}
    inline DBCluster& WithEarliestBacktrackTime(Aws::Utils::DateTime&& value) { SetEarliestBacktrackTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target backtrack window, in seconds. If this value is set to
     * <code>0</code>, backtracking is disabled for the DB cluster. Otherwise,
     * backtracking is enabled.</p>
     */
    inline long long GetBacktrackWindow() const{ return m_backtrackWindow; }
    inline bool BacktrackWindowHasBeenSet() const { return m_backtrackWindowHasBeenSet; }
    inline void SetBacktrackWindow(long long value) { m_backtrackWindowHasBeenSet = true; m_backtrackWindow = value; }
    inline DBCluster& WithBacktrackWindow(long long value) { SetBacktrackWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of change records stored for Backtrack.</p>
     */
    inline long long GetBacktrackConsumedChangeRecords() const{ return m_backtrackConsumedChangeRecords; }
    inline bool BacktrackConsumedChangeRecordsHasBeenSet() const { return m_backtrackConsumedChangeRecordsHasBeenSet; }
    inline void SetBacktrackConsumedChangeRecords(long long value) { m_backtrackConsumedChangeRecordsHasBeenSet = true; m_backtrackConsumedChangeRecords = value; }
    inline DBCluster& WithBacktrackConsumedChangeRecords(long long value) { SetBacktrackConsumedChangeRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of log types that this DB cluster is configured to export to
     * CloudWatch Logs.</p> <p>Log types vary by DB engine. For information about the
     * log types for each DB engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html">Amazon
     * RDS Database Log Files</a> in the <i>Amazon Aurora User Guide.</i> </p>
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
     * <p>The current capacity of an Aurora Serverless v1 DB cluster. The capacity is
     * <code>0</code> (zero) when the cluster is paused.</p> <p>For more information
     * about Aurora Serverless v1, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless.html">Using
     * Amazon Aurora Serverless v1</a> in the <i>Amazon Aurora User Guide</i>.</p>
     */
    inline int GetCapacity() const{ return m_capacity; }
    inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }
    inline void SetCapacity(int value) { m_capacityHasBeenSet = true; m_capacity = value; }
    inline DBCluster& WithCapacity(int value) { SetCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DB engine mode of the DB cluster, either <code>provisioned</code> or
     * <code>serverless</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_CreateDBCluster.html">
     * CreateDBCluster</a>.</p>
     */
    inline const Aws::String& GetEngineMode() const{ return m_engineMode; }
    inline bool EngineModeHasBeenSet() const { return m_engineModeHasBeenSet; }
    inline void SetEngineMode(const Aws::String& value) { m_engineModeHasBeenSet = true; m_engineMode = value; }
    inline void SetEngineMode(Aws::String&& value) { m_engineModeHasBeenSet = true; m_engineMode = std::move(value); }
    inline void SetEngineMode(const char* value) { m_engineModeHasBeenSet = true; m_engineMode.assign(value); }
    inline DBCluster& WithEngineMode(const Aws::String& value) { SetEngineMode(value); return *this;}
    inline DBCluster& WithEngineMode(Aws::String&& value) { SetEngineMode(std::move(value)); return *this;}
    inline DBCluster& WithEngineMode(const char* value) { SetEngineMode(value); return *this;}
    ///@}

    ///@{
    
    inline const ScalingConfigurationInfo& GetScalingConfigurationInfo() const{ return m_scalingConfigurationInfo; }
    inline bool ScalingConfigurationInfoHasBeenSet() const { return m_scalingConfigurationInfoHasBeenSet; }
    inline void SetScalingConfigurationInfo(const ScalingConfigurationInfo& value) { m_scalingConfigurationInfoHasBeenSet = true; m_scalingConfigurationInfo = value; }
    inline void SetScalingConfigurationInfo(ScalingConfigurationInfo&& value) { m_scalingConfigurationInfoHasBeenSet = true; m_scalingConfigurationInfo = std::move(value); }
    inline DBCluster& WithScalingConfigurationInfo(const ScalingConfigurationInfo& value) { SetScalingConfigurationInfo(value); return *this;}
    inline DBCluster& WithScalingConfigurationInfo(ScalingConfigurationInfo&& value) { SetScalingConfigurationInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline const RdsCustomClusterConfiguration& GetRdsCustomClusterConfiguration() const{ return m_rdsCustomClusterConfiguration; }
    inline bool RdsCustomClusterConfigurationHasBeenSet() const { return m_rdsCustomClusterConfigurationHasBeenSet; }
    inline void SetRdsCustomClusterConfiguration(const RdsCustomClusterConfiguration& value) { m_rdsCustomClusterConfigurationHasBeenSet = true; m_rdsCustomClusterConfiguration = value; }
    inline void SetRdsCustomClusterConfiguration(RdsCustomClusterConfiguration&& value) { m_rdsCustomClusterConfigurationHasBeenSet = true; m_rdsCustomClusterConfiguration = std::move(value); }
    inline DBCluster& WithRdsCustomClusterConfiguration(const RdsCustomClusterConfiguration& value) { SetRdsCustomClusterConfiguration(value); return *this;}
    inline DBCluster& WithRdsCustomClusterConfiguration(RdsCustomClusterConfiguration&& value) { SetRdsCustomClusterConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the DB cluster has deletion protection enabled. The
     * database can't be deleted when deletion protection is enabled.</p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }
    inline DBCluster& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}
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
    inline bool GetHttpEndpointEnabled() const{ return m_httpEndpointEnabled; }
    inline bool HttpEndpointEnabledHasBeenSet() const { return m_httpEndpointEnabledHasBeenSet; }
    inline void SetHttpEndpointEnabled(bool value) { m_httpEndpointEnabledHasBeenSet = true; m_httpEndpointEnabled = value; }
    inline DBCluster& WithHttpEndpointEnabled(bool value) { SetHttpEndpointEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mode of the database activity stream. Database events such as a change or
     * access generate an activity stream event. The database session can handle these
     * events either synchronously or asynchronously.</p>
     */
    inline const ActivityStreamMode& GetActivityStreamMode() const{ return m_activityStreamMode; }
    inline bool ActivityStreamModeHasBeenSet() const { return m_activityStreamModeHasBeenSet; }
    inline void SetActivityStreamMode(const ActivityStreamMode& value) { m_activityStreamModeHasBeenSet = true; m_activityStreamMode = value; }
    inline void SetActivityStreamMode(ActivityStreamMode&& value) { m_activityStreamModeHasBeenSet = true; m_activityStreamMode = std::move(value); }
    inline DBCluster& WithActivityStreamMode(const ActivityStreamMode& value) { SetActivityStreamMode(value); return *this;}
    inline DBCluster& WithActivityStreamMode(ActivityStreamMode&& value) { SetActivityStreamMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the database activity stream.</p>
     */
    inline const ActivityStreamStatus& GetActivityStreamStatus() const{ return m_activityStreamStatus; }
    inline bool ActivityStreamStatusHasBeenSet() const { return m_activityStreamStatusHasBeenSet; }
    inline void SetActivityStreamStatus(const ActivityStreamStatus& value) { m_activityStreamStatusHasBeenSet = true; m_activityStreamStatus = value; }
    inline void SetActivityStreamStatus(ActivityStreamStatus&& value) { m_activityStreamStatusHasBeenSet = true; m_activityStreamStatus = std::move(value); }
    inline DBCluster& WithActivityStreamStatus(const ActivityStreamStatus& value) { SetActivityStreamStatus(value); return *this;}
    inline DBCluster& WithActivityStreamStatus(ActivityStreamStatus&& value) { SetActivityStreamStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS key identifier used for encrypting messages in
     * the database activity stream.</p> <p>The Amazon Web Services KMS key identifier
     * is the key ARN, key ID, alias ARN, or alias name for the KMS key.</p>
     */
    inline const Aws::String& GetActivityStreamKmsKeyId() const{ return m_activityStreamKmsKeyId; }
    inline bool ActivityStreamKmsKeyIdHasBeenSet() const { return m_activityStreamKmsKeyIdHasBeenSet; }
    inline void SetActivityStreamKmsKeyId(const Aws::String& value) { m_activityStreamKmsKeyIdHasBeenSet = true; m_activityStreamKmsKeyId = value; }
    inline void SetActivityStreamKmsKeyId(Aws::String&& value) { m_activityStreamKmsKeyIdHasBeenSet = true; m_activityStreamKmsKeyId = std::move(value); }
    inline void SetActivityStreamKmsKeyId(const char* value) { m_activityStreamKmsKeyIdHasBeenSet = true; m_activityStreamKmsKeyId.assign(value); }
    inline DBCluster& WithActivityStreamKmsKeyId(const Aws::String& value) { SetActivityStreamKmsKeyId(value); return *this;}
    inline DBCluster& WithActivityStreamKmsKeyId(Aws::String&& value) { SetActivityStreamKmsKeyId(std::move(value)); return *this;}
    inline DBCluster& WithActivityStreamKmsKeyId(const char* value) { SetActivityStreamKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Kinesis data stream used for the database activity
     * stream.</p>
     */
    inline const Aws::String& GetActivityStreamKinesisStreamName() const{ return m_activityStreamKinesisStreamName; }
    inline bool ActivityStreamKinesisStreamNameHasBeenSet() const { return m_activityStreamKinesisStreamNameHasBeenSet; }
    inline void SetActivityStreamKinesisStreamName(const Aws::String& value) { m_activityStreamKinesisStreamNameHasBeenSet = true; m_activityStreamKinesisStreamName = value; }
    inline void SetActivityStreamKinesisStreamName(Aws::String&& value) { m_activityStreamKinesisStreamNameHasBeenSet = true; m_activityStreamKinesisStreamName = std::move(value); }
    inline void SetActivityStreamKinesisStreamName(const char* value) { m_activityStreamKinesisStreamNameHasBeenSet = true; m_activityStreamKinesisStreamName.assign(value); }
    inline DBCluster& WithActivityStreamKinesisStreamName(const Aws::String& value) { SetActivityStreamKinesisStreamName(value); return *this;}
    inline DBCluster& WithActivityStreamKinesisStreamName(Aws::String&& value) { SetActivityStreamKinesisStreamName(std::move(value)); return *this;}
    inline DBCluster& WithActivityStreamKinesisStreamName(const char* value) { SetActivityStreamKinesisStreamName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether tags are copied from the DB cluster to snapshots of the DB
     * cluster.</p>
     */
    inline bool GetCopyTagsToSnapshot() const{ return m_copyTagsToSnapshot; }
    inline bool CopyTagsToSnapshotHasBeenSet() const { return m_copyTagsToSnapshotHasBeenSet; }
    inline void SetCopyTagsToSnapshot(bool value) { m_copyTagsToSnapshotHasBeenSet = true; m_copyTagsToSnapshot = value; }
    inline DBCluster& WithCopyTagsToSnapshot(bool value) { SetCopyTagsToSnapshot(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the DB cluster is a clone of a DB cluster owned by a
     * different Amazon Web Services account.</p>
     */
    inline bool GetCrossAccountClone() const{ return m_crossAccountClone; }
    inline bool CrossAccountCloneHasBeenSet() const { return m_crossAccountCloneHasBeenSet; }
    inline void SetCrossAccountClone(bool value) { m_crossAccountCloneHasBeenSet = true; m_crossAccountClone = value; }
    inline DBCluster& WithCrossAccountClone(bool value) { SetCrossAccountClone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Active Directory Domain membership records associated with the DB
     * cluster.</p>
     */
    inline const Aws::Vector<DomainMembership>& GetDomainMemberships() const{ return m_domainMemberships; }
    inline bool DomainMembershipsHasBeenSet() const { return m_domainMembershipsHasBeenSet; }
    inline void SetDomainMemberships(const Aws::Vector<DomainMembership>& value) { m_domainMembershipsHasBeenSet = true; m_domainMemberships = value; }
    inline void SetDomainMemberships(Aws::Vector<DomainMembership>&& value) { m_domainMembershipsHasBeenSet = true; m_domainMemberships = std::move(value); }
    inline DBCluster& WithDomainMemberships(const Aws::Vector<DomainMembership>& value) { SetDomainMemberships(value); return *this;}
    inline DBCluster& WithDomainMemberships(Aws::Vector<DomainMembership>&& value) { SetDomainMemberships(std::move(value)); return *this;}
    inline DBCluster& AddDomainMemberships(const DomainMembership& value) { m_domainMembershipsHasBeenSet = true; m_domainMemberships.push_back(value); return *this; }
    inline DBCluster& AddDomainMemberships(DomainMembership&& value) { m_domainMembershipsHasBeenSet = true; m_domainMemberships.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTagList() const{ return m_tagList; }
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }
    inline void SetTagList(const Aws::Vector<Tag>& value) { m_tagListHasBeenSet = true; m_tagList = value; }
    inline void SetTagList(Aws::Vector<Tag>&& value) { m_tagListHasBeenSet = true; m_tagList = std::move(value); }
    inline DBCluster& WithTagList(const Aws::Vector<Tag>& value) { SetTagList(value); return *this;}
    inline DBCluster& WithTagList(Aws::Vector<Tag>&& value) { SetTagList(std::move(value)); return *this;}
    inline DBCluster& AddTagList(const Tag& value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }
    inline DBCluster& AddTagList(Tag&& value) { m_tagListHasBeenSet = true; m_tagList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of write forwarding for a secondary cluster in an Aurora global
     * database.</p>
     */
    inline const WriteForwardingStatus& GetGlobalWriteForwardingStatus() const{ return m_globalWriteForwardingStatus; }
    inline bool GlobalWriteForwardingStatusHasBeenSet() const { return m_globalWriteForwardingStatusHasBeenSet; }
    inline void SetGlobalWriteForwardingStatus(const WriteForwardingStatus& value) { m_globalWriteForwardingStatusHasBeenSet = true; m_globalWriteForwardingStatus = value; }
    inline void SetGlobalWriteForwardingStatus(WriteForwardingStatus&& value) { m_globalWriteForwardingStatusHasBeenSet = true; m_globalWriteForwardingStatus = std::move(value); }
    inline DBCluster& WithGlobalWriteForwardingStatus(const WriteForwardingStatus& value) { SetGlobalWriteForwardingStatus(value); return *this;}
    inline DBCluster& WithGlobalWriteForwardingStatus(WriteForwardingStatus&& value) { SetGlobalWriteForwardingStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether write forwarding is enabled for a secondary cluster in an
     * Aurora global database. Because write forwarding takes time to enable, check the
     * value of <code>GlobalWriteForwardingStatus</code> to confirm that the request
     * has completed before using the write forwarding feature for this cluster.</p>
     */
    inline bool GetGlobalWriteForwardingRequested() const{ return m_globalWriteForwardingRequested; }
    inline bool GlobalWriteForwardingRequestedHasBeenSet() const { return m_globalWriteForwardingRequestedHasBeenSet; }
    inline void SetGlobalWriteForwardingRequested(bool value) { m_globalWriteForwardingRequestedHasBeenSet = true; m_globalWriteForwardingRequested = value; }
    inline DBCluster& WithGlobalWriteForwardingRequested(bool value) { SetGlobalWriteForwardingRequested(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about pending changes to the DB cluster. This information is
     * returned only when there are pending changes. Specific changes are identified by
     * subelements.</p>
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
     * <p>The name of the compute and memory capacity class of the DB instance.</p>
     * <p>This setting is only for non-Aurora Multi-AZ DB clusters.</p>
     */
    inline const Aws::String& GetDBClusterInstanceClass() const{ return m_dBClusterInstanceClass; }
    inline bool DBClusterInstanceClassHasBeenSet() const { return m_dBClusterInstanceClassHasBeenSet; }
    inline void SetDBClusterInstanceClass(const Aws::String& value) { m_dBClusterInstanceClassHasBeenSet = true; m_dBClusterInstanceClass = value; }
    inline void SetDBClusterInstanceClass(Aws::String&& value) { m_dBClusterInstanceClassHasBeenSet = true; m_dBClusterInstanceClass = std::move(value); }
    inline void SetDBClusterInstanceClass(const char* value) { m_dBClusterInstanceClassHasBeenSet = true; m_dBClusterInstanceClass.assign(value); }
    inline DBCluster& WithDBClusterInstanceClass(const Aws::String& value) { SetDBClusterInstanceClass(value); return *this;}
    inline DBCluster& WithDBClusterInstanceClass(Aws::String&& value) { SetDBClusterInstanceClass(std::move(value)); return *this;}
    inline DBCluster& WithDBClusterInstanceClass(const char* value) { SetDBClusterInstanceClass(value); return *this;}
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

    ///@{
    /**
     * <p>The Provisioned IOPS (I/O operations per second) value.</p> <p>This setting
     * is only for non-Aurora Multi-AZ DB clusters.</p>
     */
    inline int GetIops() const{ return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline DBCluster& WithIops(int value) { SetIops(value); return *this;}
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
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline DBCluster& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether minor version patches are applied automatically.</p>
     * <p>This setting is for Aurora DB clusters and Multi-AZ DB clusters.</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }
    inline DBCluster& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the DB cluster.</p> <p>This setting is only for -Aurora DB
     * clusters and Multi-AZ DB clusters.</p>
     */
    inline int GetMonitoringInterval() const{ return m_monitoringInterval; }
    inline bool MonitoringIntervalHasBeenSet() const { return m_monitoringIntervalHasBeenSet; }
    inline void SetMonitoringInterval(int value) { m_monitoringIntervalHasBeenSet = true; m_monitoringInterval = value; }
    inline DBCluster& WithMonitoringInterval(int value) { SetMonitoringInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the IAM role that permits RDS to send Enhanced Monitoring metrics
     * to Amazon CloudWatch Logs.</p> <p>This setting is only for Aurora DB clusters
     * and Multi-AZ DB clusters.</p>
     */
    inline const Aws::String& GetMonitoringRoleArn() const{ return m_monitoringRoleArn; }
    inline bool MonitoringRoleArnHasBeenSet() const { return m_monitoringRoleArnHasBeenSet; }
    inline void SetMonitoringRoleArn(const Aws::String& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = value; }
    inline void SetMonitoringRoleArn(Aws::String&& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = std::move(value); }
    inline void SetMonitoringRoleArn(const char* value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn.assign(value); }
    inline DBCluster& WithMonitoringRoleArn(const Aws::String& value) { SetMonitoringRoleArn(value); return *this;}
    inline DBCluster& WithMonitoringRoleArn(Aws::String&& value) { SetMonitoringRoleArn(std::move(value)); return *this;}
    inline DBCluster& WithMonitoringRoleArn(const char* value) { SetMonitoringRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mode of Database Insights that is enabled for the DB cluster.</p>
     */
    inline const DatabaseInsightsMode& GetDatabaseInsightsMode() const{ return m_databaseInsightsMode; }
    inline bool DatabaseInsightsModeHasBeenSet() const { return m_databaseInsightsModeHasBeenSet; }
    inline void SetDatabaseInsightsMode(const DatabaseInsightsMode& value) { m_databaseInsightsModeHasBeenSet = true; m_databaseInsightsMode = value; }
    inline void SetDatabaseInsightsMode(DatabaseInsightsMode&& value) { m_databaseInsightsModeHasBeenSet = true; m_databaseInsightsMode = std::move(value); }
    inline DBCluster& WithDatabaseInsightsMode(const DatabaseInsightsMode& value) { SetDatabaseInsightsMode(value); return *this;}
    inline DBCluster& WithDatabaseInsightsMode(DatabaseInsightsMode&& value) { SetDatabaseInsightsMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether Performance Insights is enabled for the DB cluster.</p>
     * <p>This setting is only for Aurora DB clusters and Multi-AZ DB clusters.</p>
     */
    inline bool GetPerformanceInsightsEnabled() const{ return m_performanceInsightsEnabled; }
    inline bool PerformanceInsightsEnabledHasBeenSet() const { return m_performanceInsightsEnabledHasBeenSet; }
    inline void SetPerformanceInsightsEnabled(bool value) { m_performanceInsightsEnabledHasBeenSet = true; m_performanceInsightsEnabled = value; }
    inline DBCluster& WithPerformanceInsightsEnabled(bool value) { SetPerformanceInsightsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of Performance
     * Insights data.</p> <p>The Amazon Web Services KMS key identifier is the key ARN,
     * key ID, alias ARN, or alias name for the KMS key.</p> <p>This setting is only
     * for Aurora DB clusters and Multi-AZ DB clusters.</p>
     */
    inline const Aws::String& GetPerformanceInsightsKMSKeyId() const{ return m_performanceInsightsKMSKeyId; }
    inline bool PerformanceInsightsKMSKeyIdHasBeenSet() const { return m_performanceInsightsKMSKeyIdHasBeenSet; }
    inline void SetPerformanceInsightsKMSKeyId(const Aws::String& value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId = value; }
    inline void SetPerformanceInsightsKMSKeyId(Aws::String&& value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId = std::move(value); }
    inline void SetPerformanceInsightsKMSKeyId(const char* value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId.assign(value); }
    inline DBCluster& WithPerformanceInsightsKMSKeyId(const Aws::String& value) { SetPerformanceInsightsKMSKeyId(value); return *this;}
    inline DBCluster& WithPerformanceInsightsKMSKeyId(Aws::String&& value) { SetPerformanceInsightsKMSKeyId(std::move(value)); return *this;}
    inline DBCluster& WithPerformanceInsightsKMSKeyId(const char* value) { SetPerformanceInsightsKMSKeyId(value); return *this;}
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
    inline int GetPerformanceInsightsRetentionPeriod() const{ return m_performanceInsightsRetentionPeriod; }
    inline bool PerformanceInsightsRetentionPeriodHasBeenSet() const { return m_performanceInsightsRetentionPeriodHasBeenSet; }
    inline void SetPerformanceInsightsRetentionPeriod(int value) { m_performanceInsightsRetentionPeriodHasBeenSet = true; m_performanceInsightsRetentionPeriod = value; }
    inline DBCluster& WithPerformanceInsightsRetentionPeriod(int value) { SetPerformanceInsightsRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    
    inline const ServerlessV2ScalingConfigurationInfo& GetServerlessV2ScalingConfiguration() const{ return m_serverlessV2ScalingConfiguration; }
    inline bool ServerlessV2ScalingConfigurationHasBeenSet() const { return m_serverlessV2ScalingConfigurationHasBeenSet; }
    inline void SetServerlessV2ScalingConfiguration(const ServerlessV2ScalingConfigurationInfo& value) { m_serverlessV2ScalingConfigurationHasBeenSet = true; m_serverlessV2ScalingConfiguration = value; }
    inline void SetServerlessV2ScalingConfiguration(ServerlessV2ScalingConfigurationInfo&& value) { m_serverlessV2ScalingConfigurationHasBeenSet = true; m_serverlessV2ScalingConfiguration = std::move(value); }
    inline DBCluster& WithServerlessV2ScalingConfiguration(const ServerlessV2ScalingConfigurationInfo& value) { SetServerlessV2ScalingConfiguration(value); return *this;}
    inline DBCluster& WithServerlessV2ScalingConfiguration(ServerlessV2ScalingConfigurationInfo&& value) { SetServerlessV2ScalingConfiguration(std::move(value)); return *this;}
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
    inline const Aws::String& GetNetworkType() const{ return m_networkType; }
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
    inline void SetNetworkType(const Aws::String& value) { m_networkTypeHasBeenSet = true; m_networkType = value; }
    inline void SetNetworkType(Aws::String&& value) { m_networkTypeHasBeenSet = true; m_networkType = std::move(value); }
    inline void SetNetworkType(const char* value) { m_networkTypeHasBeenSet = true; m_networkType.assign(value); }
    inline DBCluster& WithNetworkType(const Aws::String& value) { SetNetworkType(value); return *this;}
    inline DBCluster& WithNetworkType(Aws::String&& value) { SetNetworkType(std::move(value)); return *this;}
    inline DBCluster& WithNetworkType(const char* value) { SetNetworkType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetDBSystemId() const{ return m_dBSystemId; }
    inline bool DBSystemIdHasBeenSet() const { return m_dBSystemIdHasBeenSet; }
    inline void SetDBSystemId(const Aws::String& value) { m_dBSystemIdHasBeenSet = true; m_dBSystemId = value; }
    inline void SetDBSystemId(Aws::String&& value) { m_dBSystemIdHasBeenSet = true; m_dBSystemId = std::move(value); }
    inline void SetDBSystemId(const char* value) { m_dBSystemIdHasBeenSet = true; m_dBSystemId.assign(value); }
    inline DBCluster& WithDBSystemId(const Aws::String& value) { SetDBSystemId(value); return *this;}
    inline DBCluster& WithDBSystemId(Aws::String&& value) { SetDBSystemId(std::move(value)); return *this;}
    inline DBCluster& WithDBSystemId(const char* value) { SetDBSystemId(value); return *this;}
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
    inline const MasterUserSecret& GetMasterUserSecret() const{ return m_masterUserSecret; }
    inline bool MasterUserSecretHasBeenSet() const { return m_masterUserSecretHasBeenSet; }
    inline void SetMasterUserSecret(const MasterUserSecret& value) { m_masterUserSecretHasBeenSet = true; m_masterUserSecret = value; }
    inline void SetMasterUserSecret(MasterUserSecret&& value) { m_masterUserSecretHasBeenSet = true; m_masterUserSecret = std::move(value); }
    inline DBCluster& WithMasterUserSecret(const MasterUserSecret& value) { SetMasterUserSecret(value); return *this;}
    inline DBCluster& WithMasterUserSecret(MasterUserSecret&& value) { SetMasterUserSecret(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next time you can modify the DB cluster to use the
     * <code>aurora-iopt1</code> storage type.</p> <p>This setting is only for Aurora
     * DB clusters.</p>
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
     * <p>Indicates whether an Aurora DB cluster has in-cluster write forwarding
     * enabled, not enabled, requested, or is in the process of enabling it.</p>
     */
    inline const LocalWriteForwardingStatus& GetLocalWriteForwardingStatus() const{ return m_localWriteForwardingStatus; }
    inline bool LocalWriteForwardingStatusHasBeenSet() const { return m_localWriteForwardingStatusHasBeenSet; }
    inline void SetLocalWriteForwardingStatus(const LocalWriteForwardingStatus& value) { m_localWriteForwardingStatusHasBeenSet = true; m_localWriteForwardingStatus = value; }
    inline void SetLocalWriteForwardingStatus(LocalWriteForwardingStatus&& value) { m_localWriteForwardingStatusHasBeenSet = true; m_localWriteForwardingStatus = std::move(value); }
    inline DBCluster& WithLocalWriteForwardingStatus(const LocalWriteForwardingStatus& value) { SetLocalWriteForwardingStatus(value); return *this;}
    inline DBCluster& WithLocalWriteForwardingStatus(LocalWriteForwardingStatus&& value) { SetLocalWriteForwardingStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the recovery point in Amazon Web Services
     * Backup.</p>
     */
    inline const Aws::String& GetAwsBackupRecoveryPointArn() const{ return m_awsBackupRecoveryPointArn; }
    inline bool AwsBackupRecoveryPointArnHasBeenSet() const { return m_awsBackupRecoveryPointArnHasBeenSet; }
    inline void SetAwsBackupRecoveryPointArn(const Aws::String& value) { m_awsBackupRecoveryPointArnHasBeenSet = true; m_awsBackupRecoveryPointArn = value; }
    inline void SetAwsBackupRecoveryPointArn(Aws::String&& value) { m_awsBackupRecoveryPointArnHasBeenSet = true; m_awsBackupRecoveryPointArn = std::move(value); }
    inline void SetAwsBackupRecoveryPointArn(const char* value) { m_awsBackupRecoveryPointArnHasBeenSet = true; m_awsBackupRecoveryPointArn.assign(value); }
    inline DBCluster& WithAwsBackupRecoveryPointArn(const Aws::String& value) { SetAwsBackupRecoveryPointArn(value); return *this;}
    inline DBCluster& WithAwsBackupRecoveryPointArn(Aws::String&& value) { SetAwsBackupRecoveryPointArn(std::move(value)); return *this;}
    inline DBCluster& WithAwsBackupRecoveryPointArn(const char* value) { SetAwsBackupRecoveryPointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details for Aurora Limitless Database.</p>
     */
    inline const LimitlessDatabase& GetLimitlessDatabase() const{ return m_limitlessDatabase; }
    inline bool LimitlessDatabaseHasBeenSet() const { return m_limitlessDatabaseHasBeenSet; }
    inline void SetLimitlessDatabase(const LimitlessDatabase& value) { m_limitlessDatabaseHasBeenSet = true; m_limitlessDatabase = value; }
    inline void SetLimitlessDatabase(LimitlessDatabase&& value) { m_limitlessDatabaseHasBeenSet = true; m_limitlessDatabase = std::move(value); }
    inline DBCluster& WithLimitlessDatabase(const LimitlessDatabase& value) { SetLimitlessDatabase(value); return *this;}
    inline DBCluster& WithLimitlessDatabase(LimitlessDatabase&& value) { SetLimitlessDatabase(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage throughput for the DB cluster. The throughput is automatically
     * set based on the IOPS that you provision, and is not configurable.</p> <p>This
     * setting is only for non-Aurora Multi-AZ DB clusters.</p>
     */
    inline int GetStorageThroughput() const{ return m_storageThroughput; }
    inline bool StorageThroughputHasBeenSet() const { return m_storageThroughputHasBeenSet; }
    inline void SetStorageThroughput(int value) { m_storageThroughputHasBeenSet = true; m_storageThroughput = value; }
    inline DBCluster& WithStorageThroughput(int value) { SetStorageThroughput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scalability mode of the Aurora DB cluster. When set to
     * <code>limitless</code>, the cluster operates as an Aurora Limitless Database.
     * When set to <code>standard</code> (the default), the cluster uses normal DB
     * instance creation.</p>
     */
    inline const ClusterScalabilityType& GetClusterScalabilityType() const{ return m_clusterScalabilityType; }
    inline bool ClusterScalabilityTypeHasBeenSet() const { return m_clusterScalabilityTypeHasBeenSet; }
    inline void SetClusterScalabilityType(const ClusterScalabilityType& value) { m_clusterScalabilityTypeHasBeenSet = true; m_clusterScalabilityType = value; }
    inline void SetClusterScalabilityType(ClusterScalabilityType&& value) { m_clusterScalabilityTypeHasBeenSet = true; m_clusterScalabilityType = std::move(value); }
    inline DBCluster& WithClusterScalabilityType(const ClusterScalabilityType& value) { SetClusterScalabilityType(value); return *this;}
    inline DBCluster& WithClusterScalabilityType(ClusterScalabilityType&& value) { SetClusterScalabilityType(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const CertificateDetails& GetCertificateDetails() const{ return m_certificateDetails; }
    inline bool CertificateDetailsHasBeenSet() const { return m_certificateDetailsHasBeenSet; }
    inline void SetCertificateDetails(const CertificateDetails& value) { m_certificateDetailsHasBeenSet = true; m_certificateDetails = value; }
    inline void SetCertificateDetails(CertificateDetails&& value) { m_certificateDetailsHasBeenSet = true; m_certificateDetails = std::move(value); }
    inline DBCluster& WithCertificateDetails(const CertificateDetails& value) { SetCertificateDetails(value); return *this;}
    inline DBCluster& WithCertificateDetails(CertificateDetails&& value) { SetCertificateDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The life cycle type for the DB cluster.</p> <p>For more information, see
     * CreateDBCluster.</p>
     */
    inline const Aws::String& GetEngineLifecycleSupport() const{ return m_engineLifecycleSupport; }
    inline bool EngineLifecycleSupportHasBeenSet() const { return m_engineLifecycleSupportHasBeenSet; }
    inline void SetEngineLifecycleSupport(const Aws::String& value) { m_engineLifecycleSupportHasBeenSet = true; m_engineLifecycleSupport = value; }
    inline void SetEngineLifecycleSupport(Aws::String&& value) { m_engineLifecycleSupportHasBeenSet = true; m_engineLifecycleSupport = std::move(value); }
    inline void SetEngineLifecycleSupport(const char* value) { m_engineLifecycleSupportHasBeenSet = true; m_engineLifecycleSupport.assign(value); }
    inline DBCluster& WithEngineLifecycleSupport(const Aws::String& value) { SetEngineLifecycleSupport(value); return *this;}
    inline DBCluster& WithEngineLifecycleSupport(Aws::String&& value) { SetEngineLifecycleSupport(std::move(value)); return *this;}
    inline DBCluster& WithEngineLifecycleSupport(const char* value) { SetEngineLifecycleSupport(value); return *this;}
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

    Aws::Utils::DateTime m_automaticRestartTime;
    bool m_automaticRestartTimeHasBeenSet = false;

    Aws::String m_percentProgress;
    bool m_percentProgressHasBeenSet = false;

    Aws::Utils::DateTime m_earliestRestorableTime;
    bool m_earliestRestorableTimeHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::String m_readerEndpoint;
    bool m_readerEndpointHasBeenSet = false;

    Aws::Vector<Aws::String> m_customEndpoints;
    bool m_customEndpointsHasBeenSet = false;

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

    Aws::Vector<DBClusterStatusInfo> m_statusInfos;
    bool m_statusInfosHasBeenSet = false;

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

    Aws::Utils::DateTime m_earliestBacktrackTime;
    bool m_earliestBacktrackTimeHasBeenSet = false;

    long long m_backtrackWindow;
    bool m_backtrackWindowHasBeenSet = false;

    long long m_backtrackConsumedChangeRecords;
    bool m_backtrackConsumedChangeRecordsHasBeenSet = false;

    Aws::Vector<Aws::String> m_enabledCloudwatchLogsExports;
    bool m_enabledCloudwatchLogsExportsHasBeenSet = false;

    int m_capacity;
    bool m_capacityHasBeenSet = false;

    Aws::String m_engineMode;
    bool m_engineModeHasBeenSet = false;

    ScalingConfigurationInfo m_scalingConfigurationInfo;
    bool m_scalingConfigurationInfoHasBeenSet = false;

    RdsCustomClusterConfiguration m_rdsCustomClusterConfiguration;
    bool m_rdsCustomClusterConfigurationHasBeenSet = false;

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet = false;

    bool m_httpEndpointEnabled;
    bool m_httpEndpointEnabledHasBeenSet = false;

    ActivityStreamMode m_activityStreamMode;
    bool m_activityStreamModeHasBeenSet = false;

    ActivityStreamStatus m_activityStreamStatus;
    bool m_activityStreamStatusHasBeenSet = false;

    Aws::String m_activityStreamKmsKeyId;
    bool m_activityStreamKmsKeyIdHasBeenSet = false;

    Aws::String m_activityStreamKinesisStreamName;
    bool m_activityStreamKinesisStreamNameHasBeenSet = false;

    bool m_copyTagsToSnapshot;
    bool m_copyTagsToSnapshotHasBeenSet = false;

    bool m_crossAccountClone;
    bool m_crossAccountCloneHasBeenSet = false;

    Aws::Vector<DomainMembership> m_domainMemberships;
    bool m_domainMembershipsHasBeenSet = false;

    Aws::Vector<Tag> m_tagList;
    bool m_tagListHasBeenSet = false;

    WriteForwardingStatus m_globalWriteForwardingStatus;
    bool m_globalWriteForwardingStatusHasBeenSet = false;

    bool m_globalWriteForwardingRequested;
    bool m_globalWriteForwardingRequestedHasBeenSet = false;

    ClusterPendingModifiedValues m_pendingModifiedValues;
    bool m_pendingModifiedValuesHasBeenSet = false;

    Aws::String m_dBClusterInstanceClass;
    bool m_dBClusterInstanceClassHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    int m_iops;
    bool m_iopsHasBeenSet = false;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet = false;

    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet = false;

    int m_monitoringInterval;
    bool m_monitoringIntervalHasBeenSet = false;

    Aws::String m_monitoringRoleArn;
    bool m_monitoringRoleArnHasBeenSet = false;

    DatabaseInsightsMode m_databaseInsightsMode;
    bool m_databaseInsightsModeHasBeenSet = false;

    bool m_performanceInsightsEnabled;
    bool m_performanceInsightsEnabledHasBeenSet = false;

    Aws::String m_performanceInsightsKMSKeyId;
    bool m_performanceInsightsKMSKeyIdHasBeenSet = false;

    int m_performanceInsightsRetentionPeriod;
    bool m_performanceInsightsRetentionPeriodHasBeenSet = false;

    ServerlessV2ScalingConfigurationInfo m_serverlessV2ScalingConfiguration;
    bool m_serverlessV2ScalingConfigurationHasBeenSet = false;

    Aws::String m_networkType;
    bool m_networkTypeHasBeenSet = false;

    Aws::String m_dBSystemId;
    bool m_dBSystemIdHasBeenSet = false;

    MasterUserSecret m_masterUserSecret;
    bool m_masterUserSecretHasBeenSet = false;

    Aws::Utils::DateTime m_iOOptimizedNextAllowedModificationTime;
    bool m_iOOptimizedNextAllowedModificationTimeHasBeenSet = false;

    LocalWriteForwardingStatus m_localWriteForwardingStatus;
    bool m_localWriteForwardingStatusHasBeenSet = false;

    Aws::String m_awsBackupRecoveryPointArn;
    bool m_awsBackupRecoveryPointArnHasBeenSet = false;

    LimitlessDatabase m_limitlessDatabase;
    bool m_limitlessDatabaseHasBeenSet = false;

    int m_storageThroughput;
    bool m_storageThroughputHasBeenSet = false;

    ClusterScalabilityType m_clusterScalabilityType;
    bool m_clusterScalabilityTypeHasBeenSet = false;

    CertificateDetails m_certificateDetails;
    bool m_certificateDetailsHasBeenSet = false;

    Aws::String m_engineLifecycleSupport;
    bool m_engineLifecycleSupportHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
