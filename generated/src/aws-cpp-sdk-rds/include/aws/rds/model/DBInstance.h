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
#include <aws/rds/model/ActivityStreamPolicyStatus.h>
#include <aws/rds/model/ActivityStreamStatus.h>
#include <aws/rds/model/AdditionalStorageVolumeOutput.h>
#include <aws/rds/model/AutomationMode.h>
#include <aws/rds/model/CertificateDetails.h>
#include <aws/rds/model/DBInstanceAutomatedBackupsReplication.h>
#include <aws/rds/model/DBInstanceRole.h>
#include <aws/rds/model/DBInstanceStatusInfo.h>
#include <aws/rds/model/DBParameterGroupStatus.h>
#include <aws/rds/model/DBSecurityGroupMembership.h>
#include <aws/rds/model/DBSubnetGroup.h>
#include <aws/rds/model/DatabaseInsightsMode.h>
#include <aws/rds/model/DomainMembership.h>
#include <aws/rds/model/Endpoint.h>
#include <aws/rds/model/MasterUserSecret.h>
#include <aws/rds/model/OptionGroupMembership.h>
#include <aws/rds/model/PendingModifiedValues.h>
#include <aws/rds/model/ProcessorFeature.h>
#include <aws/rds/model/ReplicaMode.h>
#include <aws/rds/model/StorageEncryptionType.h>
#include <aws/rds/model/Tag.h>
#include <aws/rds/model/UpgradeRolloutOrder.h>
#include <aws/rds/model/VpcSecurityGroupMembership.h>

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
 * <p>Contains the details of an Amazon RDS DB instance.</p> <p>This data type is
 * used as a response element in the operations <code>CreateDBInstance</code>,
 * <code>CreateDBInstanceReadReplica</code>, <code>DeleteDBInstance</code>,
 * <code>DescribeDBInstances</code>, <code>ModifyDBInstance</code>,
 * <code>PromoteReadReplica</code>, <code>RebootDBInstance</code>,
 * <code>RestoreDBInstanceFromDBSnapshot</code>,
 * <code>RestoreDBInstanceFromS3</code>,
 * <code>RestoreDBInstanceToPointInTime</code>, <code>StartDBInstance</code>, and
 * <code>StopDBInstance</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBInstance">AWS API
 * Reference</a></p>
 */
class DBInstance {
 public:
  AWS_RDS_API DBInstance() = default;
  AWS_RDS_API DBInstance(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_RDS_API DBInstance& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The user-supplied database identifier. This identifier is the unique key that
   * identifies a DB instance.</p>
   */
  inline const Aws::String& GetDBInstanceIdentifier() const { return m_dBInstanceIdentifier; }
  inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }
  template <typename DBInstanceIdentifierT = Aws::String>
  void SetDBInstanceIdentifier(DBInstanceIdentifierT&& value) {
    m_dBInstanceIdentifierHasBeenSet = true;
    m_dBInstanceIdentifier = std::forward<DBInstanceIdentifierT>(value);
  }
  template <typename DBInstanceIdentifierT = Aws::String>
  DBInstance& WithDBInstanceIdentifier(DBInstanceIdentifierT&& value) {
    SetDBInstanceIdentifier(std::forward<DBInstanceIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the compute and memory capacity class of the DB instance.</p>
   */
  inline const Aws::String& GetDBInstanceClass() const { return m_dBInstanceClass; }
  inline bool DBInstanceClassHasBeenSet() const { return m_dBInstanceClassHasBeenSet; }
  template <typename DBInstanceClassT = Aws::String>
  void SetDBInstanceClass(DBInstanceClassT&& value) {
    m_dBInstanceClassHasBeenSet = true;
    m_dBInstanceClass = std::forward<DBInstanceClassT>(value);
  }
  template <typename DBInstanceClassT = Aws::String>
  DBInstance& WithDBInstanceClass(DBInstanceClassT&& value) {
    SetDBInstanceClass(std::forward<DBInstanceClassT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The database engine used for this DB instance.</p>
   */
  inline const Aws::String& GetEngine() const { return m_engine; }
  inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
  template <typename EngineT = Aws::String>
  void SetEngine(EngineT&& value) {
    m_engineHasBeenSet = true;
    m_engine = std::forward<EngineT>(value);
  }
  template <typename EngineT = Aws::String>
  DBInstance& WithEngine(EngineT&& value) {
    SetEngine(std::forward<EngineT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of this database.</p> <p>For information about DB instance
   * statuses, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/accessing-monitoring.html#Overview.DBInstance.Status">Viewing
   * DB instance status</a> in the <i>Amazon RDS User Guide.</i> </p>
   */
  inline const Aws::String& GetDBInstanceStatus() const { return m_dBInstanceStatus; }
  inline bool DBInstanceStatusHasBeenSet() const { return m_dBInstanceStatusHasBeenSet; }
  template <typename DBInstanceStatusT = Aws::String>
  void SetDBInstanceStatus(DBInstanceStatusT&& value) {
    m_dBInstanceStatusHasBeenSet = true;
    m_dBInstanceStatus = std::forward<DBInstanceStatusT>(value);
  }
  template <typename DBInstanceStatusT = Aws::String>
  DBInstance& WithDBInstanceStatus(DBInstanceStatusT&& value) {
    SetDBInstanceStatus(std::forward<DBInstanceStatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The master username for the DB instance.</p>
   */
  inline const Aws::String& GetMasterUsername() const { return m_masterUsername; }
  inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }
  template <typename MasterUsernameT = Aws::String>
  void SetMasterUsername(MasterUsernameT&& value) {
    m_masterUsernameHasBeenSet = true;
    m_masterUsername = std::forward<MasterUsernameT>(value);
  }
  template <typename MasterUsernameT = Aws::String>
  DBInstance& WithMasterUsername(MasterUsernameT&& value) {
    SetMasterUsername(std::forward<MasterUsernameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The initial database name that you provided (if required) when you created
   * the DB instance. This name is returned for the life of your DB instance. For an
   * RDS for Oracle CDB instance, the name identifies the PDB rather than the
   * CDB.</p>
   */
  inline const Aws::String& GetDBName() const { return m_dBName; }
  inline bool DBNameHasBeenSet() const { return m_dBNameHasBeenSet; }
  template <typename DBNameT = Aws::String>
  void SetDBName(DBNameT&& value) {
    m_dBNameHasBeenSet = true;
    m_dBName = std::forward<DBNameT>(value);
  }
  template <typename DBNameT = Aws::String>
  DBInstance& WithDBName(DBNameT&& value) {
    SetDBName(std::forward<DBNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The connection endpoint for the DB instance.</p>  <p>The endpoint might
   * not be shown for instances with the status of <code>creating</code>.</p>
   */
  inline const Endpoint& GetEndpoint() const { return m_endpoint; }
  inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
  template <typename EndpointT = Endpoint>
  void SetEndpoint(EndpointT&& value) {
    m_endpointHasBeenSet = true;
    m_endpoint = std::forward<EndpointT>(value);
  }
  template <typename EndpointT = Endpoint>
  DBInstance& WithEndpoint(EndpointT&& value) {
    SetEndpoint(std::forward<EndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount of storage in gibibytes (GiB) allocated for the DB instance.</p>
   */
  inline int GetAllocatedStorage() const { return m_allocatedStorage; }
  inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
  inline void SetAllocatedStorage(int value) {
    m_allocatedStorageHasBeenSet = true;
    m_allocatedStorage = value;
  }
  inline DBInstance& WithAllocatedStorage(int value) {
    SetAllocatedStorage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the DB instance was created.</p>
   */
  inline const Aws::Utils::DateTime& GetInstanceCreateTime() const { return m_instanceCreateTime; }
  inline bool InstanceCreateTimeHasBeenSet() const { return m_instanceCreateTimeHasBeenSet; }
  template <typename InstanceCreateTimeT = Aws::Utils::DateTime>
  void SetInstanceCreateTime(InstanceCreateTimeT&& value) {
    m_instanceCreateTimeHasBeenSet = true;
    m_instanceCreateTime = std::forward<InstanceCreateTimeT>(value);
  }
  template <typename InstanceCreateTimeT = Aws::Utils::DateTime>
  DBInstance& WithInstanceCreateTime(InstanceCreateTimeT&& value) {
    SetInstanceCreateTime(std::forward<InstanceCreateTimeT>(value));
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
  DBInstance& WithPreferredBackupWindow(PreferredBackupWindowT&& value) {
    SetPreferredBackupWindow(std::forward<PreferredBackupWindowT>(value));
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
  inline DBInstance& WithBackupRetentionPeriod(int value) {
    SetBackupRetentionPeriod(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of DB security group elements containing
   * <code>DBSecurityGroup.Name</code> and <code>DBSecurityGroup.Status</code>
   * subelements.</p>
   */
  inline const Aws::Vector<DBSecurityGroupMembership>& GetDBSecurityGroups() const { return m_dBSecurityGroups; }
  inline bool DBSecurityGroupsHasBeenSet() const { return m_dBSecurityGroupsHasBeenSet; }
  template <typename DBSecurityGroupsT = Aws::Vector<DBSecurityGroupMembership>>
  void SetDBSecurityGroups(DBSecurityGroupsT&& value) {
    m_dBSecurityGroupsHasBeenSet = true;
    m_dBSecurityGroups = std::forward<DBSecurityGroupsT>(value);
  }
  template <typename DBSecurityGroupsT = Aws::Vector<DBSecurityGroupMembership>>
  DBInstance& WithDBSecurityGroups(DBSecurityGroupsT&& value) {
    SetDBSecurityGroups(std::forward<DBSecurityGroupsT>(value));
    return *this;
  }
  template <typename DBSecurityGroupsT = DBSecurityGroupMembership>
  DBInstance& AddDBSecurityGroups(DBSecurityGroupsT&& value) {
    m_dBSecurityGroupsHasBeenSet = true;
    m_dBSecurityGroups.emplace_back(std::forward<DBSecurityGroupsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of Amazon EC2 VPC security groups that the DB instance belongs
   * to.</p>
   */
  inline const Aws::Vector<VpcSecurityGroupMembership>& GetVpcSecurityGroups() const { return m_vpcSecurityGroups; }
  inline bool VpcSecurityGroupsHasBeenSet() const { return m_vpcSecurityGroupsHasBeenSet; }
  template <typename VpcSecurityGroupsT = Aws::Vector<VpcSecurityGroupMembership>>
  void SetVpcSecurityGroups(VpcSecurityGroupsT&& value) {
    m_vpcSecurityGroupsHasBeenSet = true;
    m_vpcSecurityGroups = std::forward<VpcSecurityGroupsT>(value);
  }
  template <typename VpcSecurityGroupsT = Aws::Vector<VpcSecurityGroupMembership>>
  DBInstance& WithVpcSecurityGroups(VpcSecurityGroupsT&& value) {
    SetVpcSecurityGroups(std::forward<VpcSecurityGroupsT>(value));
    return *this;
  }
  template <typename VpcSecurityGroupsT = VpcSecurityGroupMembership>
  DBInstance& AddVpcSecurityGroups(VpcSecurityGroupsT&& value) {
    m_vpcSecurityGroupsHasBeenSet = true;
    m_vpcSecurityGroups.emplace_back(std::forward<VpcSecurityGroupsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of DB parameter groups applied to this DB instance.</p>
   */
  inline const Aws::Vector<DBParameterGroupStatus>& GetDBParameterGroups() const { return m_dBParameterGroups; }
  inline bool DBParameterGroupsHasBeenSet() const { return m_dBParameterGroupsHasBeenSet; }
  template <typename DBParameterGroupsT = Aws::Vector<DBParameterGroupStatus>>
  void SetDBParameterGroups(DBParameterGroupsT&& value) {
    m_dBParameterGroupsHasBeenSet = true;
    m_dBParameterGroups = std::forward<DBParameterGroupsT>(value);
  }
  template <typename DBParameterGroupsT = Aws::Vector<DBParameterGroupStatus>>
  DBInstance& WithDBParameterGroups(DBParameterGroupsT&& value) {
    SetDBParameterGroups(std::forward<DBParameterGroupsT>(value));
    return *this;
  }
  template <typename DBParameterGroupsT = DBParameterGroupStatus>
  DBInstance& AddDBParameterGroups(DBParameterGroupsT&& value) {
    m_dBParameterGroupsHasBeenSet = true;
    m_dBParameterGroups.emplace_back(std::forward<DBParameterGroupsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Availability Zone where the DB instance is located.</p>
   */
  inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
  inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
  template <typename AvailabilityZoneT = Aws::String>
  void SetAvailabilityZone(AvailabilityZoneT&& value) {
    m_availabilityZoneHasBeenSet = true;
    m_availabilityZone = std::forward<AvailabilityZoneT>(value);
  }
  template <typename AvailabilityZoneT = Aws::String>
  DBInstance& WithAvailabilityZone(AvailabilityZoneT&& value) {
    SetAvailabilityZone(std::forward<AvailabilityZoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about the subnet group associated with the DB instance, including
   * the name, description, and subnets in the subnet group.</p>
   */
  inline const DBSubnetGroup& GetDBSubnetGroup() const { return m_dBSubnetGroup; }
  inline bool DBSubnetGroupHasBeenSet() const { return m_dBSubnetGroupHasBeenSet; }
  template <typename DBSubnetGroupT = DBSubnetGroup>
  void SetDBSubnetGroup(DBSubnetGroupT&& value) {
    m_dBSubnetGroupHasBeenSet = true;
    m_dBSubnetGroup = std::forward<DBSubnetGroupT>(value);
  }
  template <typename DBSubnetGroupT = DBSubnetGroup>
  DBInstance& WithDBSubnetGroup(DBSubnetGroupT&& value) {
    SetDBSubnetGroup(std::forward<DBSubnetGroupT>(value));
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
  DBInstance& WithPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) {
    SetPreferredMaintenanceWindow(std::forward<PreferredMaintenanceWindowT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>This data type represents the order in which the instances are upgraded.</p>
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
  inline DBInstance& WithUpgradeRolloutOrder(UpgradeRolloutOrder value) {
    SetUpgradeRolloutOrder(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about pending changes to the DB instance. This information is
   * returned only when there are pending changes. Specific changes are identified by
   * subelements.</p>
   */
  inline const PendingModifiedValues& GetPendingModifiedValues() const { return m_pendingModifiedValues; }
  inline bool PendingModifiedValuesHasBeenSet() const { return m_pendingModifiedValuesHasBeenSet; }
  template <typename PendingModifiedValuesT = PendingModifiedValues>
  void SetPendingModifiedValues(PendingModifiedValuesT&& value) {
    m_pendingModifiedValuesHasBeenSet = true;
    m_pendingModifiedValues = std::forward<PendingModifiedValuesT>(value);
  }
  template <typename PendingModifiedValuesT = PendingModifiedValues>
  DBInstance& WithPendingModifiedValues(PendingModifiedValuesT&& value) {
    SetPendingModifiedValues(std::forward<PendingModifiedValuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The latest time to which a database in this DB instance can be restored with
   * point-in-time restore.</p>
   */
  inline const Aws::Utils::DateTime& GetLatestRestorableTime() const { return m_latestRestorableTime; }
  inline bool LatestRestorableTimeHasBeenSet() const { return m_latestRestorableTimeHasBeenSet; }
  template <typename LatestRestorableTimeT = Aws::Utils::DateTime>
  void SetLatestRestorableTime(LatestRestorableTimeT&& value) {
    m_latestRestorableTimeHasBeenSet = true;
    m_latestRestorableTime = std::forward<LatestRestorableTimeT>(value);
  }
  template <typename LatestRestorableTimeT = Aws::Utils::DateTime>
  DBInstance& WithLatestRestorableTime(LatestRestorableTimeT&& value) {
    SetLatestRestorableTime(std::forward<LatestRestorableTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the DB instance is a Multi-AZ deployment. This setting
   * doesn't apply to RDS Custom DB instances.</p>
   */
  inline bool GetMultiAZ() const { return m_multiAZ; }
  inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }
  inline void SetMultiAZ(bool value) {
    m_multiAZHasBeenSet = true;
    m_multiAZ = value;
  }
  inline DBInstance& WithMultiAZ(bool value) {
    SetMultiAZ(value);
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
  DBInstance& WithEngineVersion(EngineVersionT&& value) {
    SetEngineVersion(std::forward<EngineVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether minor version patches are applied automatically.</p> <p>For
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
  inline DBInstance& WithAutoMinorVersionUpgrade(bool value) {
    SetAutoMinorVersionUpgrade(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the source DB instance if this DB instance is a read
   * replica.</p>
   */
  inline const Aws::String& GetReadReplicaSourceDBInstanceIdentifier() const { return m_readReplicaSourceDBInstanceIdentifier; }
  inline bool ReadReplicaSourceDBInstanceIdentifierHasBeenSet() const { return m_readReplicaSourceDBInstanceIdentifierHasBeenSet; }
  template <typename ReadReplicaSourceDBInstanceIdentifierT = Aws::String>
  void SetReadReplicaSourceDBInstanceIdentifier(ReadReplicaSourceDBInstanceIdentifierT&& value) {
    m_readReplicaSourceDBInstanceIdentifierHasBeenSet = true;
    m_readReplicaSourceDBInstanceIdentifier = std::forward<ReadReplicaSourceDBInstanceIdentifierT>(value);
  }
  template <typename ReadReplicaSourceDBInstanceIdentifierT = Aws::String>
  DBInstance& WithReadReplicaSourceDBInstanceIdentifier(ReadReplicaSourceDBInstanceIdentifierT&& value) {
    SetReadReplicaSourceDBInstanceIdentifier(std::forward<ReadReplicaSourceDBInstanceIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifiers of the read replicas associated with this DB instance.</p>
   */
  inline const Aws::Vector<Aws::String>& GetReadReplicaDBInstanceIdentifiers() const { return m_readReplicaDBInstanceIdentifiers; }
  inline bool ReadReplicaDBInstanceIdentifiersHasBeenSet() const { return m_readReplicaDBInstanceIdentifiersHasBeenSet; }
  template <typename ReadReplicaDBInstanceIdentifiersT = Aws::Vector<Aws::String>>
  void SetReadReplicaDBInstanceIdentifiers(ReadReplicaDBInstanceIdentifiersT&& value) {
    m_readReplicaDBInstanceIdentifiersHasBeenSet = true;
    m_readReplicaDBInstanceIdentifiers = std::forward<ReadReplicaDBInstanceIdentifiersT>(value);
  }
  template <typename ReadReplicaDBInstanceIdentifiersT = Aws::Vector<Aws::String>>
  DBInstance& WithReadReplicaDBInstanceIdentifiers(ReadReplicaDBInstanceIdentifiersT&& value) {
    SetReadReplicaDBInstanceIdentifiers(std::forward<ReadReplicaDBInstanceIdentifiersT>(value));
    return *this;
  }
  template <typename ReadReplicaDBInstanceIdentifiersT = Aws::String>
  DBInstance& AddReadReplicaDBInstanceIdentifiers(ReadReplicaDBInstanceIdentifiersT&& value) {
    m_readReplicaDBInstanceIdentifiersHasBeenSet = true;
    m_readReplicaDBInstanceIdentifiers.emplace_back(std::forward<ReadReplicaDBInstanceIdentifiersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifiers of Aurora DB clusters to which the RDS DB instance is
   * replicated as a read replica. For example, when you create an Aurora read
   * replica of an RDS for MySQL DB instance, the Aurora MySQL DB cluster for the
   * Aurora read replica is shown. This output doesn't contain information about
   * cross-Region Aurora read replicas.</p>  <p>Currently, each RDS DB instance
   * can have only one Aurora read replica.</p>
   */
  inline const Aws::Vector<Aws::String>& GetReadReplicaDBClusterIdentifiers() const { return m_readReplicaDBClusterIdentifiers; }
  inline bool ReadReplicaDBClusterIdentifiersHasBeenSet() const { return m_readReplicaDBClusterIdentifiersHasBeenSet; }
  template <typename ReadReplicaDBClusterIdentifiersT = Aws::Vector<Aws::String>>
  void SetReadReplicaDBClusterIdentifiers(ReadReplicaDBClusterIdentifiersT&& value) {
    m_readReplicaDBClusterIdentifiersHasBeenSet = true;
    m_readReplicaDBClusterIdentifiers = std::forward<ReadReplicaDBClusterIdentifiersT>(value);
  }
  template <typename ReadReplicaDBClusterIdentifiersT = Aws::Vector<Aws::String>>
  DBInstance& WithReadReplicaDBClusterIdentifiers(ReadReplicaDBClusterIdentifiersT&& value) {
    SetReadReplicaDBClusterIdentifiers(std::forward<ReadReplicaDBClusterIdentifiersT>(value));
    return *this;
  }
  template <typename ReadReplicaDBClusterIdentifiersT = Aws::String>
  DBInstance& AddReadReplicaDBClusterIdentifiers(ReadReplicaDBClusterIdentifiersT&& value) {
    m_readReplicaDBClusterIdentifiersHasBeenSet = true;
    m_readReplicaDBClusterIdentifiers.emplace_back(std::forward<ReadReplicaDBClusterIdentifiersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The open mode of a Db2 or an Oracle read replica. The default is
   * <code>open-read-only</code>. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/db2-replication.html">Working
   * with replicas for Amazon RDS for Db2</a> and <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/oracle-read-replicas.html">Working
   * with read replicas for Amazon RDS for Oracle</a> in the <i>Amazon RDS User
   * Guide</i>. </p>  <p>This attribute is only supported in RDS for Db2, RDS
   * for Oracle, and RDS Custom for Oracle.</p>
   */
  inline ReplicaMode GetReplicaMode() const { return m_replicaMode; }
  inline bool ReplicaModeHasBeenSet() const { return m_replicaModeHasBeenSet; }
  inline void SetReplicaMode(ReplicaMode value) {
    m_replicaModeHasBeenSet = true;
    m_replicaMode = value;
  }
  inline DBInstance& WithReplicaMode(ReplicaMode value) {
    SetReplicaMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The license model information for this DB instance. This setting doesn't
   * apply to Amazon Aurora or RDS Custom DB instances.</p>
   */
  inline const Aws::String& GetLicenseModel() const { return m_licenseModel; }
  inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }
  template <typename LicenseModelT = Aws::String>
  void SetLicenseModel(LicenseModelT&& value) {
    m_licenseModelHasBeenSet = true;
    m_licenseModel = std::forward<LicenseModelT>(value);
  }
  template <typename LicenseModelT = Aws::String>
  DBInstance& WithLicenseModel(LicenseModelT&& value) {
    SetLicenseModel(std::forward<LicenseModelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Provisioned IOPS (I/O operations per second) value for the DB
   * instance.</p>
   */
  inline int GetIops() const { return m_iops; }
  inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
  inline void SetIops(int value) {
    m_iopsHasBeenSet = true;
    m_iops = value;
  }
  inline DBInstance& WithIops(int value) {
    SetIops(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The storage throughput for the DB instance.</p> <p>This setting applies only
   * to the <code>gp3</code> storage type.</p>
   */
  inline int GetStorageThroughput() const { return m_storageThroughput; }
  inline bool StorageThroughputHasBeenSet() const { return m_storageThroughputHasBeenSet; }
  inline void SetStorageThroughput(int value) {
    m_storageThroughputHasBeenSet = true;
    m_storageThroughput = value;
  }
  inline DBInstance& WithStorageThroughput(int value) {
    SetStorageThroughput(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of option group memberships for this DB instance.</p>
   */
  inline const Aws::Vector<OptionGroupMembership>& GetOptionGroupMemberships() const { return m_optionGroupMemberships; }
  inline bool OptionGroupMembershipsHasBeenSet() const { return m_optionGroupMembershipsHasBeenSet; }
  template <typename OptionGroupMembershipsT = Aws::Vector<OptionGroupMembership>>
  void SetOptionGroupMemberships(OptionGroupMembershipsT&& value) {
    m_optionGroupMembershipsHasBeenSet = true;
    m_optionGroupMemberships = std::forward<OptionGroupMembershipsT>(value);
  }
  template <typename OptionGroupMembershipsT = Aws::Vector<OptionGroupMembership>>
  DBInstance& WithOptionGroupMemberships(OptionGroupMembershipsT&& value) {
    SetOptionGroupMemberships(std::forward<OptionGroupMembershipsT>(value));
    return *this;
  }
  template <typename OptionGroupMembershipsT = OptionGroupMembership>
  DBInstance& AddOptionGroupMemberships(OptionGroupMembershipsT&& value) {
    m_optionGroupMembershipsHasBeenSet = true;
    m_optionGroupMemberships.emplace_back(std::forward<OptionGroupMembershipsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If present, specifies the name of the character set that this instance is
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
  DBInstance& WithCharacterSetName(CharacterSetNameT&& value) {
    SetCharacterSetName(std::forward<CharacterSetNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the NCHAR character set for the Oracle DB instance. This
   * character set specifies the Unicode encoding for data stored in table columns of
   * type NCHAR, NCLOB, or NVARCHAR2.</p>
   */
  inline const Aws::String& GetNcharCharacterSetName() const { return m_ncharCharacterSetName; }
  inline bool NcharCharacterSetNameHasBeenSet() const { return m_ncharCharacterSetNameHasBeenSet; }
  template <typename NcharCharacterSetNameT = Aws::String>
  void SetNcharCharacterSetName(NcharCharacterSetNameT&& value) {
    m_ncharCharacterSetNameHasBeenSet = true;
    m_ncharCharacterSetName = std::forward<NcharCharacterSetNameT>(value);
  }
  template <typename NcharCharacterSetNameT = Aws::String>
  DBInstance& WithNcharCharacterSetName(NcharCharacterSetNameT&& value) {
    SetNcharCharacterSetName(std::forward<NcharCharacterSetNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If present, specifies the name of the secondary Availability Zone for a DB
   * instance with multi-AZ support.</p>
   */
  inline const Aws::String& GetSecondaryAvailabilityZone() const { return m_secondaryAvailabilityZone; }
  inline bool SecondaryAvailabilityZoneHasBeenSet() const { return m_secondaryAvailabilityZoneHasBeenSet; }
  template <typename SecondaryAvailabilityZoneT = Aws::String>
  void SetSecondaryAvailabilityZone(SecondaryAvailabilityZoneT&& value) {
    m_secondaryAvailabilityZoneHasBeenSet = true;
    m_secondaryAvailabilityZone = std::forward<SecondaryAvailabilityZoneT>(value);
  }
  template <typename SecondaryAvailabilityZoneT = Aws::String>
  DBInstance& WithSecondaryAvailabilityZone(SecondaryAvailabilityZoneT&& value) {
    SetSecondaryAvailabilityZone(std::forward<SecondaryAvailabilityZoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the DB instance is publicly accessible.</p> <p>When the DB
   * instance is publicly accessible and you connect from outside of the DB
   * instance's virtual private cloud (VPC), its Domain Name System (DNS) endpoint
   * resolves to the public IP address. When you connect from within the same VPC as
   * the DB instance, the endpoint resolves to the private IP address. Access to the
   * DB cluster is ultimately controlled by the security group it uses. That public
   * access isn't permitted if the security group assigned to the DB cluster doesn't
   * permit it.</p> <p>When the DB instance isn't publicly accessible, it is an
   * internal DB instance with a DNS name that resolves to a private IP address.</p>
   * <p>For more information, see <a>CreateDBInstance</a>.</p>
   */
  inline bool GetPubliclyAccessible() const { return m_publiclyAccessible; }
  inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }
  inline void SetPubliclyAccessible(bool value) {
    m_publiclyAccessibleHasBeenSet = true;
    m_publiclyAccessible = value;
  }
  inline DBInstance& WithPubliclyAccessible(bool value) {
    SetPubliclyAccessible(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of a read replica. If the DB instance isn't a read replica, the
   * value is blank.</p>
   */
  inline const Aws::Vector<DBInstanceStatusInfo>& GetStatusInfos() const { return m_statusInfos; }
  inline bool StatusInfosHasBeenSet() const { return m_statusInfosHasBeenSet; }
  template <typename StatusInfosT = Aws::Vector<DBInstanceStatusInfo>>
  void SetStatusInfos(StatusInfosT&& value) {
    m_statusInfosHasBeenSet = true;
    m_statusInfos = std::forward<StatusInfosT>(value);
  }
  template <typename StatusInfosT = Aws::Vector<DBInstanceStatusInfo>>
  DBInstance& WithStatusInfos(StatusInfosT&& value) {
    SetStatusInfos(std::forward<StatusInfosT>(value));
    return *this;
  }
  template <typename StatusInfosT = DBInstanceStatusInfo>
  DBInstance& AddStatusInfos(StatusInfosT&& value) {
    m_statusInfosHasBeenSet = true;
    m_statusInfos.emplace_back(std::forward<StatusInfosT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The storage type associated with the DB instance.</p>
   */
  inline const Aws::String& GetStorageType() const { return m_storageType; }
  inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
  template <typename StorageTypeT = Aws::String>
  void SetStorageType(StorageTypeT&& value) {
    m_storageTypeHasBeenSet = true;
    m_storageType = std::forward<StorageTypeT>(value);
  }
  template <typename StorageTypeT = Aws::String>
  DBInstance& WithStorageType(StorageTypeT&& value) {
    SetStorageType(std::forward<StorageTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of encryption used to protect data at rest in the DB instance.
   * Possible values:</p> <ul> <li> <p> <code>none</code> - The DB instance is not
   * encrypted.</p> </li> <li> <p> <code>sse-rds</code> - The DB instance is
   * encrypted using an Amazon Web Services owned KMS key.</p> </li> <li> <p>
   * <code>sse-kms</code> - The DB instance is encrypted using a customer managed KMS
   * key or Amazon Web Services managed KMS key.</p> </li> </ul>
   */
  inline StorageEncryptionType GetStorageEncryptionType() const { return m_storageEncryptionType; }
  inline bool StorageEncryptionTypeHasBeenSet() const { return m_storageEncryptionTypeHasBeenSet; }
  inline void SetStorageEncryptionType(StorageEncryptionType value) {
    m_storageEncryptionTypeHasBeenSet = true;
    m_storageEncryptionType = value;
  }
  inline DBInstance& WithStorageEncryptionType(StorageEncryptionType value) {
    SetStorageEncryptionType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN from the key store with which the instance is associated for TDE
   * encryption.</p>
   */
  inline const Aws::String& GetTdeCredentialArn() const { return m_tdeCredentialArn; }
  inline bool TdeCredentialArnHasBeenSet() const { return m_tdeCredentialArnHasBeenSet; }
  template <typename TdeCredentialArnT = Aws::String>
  void SetTdeCredentialArn(TdeCredentialArnT&& value) {
    m_tdeCredentialArnHasBeenSet = true;
    m_tdeCredentialArn = std::forward<TdeCredentialArnT>(value);
  }
  template <typename TdeCredentialArnT = Aws::String>
  DBInstance& WithTdeCredentialArn(TdeCredentialArnT&& value) {
    SetTdeCredentialArn(std::forward<TdeCredentialArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The port that the DB instance listens on. If the DB instance is part of a DB
   * cluster, this can be a different port than the DB cluster port.</p>
   */
  inline int GetDbInstancePort() const { return m_dbInstancePort; }
  inline bool DbInstancePortHasBeenSet() const { return m_dbInstancePortHasBeenSet; }
  inline void SetDbInstancePort(int value) {
    m_dbInstancePortHasBeenSet = true;
    m_dbInstancePort = value;
  }
  inline DBInstance& WithDbInstancePort(int value) {
    SetDbInstancePort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the DB instance is a member of a DB cluster, indicates the name of the DB
   * cluster that the DB instance is a member of.</p>
   */
  inline const Aws::String& GetDBClusterIdentifier() const { return m_dBClusterIdentifier; }
  inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }
  template <typename DBClusterIdentifierT = Aws::String>
  void SetDBClusterIdentifier(DBClusterIdentifierT&& value) {
    m_dBClusterIdentifierHasBeenSet = true;
    m_dBClusterIdentifier = std::forward<DBClusterIdentifierT>(value);
  }
  template <typename DBClusterIdentifierT = Aws::String>
  DBInstance& WithDBClusterIdentifier(DBClusterIdentifierT&& value) {
    SetDBClusterIdentifier(std::forward<DBClusterIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the DB instance is encrypted.</p>
   */
  inline bool GetStorageEncrypted() const { return m_storageEncrypted; }
  inline bool StorageEncryptedHasBeenSet() const { return m_storageEncryptedHasBeenSet; }
  inline void SetStorageEncrypted(bool value) {
    m_storageEncryptedHasBeenSet = true;
    m_storageEncrypted = value;
  }
  inline DBInstance& WithStorageEncrypted(bool value) {
    SetStorageEncrypted(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If <code>StorageEncrypted</code> is enabled, the Amazon Web Services KMS key
   * identifier for the encrypted DB instance.</p> <p>The Amazon Web Services KMS key
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
  DBInstance& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Region-unique, immutable identifier for the DB
   * instance. This identifier is found in Amazon Web Services CloudTrail log entries
   * whenever the Amazon Web Services KMS key for the DB instance is accessed.</p>
   */
  inline const Aws::String& GetDbiResourceId() const { return m_dbiResourceId; }
  inline bool DbiResourceIdHasBeenSet() const { return m_dbiResourceIdHasBeenSet; }
  template <typename DbiResourceIdT = Aws::String>
  void SetDbiResourceId(DbiResourceIdT&& value) {
    m_dbiResourceIdHasBeenSet = true;
    m_dbiResourceId = std::forward<DbiResourceIdT>(value);
  }
  template <typename DbiResourceIdT = Aws::String>
  DBInstance& WithDbiResourceId(DbiResourceIdT&& value) {
    SetDbiResourceId(std::forward<DbiResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the CA certificate for this DB instance.</p> <p>For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/UsingWithRDS.SSL.html">Using
   * SSL/TLS to encrypt a connection to a DB instance</a> in the <i>Amazon RDS User
   * Guide</i> and <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/UsingWithRDS.SSL.html">
   * Using SSL/TLS to encrypt a connection to a DB cluster</a> in the <i>Amazon
   * Aurora User Guide</i>.</p>
   */
  inline const Aws::String& GetCACertificateIdentifier() const { return m_cACertificateIdentifier; }
  inline bool CACertificateIdentifierHasBeenSet() const { return m_cACertificateIdentifierHasBeenSet; }
  template <typename CACertificateIdentifierT = Aws::String>
  void SetCACertificateIdentifier(CACertificateIdentifierT&& value) {
    m_cACertificateIdentifierHasBeenSet = true;
    m_cACertificateIdentifier = std::forward<CACertificateIdentifierT>(value);
  }
  template <typename CACertificateIdentifierT = Aws::String>
  DBInstance& WithCACertificateIdentifier(CACertificateIdentifierT&& value) {
    SetCACertificateIdentifier(std::forward<CACertificateIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Active Directory Domain membership records associated with the DB
   * instance.</p>
   */
  inline const Aws::Vector<DomainMembership>& GetDomainMemberships() const { return m_domainMemberships; }
  inline bool DomainMembershipsHasBeenSet() const { return m_domainMembershipsHasBeenSet; }
  template <typename DomainMembershipsT = Aws::Vector<DomainMembership>>
  void SetDomainMemberships(DomainMembershipsT&& value) {
    m_domainMembershipsHasBeenSet = true;
    m_domainMemberships = std::forward<DomainMembershipsT>(value);
  }
  template <typename DomainMembershipsT = Aws::Vector<DomainMembership>>
  DBInstance& WithDomainMemberships(DomainMembershipsT&& value) {
    SetDomainMemberships(std::forward<DomainMembershipsT>(value));
    return *this;
  }
  template <typename DomainMembershipsT = DomainMembership>
  DBInstance& AddDomainMemberships(DomainMembershipsT&& value) {
    m_domainMembershipsHasBeenSet = true;
    m_domainMemberships.emplace_back(std::forward<DomainMembershipsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether tags are copied from the DB instance to snapshots of the DB
   * instance.</p> <p>This setting doesn't apply to Amazon Aurora DB instances.
   * Copying tags to snapshots is managed by the DB cluster. Setting this value for
   * an Aurora DB instance has no effect on the DB cluster setting. For more
   * information, see <code>DBCluster</code>.</p>
   */
  inline bool GetCopyTagsToSnapshot() const { return m_copyTagsToSnapshot; }
  inline bool CopyTagsToSnapshotHasBeenSet() const { return m_copyTagsToSnapshotHasBeenSet; }
  inline void SetCopyTagsToSnapshot(bool value) {
    m_copyTagsToSnapshotHasBeenSet = true;
    m_copyTagsToSnapshot = value;
  }
  inline DBInstance& WithCopyTagsToSnapshot(bool value) {
    SetCopyTagsToSnapshot(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
   * collected for the DB instance.</p>
   */
  inline int GetMonitoringInterval() const { return m_monitoringInterval; }
  inline bool MonitoringIntervalHasBeenSet() const { return m_monitoringIntervalHasBeenSet; }
  inline void SetMonitoringInterval(int value) {
    m_monitoringIntervalHasBeenSet = true;
    m_monitoringInterval = value;
  }
  inline DBInstance& WithMonitoringInterval(int value) {
    SetMonitoringInterval(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch Logs log stream that
   * receives the Enhanced Monitoring metrics data for the DB instance.</p>
   */
  inline const Aws::String& GetEnhancedMonitoringResourceArn() const { return m_enhancedMonitoringResourceArn; }
  inline bool EnhancedMonitoringResourceArnHasBeenSet() const { return m_enhancedMonitoringResourceArnHasBeenSet; }
  template <typename EnhancedMonitoringResourceArnT = Aws::String>
  void SetEnhancedMonitoringResourceArn(EnhancedMonitoringResourceArnT&& value) {
    m_enhancedMonitoringResourceArnHasBeenSet = true;
    m_enhancedMonitoringResourceArn = std::forward<EnhancedMonitoringResourceArnT>(value);
  }
  template <typename EnhancedMonitoringResourceArnT = Aws::String>
  DBInstance& WithEnhancedMonitoringResourceArn(EnhancedMonitoringResourceArnT&& value) {
    SetEnhancedMonitoringResourceArn(std::forward<EnhancedMonitoringResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN for the IAM role that permits RDS to send Enhanced Monitoring metrics
   * to Amazon CloudWatch Logs.</p>
   */
  inline const Aws::String& GetMonitoringRoleArn() const { return m_monitoringRoleArn; }
  inline bool MonitoringRoleArnHasBeenSet() const { return m_monitoringRoleArnHasBeenSet; }
  template <typename MonitoringRoleArnT = Aws::String>
  void SetMonitoringRoleArn(MonitoringRoleArnT&& value) {
    m_monitoringRoleArnHasBeenSet = true;
    m_monitoringRoleArn = std::forward<MonitoringRoleArnT>(value);
  }
  template <typename MonitoringRoleArnT = Aws::String>
  DBInstance& WithMonitoringRoleArn(MonitoringRoleArnT&& value) {
    SetMonitoringRoleArn(std::forward<MonitoringRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The order of priority in which an Aurora Replica is promoted to the primary
   * instance after a failure of the existing primary instance. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Concepts.AuroraHighAvailability.html#Aurora.Managing.FaultTolerance">
   * Fault Tolerance for an Aurora DB Cluster</a> in the <i>Amazon Aurora User
   * Guide</i>.</p>
   */
  inline int GetPromotionTier() const { return m_promotionTier; }
  inline bool PromotionTierHasBeenSet() const { return m_promotionTierHasBeenSet; }
  inline void SetPromotionTier(int value) {
    m_promotionTierHasBeenSet = true;
    m_promotionTier = value;
  }
  inline DBInstance& WithPromotionTier(int value) {
    SetPromotionTier(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) for the DB instance.</p>
   */
  inline const Aws::String& GetDBInstanceArn() const { return m_dBInstanceArn; }
  inline bool DBInstanceArnHasBeenSet() const { return m_dBInstanceArnHasBeenSet; }
  template <typename DBInstanceArnT = Aws::String>
  void SetDBInstanceArn(DBInstanceArnT&& value) {
    m_dBInstanceArnHasBeenSet = true;
    m_dBInstanceArn = std::forward<DBInstanceArnT>(value);
  }
  template <typename DBInstanceArnT = Aws::String>
  DBInstance& WithDBInstanceArn(DBInstanceArnT&& value) {
    SetDBInstanceArn(std::forward<DBInstanceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time zone of the DB instance. In most cases, the <code>Timezone</code>
   * element is empty. <code>Timezone</code> content appears only for RDS for Db2 and
   * RDS for SQL Server DB instances that were created with a time zone
   * specified.</p>
   */
  inline const Aws::String& GetTimezone() const { return m_timezone; }
  inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }
  template <typename TimezoneT = Aws::String>
  void SetTimezone(TimezoneT&& value) {
    m_timezoneHasBeenSet = true;
    m_timezone = std::forward<TimezoneT>(value);
  }
  template <typename TimezoneT = Aws::String>
  DBInstance& WithTimezone(TimezoneT&& value) {
    SetTimezone(std::forward<TimezoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether mapping of Amazon Web Services Identity and Access
   * Management (IAM) accounts to database accounts is enabled for the DB
   * instance.</p> <p>For a list of engine versions that support IAM database
   * authentication, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.RDS_Fea_Regions_DB-eng.Feature.IamDatabaseAuthentication.html">IAM
   * database authentication</a> in the <i>Amazon RDS User Guide</i> and <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Concepts.Aurora_Fea_Regions_DB-eng.Feature.IAMdbauth.html">IAM
   * database authentication in Aurora</a> in the <i>Amazon Aurora User
   * Guide</i>.</p>
   */
  inline bool GetIAMDatabaseAuthenticationEnabled() const { return m_iAMDatabaseAuthenticationEnabled; }
  inline bool IAMDatabaseAuthenticationEnabledHasBeenSet() const { return m_iAMDatabaseAuthenticationEnabledHasBeenSet; }
  inline void SetIAMDatabaseAuthenticationEnabled(bool value) {
    m_iAMDatabaseAuthenticationEnabledHasBeenSet = true;
    m_iAMDatabaseAuthenticationEnabled = value;
  }
  inline DBInstance& WithIAMDatabaseAuthenticationEnabled(bool value) {
    SetIAMDatabaseAuthenticationEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The mode of Database Insights that is enabled for the instance.</p>
   */
  inline DatabaseInsightsMode GetDatabaseInsightsMode() const { return m_databaseInsightsMode; }
  inline bool DatabaseInsightsModeHasBeenSet() const { return m_databaseInsightsModeHasBeenSet; }
  inline void SetDatabaseInsightsMode(DatabaseInsightsMode value) {
    m_databaseInsightsModeHasBeenSet = true;
    m_databaseInsightsMode = value;
  }
  inline DBInstance& WithDatabaseInsightsMode(DatabaseInsightsMode value) {
    SetDatabaseInsightsMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether Performance Insights is enabled for the DB instance.</p>
   */
  inline bool GetPerformanceInsightsEnabled() const { return m_performanceInsightsEnabled; }
  inline bool PerformanceInsightsEnabledHasBeenSet() const { return m_performanceInsightsEnabledHasBeenSet; }
  inline void SetPerformanceInsightsEnabled(bool value) {
    m_performanceInsightsEnabledHasBeenSet = true;
    m_performanceInsightsEnabled = value;
  }
  inline DBInstance& WithPerformanceInsightsEnabled(bool value) {
    SetPerformanceInsightsEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services KMS key identifier for encryption of Performance
   * Insights data.</p> <p>The Amazon Web Services KMS key identifier is the key ARN,
   * key ID, alias ARN, or alias name for the KMS key.</p>
   */
  inline const Aws::String& GetPerformanceInsightsKMSKeyId() const { return m_performanceInsightsKMSKeyId; }
  inline bool PerformanceInsightsKMSKeyIdHasBeenSet() const { return m_performanceInsightsKMSKeyIdHasBeenSet; }
  template <typename PerformanceInsightsKMSKeyIdT = Aws::String>
  void SetPerformanceInsightsKMSKeyId(PerformanceInsightsKMSKeyIdT&& value) {
    m_performanceInsightsKMSKeyIdHasBeenSet = true;
    m_performanceInsightsKMSKeyId = std::forward<PerformanceInsightsKMSKeyIdT>(value);
  }
  template <typename PerformanceInsightsKMSKeyIdT = Aws::String>
  DBInstance& WithPerformanceInsightsKMSKeyId(PerformanceInsightsKMSKeyIdT&& value) {
    SetPerformanceInsightsKMSKeyId(std::forward<PerformanceInsightsKMSKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of days to retain Performance Insights data.</p> <p>Valid
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
  inline DBInstance& WithPerformanceInsightsRetentionPeriod(int value) {
    SetPerformanceInsightsRetentionPeriod(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of log types that this DB instance is configured to export to
   * CloudWatch Logs.</p> <p>Log types vary by DB engine. For information about the
   * log types for each DB engine, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html">Monitoring
   * Amazon RDS log files</a> in the <i>Amazon RDS User Guide.</i> </p>
   */
  inline const Aws::Vector<Aws::String>& GetEnabledCloudwatchLogsExports() const { return m_enabledCloudwatchLogsExports; }
  inline bool EnabledCloudwatchLogsExportsHasBeenSet() const { return m_enabledCloudwatchLogsExportsHasBeenSet; }
  template <typename EnabledCloudwatchLogsExportsT = Aws::Vector<Aws::String>>
  void SetEnabledCloudwatchLogsExports(EnabledCloudwatchLogsExportsT&& value) {
    m_enabledCloudwatchLogsExportsHasBeenSet = true;
    m_enabledCloudwatchLogsExports = std::forward<EnabledCloudwatchLogsExportsT>(value);
  }
  template <typename EnabledCloudwatchLogsExportsT = Aws::Vector<Aws::String>>
  DBInstance& WithEnabledCloudwatchLogsExports(EnabledCloudwatchLogsExportsT&& value) {
    SetEnabledCloudwatchLogsExports(std::forward<EnabledCloudwatchLogsExportsT>(value));
    return *this;
  }
  template <typename EnabledCloudwatchLogsExportsT = Aws::String>
  DBInstance& AddEnabledCloudwatchLogsExports(EnabledCloudwatchLogsExportsT&& value) {
    m_enabledCloudwatchLogsExportsHasBeenSet = true;
    m_enabledCloudwatchLogsExports.emplace_back(std::forward<EnabledCloudwatchLogsExportsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of CPU cores and the number of threads per core for the DB
   * instance class of the DB instance.</p>
   */
  inline const Aws::Vector<ProcessorFeature>& GetProcessorFeatures() const { return m_processorFeatures; }
  inline bool ProcessorFeaturesHasBeenSet() const { return m_processorFeaturesHasBeenSet; }
  template <typename ProcessorFeaturesT = Aws::Vector<ProcessorFeature>>
  void SetProcessorFeatures(ProcessorFeaturesT&& value) {
    m_processorFeaturesHasBeenSet = true;
    m_processorFeatures = std::forward<ProcessorFeaturesT>(value);
  }
  template <typename ProcessorFeaturesT = Aws::Vector<ProcessorFeature>>
  DBInstance& WithProcessorFeatures(ProcessorFeaturesT&& value) {
    SetProcessorFeatures(std::forward<ProcessorFeaturesT>(value));
    return *this;
  }
  template <typename ProcessorFeaturesT = ProcessorFeature>
  DBInstance& AddProcessorFeatures(ProcessorFeaturesT&& value) {
    m_processorFeaturesHasBeenSet = true;
    m_processorFeatures.emplace_back(std::forward<ProcessorFeaturesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the DB instance has deletion protection enabled. The
   * database can't be deleted when deletion protection is enabled. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_DeleteInstance.html">
   * Deleting a DB Instance</a>.</p>
   */
  inline bool GetDeletionProtection() const { return m_deletionProtection; }
  inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
  inline void SetDeletionProtection(bool value) {
    m_deletionProtectionHasBeenSet = true;
    m_deletionProtection = value;
  }
  inline DBInstance& WithDeletionProtection(bool value) {
    SetDeletionProtection(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Identity and Access Management (IAM) roles associated
   * with the DB instance.</p>
   */
  inline const Aws::Vector<DBInstanceRole>& GetAssociatedRoles() const { return m_associatedRoles; }
  inline bool AssociatedRolesHasBeenSet() const { return m_associatedRolesHasBeenSet; }
  template <typename AssociatedRolesT = Aws::Vector<DBInstanceRole>>
  void SetAssociatedRoles(AssociatedRolesT&& value) {
    m_associatedRolesHasBeenSet = true;
    m_associatedRoles = std::forward<AssociatedRolesT>(value);
  }
  template <typename AssociatedRolesT = Aws::Vector<DBInstanceRole>>
  DBInstance& WithAssociatedRoles(AssociatedRolesT&& value) {
    SetAssociatedRoles(std::forward<AssociatedRolesT>(value));
    return *this;
  }
  template <typename AssociatedRolesT = DBInstanceRole>
  DBInstance& AddAssociatedRoles(AssociatedRolesT&& value) {
    m_associatedRolesHasBeenSet = true;
    m_associatedRoles.emplace_back(std::forward<AssociatedRolesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The listener connection endpoint for SQL Server Always On.</p>
   */
  inline const Endpoint& GetListenerEndpoint() const { return m_listenerEndpoint; }
  inline bool ListenerEndpointHasBeenSet() const { return m_listenerEndpointHasBeenSet; }
  template <typename ListenerEndpointT = Endpoint>
  void SetListenerEndpoint(ListenerEndpointT&& value) {
    m_listenerEndpointHasBeenSet = true;
    m_listenerEndpoint = std::forward<ListenerEndpointT>(value);
  }
  template <typename ListenerEndpointT = Endpoint>
  DBInstance& WithListenerEndpoint(ListenerEndpointT&& value) {
    SetListenerEndpoint(std::forward<ListenerEndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The upper limit in gibibytes (GiB) to which Amazon RDS can automatically
   * scale the storage of the DB instance.</p>
   */
  inline int GetMaxAllocatedStorage() const { return m_maxAllocatedStorage; }
  inline bool MaxAllocatedStorageHasBeenSet() const { return m_maxAllocatedStorageHasBeenSet; }
  inline void SetMaxAllocatedStorage(int value) {
    m_maxAllocatedStorageHasBeenSet = true;
    m_maxAllocatedStorage = value;
  }
  inline DBInstance& WithMaxAllocatedStorage(int value) {
    SetMaxAllocatedStorage(value);
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
  DBInstance& WithTagList(TagListT&& value) {
    SetTagList(std::forward<TagListT>(value));
    return *this;
  }
  template <typename TagListT = Tag>
  DBInstance& AddTagList(TagListT&& value) {
    m_tagListHasBeenSet = true;
    m_tagList.emplace_back(std::forward<TagListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The automation mode of the RDS Custom DB instance: <code>full</code> or
   * <code>all paused</code>. If <code>full</code>, the DB instance automates
   * monitoring and instance recovery. If <code>all paused</code>, the instance
   * pauses automation for the duration set by
   * <code>--resume-full-automation-mode-minutes</code>.</p>
   */
  inline AutomationMode GetAutomationMode() const { return m_automationMode; }
  inline bool AutomationModeHasBeenSet() const { return m_automationModeHasBeenSet; }
  inline void SetAutomationMode(AutomationMode value) {
    m_automationModeHasBeenSet = true;
    m_automationMode = value;
  }
  inline DBInstance& WithAutomationMode(AutomationMode value) {
    SetAutomationMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of minutes to pause the automation. When the time period ends, RDS
   * Custom resumes full automation. The minimum value is 60 (default). The maximum
   * value is 1,440.</p>
   */
  inline const Aws::Utils::DateTime& GetResumeFullAutomationModeTime() const { return m_resumeFullAutomationModeTime; }
  inline bool ResumeFullAutomationModeTimeHasBeenSet() const { return m_resumeFullAutomationModeTimeHasBeenSet; }
  template <typename ResumeFullAutomationModeTimeT = Aws::Utils::DateTime>
  void SetResumeFullAutomationModeTime(ResumeFullAutomationModeTimeT&& value) {
    m_resumeFullAutomationModeTimeHasBeenSet = true;
    m_resumeFullAutomationModeTime = std::forward<ResumeFullAutomationModeTimeT>(value);
  }
  template <typename ResumeFullAutomationModeTimeT = Aws::Utils::DateTime>
  DBInstance& WithResumeFullAutomationModeTime(ResumeFullAutomationModeTimeT&& value) {
    SetResumeFullAutomationModeTime(std::forward<ResumeFullAutomationModeTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether a customer-owned IP address (CoIP) is enabled for an RDS on
   * Outposts DB instance.</p> <p>A <i>CoIP </i>provides local or external
   * connectivity to resources in your Outpost subnets through your on-premises
   * network. For some use cases, a CoIP can provide lower latency for connections to
   * the DB instance from outside of its virtual private cloud (VPC) on your local
   * network.</p> <p>For more information about RDS on Outposts, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-on-outposts.html">Working
   * with Amazon RDS on Amazon Web Services Outposts</a> in the <i>Amazon RDS User
   * Guide</i>.</p> <p>For more information about CoIPs, see <a
   * href="https://docs.aws.amazon.com/outposts/latest/userguide/routing.html#ip-addressing">Customer-owned
   * IP addresses</a> in the <i>Amazon Web Services Outposts User Guide</i>.</p>
   */
  inline bool GetCustomerOwnedIpEnabled() const { return m_customerOwnedIpEnabled; }
  inline bool CustomerOwnedIpEnabledHasBeenSet() const { return m_customerOwnedIpEnabledHasBeenSet; }
  inline void SetCustomerOwnedIpEnabled(bool value) {
    m_customerOwnedIpEnabledHasBeenSet = true;
    m_customerOwnedIpEnabled = value;
  }
  inline DBInstance& WithCustomerOwnedIpEnabled(bool value) {
    SetCustomerOwnedIpEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The network type of the DB instance.</p> <p>The network type is determined by
   * the <code>DBSubnetGroup</code> specified for the DB instance. A
   * <code>DBSubnetGroup</code> can support only the IPv4 protocol or the IPv4 and
   * the IPv6 protocols (<code>DUAL</code>).</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
   * Working with a DB instance in a VPC</a> in the <i>Amazon RDS User Guide</i> and
   * <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
   * Working with a DB instance in a VPC</a> in the <i>Amazon Aurora User Guide.</i>
   * </p> <p>Valid Values: <code>IPV4 | DUAL</code> </p>
   */
  inline const Aws::String& GetNetworkType() const { return m_networkType; }
  inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
  template <typename NetworkTypeT = Aws::String>
  void SetNetworkType(NetworkTypeT&& value) {
    m_networkTypeHasBeenSet = true;
    m_networkType = std::forward<NetworkTypeT>(value);
  }
  template <typename NetworkTypeT = Aws::String>
  DBInstance& WithNetworkType(NetworkTypeT&& value) {
    SetNetworkType(std::forward<NetworkTypeT>(value));
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
  inline DBInstance& WithActivityStreamStatus(ActivityStreamStatus value) {
    SetActivityStreamStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services KMS key identifier used for encrypting messages in
   * the database activity stream. The Amazon Web Services KMS key identifier is the
   * key ARN, key ID, alias ARN, or alias name for the KMS key.</p>
   */
  inline const Aws::String& GetActivityStreamKmsKeyId() const { return m_activityStreamKmsKeyId; }
  inline bool ActivityStreamKmsKeyIdHasBeenSet() const { return m_activityStreamKmsKeyIdHasBeenSet; }
  template <typename ActivityStreamKmsKeyIdT = Aws::String>
  void SetActivityStreamKmsKeyId(ActivityStreamKmsKeyIdT&& value) {
    m_activityStreamKmsKeyIdHasBeenSet = true;
    m_activityStreamKmsKeyId = std::forward<ActivityStreamKmsKeyIdT>(value);
  }
  template <typename ActivityStreamKmsKeyIdT = Aws::String>
  DBInstance& WithActivityStreamKmsKeyId(ActivityStreamKmsKeyIdT&& value) {
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
  DBInstance& WithActivityStreamKinesisStreamName(ActivityStreamKinesisStreamNameT&& value) {
    SetActivityStreamKinesisStreamName(std::forward<ActivityStreamKinesisStreamNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The mode of the database activity stream. Database events such as a change or
   * access generate an activity stream event. RDS for Oracle always handles these
   * events asynchronously.</p>
   */
  inline ActivityStreamMode GetActivityStreamMode() const { return m_activityStreamMode; }
  inline bool ActivityStreamModeHasBeenSet() const { return m_activityStreamModeHasBeenSet; }
  inline void SetActivityStreamMode(ActivityStreamMode value) {
    m_activityStreamModeHasBeenSet = true;
    m_activityStreamMode = value;
  }
  inline DBInstance& WithActivityStreamMode(ActivityStreamMode value) {
    SetActivityStreamMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether engine-native audit fields are included in the database
   * activity stream.</p>
   */
  inline bool GetActivityStreamEngineNativeAuditFieldsIncluded() const { return m_activityStreamEngineNativeAuditFieldsIncluded; }
  inline bool ActivityStreamEngineNativeAuditFieldsIncludedHasBeenSet() const {
    return m_activityStreamEngineNativeAuditFieldsIncludedHasBeenSet;
  }
  inline void SetActivityStreamEngineNativeAuditFieldsIncluded(bool value) {
    m_activityStreamEngineNativeAuditFieldsIncludedHasBeenSet = true;
    m_activityStreamEngineNativeAuditFieldsIncluded = value;
  }
  inline DBInstance& WithActivityStreamEngineNativeAuditFieldsIncluded(bool value) {
    SetActivityStreamEngineNativeAuditFieldsIncluded(value);
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
  DBInstance& WithAwsBackupRecoveryPointArn(AwsBackupRecoveryPointArnT&& value) {
    SetAwsBackupRecoveryPointArn(std::forward<AwsBackupRecoveryPointArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of replicated automated backups associated with the DB instance.</p>
   */
  inline const Aws::Vector<DBInstanceAutomatedBackupsReplication>& GetDBInstanceAutomatedBackupsReplications() const {
    return m_dBInstanceAutomatedBackupsReplications;
  }
  inline bool DBInstanceAutomatedBackupsReplicationsHasBeenSet() const { return m_dBInstanceAutomatedBackupsReplicationsHasBeenSet; }
  template <typename DBInstanceAutomatedBackupsReplicationsT = Aws::Vector<DBInstanceAutomatedBackupsReplication>>
  void SetDBInstanceAutomatedBackupsReplications(DBInstanceAutomatedBackupsReplicationsT&& value) {
    m_dBInstanceAutomatedBackupsReplicationsHasBeenSet = true;
    m_dBInstanceAutomatedBackupsReplications = std::forward<DBInstanceAutomatedBackupsReplicationsT>(value);
  }
  template <typename DBInstanceAutomatedBackupsReplicationsT = Aws::Vector<DBInstanceAutomatedBackupsReplication>>
  DBInstance& WithDBInstanceAutomatedBackupsReplications(DBInstanceAutomatedBackupsReplicationsT&& value) {
    SetDBInstanceAutomatedBackupsReplications(std::forward<DBInstanceAutomatedBackupsReplicationsT>(value));
    return *this;
  }
  template <typename DBInstanceAutomatedBackupsReplicationsT = DBInstanceAutomatedBackupsReplication>
  DBInstance& AddDBInstanceAutomatedBackupsReplications(DBInstanceAutomatedBackupsReplicationsT&& value) {
    m_dBInstanceAutomatedBackupsReplicationsHasBeenSet = true;
    m_dBInstanceAutomatedBackupsReplications.emplace_back(std::forward<DBInstanceAutomatedBackupsReplicationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The location where automated backups and manual snapshots are stored:
   * Dedicated Local Zones, Amazon Web Services Outposts or the Amazon Web Services
   * Region.</p>
   */
  inline const Aws::String& GetBackupTarget() const { return m_backupTarget; }
  inline bool BackupTargetHasBeenSet() const { return m_backupTargetHasBeenSet; }
  template <typename BackupTargetT = Aws::String>
  void SetBackupTarget(BackupTargetT&& value) {
    m_backupTargetHasBeenSet = true;
    m_backupTarget = std::forward<BackupTargetT>(value);
  }
  template <typename BackupTargetT = Aws::String>
  DBInstance& WithBackupTarget(BackupTargetT&& value) {
    SetBackupTarget(std::forward<BackupTargetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when a stopped DB instance is restarted automatically.</p>
   */
  inline const Aws::Utils::DateTime& GetAutomaticRestartTime() const { return m_automaticRestartTime; }
  inline bool AutomaticRestartTimeHasBeenSet() const { return m_automaticRestartTimeHasBeenSet; }
  template <typename AutomaticRestartTimeT = Aws::Utils::DateTime>
  void SetAutomaticRestartTime(AutomaticRestartTimeT&& value) {
    m_automaticRestartTimeHasBeenSet = true;
    m_automaticRestartTime = std::forward<AutomaticRestartTimeT>(value);
  }
  template <typename AutomaticRestartTimeT = Aws::Utils::DateTime>
  DBInstance& WithAutomaticRestartTime(AutomaticRestartTimeT&& value) {
    SetAutomaticRestartTime(std::forward<AutomaticRestartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The instance profile associated with the underlying Amazon EC2 instance of an
   * RDS Custom DB instance. The instance profile must meet the following
   * requirements:</p> <ul> <li> <p>The profile must exist in your account.</p> </li>
   * <li> <p>The profile must have an IAM role that Amazon EC2 has permissions to
   * assume.</p> </li> <li> <p>The instance profile name and the associated IAM role
   * name must start with the prefix <code>AWSRDSCustom</code>.</p> </li> </ul>
   * <p>For the list of permissions required for the IAM role, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/custom-setup-orcl.html#custom-setup-orcl.iam-vpc">
   * Configure IAM and your VPC</a> in the <i>Amazon RDS User Guide</i>.</p>
   */
  inline const Aws::String& GetCustomIamInstanceProfile() const { return m_customIamInstanceProfile; }
  inline bool CustomIamInstanceProfileHasBeenSet() const { return m_customIamInstanceProfileHasBeenSet; }
  template <typename CustomIamInstanceProfileT = Aws::String>
  void SetCustomIamInstanceProfile(CustomIamInstanceProfileT&& value) {
    m_customIamInstanceProfileHasBeenSet = true;
    m_customIamInstanceProfile = std::forward<CustomIamInstanceProfileT>(value);
  }
  template <typename CustomIamInstanceProfileT = Aws::String>
  DBInstance& WithCustomIamInstanceProfile(CustomIamInstanceProfileT&& value) {
    SetCustomIamInstanceProfile(std::forward<CustomIamInstanceProfileT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the policy state of the activity stream.</p>
   */
  inline ActivityStreamPolicyStatus GetActivityStreamPolicyStatus() const { return m_activityStreamPolicyStatus; }
  inline bool ActivityStreamPolicyStatusHasBeenSet() const { return m_activityStreamPolicyStatusHasBeenSet; }
  inline void SetActivityStreamPolicyStatus(ActivityStreamPolicyStatus value) {
    m_activityStreamPolicyStatusHasBeenSet = true;
    m_activityStreamPolicyStatus = value;
  }
  inline DBInstance& WithActivityStreamPolicyStatus(ActivityStreamPolicyStatus value) {
    SetActivityStreamPolicyStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details of the DB instance's server certificate.</p>
   */
  inline const CertificateDetails& GetCertificateDetails() const { return m_certificateDetails; }
  inline bool CertificateDetailsHasBeenSet() const { return m_certificateDetailsHasBeenSet; }
  template <typename CertificateDetailsT = CertificateDetails>
  void SetCertificateDetails(CertificateDetailsT&& value) {
    m_certificateDetailsHasBeenSet = true;
    m_certificateDetails = std::forward<CertificateDetailsT>(value);
  }
  template <typename CertificateDetailsT = CertificateDetails>
  DBInstance& WithCertificateDetails(CertificateDetailsT&& value) {
    SetCertificateDetails(std::forward<CertificateDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Oracle system ID (Oracle SID) for a container database (CDB). The Oracle
   * SID is also the name of the CDB. This setting is only valid for RDS Custom DB
   * instances.</p>
   */
  inline const Aws::String& GetDBSystemId() const { return m_dBSystemId; }
  inline bool DBSystemIdHasBeenSet() const { return m_dBSystemIdHasBeenSet; }
  template <typename DBSystemIdT = Aws::String>
  void SetDBSystemId(DBSystemIdT&& value) {
    m_dBSystemIdHasBeenSet = true;
    m_dBSystemId = std::forward<DBSystemIdT>(value);
  }
  template <typename DBSystemIdT = Aws::String>
  DBInstance& WithDBSystemId(DBSystemIdT&& value) {
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
  DBInstance& WithMasterUserSecret(MasterUserSecretT&& value) {
    SetMasterUserSecret(std::forward<MasterUserSecretT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the source DB cluster if this DB instance is a read
   * replica.</p>
   */
  inline const Aws::String& GetReadReplicaSourceDBClusterIdentifier() const { return m_readReplicaSourceDBClusterIdentifier; }
  inline bool ReadReplicaSourceDBClusterIdentifierHasBeenSet() const { return m_readReplicaSourceDBClusterIdentifierHasBeenSet; }
  template <typename ReadReplicaSourceDBClusterIdentifierT = Aws::String>
  void SetReadReplicaSourceDBClusterIdentifier(ReadReplicaSourceDBClusterIdentifierT&& value) {
    m_readReplicaSourceDBClusterIdentifierHasBeenSet = true;
    m_readReplicaSourceDBClusterIdentifier = std::forward<ReadReplicaSourceDBClusterIdentifierT>(value);
  }
  template <typename ReadReplicaSourceDBClusterIdentifierT = Aws::String>
  DBInstance& WithReadReplicaSourceDBClusterIdentifier(ReadReplicaSourceDBClusterIdentifierT&& value) {
    SetReadReplicaSourceDBClusterIdentifier(std::forward<ReadReplicaSourceDBClusterIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The progress of the storage optimization operation as a percentage.</p>
   */
  inline const Aws::String& GetPercentProgress() const { return m_percentProgress; }
  inline bool PercentProgressHasBeenSet() const { return m_percentProgressHasBeenSet; }
  template <typename PercentProgressT = Aws::String>
  void SetPercentProgress(PercentProgressT&& value) {
    m_percentProgressHasBeenSet = true;
    m_percentProgress = std::forward<PercentProgressT>(value);
  }
  template <typename PercentProgressT = Aws::String>
  DBInstance& WithPercentProgress(PercentProgressT&& value) {
    SetPercentProgress(std::forward<PercentProgressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the DB instance is in the multi-tenant configuration (TRUE)
   * or the single-tenant configuration (FALSE).</p>
   */
  inline bool GetMultiTenant() const { return m_multiTenant; }
  inline bool MultiTenantHasBeenSet() const { return m_multiTenantHasBeenSet; }
  inline void SetMultiTenant(bool value) {
    m_multiTenantHasBeenSet = true;
    m_multiTenant = value;
  }
  inline DBInstance& WithMultiTenant(bool value) {
    SetMultiTenant(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the DB instance has a dedicated log volume (DLV)
   * enabled.</p>
   */
  inline bool GetDedicatedLogVolume() const { return m_dedicatedLogVolume; }
  inline bool DedicatedLogVolumeHasBeenSet() const { return m_dedicatedLogVolumeHasBeenSet; }
  inline void SetDedicatedLogVolume(bool value) {
    m_dedicatedLogVolumeHasBeenSet = true;
    m_dedicatedLogVolume = value;
  }
  inline DBInstance& WithDedicatedLogVolume(bool value) {
    SetDedicatedLogVolume(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether an upgrade is recommended for the storage file system
   * configuration on the DB instance. To migrate to the preferred configuration, you
   * can either create a blue/green deployment, or create a read replica from the DB
   * instance. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PIOPS.StorageTypes.html#USER_PIOPS.UpgradeFileSystem">Upgrading
   * the storage file system for a DB instance</a>.</p>
   */
  inline bool GetIsStorageConfigUpgradeAvailable() const { return m_isStorageConfigUpgradeAvailable; }
  inline bool IsStorageConfigUpgradeAvailableHasBeenSet() const { return m_isStorageConfigUpgradeAvailableHasBeenSet; }
  inline void SetIsStorageConfigUpgradeAvailable(bool value) {
    m_isStorageConfigUpgradeAvailableHasBeenSet = true;
    m_isStorageConfigUpgradeAvailable = value;
  }
  inline DBInstance& WithIsStorageConfigUpgradeAvailable(bool value) {
    SetIsStorageConfigUpgradeAvailable(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The lifecycle type for the DB instance.</p> <p>For more information, see
   * CreateDBInstance.</p>
   */
  inline const Aws::String& GetEngineLifecycleSupport() const { return m_engineLifecycleSupport; }
  inline bool EngineLifecycleSupportHasBeenSet() const { return m_engineLifecycleSupportHasBeenSet; }
  template <typename EngineLifecycleSupportT = Aws::String>
  void SetEngineLifecycleSupport(EngineLifecycleSupportT&& value) {
    m_engineLifecycleSupportHasBeenSet = true;
    m_engineLifecycleSupport = std::forward<EngineLifecycleSupportT>(value);
  }
  template <typename EngineLifecycleSupportT = Aws::String>
  DBInstance& WithEngineLifecycleSupport(EngineLifecycleSupportT&& value) {
    SetEngineLifecycleSupport(std::forward<EngineLifecycleSupportT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The additional storage volumes associated with the DB instance. RDS supports
   * additional storage volumes for RDS for Oracle and RDS for SQL Server.</p>
   */
  inline const Aws::Vector<AdditionalStorageVolumeOutput>& GetAdditionalStorageVolumes() const { return m_additionalStorageVolumes; }
  inline bool AdditionalStorageVolumesHasBeenSet() const { return m_additionalStorageVolumesHasBeenSet; }
  template <typename AdditionalStorageVolumesT = Aws::Vector<AdditionalStorageVolumeOutput>>
  void SetAdditionalStorageVolumes(AdditionalStorageVolumesT&& value) {
    m_additionalStorageVolumesHasBeenSet = true;
    m_additionalStorageVolumes = std::forward<AdditionalStorageVolumesT>(value);
  }
  template <typename AdditionalStorageVolumesT = Aws::Vector<AdditionalStorageVolumeOutput>>
  DBInstance& WithAdditionalStorageVolumes(AdditionalStorageVolumesT&& value) {
    SetAdditionalStorageVolumes(std::forward<AdditionalStorageVolumesT>(value));
    return *this;
  }
  template <typename AdditionalStorageVolumesT = AdditionalStorageVolumeOutput>
  DBInstance& AddAdditionalStorageVolumes(AdditionalStorageVolumesT&& value) {
    m_additionalStorageVolumesHasBeenSet = true;
    m_additionalStorageVolumes.emplace_back(std::forward<AdditionalStorageVolumesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The detailed status information for storage volumes associated with the DB
   * instance. This information helps identify which specific volume is causing the
   * instance to be in a storage-full state.</p>
   */
  inline const Aws::String& GetStorageVolumeStatus() const { return m_storageVolumeStatus; }
  inline bool StorageVolumeStatusHasBeenSet() const { return m_storageVolumeStatusHasBeenSet; }
  template <typename StorageVolumeStatusT = Aws::String>
  void SetStorageVolumeStatus(StorageVolumeStatusT&& value) {
    m_storageVolumeStatusHasBeenSet = true;
    m_storageVolumeStatus = std::forward<StorageVolumeStatusT>(value);
  }
  template <typename StorageVolumeStatusT = Aws::String>
  DBInstance& WithStorageVolumeStatus(StorageVolumeStatusT&& value) {
    SetStorageVolumeStatus(std::forward<StorageVolumeStatusT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_dBInstanceIdentifier;

  Aws::String m_dBInstanceClass;

  Aws::String m_engine;

  Aws::String m_dBInstanceStatus;

  Aws::String m_masterUsername;

  Aws::String m_dBName;

  Endpoint m_endpoint;

  int m_allocatedStorage{0};

  Aws::Utils::DateTime m_instanceCreateTime{};

  Aws::String m_preferredBackupWindow;

  int m_backupRetentionPeriod{0};

  Aws::Vector<DBSecurityGroupMembership> m_dBSecurityGroups;

  Aws::Vector<VpcSecurityGroupMembership> m_vpcSecurityGroups;

  Aws::Vector<DBParameterGroupStatus> m_dBParameterGroups;

  Aws::String m_availabilityZone;

  DBSubnetGroup m_dBSubnetGroup;

  Aws::String m_preferredMaintenanceWindow;

  UpgradeRolloutOrder m_upgradeRolloutOrder{UpgradeRolloutOrder::NOT_SET};

  PendingModifiedValues m_pendingModifiedValues;

  Aws::Utils::DateTime m_latestRestorableTime{};

  bool m_multiAZ{false};

  Aws::String m_engineVersion;

  bool m_autoMinorVersionUpgrade{false};

  Aws::String m_readReplicaSourceDBInstanceIdentifier;

  Aws::Vector<Aws::String> m_readReplicaDBInstanceIdentifiers;

  Aws::Vector<Aws::String> m_readReplicaDBClusterIdentifiers;

  ReplicaMode m_replicaMode{ReplicaMode::NOT_SET};

  Aws::String m_licenseModel;

  int m_iops{0};

  int m_storageThroughput{0};

  Aws::Vector<OptionGroupMembership> m_optionGroupMemberships;

  Aws::String m_characterSetName;

  Aws::String m_ncharCharacterSetName;

  Aws::String m_secondaryAvailabilityZone;

  bool m_publiclyAccessible{false};

  Aws::Vector<DBInstanceStatusInfo> m_statusInfos;

  Aws::String m_storageType;

  StorageEncryptionType m_storageEncryptionType{StorageEncryptionType::NOT_SET};

  Aws::String m_tdeCredentialArn;

  int m_dbInstancePort{0};

  Aws::String m_dBClusterIdentifier;

  bool m_storageEncrypted{false};

  Aws::String m_kmsKeyId;

  Aws::String m_dbiResourceId;

  Aws::String m_cACertificateIdentifier;

  Aws::Vector<DomainMembership> m_domainMemberships;

  bool m_copyTagsToSnapshot{false};

  int m_monitoringInterval{0};

  Aws::String m_enhancedMonitoringResourceArn;

  Aws::String m_monitoringRoleArn;

  int m_promotionTier{0};

  Aws::String m_dBInstanceArn;

  Aws::String m_timezone;

  bool m_iAMDatabaseAuthenticationEnabled{false};

  DatabaseInsightsMode m_databaseInsightsMode{DatabaseInsightsMode::NOT_SET};

  bool m_performanceInsightsEnabled{false};

  Aws::String m_performanceInsightsKMSKeyId;

  int m_performanceInsightsRetentionPeriod{0};

  Aws::Vector<Aws::String> m_enabledCloudwatchLogsExports;

  Aws::Vector<ProcessorFeature> m_processorFeatures;

  bool m_deletionProtection{false};

  Aws::Vector<DBInstanceRole> m_associatedRoles;

  Endpoint m_listenerEndpoint;

  int m_maxAllocatedStorage{0};

  Aws::Vector<Tag> m_tagList;

  AutomationMode m_automationMode{AutomationMode::NOT_SET};

  Aws::Utils::DateTime m_resumeFullAutomationModeTime{};

  bool m_customerOwnedIpEnabled{false};

  Aws::String m_networkType;

  ActivityStreamStatus m_activityStreamStatus{ActivityStreamStatus::NOT_SET};

  Aws::String m_activityStreamKmsKeyId;

  Aws::String m_activityStreamKinesisStreamName;

  ActivityStreamMode m_activityStreamMode{ActivityStreamMode::NOT_SET};

  bool m_activityStreamEngineNativeAuditFieldsIncluded{false};

  Aws::String m_awsBackupRecoveryPointArn;

  Aws::Vector<DBInstanceAutomatedBackupsReplication> m_dBInstanceAutomatedBackupsReplications;

  Aws::String m_backupTarget;

  Aws::Utils::DateTime m_automaticRestartTime{};

  Aws::String m_customIamInstanceProfile;

  ActivityStreamPolicyStatus m_activityStreamPolicyStatus{ActivityStreamPolicyStatus::NOT_SET};

  CertificateDetails m_certificateDetails;

  Aws::String m_dBSystemId;

  MasterUserSecret m_masterUserSecret;

  Aws::String m_readReplicaSourceDBClusterIdentifier;

  Aws::String m_percentProgress;

  bool m_multiTenant{false};

  bool m_dedicatedLogVolume{false};

  bool m_isStorageConfigUpgradeAvailable{false};

  Aws::String m_engineLifecycleSupport;

  Aws::Vector<AdditionalStorageVolumeOutput> m_additionalStorageVolumes;

  Aws::String m_storageVolumeStatus;
  bool m_dBInstanceIdentifierHasBeenSet = false;
  bool m_dBInstanceClassHasBeenSet = false;
  bool m_engineHasBeenSet = false;
  bool m_dBInstanceStatusHasBeenSet = false;
  bool m_masterUsernameHasBeenSet = false;
  bool m_dBNameHasBeenSet = false;
  bool m_endpointHasBeenSet = false;
  bool m_allocatedStorageHasBeenSet = false;
  bool m_instanceCreateTimeHasBeenSet = false;
  bool m_preferredBackupWindowHasBeenSet = false;
  bool m_backupRetentionPeriodHasBeenSet = false;
  bool m_dBSecurityGroupsHasBeenSet = false;
  bool m_vpcSecurityGroupsHasBeenSet = false;
  bool m_dBParameterGroupsHasBeenSet = false;
  bool m_availabilityZoneHasBeenSet = false;
  bool m_dBSubnetGroupHasBeenSet = false;
  bool m_preferredMaintenanceWindowHasBeenSet = false;
  bool m_upgradeRolloutOrderHasBeenSet = false;
  bool m_pendingModifiedValuesHasBeenSet = false;
  bool m_latestRestorableTimeHasBeenSet = false;
  bool m_multiAZHasBeenSet = false;
  bool m_engineVersionHasBeenSet = false;
  bool m_autoMinorVersionUpgradeHasBeenSet = false;
  bool m_readReplicaSourceDBInstanceIdentifierHasBeenSet = false;
  bool m_readReplicaDBInstanceIdentifiersHasBeenSet = false;
  bool m_readReplicaDBClusterIdentifiersHasBeenSet = false;
  bool m_replicaModeHasBeenSet = false;
  bool m_licenseModelHasBeenSet = false;
  bool m_iopsHasBeenSet = false;
  bool m_storageThroughputHasBeenSet = false;
  bool m_optionGroupMembershipsHasBeenSet = false;
  bool m_characterSetNameHasBeenSet = false;
  bool m_ncharCharacterSetNameHasBeenSet = false;
  bool m_secondaryAvailabilityZoneHasBeenSet = false;
  bool m_publiclyAccessibleHasBeenSet = false;
  bool m_statusInfosHasBeenSet = false;
  bool m_storageTypeHasBeenSet = false;
  bool m_storageEncryptionTypeHasBeenSet = false;
  bool m_tdeCredentialArnHasBeenSet = false;
  bool m_dbInstancePortHasBeenSet = false;
  bool m_dBClusterIdentifierHasBeenSet = false;
  bool m_storageEncryptedHasBeenSet = false;
  bool m_kmsKeyIdHasBeenSet = false;
  bool m_dbiResourceIdHasBeenSet = false;
  bool m_cACertificateIdentifierHasBeenSet = false;
  bool m_domainMembershipsHasBeenSet = false;
  bool m_copyTagsToSnapshotHasBeenSet = false;
  bool m_monitoringIntervalHasBeenSet = false;
  bool m_enhancedMonitoringResourceArnHasBeenSet = false;
  bool m_monitoringRoleArnHasBeenSet = false;
  bool m_promotionTierHasBeenSet = false;
  bool m_dBInstanceArnHasBeenSet = false;
  bool m_timezoneHasBeenSet = false;
  bool m_iAMDatabaseAuthenticationEnabledHasBeenSet = false;
  bool m_databaseInsightsModeHasBeenSet = false;
  bool m_performanceInsightsEnabledHasBeenSet = false;
  bool m_performanceInsightsKMSKeyIdHasBeenSet = false;
  bool m_performanceInsightsRetentionPeriodHasBeenSet = false;
  bool m_enabledCloudwatchLogsExportsHasBeenSet = false;
  bool m_processorFeaturesHasBeenSet = false;
  bool m_deletionProtectionHasBeenSet = false;
  bool m_associatedRolesHasBeenSet = false;
  bool m_listenerEndpointHasBeenSet = false;
  bool m_maxAllocatedStorageHasBeenSet = false;
  bool m_tagListHasBeenSet = false;
  bool m_automationModeHasBeenSet = false;
  bool m_resumeFullAutomationModeTimeHasBeenSet = false;
  bool m_customerOwnedIpEnabledHasBeenSet = false;
  bool m_networkTypeHasBeenSet = false;
  bool m_activityStreamStatusHasBeenSet = false;
  bool m_activityStreamKmsKeyIdHasBeenSet = false;
  bool m_activityStreamKinesisStreamNameHasBeenSet = false;
  bool m_activityStreamModeHasBeenSet = false;
  bool m_activityStreamEngineNativeAuditFieldsIncludedHasBeenSet = false;
  bool m_awsBackupRecoveryPointArnHasBeenSet = false;
  bool m_dBInstanceAutomatedBackupsReplicationsHasBeenSet = false;
  bool m_backupTargetHasBeenSet = false;
  bool m_automaticRestartTimeHasBeenSet = false;
  bool m_customIamInstanceProfileHasBeenSet = false;
  bool m_activityStreamPolicyStatusHasBeenSet = false;
  bool m_certificateDetailsHasBeenSet = false;
  bool m_dBSystemIdHasBeenSet = false;
  bool m_masterUserSecretHasBeenSet = false;
  bool m_readReplicaSourceDBClusterIdentifierHasBeenSet = false;
  bool m_percentProgressHasBeenSet = false;
  bool m_multiTenantHasBeenSet = false;
  bool m_dedicatedLogVolumeHasBeenSet = false;
  bool m_isStorageConfigUpgradeAvailableHasBeenSet = false;
  bool m_engineLifecycleSupportHasBeenSet = false;
  bool m_additionalStorageVolumesHasBeenSet = false;
  bool m_storageVolumeStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace RDS
}  // namespace Aws
