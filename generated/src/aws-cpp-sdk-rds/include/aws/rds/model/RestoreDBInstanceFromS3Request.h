﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Tag.h>
#include <aws/rds/model/ProcessorFeature.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class RestoreDBInstanceFromS3Request : public RDSRequest
  {
  public:
    AWS_RDS_API RestoreDBInstanceFromS3Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RestoreDBInstanceFromS3"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the database to create when the DB instance is created. Follow
     * the naming rules specified in <code>CreateDBInstance</code>.</p>
     */
    inline const Aws::String& GetDBName() const{ return m_dBName; }
    inline bool DBNameHasBeenSet() const { return m_dBNameHasBeenSet; }
    inline void SetDBName(const Aws::String& value) { m_dBNameHasBeenSet = true; m_dBName = value; }
    inline void SetDBName(Aws::String&& value) { m_dBNameHasBeenSet = true; m_dBName = std::move(value); }
    inline void SetDBName(const char* value) { m_dBNameHasBeenSet = true; m_dBName.assign(value); }
    inline RestoreDBInstanceFromS3Request& WithDBName(const Aws::String& value) { SetDBName(value); return *this;}
    inline RestoreDBInstanceFromS3Request& WithDBName(Aws::String&& value) { SetDBName(std::move(value)); return *this;}
    inline RestoreDBInstanceFromS3Request& WithDBName(const char* value) { SetDBName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DB instance identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>mydbinstance</code> </p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }
    inline RestoreDBInstanceFromS3Request& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}
    inline RestoreDBInstanceFromS3Request& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}
    inline RestoreDBInstanceFromS3Request& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of storage (in gibibytes) to allocate initially for the DB
     * instance. Follow the allocation rules specified in
     * <code>CreateDBInstance</code>.</p>  <p>Be sure to allocate enough storage
     * for your new DB instance so that the restore operation can succeed. You can also
     * allocate additional storage for future growth.</p> 
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }
    inline RestoreDBInstanceFromS3Request& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compute and memory capacity of the DB instance, for example db.m4.large.
     * Not all DB instance classes are available in all Amazon Web Services Regions, or
     * for all database engines. For the full list of DB instance classes, and
     * availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Importing from
     * Amazon S3 isn't supported on the db.t2.micro DB instance class.</p>
     */
    inline const Aws::String& GetDBInstanceClass() const{ return m_dBInstanceClass; }
    inline bool DBInstanceClassHasBeenSet() const { return m_dBInstanceClassHasBeenSet; }
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }
    inline void SetDBInstanceClass(Aws::String&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = std::move(value); }
    inline void SetDBInstanceClass(const char* value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass.assign(value); }
    inline RestoreDBInstanceFromS3Request& WithDBInstanceClass(const Aws::String& value) { SetDBInstanceClass(value); return *this;}
    inline RestoreDBInstanceFromS3Request& WithDBInstanceClass(Aws::String&& value) { SetDBInstanceClass(std::move(value)); return *this;}
    inline RestoreDBInstanceFromS3Request& WithDBInstanceClass(const char* value) { SetDBInstanceClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database engine to be used for this instance.</p> <p>Valid
     * Values: <code>mysql</code> </p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline RestoreDBInstanceFromS3Request& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline RestoreDBInstanceFromS3Request& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline RestoreDBInstanceFromS3Request& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the master user.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1
     * to 16 letters or numbers.</p> </li> <li> <p>First character must be a
     * letter.</p> </li> <li> <p>Can't be a reserved word for the chosen database
     * engine.</p> </li> </ul>
     */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }
    inline void SetMasterUsername(Aws::String&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::move(value); }
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }
    inline RestoreDBInstanceFromS3Request& WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}
    inline RestoreDBInstanceFromS3Request& WithMasterUsername(Aws::String&& value) { SetMasterUsername(std::move(value)); return *this;}
    inline RestoreDBInstanceFromS3Request& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password for the master user.</p> <p>Constraints:</p> <ul> <li> <p>Can't
     * be specified if <code>ManageMasterUserPassword</code> is turned on.</p> </li>
     * <li> <p>Can include any printable ASCII character except "/", """, or "@". For
     * RDS for Oracle, can't include the "&amp;" (ampersand) or the "'" (single quotes)
     * character.</p> </li> </ul> <p>Length Constraints:</p> <ul> <li> <p>RDS for Db2 -
     * Must contain from 8 to 128 characters.</p> </li> <li> <p>RDS for MariaDB - Must
     * contain from 8 to 41 characters.</p> </li> <li> <p>RDS for Microsoft SQL Server
     * - Must contain from 8 to 128 characters.</p> </li> <li> <p>RDS for MySQL - Must
     * contain from 8 to 41 characters.</p> </li> <li> <p>RDS for Oracle - Must contain
     * from 8 to 30 characters.</p> </li> <li> <p>RDS for PostgreSQL - Must contain
     * from 8 to 128 characters.</p> </li> </ul>
     */
    inline const Aws::String& GetMasterUserPassword() const{ return m_masterUserPassword; }
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }
    inline void SetMasterUserPassword(const Aws::String& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }
    inline void SetMasterUserPassword(Aws::String&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::move(value); }
    inline void SetMasterUserPassword(const char* value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword.assign(value); }
    inline RestoreDBInstanceFromS3Request& WithMasterUserPassword(const Aws::String& value) { SetMasterUserPassword(value); return *this;}
    inline RestoreDBInstanceFromS3Request& WithMasterUserPassword(Aws::String&& value) { SetMasterUserPassword(std::move(value)); return *this;}
    inline RestoreDBInstanceFromS3Request& WithMasterUserPassword(const char* value) { SetMasterUserPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of DB security groups to associate with this DB instance.</p>
     * <p>Default: The default DB security group for the database engine.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDBSecurityGroups() const{ return m_dBSecurityGroups; }
    inline bool DBSecurityGroupsHasBeenSet() const { return m_dBSecurityGroupsHasBeenSet; }
    inline void SetDBSecurityGroups(const Aws::Vector<Aws::String>& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups = value; }
    inline void SetDBSecurityGroups(Aws::Vector<Aws::String>&& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups = std::move(value); }
    inline RestoreDBInstanceFromS3Request& WithDBSecurityGroups(const Aws::Vector<Aws::String>& value) { SetDBSecurityGroups(value); return *this;}
    inline RestoreDBInstanceFromS3Request& WithDBSecurityGroups(Aws::Vector<Aws::String>&& value) { SetDBSecurityGroups(std::move(value)); return *this;}
    inline RestoreDBInstanceFromS3Request& AddDBSecurityGroups(const Aws::String& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups.push_back(value); return *this; }
    inline RestoreDBInstanceFromS3Request& AddDBSecurityGroups(Aws::String&& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups.push_back(std::move(value)); return *this; }
    inline RestoreDBInstanceFromS3Request& AddDBSecurityGroups(const char* value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of VPC security groups to associate with this DB instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }
    inline RestoreDBInstanceFromS3Request& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}
    inline RestoreDBInstanceFromS3Request& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}
    inline RestoreDBInstanceFromS3Request& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }
    inline RestoreDBInstanceFromS3Request& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }
    inline RestoreDBInstanceFromS3Request& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Availability Zone that the DB instance is created in. For information
     * about Amazon Web Services Regions and Availability Zones, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.RegionsAndAvailabilityZones.html">Regions
     * and Availability Zones</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Default:
     * A random, system-chosen Availability Zone in the endpoint's Amazon Web Services
     * Region.</p> <p>Example: <code>us-east-1d</code> </p> <p>Constraint: The
     * <code>AvailabilityZone</code> parameter can't be specified if the DB instance is
     * a Multi-AZ deployment. The specified Availability Zone must be in the same
     * Amazon Web Services Region as the current endpoint.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline RestoreDBInstanceFromS3Request& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline RestoreDBInstanceFromS3Request& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline RestoreDBInstanceFromS3Request& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A DB subnet group to associate with this DB instance.</p> <p>Constraints: If
     * supplied, must match the name of an existing DBSubnetGroup.</p> <p>Example:
     * <code>mydbsubnetgroup</code> </p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }
    inline bool DBSubnetGroupNameHasBeenSet() const { return m_dBSubnetGroupNameHasBeenSet; }
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = std::move(value); }
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }
    inline RestoreDBInstanceFromS3Request& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}
    inline RestoreDBInstanceFromS3Request& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(std::move(value)); return *this;}
    inline RestoreDBInstanceFromS3Request& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time range each week during which system maintenance can occur, in
     * Universal Coordinated Time (UTC). For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_UpgradeDBInstance.Maintenance.html#Concepts.DBMaintenance">Amazon
     * RDS Maintenance Window</a> in the <i>Amazon RDS User Guide.</i> </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>ddd:hh24:mi-ddd:hh24:mi</code>.</p> </li> <li> <p>Valid Days: Mon, Tue,
     * Wed, Thu, Fri, Sat, Sun.</p> </li> <li> <p>Must be in Universal Coordinated Time
     * (UTC).</p> </li> <li> <p>Must not conflict with the preferred backup window.</p>
     * </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }
    inline RestoreDBInstanceFromS3Request& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}
    inline RestoreDBInstanceFromS3Request& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}
    inline RestoreDBInstanceFromS3Request& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the DB parameter group to associate with this DB instance.</p>
     * <p>If you do not specify a value for <code>DBParameterGroupName</code>, then the
     * default <code>DBParameterGroup</code> for the specified DB engine is used.</p>
     */
    inline const Aws::String& GetDBParameterGroupName() const{ return m_dBParameterGroupName; }
    inline bool DBParameterGroupNameHasBeenSet() const { return m_dBParameterGroupNameHasBeenSet; }
    inline void SetDBParameterGroupName(const Aws::String& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = value; }
    inline void SetDBParameterGroupName(Aws::String&& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = std::move(value); }
    inline void SetDBParameterGroupName(const char* value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName.assign(value); }
    inline RestoreDBInstanceFromS3Request& WithDBParameterGroupName(const Aws::String& value) { SetDBParameterGroupName(value); return *this;}
    inline RestoreDBInstanceFromS3Request& WithDBParameterGroupName(Aws::String&& value) { SetDBParameterGroupName(std::move(value)); return *this;}
    inline RestoreDBInstanceFromS3Request& WithDBParameterGroupName(const char* value) { SetDBParameterGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days for which automated backups are retained. Setting this
     * parameter to a positive number enables backups. For more information, see
     * <code>CreateDBInstance</code>.</p>
     */
    inline int GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }
    inline RestoreDBInstanceFromS3Request& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time range each day during which automated backups are created if
     * automated backups are enabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_WorkingWithAutomatedBackups.html#USER_WorkingWithAutomatedBackups.BackupWindow">Backup
     * window</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Constraints:</p> <ul>
     * <li> <p>Must be in the format <code>hh24:mi-hh24:mi</code>.</p> </li> <li>
     * <p>Must be in Universal Coordinated Time (UTC).</p> </li> <li> <p>Must not
     * conflict with the preferred maintenance window.</p> </li> <li> <p>Must be at
     * least 30 minutes.</p> </li> </ul>
     */
    inline const Aws::String& GetPreferredBackupWindow() const{ return m_preferredBackupWindow; }
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }
    inline void SetPreferredBackupWindow(const Aws::String& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }
    inline void SetPreferredBackupWindow(Aws::String&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::move(value); }
    inline void SetPreferredBackupWindow(const char* value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow.assign(value); }
    inline RestoreDBInstanceFromS3Request& WithPreferredBackupWindow(const Aws::String& value) { SetPreferredBackupWindow(value); return *this;}
    inline RestoreDBInstanceFromS3Request& WithPreferredBackupWindow(Aws::String&& value) { SetPreferredBackupWindow(std::move(value)); return *this;}
    inline RestoreDBInstanceFromS3Request& WithPreferredBackupWindow(const char* value) { SetPreferredBackupWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number on which the database accepts connections.</p> <p>Type:
     * Integer</p> <p>Valid Values: <code>1150</code>-<code>65535</code> </p>
     * <p>Default: <code>3306</code> </p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline RestoreDBInstanceFromS3Request& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the DB instance is a Multi-AZ deployment. If the DB
     * instance is a Multi-AZ deployment, you can't set the
     * <code>AvailabilityZone</code> parameter.</p>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }
    inline RestoreDBInstanceFromS3Request& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the database engine to use. Choose the latest minor
     * version of your database engine. For information about engine versions, see
     * <code>CreateDBInstance</code>, or call
     * <code>DescribeDBEngineVersions</code>.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline RestoreDBInstanceFromS3Request& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline RestoreDBInstanceFromS3Request& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline RestoreDBInstanceFromS3Request& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to automatically apply minor engine upgrades to the DB
     * instance during the maintenance window. By default, minor engine upgrades are
     * not applied automatically.</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }
    inline RestoreDBInstanceFromS3Request& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The license model for this DB instance. Use
     * <code>general-public-license</code>.</p>
     */
    inline const Aws::String& GetLicenseModel() const{ return m_licenseModel; }
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }
    inline void SetLicenseModel(const Aws::String& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }
    inline void SetLicenseModel(Aws::String&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = std::move(value); }
    inline void SetLicenseModel(const char* value) { m_licenseModelHasBeenSet = true; m_licenseModel.assign(value); }
    inline RestoreDBInstanceFromS3Request& WithLicenseModel(const Aws::String& value) { SetLicenseModel(value); return *this;}
    inline RestoreDBInstanceFromS3Request& WithLicenseModel(Aws::String&& value) { SetLicenseModel(std::move(value)); return *this;}
    inline RestoreDBInstanceFromS3Request& WithLicenseModel(const char* value) { SetLicenseModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to
     * allocate initially for the DB instance. For information about valid IOPS values,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Storage.html#USER_PIOPS">Amazon
     * RDS Provisioned IOPS storage</a> in the <i>Amazon RDS User Guide.</i> </p>
     */
    inline int GetIops() const{ return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline RestoreDBInstanceFromS3Request& WithIops(int value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the option group to associate with this DB instance. If this
     * argument is omitted, the default option group for the specified engine is
     * used.</p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::move(value); }
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }
    inline RestoreDBInstanceFromS3Request& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}
    inline RestoreDBInstanceFromS3Request& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(std::move(value)); return *this;}
    inline RestoreDBInstanceFromS3Request& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the DB instance is publicly accessible.</p> <p>When the DB
     * instance is publicly accessible, its Domain Name System (DNS) endpoint resolves
     * to the private IP address from within the DB instance's virtual private cloud
     * (VPC). It resolves to the public IP address from outside of the DB instance's
     * VPC. Access to the DB instance is ultimately controlled by the security group it
     * uses. That public access is not permitted if the security group assigned to the
     * DB instance doesn't permit it.</p> <p>When the DB instance isn't publicly
     * accessible, it is an internal DB instance with a DNS name that resolves to a
     * private IP address.</p> <p>For more information, see
     * <a>CreateDBInstance</a>.</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline RestoreDBInstanceFromS3Request& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags to associate with this DB instance. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.html">Tagging
     * Amazon RDS Resources</a> in the <i>Amazon RDS User Guide.</i> </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline RestoreDBInstanceFromS3Request& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline RestoreDBInstanceFromS3Request& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline RestoreDBInstanceFromS3Request& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline RestoreDBInstanceFromS3Request& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p>
     * <p>Valid Values: <code>gp2 | gp3 | io1 | io2 | standard</code> </p> <p>If you
     * specify <code>io1</code>, <code>io2</code>, or <code>gp3</code>, you must also
     * include a value for the <code>Iops</code> parameter.</p> <p>Default:
     * <code>io1</code> if the <code>Iops</code> parameter is specified; otherwise
     * <code>gp2</code> </p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }
    inline RestoreDBInstanceFromS3Request& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}
    inline RestoreDBInstanceFromS3Request& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}
    inline RestoreDBInstanceFromS3Request& WithStorageType(const char* value) { SetStorageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the new DB instance is encrypted or not.</p>
     */
    inline bool GetStorageEncrypted() const{ return m_storageEncrypted; }
    inline bool StorageEncryptedHasBeenSet() const { return m_storageEncryptedHasBeenSet; }
    inline void SetStorageEncrypted(bool value) { m_storageEncryptedHasBeenSet = true; m_storageEncrypted = value; }
    inline RestoreDBInstanceFromS3Request& WithStorageEncrypted(bool value) { SetStorageEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS key identifier for an encrypted DB instance.</p>
     * <p>The Amazon Web Services KMS key identifier is the key ARN, key ID, alias ARN,
     * or alias name for the KMS key. To use a KMS key in a different Amazon Web
     * Services account, specify the key ARN or alias ARN.</p> <p>If the
     * <code>StorageEncrypted</code> parameter is enabled, and you do not specify a
     * value for the <code>KmsKeyId</code> parameter, then Amazon RDS will use your
     * default KMS key. There is a default KMS key for your Amazon Web Services
     * account. Your Amazon Web Services account has a different default KMS key for
     * each Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline RestoreDBInstanceFromS3Request& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline RestoreDBInstanceFromS3Request& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline RestoreDBInstanceFromS3Request& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to copy all tags from the DB instance to snapshots of the
     * DB instance. By default, tags are not copied.</p>
     */
    inline bool GetCopyTagsToSnapshot() const{ return m_copyTagsToSnapshot; }
    inline bool CopyTagsToSnapshotHasBeenSet() const { return m_copyTagsToSnapshotHasBeenSet; }
    inline void SetCopyTagsToSnapshot(bool value) { m_copyTagsToSnapshotHasBeenSet = true; m_copyTagsToSnapshot = value; }
    inline RestoreDBInstanceFromS3Request& WithCopyTagsToSnapshot(bool value) { SetCopyTagsToSnapshot(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the DB instance. To disable collecting Enhanced Monitoring
     * metrics, specify 0.</p> <p>If <code>MonitoringRoleArn</code> is specified, then
     * you must also set <code>MonitoringInterval</code> to a value other than 0.</p>
     * <p>Valid Values: 0, 1, 5, 10, 15, 30, 60</p> <p>Default: <code>0</code> </p>
     */
    inline int GetMonitoringInterval() const{ return m_monitoringInterval; }
    inline bool MonitoringIntervalHasBeenSet() const { return m_monitoringIntervalHasBeenSet; }
    inline void SetMonitoringInterval(int value) { m_monitoringIntervalHasBeenSet = true; m_monitoringInterval = value; }
    inline RestoreDBInstanceFromS3Request& WithMonitoringInterval(int value) { SetMonitoringInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.OS.html#USER_Monitoring.OS.Enabling">Setting
     * Up and Enabling Enhanced Monitoring</a> in the <i>Amazon RDS User Guide.</i>
     * </p> <p>If <code>MonitoringInterval</code> is set to a value other than 0, then
     * you must supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline const Aws::String& GetMonitoringRoleArn() const{ return m_monitoringRoleArn; }
    inline bool MonitoringRoleArnHasBeenSet() const { return m_monitoringRoleArnHasBeenSet; }
    inline void SetMonitoringRoleArn(const Aws::String& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = value; }
    inline void SetMonitoringRoleArn(Aws::String&& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = std::move(value); }
    inline void SetMonitoringRoleArn(const char* value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn.assign(value); }
    inline RestoreDBInstanceFromS3Request& WithMonitoringRoleArn(const Aws::String& value) { SetMonitoringRoleArn(value); return *this;}
    inline RestoreDBInstanceFromS3Request& WithMonitoringRoleArn(Aws::String&& value) { SetMonitoringRoleArn(std::move(value)); return *this;}
    inline RestoreDBInstanceFromS3Request& WithMonitoringRoleArn(const char* value) { SetMonitoringRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable mapping of Amazon Web Services Identity and
     * Access Management (IAM) accounts to database accounts. By default, mapping isn't
     * enabled.</p> <p>For more information about IAM database authentication, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/UsingWithRDS.IAMDBAuth.html">
     * IAM Database Authentication for MySQL and PostgreSQL</a> in the <i>Amazon RDS
     * User Guide.</i> </p>
     */
    inline bool GetEnableIAMDatabaseAuthentication() const{ return m_enableIAMDatabaseAuthentication; }
    inline bool EnableIAMDatabaseAuthenticationHasBeenSet() const { return m_enableIAMDatabaseAuthenticationHasBeenSet; }
    inline void SetEnableIAMDatabaseAuthentication(bool value) { m_enableIAMDatabaseAuthenticationHasBeenSet = true; m_enableIAMDatabaseAuthentication = value; }
    inline RestoreDBInstanceFromS3Request& WithEnableIAMDatabaseAuthentication(bool value) { SetEnableIAMDatabaseAuthentication(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the engine of your source database.</p> <p>Valid Values:
     * <code>mysql</code> </p>
     */
    inline const Aws::String& GetSourceEngine() const{ return m_sourceEngine; }
    inline bool SourceEngineHasBeenSet() const { return m_sourceEngineHasBeenSet; }
    inline void SetSourceEngine(const Aws::String& value) { m_sourceEngineHasBeenSet = true; m_sourceEngine = value; }
    inline void SetSourceEngine(Aws::String&& value) { m_sourceEngineHasBeenSet = true; m_sourceEngine = std::move(value); }
    inline void SetSourceEngine(const char* value) { m_sourceEngineHasBeenSet = true; m_sourceEngine.assign(value); }
    inline RestoreDBInstanceFromS3Request& WithSourceEngine(const Aws::String& value) { SetSourceEngine(value); return *this;}
    inline RestoreDBInstanceFromS3Request& WithSourceEngine(Aws::String&& value) { SetSourceEngine(std::move(value)); return *this;}
    inline RestoreDBInstanceFromS3Request& WithSourceEngine(const char* value) { SetSourceEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the database that the backup files were created from.</p>
     * <p>MySQL versions 5.6 and 5.7 are supported.</p> <p>Example: <code>5.6.40</code>
     * </p>
     */
    inline const Aws::String& GetSourceEngineVersion() const{ return m_sourceEngineVersion; }
    inline bool SourceEngineVersionHasBeenSet() const { return m_sourceEngineVersionHasBeenSet; }
    inline void SetSourceEngineVersion(const Aws::String& value) { m_sourceEngineVersionHasBeenSet = true; m_sourceEngineVersion = value; }
    inline void SetSourceEngineVersion(Aws::String&& value) { m_sourceEngineVersionHasBeenSet = true; m_sourceEngineVersion = std::move(value); }
    inline void SetSourceEngineVersion(const char* value) { m_sourceEngineVersionHasBeenSet = true; m_sourceEngineVersion.assign(value); }
    inline RestoreDBInstanceFromS3Request& WithSourceEngineVersion(const Aws::String& value) { SetSourceEngineVersion(value); return *this;}
    inline RestoreDBInstanceFromS3Request& WithSourceEngineVersion(Aws::String&& value) { SetSourceEngineVersion(std::move(value)); return *this;}
    inline RestoreDBInstanceFromS3Request& WithSourceEngineVersion(const char* value) { SetSourceEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of your Amazon S3 bucket that contains your database backup
     * file.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::move(value); }
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }
    inline RestoreDBInstanceFromS3Request& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}
    inline RestoreDBInstanceFromS3Request& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}
    inline RestoreDBInstanceFromS3Request& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix of your Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetS3Prefix() const{ return m_s3Prefix; }
    inline bool S3PrefixHasBeenSet() const { return m_s3PrefixHasBeenSet; }
    inline void SetS3Prefix(const Aws::String& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = value; }
    inline void SetS3Prefix(Aws::String&& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = std::move(value); }
    inline void SetS3Prefix(const char* value) { m_s3PrefixHasBeenSet = true; m_s3Prefix.assign(value); }
    inline RestoreDBInstanceFromS3Request& WithS3Prefix(const Aws::String& value) { SetS3Prefix(value); return *this;}
    inline RestoreDBInstanceFromS3Request& WithS3Prefix(Aws::String&& value) { SetS3Prefix(std::move(value)); return *this;}
    inline RestoreDBInstanceFromS3Request& WithS3Prefix(const char* value) { SetS3Prefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Web Services Identity and Access Management (IAM) role with a trust
     * policy and a permissions policy that allows Amazon RDS to access your Amazon S3
     * bucket. For information about this role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/MySQL.Procedural.Importing.html#MySQL.Procedural.Importing.Enabling.IAM">
     * Creating an IAM role manually</a> in the <i>Amazon RDS User Guide.</i> </p>
     */
    inline const Aws::String& GetS3IngestionRoleArn() const{ return m_s3IngestionRoleArn; }
    inline bool S3IngestionRoleArnHasBeenSet() const { return m_s3IngestionRoleArnHasBeenSet; }
    inline void SetS3IngestionRoleArn(const Aws::String& value) { m_s3IngestionRoleArnHasBeenSet = true; m_s3IngestionRoleArn = value; }
    inline void SetS3IngestionRoleArn(Aws::String&& value) { m_s3IngestionRoleArnHasBeenSet = true; m_s3IngestionRoleArn = std::move(value); }
    inline void SetS3IngestionRoleArn(const char* value) { m_s3IngestionRoleArnHasBeenSet = true; m_s3IngestionRoleArn.assign(value); }
    inline RestoreDBInstanceFromS3Request& WithS3IngestionRoleArn(const Aws::String& value) { SetS3IngestionRoleArn(value); return *this;}
    inline RestoreDBInstanceFromS3Request& WithS3IngestionRoleArn(Aws::String&& value) { SetS3IngestionRoleArn(std::move(value)); return *this;}
    inline RestoreDBInstanceFromS3Request& WithS3IngestionRoleArn(const char* value) { SetS3IngestionRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable Performance Insights for the DB instance.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights.html">Using
     * Amazon Performance Insights</a> in the <i>Amazon RDS User Guide</i>.</p>
     */
    inline bool GetEnablePerformanceInsights() const{ return m_enablePerformanceInsights; }
    inline bool EnablePerformanceInsightsHasBeenSet() const { return m_enablePerformanceInsightsHasBeenSet; }
    inline void SetEnablePerformanceInsights(bool value) { m_enablePerformanceInsightsHasBeenSet = true; m_enablePerformanceInsights = value; }
    inline RestoreDBInstanceFromS3Request& WithEnablePerformanceInsights(bool value) { SetEnablePerformanceInsights(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of Performance
     * Insights data.</p> <p>The Amazon Web Services KMS key identifier is the key ARN,
     * key ID, alias ARN, or alias name for the KMS key.</p> <p>If you do not specify a
     * value for <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your
     * default KMS key. There is a default KMS key for your Amazon Web Services
     * account. Your Amazon Web Services account has a different default KMS key for
     * each Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetPerformanceInsightsKMSKeyId() const{ return m_performanceInsightsKMSKeyId; }
    inline bool PerformanceInsightsKMSKeyIdHasBeenSet() const { return m_performanceInsightsKMSKeyIdHasBeenSet; }
    inline void SetPerformanceInsightsKMSKeyId(const Aws::String& value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId = value; }
    inline void SetPerformanceInsightsKMSKeyId(Aws::String&& value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId = std::move(value); }
    inline void SetPerformanceInsightsKMSKeyId(const char* value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId.assign(value); }
    inline RestoreDBInstanceFromS3Request& WithPerformanceInsightsKMSKeyId(const Aws::String& value) { SetPerformanceInsightsKMSKeyId(value); return *this;}
    inline RestoreDBInstanceFromS3Request& WithPerformanceInsightsKMSKeyId(Aws::String&& value) { SetPerformanceInsightsKMSKeyId(std::move(value)); return *this;}
    inline RestoreDBInstanceFromS3Request& WithPerformanceInsightsKMSKeyId(const char* value) { SetPerformanceInsightsKMSKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days to retain Performance Insights data. The default is 7
     * days. The following values are valid:</p> <ul> <li> <p>7</p> </li> <li> <p>
     * <i>month</i> * 31, where <i>month</i> is a number of months from 1-23</p> </li>
     * <li> <p>731</p> </li> </ul> <p>For example, the following values are valid:</p>
     * <ul> <li> <p>93 (3 months * 31)</p> </li> <li> <p>341 (11 months * 31)</p> </li>
     * <li> <p>589 (19 months * 31)</p> </li> <li> <p>731</p> </li> </ul> <p>If you
     * specify a retention period such as 94, which isn't a valid value, RDS issues an
     * error.</p>
     */
    inline int GetPerformanceInsightsRetentionPeriod() const{ return m_performanceInsightsRetentionPeriod; }
    inline bool PerformanceInsightsRetentionPeriodHasBeenSet() const { return m_performanceInsightsRetentionPeriodHasBeenSet; }
    inline void SetPerformanceInsightsRetentionPeriod(int value) { m_performanceInsightsRetentionPeriodHasBeenSet = true; m_performanceInsightsRetentionPeriod = value; }
    inline RestoreDBInstanceFromS3Request& WithPerformanceInsightsRetentionPeriod(int value) { SetPerformanceInsightsRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of logs that the restored DB instance is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnableCloudwatchLogsExports() const{ return m_enableCloudwatchLogsExports; }
    inline bool EnableCloudwatchLogsExportsHasBeenSet() const { return m_enableCloudwatchLogsExportsHasBeenSet; }
    inline void SetEnableCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = value; }
    inline void SetEnableCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = std::move(value); }
    inline RestoreDBInstanceFromS3Request& WithEnableCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { SetEnableCloudwatchLogsExports(value); return *this;}
    inline RestoreDBInstanceFromS3Request& WithEnableCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { SetEnableCloudwatchLogsExports(std::move(value)); return *this;}
    inline RestoreDBInstanceFromS3Request& AddEnableCloudwatchLogsExports(const Aws::String& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }
    inline RestoreDBInstanceFromS3Request& AddEnableCloudwatchLogsExports(Aws::String&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(std::move(value)); return *this; }
    inline RestoreDBInstanceFromS3Request& AddEnableCloudwatchLogsExports(const char* value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }
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
    inline RestoreDBInstanceFromS3Request& WithProcessorFeatures(const Aws::Vector<ProcessorFeature>& value) { SetProcessorFeatures(value); return *this;}
    inline RestoreDBInstanceFromS3Request& WithProcessorFeatures(Aws::Vector<ProcessorFeature>&& value) { SetProcessorFeatures(std::move(value)); return *this;}
    inline RestoreDBInstanceFromS3Request& AddProcessorFeatures(const ProcessorFeature& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures.push_back(value); return *this; }
    inline RestoreDBInstanceFromS3Request& AddProcessorFeatures(ProcessorFeature&& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether the DB instance class of the DB instance uses its default
     * processor features.</p>
     */
    inline bool GetUseDefaultProcessorFeatures() const{ return m_useDefaultProcessorFeatures; }
    inline bool UseDefaultProcessorFeaturesHasBeenSet() const { return m_useDefaultProcessorFeaturesHasBeenSet; }
    inline void SetUseDefaultProcessorFeatures(bool value) { m_useDefaultProcessorFeaturesHasBeenSet = true; m_useDefaultProcessorFeatures = value; }
    inline RestoreDBInstanceFromS3Request& WithUseDefaultProcessorFeatures(bool value) { SetUseDefaultProcessorFeatures(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable deletion protection for the DB instance. The
     * database can't be deleted when deletion protection is enabled. By default,
     * deletion protection isn't enabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_DeleteInstance.html">
     * Deleting a DB Instance</a>.</p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }
    inline RestoreDBInstanceFromS3Request& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upper limit in gibibytes (GiB) to which Amazon RDS can automatically
     * scale the storage of the DB instance.</p> <p>For more information about this
     * setting, including limitations that apply to it, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PIOPS.StorageTypes.html#USER_PIOPS.Autoscaling">
     * Managing capacity automatically with Amazon RDS storage autoscaling</a> in the
     * <i>Amazon RDS User Guide</i>.</p>
     */
    inline int GetMaxAllocatedStorage() const{ return m_maxAllocatedStorage; }
    inline bool MaxAllocatedStorageHasBeenSet() const { return m_maxAllocatedStorageHasBeenSet; }
    inline void SetMaxAllocatedStorage(int value) { m_maxAllocatedStorageHasBeenSet = true; m_maxAllocatedStorage = value; }
    inline RestoreDBInstanceFromS3Request& WithMaxAllocatedStorage(int value) { SetMaxAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network type of the DB instance.</p> <p>Valid Values:</p> <ul> <li> <p>
     * <code>IPV4</code> </p> </li> <li> <p> <code>DUAL</code> </p> </li> </ul> <p>The
     * network type is determined by the <code>DBSubnetGroup</code> specified for the
     * DB instance. A <code>DBSubnetGroup</code> can support only the IPv4 protocol or
     * the IPv4 and the IPv6 protocols (<code>DUAL</code>).</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon RDS User Guide.</i>
     * </p>
     */
    inline const Aws::String& GetNetworkType() const{ return m_networkType; }
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
    inline void SetNetworkType(const Aws::String& value) { m_networkTypeHasBeenSet = true; m_networkType = value; }
    inline void SetNetworkType(Aws::String&& value) { m_networkTypeHasBeenSet = true; m_networkType = std::move(value); }
    inline void SetNetworkType(const char* value) { m_networkTypeHasBeenSet = true; m_networkType.assign(value); }
    inline RestoreDBInstanceFromS3Request& WithNetworkType(const Aws::String& value) { SetNetworkType(value); return *this;}
    inline RestoreDBInstanceFromS3Request& WithNetworkType(Aws::String&& value) { SetNetworkType(std::move(value)); return *this;}
    inline RestoreDBInstanceFromS3Request& WithNetworkType(const char* value) { SetNetworkType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the storage throughput value for the DB instance.</p> <p>This
     * setting doesn't apply to RDS Custom or Amazon Aurora.</p>
     */
    inline int GetStorageThroughput() const{ return m_storageThroughput; }
    inline bool StorageThroughputHasBeenSet() const { return m_storageThroughputHasBeenSet; }
    inline void SetStorageThroughput(int value) { m_storageThroughputHasBeenSet = true; m_storageThroughput = value; }
    inline RestoreDBInstanceFromS3Request& WithStorageThroughput(int value) { SetStorageThroughput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to manage the master user password with Amazon Web Services
     * Secrets Manager.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon RDS
     * User Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>Can't manage the master
     * user password with Amazon Web Services Secrets Manager if
     * <code>MasterUserPassword</code> is specified.</p> </li> </ul>
     */
    inline bool GetManageMasterUserPassword() const{ return m_manageMasterUserPassword; }
    inline bool ManageMasterUserPasswordHasBeenSet() const { return m_manageMasterUserPasswordHasBeenSet; }
    inline void SetManageMasterUserPassword(bool value) { m_manageMasterUserPasswordHasBeenSet = true; m_manageMasterUserPassword = value; }
    inline RestoreDBInstanceFromS3Request& WithManageMasterUserPassword(bool value) { SetManageMasterUserPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS key identifier to encrypt a secret that is
     * automatically generated and managed in Amazon Web Services Secrets Manager.</p>
     * <p>This setting is valid only if the master user password is managed by RDS in
     * Amazon Web Services Secrets Manager for the DB instance.</p> <p>The Amazon Web
     * Services KMS key identifier is the key ARN, key ID, alias ARN, or alias name for
     * the KMS key. To use a KMS key in a different Amazon Web Services account,
     * specify the key ARN or alias ARN.</p> <p>If you don't specify
     * <code>MasterUserSecretKmsKeyId</code>, then the <code>aws/secretsmanager</code>
     * KMS key is used to encrypt the secret. If the secret is in a different Amazon
     * Web Services account, then you can't use the <code>aws/secretsmanager</code> KMS
     * key to encrypt the secret, and you must use a customer managed KMS key.</p>
     * <p>There is a default KMS key for your Amazon Web Services account. Your Amazon
     * Web Services account has a different default KMS key for each Amazon Web
     * Services Region.</p>
     */
    inline const Aws::String& GetMasterUserSecretKmsKeyId() const{ return m_masterUserSecretKmsKeyId; }
    inline bool MasterUserSecretKmsKeyIdHasBeenSet() const { return m_masterUserSecretKmsKeyIdHasBeenSet; }
    inline void SetMasterUserSecretKmsKeyId(const Aws::String& value) { m_masterUserSecretKmsKeyIdHasBeenSet = true; m_masterUserSecretKmsKeyId = value; }
    inline void SetMasterUserSecretKmsKeyId(Aws::String&& value) { m_masterUserSecretKmsKeyIdHasBeenSet = true; m_masterUserSecretKmsKeyId = std::move(value); }
    inline void SetMasterUserSecretKmsKeyId(const char* value) { m_masterUserSecretKmsKeyIdHasBeenSet = true; m_masterUserSecretKmsKeyId.assign(value); }
    inline RestoreDBInstanceFromS3Request& WithMasterUserSecretKmsKeyId(const Aws::String& value) { SetMasterUserSecretKmsKeyId(value); return *this;}
    inline RestoreDBInstanceFromS3Request& WithMasterUserSecretKmsKeyId(Aws::String&& value) { SetMasterUserSecretKmsKeyId(std::move(value)); return *this;}
    inline RestoreDBInstanceFromS3Request& WithMasterUserSecretKmsKeyId(const char* value) { SetMasterUserSecretKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable a dedicated log volume (DLV) for the DB
     * instance.</p>
     */
    inline bool GetDedicatedLogVolume() const{ return m_dedicatedLogVolume; }
    inline bool DedicatedLogVolumeHasBeenSet() const { return m_dedicatedLogVolumeHasBeenSet; }
    inline void SetDedicatedLogVolume(bool value) { m_dedicatedLogVolumeHasBeenSet = true; m_dedicatedLogVolume = value; }
    inline RestoreDBInstanceFromS3Request& WithDedicatedLogVolume(bool value) { SetDedicatedLogVolume(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CA certificate identifier to use for the DB instance's server
     * certificate.</p> <p>This setting doesn't apply to RDS Custom DB instances.</p>
     * <p>For more information, see <a
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
    inline RestoreDBInstanceFromS3Request& WithCACertificateIdentifier(const Aws::String& value) { SetCACertificateIdentifier(value); return *this;}
    inline RestoreDBInstanceFromS3Request& WithCACertificateIdentifier(Aws::String&& value) { SetCACertificateIdentifier(std::move(value)); return *this;}
    inline RestoreDBInstanceFromS3Request& WithCACertificateIdentifier(const char* value) { SetCACertificateIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The life cycle type for this DB instance.</p>  <p>By default, this
     * value is set to <code>open-source-rds-extended-support</code>, which enrolls
     * your DB instance into Amazon RDS Extended Support. At the end of standard
     * support, you can avoid charges for Extended Support by setting the value to
     * <code>open-source-rds-extended-support-disabled</code>. In this case, RDS
     * automatically upgrades your restored DB instance to a higher engine version, if
     * the major engine version is past its end of standard support date.</p> 
     * <p>You can use this setting to enroll your DB instance into Amazon RDS Extended
     * Support. With RDS Extended Support, you can run the selected major engine
     * version on your DB instance past the end of standard support for that engine
     * version. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/extended-support.html">Using
     * Amazon RDS Extended Support</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This
     * setting applies only to RDS for MySQL and RDS for PostgreSQL. For Amazon Aurora
     * DB instances, the life cycle type is managed by the DB cluster.</p> <p>Valid
     * Values: <code>open-source-rds-extended-support |
     * open-source-rds-extended-support-disabled</code> </p> <p>Default:
     * <code>open-source-rds-extended-support</code> </p>
     */
    inline const Aws::String& GetEngineLifecycleSupport() const{ return m_engineLifecycleSupport; }
    inline bool EngineLifecycleSupportHasBeenSet() const { return m_engineLifecycleSupportHasBeenSet; }
    inline void SetEngineLifecycleSupport(const Aws::String& value) { m_engineLifecycleSupportHasBeenSet = true; m_engineLifecycleSupport = value; }
    inline void SetEngineLifecycleSupport(Aws::String&& value) { m_engineLifecycleSupportHasBeenSet = true; m_engineLifecycleSupport = std::move(value); }
    inline void SetEngineLifecycleSupport(const char* value) { m_engineLifecycleSupportHasBeenSet = true; m_engineLifecycleSupport.assign(value); }
    inline RestoreDBInstanceFromS3Request& WithEngineLifecycleSupport(const Aws::String& value) { SetEngineLifecycleSupport(value); return *this;}
    inline RestoreDBInstanceFromS3Request& WithEngineLifecycleSupport(Aws::String&& value) { SetEngineLifecycleSupport(std::move(value)); return *this;}
    inline RestoreDBInstanceFromS3Request& WithEngineLifecycleSupport(const char* value) { SetEngineLifecycleSupport(value); return *this;}
    ///@}
  private:

    Aws::String m_dBName;
    bool m_dBNameHasBeenSet = false;

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet = false;

    int m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet = false;

    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_masterUsername;
    bool m_masterUsernameHasBeenSet = false;

    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet = false;

    Aws::Vector<Aws::String> m_dBSecurityGroups;
    bool m_dBSecurityGroupsHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    Aws::String m_dBParameterGroupName;
    bool m_dBParameterGroupNameHasBeenSet = false;

    int m_backupRetentionPeriod;
    bool m_backupRetentionPeriodHasBeenSet = false;

    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    bool m_multiAZ;
    bool m_multiAZHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet = false;

    Aws::String m_licenseModel;
    bool m_licenseModelHasBeenSet = false;

    int m_iops;
    bool m_iopsHasBeenSet = false;

    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet = false;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    bool m_storageEncrypted;
    bool m_storageEncryptedHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    bool m_copyTagsToSnapshot;
    bool m_copyTagsToSnapshotHasBeenSet = false;

    int m_monitoringInterval;
    bool m_monitoringIntervalHasBeenSet = false;

    Aws::String m_monitoringRoleArn;
    bool m_monitoringRoleArnHasBeenSet = false;

    bool m_enableIAMDatabaseAuthentication;
    bool m_enableIAMDatabaseAuthenticationHasBeenSet = false;

    Aws::String m_sourceEngine;
    bool m_sourceEngineHasBeenSet = false;

    Aws::String m_sourceEngineVersion;
    bool m_sourceEngineVersionHasBeenSet = false;

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;

    Aws::String m_s3Prefix;
    bool m_s3PrefixHasBeenSet = false;

    Aws::String m_s3IngestionRoleArn;
    bool m_s3IngestionRoleArnHasBeenSet = false;

    bool m_enablePerformanceInsights;
    bool m_enablePerformanceInsightsHasBeenSet = false;

    Aws::String m_performanceInsightsKMSKeyId;
    bool m_performanceInsightsKMSKeyIdHasBeenSet = false;

    int m_performanceInsightsRetentionPeriod;
    bool m_performanceInsightsRetentionPeriodHasBeenSet = false;

    Aws::Vector<Aws::String> m_enableCloudwatchLogsExports;
    bool m_enableCloudwatchLogsExportsHasBeenSet = false;

    Aws::Vector<ProcessorFeature> m_processorFeatures;
    bool m_processorFeaturesHasBeenSet = false;

    bool m_useDefaultProcessorFeatures;
    bool m_useDefaultProcessorFeaturesHasBeenSet = false;

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet = false;

    int m_maxAllocatedStorage;
    bool m_maxAllocatedStorageHasBeenSet = false;

    Aws::String m_networkType;
    bool m_networkTypeHasBeenSet = false;

    int m_storageThroughput;
    bool m_storageThroughputHasBeenSet = false;

    bool m_manageMasterUserPassword;
    bool m_manageMasterUserPasswordHasBeenSet = false;

    Aws::String m_masterUserSecretKmsKeyId;
    bool m_masterUserSecretKmsKeyIdHasBeenSet = false;

    bool m_dedicatedLogVolume;
    bool m_dedicatedLogVolumeHasBeenSet = false;

    Aws::String m_cACertificateIdentifier;
    bool m_cACertificateIdentifierHasBeenSet = false;

    Aws::String m_engineLifecycleSupport;
    bool m_engineLifecycleSupportHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
