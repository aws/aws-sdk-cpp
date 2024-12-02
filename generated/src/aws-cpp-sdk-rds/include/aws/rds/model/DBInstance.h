/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/rds/model/Endpoint.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/DBSubnetGroup.h>
#include <aws/rds/model/PendingModifiedValues.h>
#include <aws/rds/model/ReplicaMode.h>
#include <aws/rds/model/DatabaseInsightsMode.h>
#include <aws/rds/model/ActivityStreamStatus.h>
#include <aws/rds/model/ActivityStreamMode.h>
#include <aws/rds/model/AutomationMode.h>
#include <aws/rds/model/ActivityStreamPolicyStatus.h>
#include <aws/rds/model/MasterUserSecret.h>
#include <aws/rds/model/CertificateDetails.h>
#include <aws/rds/model/DBSecurityGroupMembership.h>
#include <aws/rds/model/VpcSecurityGroupMembership.h>
#include <aws/rds/model/DBParameterGroupStatus.h>
#include <aws/rds/model/OptionGroupMembership.h>
#include <aws/rds/model/DBInstanceStatusInfo.h>
#include <aws/rds/model/DomainMembership.h>
#include <aws/rds/model/ProcessorFeature.h>
#include <aws/rds/model/DBInstanceRole.h>
#include <aws/rds/model/Tag.h>
#include <aws/rds/model/DBInstanceAutomatedBackupsReplication.h>
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
  class DBInstance
  {
  public:
    AWS_RDS_API DBInstance();
    AWS_RDS_API DBInstance(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API DBInstance& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The user-supplied database identifier. This identifier is the unique key that
     * identifies a DB instance.</p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }
    inline DBInstance& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}
    inline DBInstance& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}
    inline DBInstance& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the compute and memory capacity class of the DB instance.</p>
     */
    inline const Aws::String& GetDBInstanceClass() const{ return m_dBInstanceClass; }
    inline bool DBInstanceClassHasBeenSet() const { return m_dBInstanceClassHasBeenSet; }
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }
    inline void SetDBInstanceClass(Aws::String&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = std::move(value); }
    inline void SetDBInstanceClass(const char* value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass.assign(value); }
    inline DBInstance& WithDBInstanceClass(const Aws::String& value) { SetDBInstanceClass(value); return *this;}
    inline DBInstance& WithDBInstanceClass(Aws::String&& value) { SetDBInstanceClass(std::move(value)); return *this;}
    inline DBInstance& WithDBInstanceClass(const char* value) { SetDBInstanceClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database engine used for this DB instance.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline DBInstance& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline DBInstance& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline DBInstance& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of this database.</p> <p>For information about DB instance
     * statuses, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/accessing-monitoring.html#Overview.DBInstance.Status">Viewing
     * DB instance status</a> in the <i>Amazon RDS User Guide.</i> </p>
     */
    inline const Aws::String& GetDBInstanceStatus() const{ return m_dBInstanceStatus; }
    inline bool DBInstanceStatusHasBeenSet() const { return m_dBInstanceStatusHasBeenSet; }
    inline void SetDBInstanceStatus(const Aws::String& value) { m_dBInstanceStatusHasBeenSet = true; m_dBInstanceStatus = value; }
    inline void SetDBInstanceStatus(Aws::String&& value) { m_dBInstanceStatusHasBeenSet = true; m_dBInstanceStatus = std::move(value); }
    inline void SetDBInstanceStatus(const char* value) { m_dBInstanceStatusHasBeenSet = true; m_dBInstanceStatus.assign(value); }
    inline DBInstance& WithDBInstanceStatus(const Aws::String& value) { SetDBInstanceStatus(value); return *this;}
    inline DBInstance& WithDBInstanceStatus(Aws::String&& value) { SetDBInstanceStatus(std::move(value)); return *this;}
    inline DBInstance& WithDBInstanceStatus(const char* value) { SetDBInstanceStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when a stopped DB instance is restarted automatically.</p>
     */
    inline const Aws::Utils::DateTime& GetAutomaticRestartTime() const{ return m_automaticRestartTime; }
    inline bool AutomaticRestartTimeHasBeenSet() const { return m_automaticRestartTimeHasBeenSet; }
    inline void SetAutomaticRestartTime(const Aws::Utils::DateTime& value) { m_automaticRestartTimeHasBeenSet = true; m_automaticRestartTime = value; }
    inline void SetAutomaticRestartTime(Aws::Utils::DateTime&& value) { m_automaticRestartTimeHasBeenSet = true; m_automaticRestartTime = std::move(value); }
    inline DBInstance& WithAutomaticRestartTime(const Aws::Utils::DateTime& value) { SetAutomaticRestartTime(value); return *this;}
    inline DBInstance& WithAutomaticRestartTime(Aws::Utils::DateTime&& value) { SetAutomaticRestartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The master username for the DB instance.</p>
     */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }
    inline void SetMasterUsername(Aws::String&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::move(value); }
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }
    inline DBInstance& WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}
    inline DBInstance& WithMasterUsername(Aws::String&& value) { SetMasterUsername(std::move(value)); return *this;}
    inline DBInstance& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The initial database name that you provided (if required) when you created
     * the DB instance. This name is returned for the life of your DB instance. For an
     * RDS for Oracle CDB instance, the name identifies the PDB rather than the
     * CDB.</p>
     */
    inline const Aws::String& GetDBName() const{ return m_dBName; }
    inline bool DBNameHasBeenSet() const { return m_dBNameHasBeenSet; }
    inline void SetDBName(const Aws::String& value) { m_dBNameHasBeenSet = true; m_dBName = value; }
    inline void SetDBName(Aws::String&& value) { m_dBNameHasBeenSet = true; m_dBName = std::move(value); }
    inline void SetDBName(const char* value) { m_dBNameHasBeenSet = true; m_dBName.assign(value); }
    inline DBInstance& WithDBName(const Aws::String& value) { SetDBName(value); return *this;}
    inline DBInstance& WithDBName(Aws::String&& value) { SetDBName(std::move(value)); return *this;}
    inline DBInstance& WithDBName(const char* value) { SetDBName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection endpoint for the DB instance.</p>  <p>The endpoint might
     * not be shown for instances with the status of <code>creating</code>.</p> 
     */
    inline const Endpoint& GetEndpoint() const{ return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    inline void SetEndpoint(const Endpoint& value) { m_endpointHasBeenSet = true; m_endpoint = value; }
    inline void SetEndpoint(Endpoint&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }
    inline DBInstance& WithEndpoint(const Endpoint& value) { SetEndpoint(value); return *this;}
    inline DBInstance& WithEndpoint(Endpoint&& value) { SetEndpoint(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of storage in gibibytes (GiB) allocated for the DB instance.</p>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }
    inline DBInstance& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the DB instance was created.</p>
     */
    inline const Aws::Utils::DateTime& GetInstanceCreateTime() const{ return m_instanceCreateTime; }
    inline bool InstanceCreateTimeHasBeenSet() const { return m_instanceCreateTimeHasBeenSet; }
    inline void SetInstanceCreateTime(const Aws::Utils::DateTime& value) { m_instanceCreateTimeHasBeenSet = true; m_instanceCreateTime = value; }
    inline void SetInstanceCreateTime(Aws::Utils::DateTime&& value) { m_instanceCreateTimeHasBeenSet = true; m_instanceCreateTime = std::move(value); }
    inline DBInstance& WithInstanceCreateTime(const Aws::Utils::DateTime& value) { SetInstanceCreateTime(value); return *this;}
    inline DBInstance& WithInstanceCreateTime(Aws::Utils::DateTime&& value) { SetInstanceCreateTime(std::move(value)); return *this;}
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
    inline DBInstance& WithPreferredBackupWindow(const Aws::String& value) { SetPreferredBackupWindow(value); return *this;}
    inline DBInstance& WithPreferredBackupWindow(Aws::String&& value) { SetPreferredBackupWindow(std::move(value)); return *this;}
    inline DBInstance& WithPreferredBackupWindow(const char* value) { SetPreferredBackupWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days for which automatic DB snapshots are retained.</p>
     */
    inline int GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }
    inline DBInstance& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of DB security group elements containing
     * <code>DBSecurityGroup.Name</code> and <code>DBSecurityGroup.Status</code>
     * subelements.</p>
     */
    inline const Aws::Vector<DBSecurityGroupMembership>& GetDBSecurityGroups() const{ return m_dBSecurityGroups; }
    inline bool DBSecurityGroupsHasBeenSet() const { return m_dBSecurityGroupsHasBeenSet; }
    inline void SetDBSecurityGroups(const Aws::Vector<DBSecurityGroupMembership>& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups = value; }
    inline void SetDBSecurityGroups(Aws::Vector<DBSecurityGroupMembership>&& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups = std::move(value); }
    inline DBInstance& WithDBSecurityGroups(const Aws::Vector<DBSecurityGroupMembership>& value) { SetDBSecurityGroups(value); return *this;}
    inline DBInstance& WithDBSecurityGroups(Aws::Vector<DBSecurityGroupMembership>&& value) { SetDBSecurityGroups(std::move(value)); return *this;}
    inline DBInstance& AddDBSecurityGroups(const DBSecurityGroupMembership& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups.push_back(value); return *this; }
    inline DBInstance& AddDBSecurityGroups(DBSecurityGroupMembership&& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of Amazon EC2 VPC security groups that the DB instance belongs
     * to.</p>
     */
    inline const Aws::Vector<VpcSecurityGroupMembership>& GetVpcSecurityGroups() const{ return m_vpcSecurityGroups; }
    inline bool VpcSecurityGroupsHasBeenSet() const { return m_vpcSecurityGroupsHasBeenSet; }
    inline void SetVpcSecurityGroups(const Aws::Vector<VpcSecurityGroupMembership>& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = value; }
    inline void SetVpcSecurityGroups(Aws::Vector<VpcSecurityGroupMembership>&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = std::move(value); }
    inline DBInstance& WithVpcSecurityGroups(const Aws::Vector<VpcSecurityGroupMembership>& value) { SetVpcSecurityGroups(value); return *this;}
    inline DBInstance& WithVpcSecurityGroups(Aws::Vector<VpcSecurityGroupMembership>&& value) { SetVpcSecurityGroups(std::move(value)); return *this;}
    inline DBInstance& AddVpcSecurityGroups(const VpcSecurityGroupMembership& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.push_back(value); return *this; }
    inline DBInstance& AddVpcSecurityGroups(VpcSecurityGroupMembership&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of DB parameter groups applied to this DB instance.</p>
     */
    inline const Aws::Vector<DBParameterGroupStatus>& GetDBParameterGroups() const{ return m_dBParameterGroups; }
    inline bool DBParameterGroupsHasBeenSet() const { return m_dBParameterGroupsHasBeenSet; }
    inline void SetDBParameterGroups(const Aws::Vector<DBParameterGroupStatus>& value) { m_dBParameterGroupsHasBeenSet = true; m_dBParameterGroups = value; }
    inline void SetDBParameterGroups(Aws::Vector<DBParameterGroupStatus>&& value) { m_dBParameterGroupsHasBeenSet = true; m_dBParameterGroups = std::move(value); }
    inline DBInstance& WithDBParameterGroups(const Aws::Vector<DBParameterGroupStatus>& value) { SetDBParameterGroups(value); return *this;}
    inline DBInstance& WithDBParameterGroups(Aws::Vector<DBParameterGroupStatus>&& value) { SetDBParameterGroups(std::move(value)); return *this;}
    inline DBInstance& AddDBParameterGroups(const DBParameterGroupStatus& value) { m_dBParameterGroupsHasBeenSet = true; m_dBParameterGroups.push_back(value); return *this; }
    inline DBInstance& AddDBParameterGroups(DBParameterGroupStatus&& value) { m_dBParameterGroupsHasBeenSet = true; m_dBParameterGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the Availability Zone where the DB instance is located.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline DBInstance& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline DBInstance& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline DBInstance& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the subnet group associated with the DB instance, including
     * the name, description, and subnets in the subnet group.</p>
     */
    inline const DBSubnetGroup& GetDBSubnetGroup() const{ return m_dBSubnetGroup; }
    inline bool DBSubnetGroupHasBeenSet() const { return m_dBSubnetGroupHasBeenSet; }
    inline void SetDBSubnetGroup(const DBSubnetGroup& value) { m_dBSubnetGroupHasBeenSet = true; m_dBSubnetGroup = value; }
    inline void SetDBSubnetGroup(DBSubnetGroup&& value) { m_dBSubnetGroupHasBeenSet = true; m_dBSubnetGroup = std::move(value); }
    inline DBInstance& WithDBSubnetGroup(const DBSubnetGroup& value) { SetDBSubnetGroup(value); return *this;}
    inline DBInstance& WithDBSubnetGroup(DBSubnetGroup&& value) { SetDBSubnetGroup(std::move(value)); return *this;}
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
    inline DBInstance& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}
    inline DBInstance& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}
    inline DBInstance& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about pending changes to the DB instance. This information is
     * returned only when there are pending changes. Specific changes are identified by
     * subelements.</p>
     */
    inline const PendingModifiedValues& GetPendingModifiedValues() const{ return m_pendingModifiedValues; }
    inline bool PendingModifiedValuesHasBeenSet() const { return m_pendingModifiedValuesHasBeenSet; }
    inline void SetPendingModifiedValues(const PendingModifiedValues& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = value; }
    inline void SetPendingModifiedValues(PendingModifiedValues&& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = std::move(value); }
    inline DBInstance& WithPendingModifiedValues(const PendingModifiedValues& value) { SetPendingModifiedValues(value); return *this;}
    inline DBInstance& WithPendingModifiedValues(PendingModifiedValues&& value) { SetPendingModifiedValues(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest time to which a database in this DB instance can be restored with
     * point-in-time restore.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestRestorableTime() const{ return m_latestRestorableTime; }
    inline bool LatestRestorableTimeHasBeenSet() const { return m_latestRestorableTimeHasBeenSet; }
    inline void SetLatestRestorableTime(const Aws::Utils::DateTime& value) { m_latestRestorableTimeHasBeenSet = true; m_latestRestorableTime = value; }
    inline void SetLatestRestorableTime(Aws::Utils::DateTime&& value) { m_latestRestorableTimeHasBeenSet = true; m_latestRestorableTime = std::move(value); }
    inline DBInstance& WithLatestRestorableTime(const Aws::Utils::DateTime& value) { SetLatestRestorableTime(value); return *this;}
    inline DBInstance& WithLatestRestorableTime(Aws::Utils::DateTime&& value) { SetLatestRestorableTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the DB instance is a Multi-AZ deployment. This setting
     * doesn't apply to RDS Custom DB instances.</p>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }
    inline DBInstance& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}
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
    inline DBInstance& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline DBInstance& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline DBInstance& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether minor version patches are applied automatically.</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }
    inline DBInstance& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the source DB instance if this DB instance is a read
     * replica.</p>
     */
    inline const Aws::String& GetReadReplicaSourceDBInstanceIdentifier() const{ return m_readReplicaSourceDBInstanceIdentifier; }
    inline bool ReadReplicaSourceDBInstanceIdentifierHasBeenSet() const { return m_readReplicaSourceDBInstanceIdentifierHasBeenSet; }
    inline void SetReadReplicaSourceDBInstanceIdentifier(const Aws::String& value) { m_readReplicaSourceDBInstanceIdentifierHasBeenSet = true; m_readReplicaSourceDBInstanceIdentifier = value; }
    inline void SetReadReplicaSourceDBInstanceIdentifier(Aws::String&& value) { m_readReplicaSourceDBInstanceIdentifierHasBeenSet = true; m_readReplicaSourceDBInstanceIdentifier = std::move(value); }
    inline void SetReadReplicaSourceDBInstanceIdentifier(const char* value) { m_readReplicaSourceDBInstanceIdentifierHasBeenSet = true; m_readReplicaSourceDBInstanceIdentifier.assign(value); }
    inline DBInstance& WithReadReplicaSourceDBInstanceIdentifier(const Aws::String& value) { SetReadReplicaSourceDBInstanceIdentifier(value); return *this;}
    inline DBInstance& WithReadReplicaSourceDBInstanceIdentifier(Aws::String&& value) { SetReadReplicaSourceDBInstanceIdentifier(std::move(value)); return *this;}
    inline DBInstance& WithReadReplicaSourceDBInstanceIdentifier(const char* value) { SetReadReplicaSourceDBInstanceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifiers of the read replicas associated with this DB instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReadReplicaDBInstanceIdentifiers() const{ return m_readReplicaDBInstanceIdentifiers; }
    inline bool ReadReplicaDBInstanceIdentifiersHasBeenSet() const { return m_readReplicaDBInstanceIdentifiersHasBeenSet; }
    inline void SetReadReplicaDBInstanceIdentifiers(const Aws::Vector<Aws::String>& value) { m_readReplicaDBInstanceIdentifiersHasBeenSet = true; m_readReplicaDBInstanceIdentifiers = value; }
    inline void SetReadReplicaDBInstanceIdentifiers(Aws::Vector<Aws::String>&& value) { m_readReplicaDBInstanceIdentifiersHasBeenSet = true; m_readReplicaDBInstanceIdentifiers = std::move(value); }
    inline DBInstance& WithReadReplicaDBInstanceIdentifiers(const Aws::Vector<Aws::String>& value) { SetReadReplicaDBInstanceIdentifiers(value); return *this;}
    inline DBInstance& WithReadReplicaDBInstanceIdentifiers(Aws::Vector<Aws::String>&& value) { SetReadReplicaDBInstanceIdentifiers(std::move(value)); return *this;}
    inline DBInstance& AddReadReplicaDBInstanceIdentifiers(const Aws::String& value) { m_readReplicaDBInstanceIdentifiersHasBeenSet = true; m_readReplicaDBInstanceIdentifiers.push_back(value); return *this; }
    inline DBInstance& AddReadReplicaDBInstanceIdentifiers(Aws::String&& value) { m_readReplicaDBInstanceIdentifiersHasBeenSet = true; m_readReplicaDBInstanceIdentifiers.push_back(std::move(value)); return *this; }
    inline DBInstance& AddReadReplicaDBInstanceIdentifiers(const char* value) { m_readReplicaDBInstanceIdentifiersHasBeenSet = true; m_readReplicaDBInstanceIdentifiers.push_back(value); return *this; }
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
    inline const Aws::Vector<Aws::String>& GetReadReplicaDBClusterIdentifiers() const{ return m_readReplicaDBClusterIdentifiers; }
    inline bool ReadReplicaDBClusterIdentifiersHasBeenSet() const { return m_readReplicaDBClusterIdentifiersHasBeenSet; }
    inline void SetReadReplicaDBClusterIdentifiers(const Aws::Vector<Aws::String>& value) { m_readReplicaDBClusterIdentifiersHasBeenSet = true; m_readReplicaDBClusterIdentifiers = value; }
    inline void SetReadReplicaDBClusterIdentifiers(Aws::Vector<Aws::String>&& value) { m_readReplicaDBClusterIdentifiersHasBeenSet = true; m_readReplicaDBClusterIdentifiers = std::move(value); }
    inline DBInstance& WithReadReplicaDBClusterIdentifiers(const Aws::Vector<Aws::String>& value) { SetReadReplicaDBClusterIdentifiers(value); return *this;}
    inline DBInstance& WithReadReplicaDBClusterIdentifiers(Aws::Vector<Aws::String>&& value) { SetReadReplicaDBClusterIdentifiers(std::move(value)); return *this;}
    inline DBInstance& AddReadReplicaDBClusterIdentifiers(const Aws::String& value) { m_readReplicaDBClusterIdentifiersHasBeenSet = true; m_readReplicaDBClusterIdentifiers.push_back(value); return *this; }
    inline DBInstance& AddReadReplicaDBClusterIdentifiers(Aws::String&& value) { m_readReplicaDBClusterIdentifiersHasBeenSet = true; m_readReplicaDBClusterIdentifiers.push_back(std::move(value)); return *this; }
    inline DBInstance& AddReadReplicaDBClusterIdentifiers(const char* value) { m_readReplicaDBClusterIdentifiersHasBeenSet = true; m_readReplicaDBClusterIdentifiers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The open mode of an Oracle read replica. The default is
     * <code>open-read-only</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/oracle-read-replicas.html">Working
     * with Oracle Read Replicas for Amazon RDS</a> in the <i>Amazon RDS User
     * Guide</i>.</p>  <p>This attribute is only supported in RDS for Oracle.</p>
     * 
     */
    inline const ReplicaMode& GetReplicaMode() const{ return m_replicaMode; }
    inline bool ReplicaModeHasBeenSet() const { return m_replicaModeHasBeenSet; }
    inline void SetReplicaMode(const ReplicaMode& value) { m_replicaModeHasBeenSet = true; m_replicaMode = value; }
    inline void SetReplicaMode(ReplicaMode&& value) { m_replicaModeHasBeenSet = true; m_replicaMode = std::move(value); }
    inline DBInstance& WithReplicaMode(const ReplicaMode& value) { SetReplicaMode(value); return *this;}
    inline DBInstance& WithReplicaMode(ReplicaMode&& value) { SetReplicaMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The license model information for this DB instance. This setting doesn't
     * apply to Amazon Aurora or RDS Custom DB instances.</p>
     */
    inline const Aws::String& GetLicenseModel() const{ return m_licenseModel; }
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }
    inline void SetLicenseModel(const Aws::String& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }
    inline void SetLicenseModel(Aws::String&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = std::move(value); }
    inline void SetLicenseModel(const char* value) { m_licenseModelHasBeenSet = true; m_licenseModel.assign(value); }
    inline DBInstance& WithLicenseModel(const Aws::String& value) { SetLicenseModel(value); return *this;}
    inline DBInstance& WithLicenseModel(Aws::String&& value) { SetLicenseModel(std::move(value)); return *this;}
    inline DBInstance& WithLicenseModel(const char* value) { SetLicenseModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Provisioned IOPS (I/O operations per second) value for the DB
     * instance.</p>
     */
    inline int GetIops() const{ return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline DBInstance& WithIops(int value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of option group memberships for this DB instance.</p>
     */
    inline const Aws::Vector<OptionGroupMembership>& GetOptionGroupMemberships() const{ return m_optionGroupMemberships; }
    inline bool OptionGroupMembershipsHasBeenSet() const { return m_optionGroupMembershipsHasBeenSet; }
    inline void SetOptionGroupMemberships(const Aws::Vector<OptionGroupMembership>& value) { m_optionGroupMembershipsHasBeenSet = true; m_optionGroupMemberships = value; }
    inline void SetOptionGroupMemberships(Aws::Vector<OptionGroupMembership>&& value) { m_optionGroupMembershipsHasBeenSet = true; m_optionGroupMemberships = std::move(value); }
    inline DBInstance& WithOptionGroupMemberships(const Aws::Vector<OptionGroupMembership>& value) { SetOptionGroupMemberships(value); return *this;}
    inline DBInstance& WithOptionGroupMemberships(Aws::Vector<OptionGroupMembership>&& value) { SetOptionGroupMemberships(std::move(value)); return *this;}
    inline DBInstance& AddOptionGroupMemberships(const OptionGroupMembership& value) { m_optionGroupMembershipsHasBeenSet = true; m_optionGroupMemberships.push_back(value); return *this; }
    inline DBInstance& AddOptionGroupMemberships(OptionGroupMembership&& value) { m_optionGroupMembershipsHasBeenSet = true; m_optionGroupMemberships.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If present, specifies the name of the character set that this instance is
     * associated with.</p>
     */
    inline const Aws::String& GetCharacterSetName() const{ return m_characterSetName; }
    inline bool CharacterSetNameHasBeenSet() const { return m_characterSetNameHasBeenSet; }
    inline void SetCharacterSetName(const Aws::String& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = value; }
    inline void SetCharacterSetName(Aws::String&& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = std::move(value); }
    inline void SetCharacterSetName(const char* value) { m_characterSetNameHasBeenSet = true; m_characterSetName.assign(value); }
    inline DBInstance& WithCharacterSetName(const Aws::String& value) { SetCharacterSetName(value); return *this;}
    inline DBInstance& WithCharacterSetName(Aws::String&& value) { SetCharacterSetName(std::move(value)); return *this;}
    inline DBInstance& WithCharacterSetName(const char* value) { SetCharacterSetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the NCHAR character set for the Oracle DB instance. This
     * character set specifies the Unicode encoding for data stored in table columns of
     * type NCHAR, NCLOB, or NVARCHAR2.</p>
     */
    inline const Aws::String& GetNcharCharacterSetName() const{ return m_ncharCharacterSetName; }
    inline bool NcharCharacterSetNameHasBeenSet() const { return m_ncharCharacterSetNameHasBeenSet; }
    inline void SetNcharCharacterSetName(const Aws::String& value) { m_ncharCharacterSetNameHasBeenSet = true; m_ncharCharacterSetName = value; }
    inline void SetNcharCharacterSetName(Aws::String&& value) { m_ncharCharacterSetNameHasBeenSet = true; m_ncharCharacterSetName = std::move(value); }
    inline void SetNcharCharacterSetName(const char* value) { m_ncharCharacterSetNameHasBeenSet = true; m_ncharCharacterSetName.assign(value); }
    inline DBInstance& WithNcharCharacterSetName(const Aws::String& value) { SetNcharCharacterSetName(value); return *this;}
    inline DBInstance& WithNcharCharacterSetName(Aws::String&& value) { SetNcharCharacterSetName(std::move(value)); return *this;}
    inline DBInstance& WithNcharCharacterSetName(const char* value) { SetNcharCharacterSetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If present, specifies the name of the secondary Availability Zone for a DB
     * instance with multi-AZ support.</p>
     */
    inline const Aws::String& GetSecondaryAvailabilityZone() const{ return m_secondaryAvailabilityZone; }
    inline bool SecondaryAvailabilityZoneHasBeenSet() const { return m_secondaryAvailabilityZoneHasBeenSet; }
    inline void SetSecondaryAvailabilityZone(const Aws::String& value) { m_secondaryAvailabilityZoneHasBeenSet = true; m_secondaryAvailabilityZone = value; }
    inline void SetSecondaryAvailabilityZone(Aws::String&& value) { m_secondaryAvailabilityZoneHasBeenSet = true; m_secondaryAvailabilityZone = std::move(value); }
    inline void SetSecondaryAvailabilityZone(const char* value) { m_secondaryAvailabilityZoneHasBeenSet = true; m_secondaryAvailabilityZone.assign(value); }
    inline DBInstance& WithSecondaryAvailabilityZone(const Aws::String& value) { SetSecondaryAvailabilityZone(value); return *this;}
    inline DBInstance& WithSecondaryAvailabilityZone(Aws::String&& value) { SetSecondaryAvailabilityZone(std::move(value)); return *this;}
    inline DBInstance& WithSecondaryAvailabilityZone(const char* value) { SetSecondaryAvailabilityZone(value); return *this;}
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
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline DBInstance& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a read replica. If the DB instance isn't a read replica, the
     * value is blank.</p>
     */
    inline const Aws::Vector<DBInstanceStatusInfo>& GetStatusInfos() const{ return m_statusInfos; }
    inline bool StatusInfosHasBeenSet() const { return m_statusInfosHasBeenSet; }
    inline void SetStatusInfos(const Aws::Vector<DBInstanceStatusInfo>& value) { m_statusInfosHasBeenSet = true; m_statusInfos = value; }
    inline void SetStatusInfos(Aws::Vector<DBInstanceStatusInfo>&& value) { m_statusInfosHasBeenSet = true; m_statusInfos = std::move(value); }
    inline DBInstance& WithStatusInfos(const Aws::Vector<DBInstanceStatusInfo>& value) { SetStatusInfos(value); return *this;}
    inline DBInstance& WithStatusInfos(Aws::Vector<DBInstanceStatusInfo>&& value) { SetStatusInfos(std::move(value)); return *this;}
    inline DBInstance& AddStatusInfos(const DBInstanceStatusInfo& value) { m_statusInfosHasBeenSet = true; m_statusInfos.push_back(value); return *this; }
    inline DBInstance& AddStatusInfos(DBInstanceStatusInfo&& value) { m_statusInfosHasBeenSet = true; m_statusInfos.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The storage type associated with the DB instance.</p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }
    inline DBInstance& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}
    inline DBInstance& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}
    inline DBInstance& WithStorageType(const char* value) { SetStorageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN from the key store with which the instance is associated for TDE
     * encryption.</p>
     */
    inline const Aws::String& GetTdeCredentialArn() const{ return m_tdeCredentialArn; }
    inline bool TdeCredentialArnHasBeenSet() const { return m_tdeCredentialArnHasBeenSet; }
    inline void SetTdeCredentialArn(const Aws::String& value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn = value; }
    inline void SetTdeCredentialArn(Aws::String&& value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn = std::move(value); }
    inline void SetTdeCredentialArn(const char* value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn.assign(value); }
    inline DBInstance& WithTdeCredentialArn(const Aws::String& value) { SetTdeCredentialArn(value); return *this;}
    inline DBInstance& WithTdeCredentialArn(Aws::String&& value) { SetTdeCredentialArn(std::move(value)); return *this;}
    inline DBInstance& WithTdeCredentialArn(const char* value) { SetTdeCredentialArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port that the DB instance listens on. If the DB instance is part of a DB
     * cluster, this can be a different port than the DB cluster port.</p>
     */
    inline int GetDbInstancePort() const{ return m_dbInstancePort; }
    inline bool DbInstancePortHasBeenSet() const { return m_dbInstancePortHasBeenSet; }
    inline void SetDbInstancePort(int value) { m_dbInstancePortHasBeenSet = true; m_dbInstancePort = value; }
    inline DBInstance& WithDbInstancePort(int value) { SetDbInstancePort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the DB instance is a member of a DB cluster, indicates the name of the DB
     * cluster that the DB instance is a member of.</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }
    inline DBInstance& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}
    inline DBInstance& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}
    inline DBInstance& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the DB instance is encrypted.</p>
     */
    inline bool GetStorageEncrypted() const{ return m_storageEncrypted; }
    inline bool StorageEncryptedHasBeenSet() const { return m_storageEncryptedHasBeenSet; }
    inline void SetStorageEncrypted(bool value) { m_storageEncryptedHasBeenSet = true; m_storageEncrypted = value; }
    inline DBInstance& WithStorageEncrypted(bool value) { SetStorageEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>StorageEncrypted</code> is enabled, the Amazon Web Services KMS key
     * identifier for the encrypted DB instance.</p> <p>The Amazon Web Services KMS key
     * identifier is the key ARN, key ID, alias ARN, or alias name for the KMS key.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline DBInstance& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline DBInstance& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline DBInstance& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region-unique, immutable identifier for the DB
     * instance. This identifier is found in Amazon Web Services CloudTrail log entries
     * whenever the Amazon Web Services KMS key for the DB instance is accessed.</p>
     */
    inline const Aws::String& GetDbiResourceId() const{ return m_dbiResourceId; }
    inline bool DbiResourceIdHasBeenSet() const { return m_dbiResourceIdHasBeenSet; }
    inline void SetDbiResourceId(const Aws::String& value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId = value; }
    inline void SetDbiResourceId(Aws::String&& value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId = std::move(value); }
    inline void SetDbiResourceId(const char* value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId.assign(value); }
    inline DBInstance& WithDbiResourceId(const Aws::String& value) { SetDbiResourceId(value); return *this;}
    inline DBInstance& WithDbiResourceId(Aws::String&& value) { SetDbiResourceId(std::move(value)); return *this;}
    inline DBInstance& WithDbiResourceId(const char* value) { SetDbiResourceId(value); return *this;}
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
    inline const Aws::String& GetCACertificateIdentifier() const{ return m_cACertificateIdentifier; }
    inline bool CACertificateIdentifierHasBeenSet() const { return m_cACertificateIdentifierHasBeenSet; }
    inline void SetCACertificateIdentifier(const Aws::String& value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier = value; }
    inline void SetCACertificateIdentifier(Aws::String&& value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier = std::move(value); }
    inline void SetCACertificateIdentifier(const char* value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier.assign(value); }
    inline DBInstance& WithCACertificateIdentifier(const Aws::String& value) { SetCACertificateIdentifier(value); return *this;}
    inline DBInstance& WithCACertificateIdentifier(Aws::String&& value) { SetCACertificateIdentifier(std::move(value)); return *this;}
    inline DBInstance& WithCACertificateIdentifier(const char* value) { SetCACertificateIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Active Directory Domain membership records associated with the DB
     * instance.</p>
     */
    inline const Aws::Vector<DomainMembership>& GetDomainMemberships() const{ return m_domainMemberships; }
    inline bool DomainMembershipsHasBeenSet() const { return m_domainMembershipsHasBeenSet; }
    inline void SetDomainMemberships(const Aws::Vector<DomainMembership>& value) { m_domainMembershipsHasBeenSet = true; m_domainMemberships = value; }
    inline void SetDomainMemberships(Aws::Vector<DomainMembership>&& value) { m_domainMembershipsHasBeenSet = true; m_domainMemberships = std::move(value); }
    inline DBInstance& WithDomainMemberships(const Aws::Vector<DomainMembership>& value) { SetDomainMemberships(value); return *this;}
    inline DBInstance& WithDomainMemberships(Aws::Vector<DomainMembership>&& value) { SetDomainMemberships(std::move(value)); return *this;}
    inline DBInstance& AddDomainMemberships(const DomainMembership& value) { m_domainMembershipsHasBeenSet = true; m_domainMemberships.push_back(value); return *this; }
    inline DBInstance& AddDomainMemberships(DomainMembership&& value) { m_domainMembershipsHasBeenSet = true; m_domainMemberships.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether tags are copied from the DB instance to snapshots of the DB
     * instance.</p> <p>This setting doesn't apply to Amazon Aurora DB instances.
     * Copying tags to snapshots is managed by the DB cluster. Setting this value for
     * an Aurora DB instance has no effect on the DB cluster setting. For more
     * information, see <code>DBCluster</code>.</p>
     */
    inline bool GetCopyTagsToSnapshot() const{ return m_copyTagsToSnapshot; }
    inline bool CopyTagsToSnapshotHasBeenSet() const { return m_copyTagsToSnapshotHasBeenSet; }
    inline void SetCopyTagsToSnapshot(bool value) { m_copyTagsToSnapshotHasBeenSet = true; m_copyTagsToSnapshot = value; }
    inline DBInstance& WithCopyTagsToSnapshot(bool value) { SetCopyTagsToSnapshot(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the DB instance.</p>
     */
    inline int GetMonitoringInterval() const{ return m_monitoringInterval; }
    inline bool MonitoringIntervalHasBeenSet() const { return m_monitoringIntervalHasBeenSet; }
    inline void SetMonitoringInterval(int value) { m_monitoringIntervalHasBeenSet = true; m_monitoringInterval = value; }
    inline DBInstance& WithMonitoringInterval(int value) { SetMonitoringInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch Logs log stream that
     * receives the Enhanced Monitoring metrics data for the DB instance.</p>
     */
    inline const Aws::String& GetEnhancedMonitoringResourceArn() const{ return m_enhancedMonitoringResourceArn; }
    inline bool EnhancedMonitoringResourceArnHasBeenSet() const { return m_enhancedMonitoringResourceArnHasBeenSet; }
    inline void SetEnhancedMonitoringResourceArn(const Aws::String& value) { m_enhancedMonitoringResourceArnHasBeenSet = true; m_enhancedMonitoringResourceArn = value; }
    inline void SetEnhancedMonitoringResourceArn(Aws::String&& value) { m_enhancedMonitoringResourceArnHasBeenSet = true; m_enhancedMonitoringResourceArn = std::move(value); }
    inline void SetEnhancedMonitoringResourceArn(const char* value) { m_enhancedMonitoringResourceArnHasBeenSet = true; m_enhancedMonitoringResourceArn.assign(value); }
    inline DBInstance& WithEnhancedMonitoringResourceArn(const Aws::String& value) { SetEnhancedMonitoringResourceArn(value); return *this;}
    inline DBInstance& WithEnhancedMonitoringResourceArn(Aws::String&& value) { SetEnhancedMonitoringResourceArn(std::move(value)); return *this;}
    inline DBInstance& WithEnhancedMonitoringResourceArn(const char* value) { SetEnhancedMonitoringResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the IAM role that permits RDS to send Enhanced Monitoring metrics
     * to Amazon CloudWatch Logs.</p>
     */
    inline const Aws::String& GetMonitoringRoleArn() const{ return m_monitoringRoleArn; }
    inline bool MonitoringRoleArnHasBeenSet() const { return m_monitoringRoleArnHasBeenSet; }
    inline void SetMonitoringRoleArn(const Aws::String& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = value; }
    inline void SetMonitoringRoleArn(Aws::String&& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = std::move(value); }
    inline void SetMonitoringRoleArn(const char* value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn.assign(value); }
    inline DBInstance& WithMonitoringRoleArn(const Aws::String& value) { SetMonitoringRoleArn(value); return *this;}
    inline DBInstance& WithMonitoringRoleArn(Aws::String&& value) { SetMonitoringRoleArn(std::move(value)); return *this;}
    inline DBInstance& WithMonitoringRoleArn(const char* value) { SetMonitoringRoleArn(value); return *this;}
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
    inline int GetPromotionTier() const{ return m_promotionTier; }
    inline bool PromotionTierHasBeenSet() const { return m_promotionTierHasBeenSet; }
    inline void SetPromotionTier(int value) { m_promotionTierHasBeenSet = true; m_promotionTier = value; }
    inline DBInstance& WithPromotionTier(int value) { SetPromotionTier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the DB instance.</p>
     */
    inline const Aws::String& GetDBInstanceArn() const{ return m_dBInstanceArn; }
    inline bool DBInstanceArnHasBeenSet() const { return m_dBInstanceArnHasBeenSet; }
    inline void SetDBInstanceArn(const Aws::String& value) { m_dBInstanceArnHasBeenSet = true; m_dBInstanceArn = value; }
    inline void SetDBInstanceArn(Aws::String&& value) { m_dBInstanceArnHasBeenSet = true; m_dBInstanceArn = std::move(value); }
    inline void SetDBInstanceArn(const char* value) { m_dBInstanceArnHasBeenSet = true; m_dBInstanceArn.assign(value); }
    inline DBInstance& WithDBInstanceArn(const Aws::String& value) { SetDBInstanceArn(value); return *this;}
    inline DBInstance& WithDBInstanceArn(Aws::String&& value) { SetDBInstanceArn(std::move(value)); return *this;}
    inline DBInstance& WithDBInstanceArn(const char* value) { SetDBInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time zone of the DB instance. In most cases, the <code>Timezone</code>
     * element is empty. <code>Timezone</code> content appears only for RDS for Db2 and
     * RDS for SQL Server DB instances that were created with a time zone
     * specified.</p>
     */
    inline const Aws::String& GetTimezone() const{ return m_timezone; }
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }
    inline void SetTimezone(const Aws::String& value) { m_timezoneHasBeenSet = true; m_timezone = value; }
    inline void SetTimezone(Aws::String&& value) { m_timezoneHasBeenSet = true; m_timezone = std::move(value); }
    inline void SetTimezone(const char* value) { m_timezoneHasBeenSet = true; m_timezone.assign(value); }
    inline DBInstance& WithTimezone(const Aws::String& value) { SetTimezone(value); return *this;}
    inline DBInstance& WithTimezone(Aws::String&& value) { SetTimezone(std::move(value)); return *this;}
    inline DBInstance& WithTimezone(const char* value) { SetTimezone(value); return *this;}
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
    inline bool GetIAMDatabaseAuthenticationEnabled() const{ return m_iAMDatabaseAuthenticationEnabled; }
    inline bool IAMDatabaseAuthenticationEnabledHasBeenSet() const { return m_iAMDatabaseAuthenticationEnabledHasBeenSet; }
    inline void SetIAMDatabaseAuthenticationEnabled(bool value) { m_iAMDatabaseAuthenticationEnabledHasBeenSet = true; m_iAMDatabaseAuthenticationEnabled = value; }
    inline DBInstance& WithIAMDatabaseAuthenticationEnabled(bool value) { SetIAMDatabaseAuthenticationEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mode of Database Insights that is enabled for the instance.</p>
     */
    inline const DatabaseInsightsMode& GetDatabaseInsightsMode() const{ return m_databaseInsightsMode; }
    inline bool DatabaseInsightsModeHasBeenSet() const { return m_databaseInsightsModeHasBeenSet; }
    inline void SetDatabaseInsightsMode(const DatabaseInsightsMode& value) { m_databaseInsightsModeHasBeenSet = true; m_databaseInsightsMode = value; }
    inline void SetDatabaseInsightsMode(DatabaseInsightsMode&& value) { m_databaseInsightsModeHasBeenSet = true; m_databaseInsightsMode = std::move(value); }
    inline DBInstance& WithDatabaseInsightsMode(const DatabaseInsightsMode& value) { SetDatabaseInsightsMode(value); return *this;}
    inline DBInstance& WithDatabaseInsightsMode(DatabaseInsightsMode&& value) { SetDatabaseInsightsMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether Performance Insights is enabled for the DB instance.</p>
     */
    inline bool GetPerformanceInsightsEnabled() const{ return m_performanceInsightsEnabled; }
    inline bool PerformanceInsightsEnabledHasBeenSet() const { return m_performanceInsightsEnabledHasBeenSet; }
    inline void SetPerformanceInsightsEnabled(bool value) { m_performanceInsightsEnabledHasBeenSet = true; m_performanceInsightsEnabled = value; }
    inline DBInstance& WithPerformanceInsightsEnabled(bool value) { SetPerformanceInsightsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of Performance
     * Insights data.</p> <p>The Amazon Web Services KMS key identifier is the key ARN,
     * key ID, alias ARN, or alias name for the KMS key.</p>
     */
    inline const Aws::String& GetPerformanceInsightsKMSKeyId() const{ return m_performanceInsightsKMSKeyId; }
    inline bool PerformanceInsightsKMSKeyIdHasBeenSet() const { return m_performanceInsightsKMSKeyIdHasBeenSet; }
    inline void SetPerformanceInsightsKMSKeyId(const Aws::String& value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId = value; }
    inline void SetPerformanceInsightsKMSKeyId(Aws::String&& value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId = std::move(value); }
    inline void SetPerformanceInsightsKMSKeyId(const char* value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId.assign(value); }
    inline DBInstance& WithPerformanceInsightsKMSKeyId(const Aws::String& value) { SetPerformanceInsightsKMSKeyId(value); return *this;}
    inline DBInstance& WithPerformanceInsightsKMSKeyId(Aws::String&& value) { SetPerformanceInsightsKMSKeyId(std::move(value)); return *this;}
    inline DBInstance& WithPerformanceInsightsKMSKeyId(const char* value) { SetPerformanceInsightsKMSKeyId(value); return *this;}
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
    inline int GetPerformanceInsightsRetentionPeriod() const{ return m_performanceInsightsRetentionPeriod; }
    inline bool PerformanceInsightsRetentionPeriodHasBeenSet() const { return m_performanceInsightsRetentionPeriodHasBeenSet; }
    inline void SetPerformanceInsightsRetentionPeriod(int value) { m_performanceInsightsRetentionPeriodHasBeenSet = true; m_performanceInsightsRetentionPeriod = value; }
    inline DBInstance& WithPerformanceInsightsRetentionPeriod(int value) { SetPerformanceInsightsRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of log types that this DB instance is configured to export to
     * CloudWatch Logs.</p> <p>Log types vary by DB engine. For information about the
     * log types for each DB engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html">Monitoring
     * Amazon RDS log files</a> in the <i>Amazon RDS User Guide.</i> </p>
     */
    inline const Aws::Vector<Aws::String>& GetEnabledCloudwatchLogsExports() const{ return m_enabledCloudwatchLogsExports; }
    inline bool EnabledCloudwatchLogsExportsHasBeenSet() const { return m_enabledCloudwatchLogsExportsHasBeenSet; }
    inline void SetEnabledCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { m_enabledCloudwatchLogsExportsHasBeenSet = true; m_enabledCloudwatchLogsExports = value; }
    inline void SetEnabledCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { m_enabledCloudwatchLogsExportsHasBeenSet = true; m_enabledCloudwatchLogsExports = std::move(value); }
    inline DBInstance& WithEnabledCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { SetEnabledCloudwatchLogsExports(value); return *this;}
    inline DBInstance& WithEnabledCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { SetEnabledCloudwatchLogsExports(std::move(value)); return *this;}
    inline DBInstance& AddEnabledCloudwatchLogsExports(const Aws::String& value) { m_enabledCloudwatchLogsExportsHasBeenSet = true; m_enabledCloudwatchLogsExports.push_back(value); return *this; }
    inline DBInstance& AddEnabledCloudwatchLogsExports(Aws::String&& value) { m_enabledCloudwatchLogsExportsHasBeenSet = true; m_enabledCloudwatchLogsExports.push_back(std::move(value)); return *this; }
    inline DBInstance& AddEnabledCloudwatchLogsExports(const char* value) { m_enabledCloudwatchLogsExportsHasBeenSet = true; m_enabledCloudwatchLogsExports.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p>
     */
    inline const Aws::Vector<ProcessorFeature>& GetProcessorFeatures() const{ return m_processorFeatures; }
    inline bool ProcessorFeaturesHasBeenSet() const { return m_processorFeaturesHasBeenSet; }
    inline void SetProcessorFeatures(const Aws::Vector<ProcessorFeature>& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures = value; }
    inline void SetProcessorFeatures(Aws::Vector<ProcessorFeature>&& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures = std::move(value); }
    inline DBInstance& WithProcessorFeatures(const Aws::Vector<ProcessorFeature>& value) { SetProcessorFeatures(value); return *this;}
    inline DBInstance& WithProcessorFeatures(Aws::Vector<ProcessorFeature>&& value) { SetProcessorFeatures(std::move(value)); return *this;}
    inline DBInstance& AddProcessorFeatures(const ProcessorFeature& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures.push_back(value); return *this; }
    inline DBInstance& AddProcessorFeatures(ProcessorFeature&& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the DB instance has deletion protection enabled. The
     * database can't be deleted when deletion protection is enabled. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_DeleteInstance.html">
     * Deleting a DB Instance</a>.</p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }
    inline DBInstance& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Identity and Access Management (IAM) roles associated
     * with the DB instance.</p>
     */
    inline const Aws::Vector<DBInstanceRole>& GetAssociatedRoles() const{ return m_associatedRoles; }
    inline bool AssociatedRolesHasBeenSet() const { return m_associatedRolesHasBeenSet; }
    inline void SetAssociatedRoles(const Aws::Vector<DBInstanceRole>& value) { m_associatedRolesHasBeenSet = true; m_associatedRoles = value; }
    inline void SetAssociatedRoles(Aws::Vector<DBInstanceRole>&& value) { m_associatedRolesHasBeenSet = true; m_associatedRoles = std::move(value); }
    inline DBInstance& WithAssociatedRoles(const Aws::Vector<DBInstanceRole>& value) { SetAssociatedRoles(value); return *this;}
    inline DBInstance& WithAssociatedRoles(Aws::Vector<DBInstanceRole>&& value) { SetAssociatedRoles(std::move(value)); return *this;}
    inline DBInstance& AddAssociatedRoles(const DBInstanceRole& value) { m_associatedRolesHasBeenSet = true; m_associatedRoles.push_back(value); return *this; }
    inline DBInstance& AddAssociatedRoles(DBInstanceRole&& value) { m_associatedRolesHasBeenSet = true; m_associatedRoles.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The listener connection endpoint for SQL Server Always On.</p>
     */
    inline const Endpoint& GetListenerEndpoint() const{ return m_listenerEndpoint; }
    inline bool ListenerEndpointHasBeenSet() const { return m_listenerEndpointHasBeenSet; }
    inline void SetListenerEndpoint(const Endpoint& value) { m_listenerEndpointHasBeenSet = true; m_listenerEndpoint = value; }
    inline void SetListenerEndpoint(Endpoint&& value) { m_listenerEndpointHasBeenSet = true; m_listenerEndpoint = std::move(value); }
    inline DBInstance& WithListenerEndpoint(const Endpoint& value) { SetListenerEndpoint(value); return *this;}
    inline DBInstance& WithListenerEndpoint(Endpoint&& value) { SetListenerEndpoint(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upper limit in gibibytes (GiB) to which Amazon RDS can automatically
     * scale the storage of the DB instance.</p>
     */
    inline int GetMaxAllocatedStorage() const{ return m_maxAllocatedStorage; }
    inline bool MaxAllocatedStorageHasBeenSet() const { return m_maxAllocatedStorageHasBeenSet; }
    inline void SetMaxAllocatedStorage(int value) { m_maxAllocatedStorageHasBeenSet = true; m_maxAllocatedStorage = value; }
    inline DBInstance& WithMaxAllocatedStorage(int value) { SetMaxAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTagList() const{ return m_tagList; }
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }
    inline void SetTagList(const Aws::Vector<Tag>& value) { m_tagListHasBeenSet = true; m_tagList = value; }
    inline void SetTagList(Aws::Vector<Tag>&& value) { m_tagListHasBeenSet = true; m_tagList = std::move(value); }
    inline DBInstance& WithTagList(const Aws::Vector<Tag>& value) { SetTagList(value); return *this;}
    inline DBInstance& WithTagList(Aws::Vector<Tag>&& value) { SetTagList(std::move(value)); return *this;}
    inline DBInstance& AddTagList(const Tag& value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }
    inline DBInstance& AddTagList(Tag&& value) { m_tagListHasBeenSet = true; m_tagList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of replicated automated backups associated with the DB instance.</p>
     */
    inline const Aws::Vector<DBInstanceAutomatedBackupsReplication>& GetDBInstanceAutomatedBackupsReplications() const{ return m_dBInstanceAutomatedBackupsReplications; }
    inline bool DBInstanceAutomatedBackupsReplicationsHasBeenSet() const { return m_dBInstanceAutomatedBackupsReplicationsHasBeenSet; }
    inline void SetDBInstanceAutomatedBackupsReplications(const Aws::Vector<DBInstanceAutomatedBackupsReplication>& value) { m_dBInstanceAutomatedBackupsReplicationsHasBeenSet = true; m_dBInstanceAutomatedBackupsReplications = value; }
    inline void SetDBInstanceAutomatedBackupsReplications(Aws::Vector<DBInstanceAutomatedBackupsReplication>&& value) { m_dBInstanceAutomatedBackupsReplicationsHasBeenSet = true; m_dBInstanceAutomatedBackupsReplications = std::move(value); }
    inline DBInstance& WithDBInstanceAutomatedBackupsReplications(const Aws::Vector<DBInstanceAutomatedBackupsReplication>& value) { SetDBInstanceAutomatedBackupsReplications(value); return *this;}
    inline DBInstance& WithDBInstanceAutomatedBackupsReplications(Aws::Vector<DBInstanceAutomatedBackupsReplication>&& value) { SetDBInstanceAutomatedBackupsReplications(std::move(value)); return *this;}
    inline DBInstance& AddDBInstanceAutomatedBackupsReplications(const DBInstanceAutomatedBackupsReplication& value) { m_dBInstanceAutomatedBackupsReplicationsHasBeenSet = true; m_dBInstanceAutomatedBackupsReplications.push_back(value); return *this; }
    inline DBInstance& AddDBInstanceAutomatedBackupsReplications(DBInstanceAutomatedBackupsReplication&& value) { m_dBInstanceAutomatedBackupsReplicationsHasBeenSet = true; m_dBInstanceAutomatedBackupsReplications.push_back(std::move(value)); return *this; }
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
    inline bool GetCustomerOwnedIpEnabled() const{ return m_customerOwnedIpEnabled; }
    inline bool CustomerOwnedIpEnabledHasBeenSet() const { return m_customerOwnedIpEnabledHasBeenSet; }
    inline void SetCustomerOwnedIpEnabled(bool value) { m_customerOwnedIpEnabledHasBeenSet = true; m_customerOwnedIpEnabled = value; }
    inline DBInstance& WithCustomerOwnedIpEnabled(bool value) { SetCustomerOwnedIpEnabled(value); return *this;}
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
    inline DBInstance& WithAwsBackupRecoveryPointArn(const Aws::String& value) { SetAwsBackupRecoveryPointArn(value); return *this;}
    inline DBInstance& WithAwsBackupRecoveryPointArn(Aws::String&& value) { SetAwsBackupRecoveryPointArn(std::move(value)); return *this;}
    inline DBInstance& WithAwsBackupRecoveryPointArn(const char* value) { SetAwsBackupRecoveryPointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the database activity stream.</p>
     */
    inline const ActivityStreamStatus& GetActivityStreamStatus() const{ return m_activityStreamStatus; }
    inline bool ActivityStreamStatusHasBeenSet() const { return m_activityStreamStatusHasBeenSet; }
    inline void SetActivityStreamStatus(const ActivityStreamStatus& value) { m_activityStreamStatusHasBeenSet = true; m_activityStreamStatus = value; }
    inline void SetActivityStreamStatus(ActivityStreamStatus&& value) { m_activityStreamStatusHasBeenSet = true; m_activityStreamStatus = std::move(value); }
    inline DBInstance& WithActivityStreamStatus(const ActivityStreamStatus& value) { SetActivityStreamStatus(value); return *this;}
    inline DBInstance& WithActivityStreamStatus(ActivityStreamStatus&& value) { SetActivityStreamStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS key identifier used for encrypting messages in
     * the database activity stream. The Amazon Web Services KMS key identifier is the
     * key ARN, key ID, alias ARN, or alias name for the KMS key.</p>
     */
    inline const Aws::String& GetActivityStreamKmsKeyId() const{ return m_activityStreamKmsKeyId; }
    inline bool ActivityStreamKmsKeyIdHasBeenSet() const { return m_activityStreamKmsKeyIdHasBeenSet; }
    inline void SetActivityStreamKmsKeyId(const Aws::String& value) { m_activityStreamKmsKeyIdHasBeenSet = true; m_activityStreamKmsKeyId = value; }
    inline void SetActivityStreamKmsKeyId(Aws::String&& value) { m_activityStreamKmsKeyIdHasBeenSet = true; m_activityStreamKmsKeyId = std::move(value); }
    inline void SetActivityStreamKmsKeyId(const char* value) { m_activityStreamKmsKeyIdHasBeenSet = true; m_activityStreamKmsKeyId.assign(value); }
    inline DBInstance& WithActivityStreamKmsKeyId(const Aws::String& value) { SetActivityStreamKmsKeyId(value); return *this;}
    inline DBInstance& WithActivityStreamKmsKeyId(Aws::String&& value) { SetActivityStreamKmsKeyId(std::move(value)); return *this;}
    inline DBInstance& WithActivityStreamKmsKeyId(const char* value) { SetActivityStreamKmsKeyId(value); return *this;}
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
    inline DBInstance& WithActivityStreamKinesisStreamName(const Aws::String& value) { SetActivityStreamKinesisStreamName(value); return *this;}
    inline DBInstance& WithActivityStreamKinesisStreamName(Aws::String&& value) { SetActivityStreamKinesisStreamName(std::move(value)); return *this;}
    inline DBInstance& WithActivityStreamKinesisStreamName(const char* value) { SetActivityStreamKinesisStreamName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mode of the database activity stream. Database events such as a change or
     * access generate an activity stream event. RDS for Oracle always handles these
     * events asynchronously.</p>
     */
    inline const ActivityStreamMode& GetActivityStreamMode() const{ return m_activityStreamMode; }
    inline bool ActivityStreamModeHasBeenSet() const { return m_activityStreamModeHasBeenSet; }
    inline void SetActivityStreamMode(const ActivityStreamMode& value) { m_activityStreamModeHasBeenSet = true; m_activityStreamMode = value; }
    inline void SetActivityStreamMode(ActivityStreamMode&& value) { m_activityStreamModeHasBeenSet = true; m_activityStreamMode = std::move(value); }
    inline DBInstance& WithActivityStreamMode(const ActivityStreamMode& value) { SetActivityStreamMode(value); return *this;}
    inline DBInstance& WithActivityStreamMode(ActivityStreamMode&& value) { SetActivityStreamMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether engine-native audit fields are included in the database
     * activity stream.</p>
     */
    inline bool GetActivityStreamEngineNativeAuditFieldsIncluded() const{ return m_activityStreamEngineNativeAuditFieldsIncluded; }
    inline bool ActivityStreamEngineNativeAuditFieldsIncludedHasBeenSet() const { return m_activityStreamEngineNativeAuditFieldsIncludedHasBeenSet; }
    inline void SetActivityStreamEngineNativeAuditFieldsIncluded(bool value) { m_activityStreamEngineNativeAuditFieldsIncludedHasBeenSet = true; m_activityStreamEngineNativeAuditFieldsIncluded = value; }
    inline DBInstance& WithActivityStreamEngineNativeAuditFieldsIncluded(bool value) { SetActivityStreamEngineNativeAuditFieldsIncluded(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The automation mode of the RDS Custom DB instance: <code>full</code> or
     * <code>all paused</code>. If <code>full</code>, the DB instance automates
     * monitoring and instance recovery. If <code>all paused</code>, the instance
     * pauses automation for the duration set by
     * <code>--resume-full-automation-mode-minutes</code>.</p>
     */
    inline const AutomationMode& GetAutomationMode() const{ return m_automationMode; }
    inline bool AutomationModeHasBeenSet() const { return m_automationModeHasBeenSet; }
    inline void SetAutomationMode(const AutomationMode& value) { m_automationModeHasBeenSet = true; m_automationMode = value; }
    inline void SetAutomationMode(AutomationMode&& value) { m_automationModeHasBeenSet = true; m_automationMode = std::move(value); }
    inline DBInstance& WithAutomationMode(const AutomationMode& value) { SetAutomationMode(value); return *this;}
    inline DBInstance& WithAutomationMode(AutomationMode&& value) { SetAutomationMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of minutes to pause the automation. When the time period ends, RDS
     * Custom resumes full automation. The minimum value is 60 (default). The maximum
     * value is 1,440.</p>
     */
    inline const Aws::Utils::DateTime& GetResumeFullAutomationModeTime() const{ return m_resumeFullAutomationModeTime; }
    inline bool ResumeFullAutomationModeTimeHasBeenSet() const { return m_resumeFullAutomationModeTimeHasBeenSet; }
    inline void SetResumeFullAutomationModeTime(const Aws::Utils::DateTime& value) { m_resumeFullAutomationModeTimeHasBeenSet = true; m_resumeFullAutomationModeTime = value; }
    inline void SetResumeFullAutomationModeTime(Aws::Utils::DateTime&& value) { m_resumeFullAutomationModeTimeHasBeenSet = true; m_resumeFullAutomationModeTime = std::move(value); }
    inline DBInstance& WithResumeFullAutomationModeTime(const Aws::Utils::DateTime& value) { SetResumeFullAutomationModeTime(value); return *this;}
    inline DBInstance& WithResumeFullAutomationModeTime(Aws::Utils::DateTime&& value) { SetResumeFullAutomationModeTime(std::move(value)); return *this;}
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
    inline const Aws::String& GetCustomIamInstanceProfile() const{ return m_customIamInstanceProfile; }
    inline bool CustomIamInstanceProfileHasBeenSet() const { return m_customIamInstanceProfileHasBeenSet; }
    inline void SetCustomIamInstanceProfile(const Aws::String& value) { m_customIamInstanceProfileHasBeenSet = true; m_customIamInstanceProfile = value; }
    inline void SetCustomIamInstanceProfile(Aws::String&& value) { m_customIamInstanceProfileHasBeenSet = true; m_customIamInstanceProfile = std::move(value); }
    inline void SetCustomIamInstanceProfile(const char* value) { m_customIamInstanceProfileHasBeenSet = true; m_customIamInstanceProfile.assign(value); }
    inline DBInstance& WithCustomIamInstanceProfile(const Aws::String& value) { SetCustomIamInstanceProfile(value); return *this;}
    inline DBInstance& WithCustomIamInstanceProfile(Aws::String&& value) { SetCustomIamInstanceProfile(std::move(value)); return *this;}
    inline DBInstance& WithCustomIamInstanceProfile(const char* value) { SetCustomIamInstanceProfile(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location where automated backups and manual snapshots are stored: Amazon
     * Web Services Outposts or the Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetBackupTarget() const{ return m_backupTarget; }
    inline bool BackupTargetHasBeenSet() const { return m_backupTargetHasBeenSet; }
    inline void SetBackupTarget(const Aws::String& value) { m_backupTargetHasBeenSet = true; m_backupTarget = value; }
    inline void SetBackupTarget(Aws::String&& value) { m_backupTargetHasBeenSet = true; m_backupTarget = std::move(value); }
    inline void SetBackupTarget(const char* value) { m_backupTargetHasBeenSet = true; m_backupTarget.assign(value); }
    inline DBInstance& WithBackupTarget(const Aws::String& value) { SetBackupTarget(value); return *this;}
    inline DBInstance& WithBackupTarget(Aws::String&& value) { SetBackupTarget(std::move(value)); return *this;}
    inline DBInstance& WithBackupTarget(const char* value) { SetBackupTarget(value); return *this;}
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
    inline const Aws::String& GetNetworkType() const{ return m_networkType; }
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
    inline void SetNetworkType(const Aws::String& value) { m_networkTypeHasBeenSet = true; m_networkType = value; }
    inline void SetNetworkType(Aws::String&& value) { m_networkTypeHasBeenSet = true; m_networkType = std::move(value); }
    inline void SetNetworkType(const char* value) { m_networkTypeHasBeenSet = true; m_networkType.assign(value); }
    inline DBInstance& WithNetworkType(const Aws::String& value) { SetNetworkType(value); return *this;}
    inline DBInstance& WithNetworkType(Aws::String&& value) { SetNetworkType(std::move(value)); return *this;}
    inline DBInstance& WithNetworkType(const char* value) { SetNetworkType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the policy state of the activity stream.</p>
     */
    inline const ActivityStreamPolicyStatus& GetActivityStreamPolicyStatus() const{ return m_activityStreamPolicyStatus; }
    inline bool ActivityStreamPolicyStatusHasBeenSet() const { return m_activityStreamPolicyStatusHasBeenSet; }
    inline void SetActivityStreamPolicyStatus(const ActivityStreamPolicyStatus& value) { m_activityStreamPolicyStatusHasBeenSet = true; m_activityStreamPolicyStatus = value; }
    inline void SetActivityStreamPolicyStatus(ActivityStreamPolicyStatus&& value) { m_activityStreamPolicyStatusHasBeenSet = true; m_activityStreamPolicyStatus = std::move(value); }
    inline DBInstance& WithActivityStreamPolicyStatus(const ActivityStreamPolicyStatus& value) { SetActivityStreamPolicyStatus(value); return *this;}
    inline DBInstance& WithActivityStreamPolicyStatus(ActivityStreamPolicyStatus&& value) { SetActivityStreamPolicyStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage throughput for the DB instance.</p> <p>This setting applies only
     * to the <code>gp3</code> storage type.</p>
     */
    inline int GetStorageThroughput() const{ return m_storageThroughput; }
    inline bool StorageThroughputHasBeenSet() const { return m_storageThroughputHasBeenSet; }
    inline void SetStorageThroughput(int value) { m_storageThroughputHasBeenSet = true; m_storageThroughput = value; }
    inline DBInstance& WithStorageThroughput(int value) { SetStorageThroughput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Oracle system ID (Oracle SID) for a container database (CDB). The Oracle
     * SID is also the name of the CDB. This setting is only valid for RDS Custom DB
     * instances.</p>
     */
    inline const Aws::String& GetDBSystemId() const{ return m_dBSystemId; }
    inline bool DBSystemIdHasBeenSet() const { return m_dBSystemIdHasBeenSet; }
    inline void SetDBSystemId(const Aws::String& value) { m_dBSystemIdHasBeenSet = true; m_dBSystemId = value; }
    inline void SetDBSystemId(Aws::String&& value) { m_dBSystemIdHasBeenSet = true; m_dBSystemId = std::move(value); }
    inline void SetDBSystemId(const char* value) { m_dBSystemIdHasBeenSet = true; m_dBSystemId.assign(value); }
    inline DBInstance& WithDBSystemId(const Aws::String& value) { SetDBSystemId(value); return *this;}
    inline DBInstance& WithDBSystemId(Aws::String&& value) { SetDBSystemId(std::move(value)); return *this;}
    inline DBInstance& WithDBSystemId(const char* value) { SetDBSystemId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secret managed by RDS in Amazon Web Services Secrets Manager for the
     * master user password.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon RDS
     * User Guide.</i> </p>
     */
    inline const MasterUserSecret& GetMasterUserSecret() const{ return m_masterUserSecret; }
    inline bool MasterUserSecretHasBeenSet() const { return m_masterUserSecretHasBeenSet; }
    inline void SetMasterUserSecret(const MasterUserSecret& value) { m_masterUserSecretHasBeenSet = true; m_masterUserSecret = value; }
    inline void SetMasterUserSecret(MasterUserSecret&& value) { m_masterUserSecretHasBeenSet = true; m_masterUserSecret = std::move(value); }
    inline DBInstance& WithMasterUserSecret(const MasterUserSecret& value) { SetMasterUserSecret(value); return *this;}
    inline DBInstance& WithMasterUserSecret(MasterUserSecret&& value) { SetMasterUserSecret(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the DB instance's server certificate.</p>
     */
    inline const CertificateDetails& GetCertificateDetails() const{ return m_certificateDetails; }
    inline bool CertificateDetailsHasBeenSet() const { return m_certificateDetailsHasBeenSet; }
    inline void SetCertificateDetails(const CertificateDetails& value) { m_certificateDetailsHasBeenSet = true; m_certificateDetails = value; }
    inline void SetCertificateDetails(CertificateDetails&& value) { m_certificateDetailsHasBeenSet = true; m_certificateDetails = std::move(value); }
    inline DBInstance& WithCertificateDetails(const CertificateDetails& value) { SetCertificateDetails(value); return *this;}
    inline DBInstance& WithCertificateDetails(CertificateDetails&& value) { SetCertificateDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the source DB cluster if this DB instance is a read
     * replica.</p>
     */
    inline const Aws::String& GetReadReplicaSourceDBClusterIdentifier() const{ return m_readReplicaSourceDBClusterIdentifier; }
    inline bool ReadReplicaSourceDBClusterIdentifierHasBeenSet() const { return m_readReplicaSourceDBClusterIdentifierHasBeenSet; }
    inline void SetReadReplicaSourceDBClusterIdentifier(const Aws::String& value) { m_readReplicaSourceDBClusterIdentifierHasBeenSet = true; m_readReplicaSourceDBClusterIdentifier = value; }
    inline void SetReadReplicaSourceDBClusterIdentifier(Aws::String&& value) { m_readReplicaSourceDBClusterIdentifierHasBeenSet = true; m_readReplicaSourceDBClusterIdentifier = std::move(value); }
    inline void SetReadReplicaSourceDBClusterIdentifier(const char* value) { m_readReplicaSourceDBClusterIdentifierHasBeenSet = true; m_readReplicaSourceDBClusterIdentifier.assign(value); }
    inline DBInstance& WithReadReplicaSourceDBClusterIdentifier(const Aws::String& value) { SetReadReplicaSourceDBClusterIdentifier(value); return *this;}
    inline DBInstance& WithReadReplicaSourceDBClusterIdentifier(Aws::String&& value) { SetReadReplicaSourceDBClusterIdentifier(std::move(value)); return *this;}
    inline DBInstance& WithReadReplicaSourceDBClusterIdentifier(const char* value) { SetReadReplicaSourceDBClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The progress of the storage optimization operation as a percentage.</p>
     */
    inline const Aws::String& GetPercentProgress() const{ return m_percentProgress; }
    inline bool PercentProgressHasBeenSet() const { return m_percentProgressHasBeenSet; }
    inline void SetPercentProgress(const Aws::String& value) { m_percentProgressHasBeenSet = true; m_percentProgress = value; }
    inline void SetPercentProgress(Aws::String&& value) { m_percentProgressHasBeenSet = true; m_percentProgress = std::move(value); }
    inline void SetPercentProgress(const char* value) { m_percentProgressHasBeenSet = true; m_percentProgress.assign(value); }
    inline DBInstance& WithPercentProgress(const Aws::String& value) { SetPercentProgress(value); return *this;}
    inline DBInstance& WithPercentProgress(Aws::String&& value) { SetPercentProgress(std::move(value)); return *this;}
    inline DBInstance& WithPercentProgress(const char* value) { SetPercentProgress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the DB instance has a dedicated log volume (DLV)
     * enabled.</p>
     */
    inline bool GetDedicatedLogVolume() const{ return m_dedicatedLogVolume; }
    inline bool DedicatedLogVolumeHasBeenSet() const { return m_dedicatedLogVolumeHasBeenSet; }
    inline void SetDedicatedLogVolume(bool value) { m_dedicatedLogVolumeHasBeenSet = true; m_dedicatedLogVolume = value; }
    inline DBInstance& WithDedicatedLogVolume(bool value) { SetDedicatedLogVolume(value); return *this;}
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
    inline bool GetIsStorageConfigUpgradeAvailable() const{ return m_isStorageConfigUpgradeAvailable; }
    inline bool IsStorageConfigUpgradeAvailableHasBeenSet() const { return m_isStorageConfigUpgradeAvailableHasBeenSet; }
    inline void SetIsStorageConfigUpgradeAvailable(bool value) { m_isStorageConfigUpgradeAvailableHasBeenSet = true; m_isStorageConfigUpgradeAvailable = value; }
    inline DBInstance& WithIsStorageConfigUpgradeAvailable(bool value) { SetIsStorageConfigUpgradeAvailable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the DB instance is in the multi-tenant configuration (TRUE)
     * or the single-tenant configuration (FALSE).</p>
     */
    inline bool GetMultiTenant() const{ return m_multiTenant; }
    inline bool MultiTenantHasBeenSet() const { return m_multiTenantHasBeenSet; }
    inline void SetMultiTenant(bool value) { m_multiTenantHasBeenSet = true; m_multiTenant = value; }
    inline DBInstance& WithMultiTenant(bool value) { SetMultiTenant(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The life cycle type for the DB instance.</p> <p>For more information, see
     * CreateDBInstance.</p>
     */
    inline const Aws::String& GetEngineLifecycleSupport() const{ return m_engineLifecycleSupport; }
    inline bool EngineLifecycleSupportHasBeenSet() const { return m_engineLifecycleSupportHasBeenSet; }
    inline void SetEngineLifecycleSupport(const Aws::String& value) { m_engineLifecycleSupportHasBeenSet = true; m_engineLifecycleSupport = value; }
    inline void SetEngineLifecycleSupport(Aws::String&& value) { m_engineLifecycleSupportHasBeenSet = true; m_engineLifecycleSupport = std::move(value); }
    inline void SetEngineLifecycleSupport(const char* value) { m_engineLifecycleSupportHasBeenSet = true; m_engineLifecycleSupport.assign(value); }
    inline DBInstance& WithEngineLifecycleSupport(const Aws::String& value) { SetEngineLifecycleSupport(value); return *this;}
    inline DBInstance& WithEngineLifecycleSupport(Aws::String&& value) { SetEngineLifecycleSupport(std::move(value)); return *this;}
    inline DBInstance& WithEngineLifecycleSupport(const char* value) { SetEngineLifecycleSupport(value); return *this;}
    ///@}
  private:

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet = false;

    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_dBInstanceStatus;
    bool m_dBInstanceStatusHasBeenSet = false;

    Aws::Utils::DateTime m_automaticRestartTime;
    bool m_automaticRestartTimeHasBeenSet = false;

    Aws::String m_masterUsername;
    bool m_masterUsernameHasBeenSet = false;

    Aws::String m_dBName;
    bool m_dBNameHasBeenSet = false;

    Endpoint m_endpoint;
    bool m_endpointHasBeenSet = false;

    int m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet = false;

    Aws::Utils::DateTime m_instanceCreateTime;
    bool m_instanceCreateTimeHasBeenSet = false;

    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet = false;

    int m_backupRetentionPeriod;
    bool m_backupRetentionPeriodHasBeenSet = false;

    Aws::Vector<DBSecurityGroupMembership> m_dBSecurityGroups;
    bool m_dBSecurityGroupsHasBeenSet = false;

    Aws::Vector<VpcSecurityGroupMembership> m_vpcSecurityGroups;
    bool m_vpcSecurityGroupsHasBeenSet = false;

    Aws::Vector<DBParameterGroupStatus> m_dBParameterGroups;
    bool m_dBParameterGroupsHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    DBSubnetGroup m_dBSubnetGroup;
    bool m_dBSubnetGroupHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    PendingModifiedValues m_pendingModifiedValues;
    bool m_pendingModifiedValuesHasBeenSet = false;

    Aws::Utils::DateTime m_latestRestorableTime;
    bool m_latestRestorableTimeHasBeenSet = false;

    bool m_multiAZ;
    bool m_multiAZHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet = false;

    Aws::String m_readReplicaSourceDBInstanceIdentifier;
    bool m_readReplicaSourceDBInstanceIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_readReplicaDBInstanceIdentifiers;
    bool m_readReplicaDBInstanceIdentifiersHasBeenSet = false;

    Aws::Vector<Aws::String> m_readReplicaDBClusterIdentifiers;
    bool m_readReplicaDBClusterIdentifiersHasBeenSet = false;

    ReplicaMode m_replicaMode;
    bool m_replicaModeHasBeenSet = false;

    Aws::String m_licenseModel;
    bool m_licenseModelHasBeenSet = false;

    int m_iops;
    bool m_iopsHasBeenSet = false;

    Aws::Vector<OptionGroupMembership> m_optionGroupMemberships;
    bool m_optionGroupMembershipsHasBeenSet = false;

    Aws::String m_characterSetName;
    bool m_characterSetNameHasBeenSet = false;

    Aws::String m_ncharCharacterSetName;
    bool m_ncharCharacterSetNameHasBeenSet = false;

    Aws::String m_secondaryAvailabilityZone;
    bool m_secondaryAvailabilityZoneHasBeenSet = false;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet = false;

    Aws::Vector<DBInstanceStatusInfo> m_statusInfos;
    bool m_statusInfosHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    Aws::String m_tdeCredentialArn;
    bool m_tdeCredentialArnHasBeenSet = false;

    int m_dbInstancePort;
    bool m_dbInstancePortHasBeenSet = false;

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;

    bool m_storageEncrypted;
    bool m_storageEncryptedHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_dbiResourceId;
    bool m_dbiResourceIdHasBeenSet = false;

    Aws::String m_cACertificateIdentifier;
    bool m_cACertificateIdentifierHasBeenSet = false;

    Aws::Vector<DomainMembership> m_domainMemberships;
    bool m_domainMembershipsHasBeenSet = false;

    bool m_copyTagsToSnapshot;
    bool m_copyTagsToSnapshotHasBeenSet = false;

    int m_monitoringInterval;
    bool m_monitoringIntervalHasBeenSet = false;

    Aws::String m_enhancedMonitoringResourceArn;
    bool m_enhancedMonitoringResourceArnHasBeenSet = false;

    Aws::String m_monitoringRoleArn;
    bool m_monitoringRoleArnHasBeenSet = false;

    int m_promotionTier;
    bool m_promotionTierHasBeenSet = false;

    Aws::String m_dBInstanceArn;
    bool m_dBInstanceArnHasBeenSet = false;

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet = false;

    bool m_iAMDatabaseAuthenticationEnabled;
    bool m_iAMDatabaseAuthenticationEnabledHasBeenSet = false;

    DatabaseInsightsMode m_databaseInsightsMode;
    bool m_databaseInsightsModeHasBeenSet = false;

    bool m_performanceInsightsEnabled;
    bool m_performanceInsightsEnabledHasBeenSet = false;

    Aws::String m_performanceInsightsKMSKeyId;
    bool m_performanceInsightsKMSKeyIdHasBeenSet = false;

    int m_performanceInsightsRetentionPeriod;
    bool m_performanceInsightsRetentionPeriodHasBeenSet = false;

    Aws::Vector<Aws::String> m_enabledCloudwatchLogsExports;
    bool m_enabledCloudwatchLogsExportsHasBeenSet = false;

    Aws::Vector<ProcessorFeature> m_processorFeatures;
    bool m_processorFeaturesHasBeenSet = false;

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet = false;

    Aws::Vector<DBInstanceRole> m_associatedRoles;
    bool m_associatedRolesHasBeenSet = false;

    Endpoint m_listenerEndpoint;
    bool m_listenerEndpointHasBeenSet = false;

    int m_maxAllocatedStorage;
    bool m_maxAllocatedStorageHasBeenSet = false;

    Aws::Vector<Tag> m_tagList;
    bool m_tagListHasBeenSet = false;

    Aws::Vector<DBInstanceAutomatedBackupsReplication> m_dBInstanceAutomatedBackupsReplications;
    bool m_dBInstanceAutomatedBackupsReplicationsHasBeenSet = false;

    bool m_customerOwnedIpEnabled;
    bool m_customerOwnedIpEnabledHasBeenSet = false;

    Aws::String m_awsBackupRecoveryPointArn;
    bool m_awsBackupRecoveryPointArnHasBeenSet = false;

    ActivityStreamStatus m_activityStreamStatus;
    bool m_activityStreamStatusHasBeenSet = false;

    Aws::String m_activityStreamKmsKeyId;
    bool m_activityStreamKmsKeyIdHasBeenSet = false;

    Aws::String m_activityStreamKinesisStreamName;
    bool m_activityStreamKinesisStreamNameHasBeenSet = false;

    ActivityStreamMode m_activityStreamMode;
    bool m_activityStreamModeHasBeenSet = false;

    bool m_activityStreamEngineNativeAuditFieldsIncluded;
    bool m_activityStreamEngineNativeAuditFieldsIncludedHasBeenSet = false;

    AutomationMode m_automationMode;
    bool m_automationModeHasBeenSet = false;

    Aws::Utils::DateTime m_resumeFullAutomationModeTime;
    bool m_resumeFullAutomationModeTimeHasBeenSet = false;

    Aws::String m_customIamInstanceProfile;
    bool m_customIamInstanceProfileHasBeenSet = false;

    Aws::String m_backupTarget;
    bool m_backupTargetHasBeenSet = false;

    Aws::String m_networkType;
    bool m_networkTypeHasBeenSet = false;

    ActivityStreamPolicyStatus m_activityStreamPolicyStatus;
    bool m_activityStreamPolicyStatusHasBeenSet = false;

    int m_storageThroughput;
    bool m_storageThroughputHasBeenSet = false;

    Aws::String m_dBSystemId;
    bool m_dBSystemIdHasBeenSet = false;

    MasterUserSecret m_masterUserSecret;
    bool m_masterUserSecretHasBeenSet = false;

    CertificateDetails m_certificateDetails;
    bool m_certificateDetailsHasBeenSet = false;

    Aws::String m_readReplicaSourceDBClusterIdentifier;
    bool m_readReplicaSourceDBClusterIdentifierHasBeenSet = false;

    Aws::String m_percentProgress;
    bool m_percentProgressHasBeenSet = false;

    bool m_dedicatedLogVolume;
    bool m_dedicatedLogVolumeHasBeenSet = false;

    bool m_isStorageConfigUpgradeAvailable;
    bool m_isStorageConfigUpgradeAvailableHasBeenSet = false;

    bool m_multiTenant;
    bool m_multiTenantHasBeenSet = false;

    Aws::String m_engineLifecycleSupport;
    bool m_engineLifecycleSupportHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
