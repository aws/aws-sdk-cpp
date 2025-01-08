/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/ScalingConfiguration.h>
#include <aws/rds/model/RdsCustomClusterConfiguration.h>
#include <aws/rds/model/DatabaseInsightsMode.h>
#include <aws/rds/model/ServerlessV2ScalingConfiguration.h>
#include <aws/rds/model/ClusterScalabilityType.h>
#include <aws/rds/model/Tag.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBClusterMessage">AWS
   * API Reference</a></p>
   */
  class CreateDBClusterRequest : public RDSRequest
  {
  public:
    AWS_RDS_API CreateDBClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDBCluster"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>A list of Availability Zones (AZs) where you specifically want to create DB
     * instances in the DB cluster.</p> <p>For information on AZs, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Concepts.RegionsAndAvailabilityZones.html#Concepts.RegionsAndAvailabilityZones.AvailabilityZones">Availability
     * Zones</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>Valid for Cluster Type:
     * Aurora DB clusters only</p> <p>Constraints:</p> <ul> <li> <p>Can't specify more
     * than three AZs.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }
    inline CreateDBClusterRequest& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}
    inline CreateDBClusterRequest& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}
    inline CreateDBClusterRequest& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }
    inline CreateDBClusterRequest& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }
    inline CreateDBClusterRequest& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of days for which automated backups are retained.</p> <p>Valid for
     * Cluster Type: Aurora DB clusters and Multi-AZ DB clusters</p> <p>Default:
     * <code>1</code> </p> <p>Constraints:</p> <ul> <li> <p>Must be a value from 1 to
     * 35.</p> </li> </ul>
     */
    inline int GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }
    inline CreateDBClusterRequest& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the character set (<code>CharacterSet</code>) to associate the DB
     * cluster with.</p> <p>Valid for Cluster Type: Aurora DB clusters only</p>
     */
    inline const Aws::String& GetCharacterSetName() const{ return m_characterSetName; }
    inline bool CharacterSetNameHasBeenSet() const { return m_characterSetNameHasBeenSet; }
    inline void SetCharacterSetName(const Aws::String& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = value; }
    inline void SetCharacterSetName(Aws::String&& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = std::move(value); }
    inline void SetCharacterSetName(const char* value) { m_characterSetNameHasBeenSet = true; m_characterSetName.assign(value); }
    inline CreateDBClusterRequest& WithCharacterSetName(const Aws::String& value) { SetCharacterSetName(value); return *this;}
    inline CreateDBClusterRequest& WithCharacterSetName(Aws::String&& value) { SetCharacterSetName(std::move(value)); return *this;}
    inline CreateDBClusterRequest& WithCharacterSetName(const char* value) { SetCharacterSetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for your database of up to 64 alphanumeric characters. A database
     * named <code>postgres</code> is always created. If this parameter is specified,
     * an additional database with this name is created.</p> <p>Valid for Cluster Type:
     * Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline CreateDBClusterRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline CreateDBClusterRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline CreateDBClusterRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for this DB cluster. This parameter is stored as a lowercase
     * string.</p> <p>Valid for Cluster Type: Aurora DB clusters and Multi-AZ DB
     * clusters</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 (for
     * Aurora DB clusters) or 1 to 52 (for Multi-AZ DB clusters) letters, numbers, or
     * hyphens.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Can't end with a hyphen or contain two consecutive hyphens.</p> </li> </ul>
     * <p>Example: <code>my-cluster1</code> </p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }
    inline CreateDBClusterRequest& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}
    inline CreateDBClusterRequest& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}
    inline CreateDBClusterRequest& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the DB cluster parameter group to associate with this DB cluster.
     * If you don't specify a value, then the default DB cluster parameter group for
     * the specified DB engine and version is used.</p> <p>Valid for Cluster Type:
     * Aurora DB clusters and Multi-AZ DB clusters</p> <p>Constraints:</p> <ul> <li>
     * <p>If supplied, must match the name of an existing DB cluster parameter
     * group.</p> </li> </ul>
     */
    inline const Aws::String& GetDBClusterParameterGroupName() const{ return m_dBClusterParameterGroupName; }
    inline bool DBClusterParameterGroupNameHasBeenSet() const { return m_dBClusterParameterGroupNameHasBeenSet; }
    inline void SetDBClusterParameterGroupName(const Aws::String& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = value; }
    inline void SetDBClusterParameterGroupName(Aws::String&& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = std::move(value); }
    inline void SetDBClusterParameterGroupName(const char* value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName.assign(value); }
    inline CreateDBClusterRequest& WithDBClusterParameterGroupName(const Aws::String& value) { SetDBClusterParameterGroupName(value); return *this;}
    inline CreateDBClusterRequest& WithDBClusterParameterGroupName(Aws::String&& value) { SetDBClusterParameterGroupName(std::move(value)); return *this;}
    inline CreateDBClusterRequest& WithDBClusterParameterGroupName(const char* value) { SetDBClusterParameterGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of EC2 VPC security groups to associate with this DB cluster.</p>
     * <p>Valid for Cluster Type: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }
    inline CreateDBClusterRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}
    inline CreateDBClusterRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}
    inline CreateDBClusterRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }
    inline CreateDBClusterRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }
    inline CreateDBClusterRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A DB subnet group to associate with this DB cluster.</p> <p>This setting is
     * required to create a Multi-AZ DB cluster.</p> <p>Valid for Cluster Type: Aurora
     * DB clusters and Multi-AZ DB clusters</p> <p>Constraints:</p> <ul> <li> <p>Must
     * match the name of an existing DB subnet group.</p> </li> </ul> <p>Example:
     * <code>mydbsubnetgroup</code> </p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }
    inline bool DBSubnetGroupNameHasBeenSet() const { return m_dBSubnetGroupNameHasBeenSet; }
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = std::move(value); }
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }
    inline CreateDBClusterRequest& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}
    inline CreateDBClusterRequest& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(std::move(value)); return *this;}
    inline CreateDBClusterRequest& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database engine to use for this DB cluster.</p> <p>Valid for Cluster
     * Type: Aurora DB clusters and Multi-AZ DB clusters</p> <p>Valid Values:</p> <ul>
     * <li> <p> <code>aurora-mysql</code> </p> </li> <li> <p>
     * <code>aurora-postgresql</code> </p> </li> <li> <p> <code>mysql</code> </p> </li>
     * <li> <p> <code>postgres</code> </p> </li> <li> <p> <code>neptune</code> - For
     * information about using Amazon Neptune, see the <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/intro.html">
     * <i>Amazon Neptune User Guide</i> </a>.</p> </li> </ul>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline CreateDBClusterRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline CreateDBClusterRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline CreateDBClusterRequest& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the database engine to use.</p> <p>To list all of the
     * available engine versions for Aurora MySQL version 2 (5.7-compatible) and
     * version 3 (MySQL 8.0-compatible), use the following command:</p> <p> <code>aws
     * rds describe-db-engine-versions --engine aurora-mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>You can supply either
     * <code>5.7</code> or <code>8.0</code> to use the default engine version for
     * Aurora MySQL version 2 or version 3, respectively.</p> <p>To list all of the
     * available engine versions for Aurora PostgreSQL, use the following command:</p>
     * <p> <code>aws rds describe-db-engine-versions --engine aurora-postgresql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for RDS for MySQL, use the following command:</p> <p> <code>aws
     * rds describe-db-engine-versions --engine mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for RDS for PostgreSQL, use the following command:</p> <p>
     * <code>aws rds describe-db-engine-versions --engine postgres --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>For information about a
     * specific engine, see the following topics:</p> <ul> <li> <p>Aurora MySQL - see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraMySQL.Updates.html">Database
     * engine updates for Amazon Aurora MySQL</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> </li> <li> <p>Aurora PostgreSQL - see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraPostgreSQL.Updates.20180305.html">Amazon
     * Aurora PostgreSQL releases and engine versions</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> </li> <li> <p>RDS for MySQL - see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_MySQL.html#MySQL.Concepts.VersionMgmt">Amazon
     * RDS for MySQL</a> in the <i>Amazon RDS User Guide</i>.</p> </li> <li> <p>RDS for
     * PostgreSQL - see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_PostgreSQL.html#PostgreSQL.Concepts">Amazon
     * RDS for PostgreSQL</a> in the <i>Amazon RDS User Guide</i>.</p> </li> </ul>
     * <p>Valid for Cluster Type: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline CreateDBClusterRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline CreateDBClusterRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline CreateDBClusterRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number on which the instances in the DB cluster accept
     * connections.</p> <p>Valid for Cluster Type: Aurora DB clusters and Multi-AZ DB
     * clusters</p> <p>Valid Values: <code>1150-65535</code> </p> <p>Default:</p> <ul>
     * <li> <p>RDS for MySQL and Aurora MySQL - <code>3306</code> </p> </li> <li>
     * <p>RDS for PostgreSQL and Aurora PostgreSQL - <code>5432</code> </p> </li> </ul>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline CreateDBClusterRequest& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the master user for the DB cluster.</p> <p>Valid for Cluster
     * Type: Aurora DB clusters and Multi-AZ DB clusters</p> <p>Constraints:</p> <ul>
     * <li> <p>Must be 1 to 16 letters or numbers.</p> </li> <li> <p>First character
     * must be a letter.</p> </li> <li> <p>Can't be a reserved word for the chosen
     * database engine.</p> </li> </ul>
     */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }
    inline void SetMasterUsername(Aws::String&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::move(value); }
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }
    inline CreateDBClusterRequest& WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}
    inline CreateDBClusterRequest& WithMasterUsername(Aws::String&& value) { SetMasterUsername(std::move(value)); return *this;}
    inline CreateDBClusterRequest& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password for the master database user.</p> <p>Valid for Cluster Type:
     * Aurora DB clusters and Multi-AZ DB clusters</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 8 to 41 characters.</p> </li> <li> <p>Can contain any
     * printable ASCII character except "/", """, or "@".</p> </li> <li> <p>Can't be
     * specified if <code>ManageMasterUserPassword</code> is turned on.</p> </li> </ul>
     */
    inline const Aws::String& GetMasterUserPassword() const{ return m_masterUserPassword; }
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }
    inline void SetMasterUserPassword(const Aws::String& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }
    inline void SetMasterUserPassword(Aws::String&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::move(value); }
    inline void SetMasterUserPassword(const char* value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword.assign(value); }
    inline CreateDBClusterRequest& WithMasterUserPassword(const Aws::String& value) { SetMasterUserPassword(value); return *this;}
    inline CreateDBClusterRequest& WithMasterUserPassword(Aws::String&& value) { SetMasterUserPassword(std::move(value)); return *this;}
    inline CreateDBClusterRequest& WithMasterUserPassword(const char* value) { SetMasterUserPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The option group to associate the DB cluster with.</p> <p>DB clusters are
     * associated with a default option group that can't be modified.</p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::move(value); }
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }
    inline CreateDBClusterRequest& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}
    inline CreateDBClusterRequest& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(std::move(value)); return *this;}
    inline CreateDBClusterRequest& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter.</p>
     * <p>Valid for Cluster Type: Aurora DB clusters and Multi-AZ DB clusters</p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region. To view the time blocks available, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Aurora.Managing.Backups.html#Aurora.Managing.Backups.BackupWindow">
     * Backup window</a> in the <i>Amazon Aurora User Guide</i>.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal Coordinated
     * Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline const Aws::String& GetPreferredBackupWindow() const{ return m_preferredBackupWindow; }
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }
    inline void SetPreferredBackupWindow(const Aws::String& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }
    inline void SetPreferredBackupWindow(Aws::String&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::move(value); }
    inline void SetPreferredBackupWindow(const char* value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow.assign(value); }
    inline CreateDBClusterRequest& WithPreferredBackupWindow(const Aws::String& value) { SetPreferredBackupWindow(value); return *this;}
    inline CreateDBClusterRequest& WithPreferredBackupWindow(Aws::String&& value) { SetPreferredBackupWindow(std::move(value)); return *this;}
    inline CreateDBClusterRequest& WithPreferredBackupWindow(const char* value) { SetPreferredBackupWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The weekly time range during which system maintenance can occur.</p> <p>Valid
     * for Cluster Type: Aurora DB clusters and Multi-AZ DB clusters</p> <p>The default
     * is a 30-minute window selected at random from an 8-hour block of time for each
     * Amazon Web Services Region, occurring on a random day of the week. To see the
     * time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide</i>.</p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * format <code>ddd:hh24:mi-ddd:hh24:mi</code>.</p> </li> <li> <p>Days must be one
     * of <code>Mon | Tue | Wed | Thu | Fri | Sat | Sun</code>.</p> </li> <li> <p>Must
     * be in Universal Coordinated Time (UTC).</p> </li> <li> <p>Must be at least 30
     * minutes.</p> </li> </ul>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }
    inline CreateDBClusterRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}
    inline CreateDBClusterRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}
    inline CreateDBClusterRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the source DB instance or DB cluster if
     * this DB cluster is created as a read replica.</p> <p>Valid for Cluster Type:
     * Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline const Aws::String& GetReplicationSourceIdentifier() const{ return m_replicationSourceIdentifier; }
    inline bool ReplicationSourceIdentifierHasBeenSet() const { return m_replicationSourceIdentifierHasBeenSet; }
    inline void SetReplicationSourceIdentifier(const Aws::String& value) { m_replicationSourceIdentifierHasBeenSet = true; m_replicationSourceIdentifier = value; }
    inline void SetReplicationSourceIdentifier(Aws::String&& value) { m_replicationSourceIdentifierHasBeenSet = true; m_replicationSourceIdentifier = std::move(value); }
    inline void SetReplicationSourceIdentifier(const char* value) { m_replicationSourceIdentifierHasBeenSet = true; m_replicationSourceIdentifier.assign(value); }
    inline CreateDBClusterRequest& WithReplicationSourceIdentifier(const Aws::String& value) { SetReplicationSourceIdentifier(value); return *this;}
    inline CreateDBClusterRequest& WithReplicationSourceIdentifier(Aws::String&& value) { SetReplicationSourceIdentifier(std::move(value)); return *this;}
    inline CreateDBClusterRequest& WithReplicationSourceIdentifier(const char* value) { SetReplicationSourceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to assign to the DB cluster.</p> <p>Valid for Cluster Type: Aurora DB
     * clusters and Multi-AZ DB clusters</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateDBClusterRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateDBClusterRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateDBClusterRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateDBClusterRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether the DB cluster is encrypted.</p> <p>Valid for Cluster Type:
     * Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline bool GetStorageEncrypted() const{ return m_storageEncrypted; }
    inline bool StorageEncryptedHasBeenSet() const { return m_storageEncryptedHasBeenSet; }
    inline void SetStorageEncrypted(bool value) { m_storageEncryptedHasBeenSet = true; m_storageEncrypted = value; }
    inline CreateDBClusterRequest& WithStorageEncrypted(bool value) { SetStorageEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS key identifier for an encrypted DB cluster.</p>
     * <p>The Amazon Web Services KMS key identifier is the key ARN, key ID, alias ARN,
     * or alias name for the KMS key. To use a KMS key in a different Amazon Web
     * Services account, specify the key ARN or alias ARN.</p> <p>When a KMS key isn't
     * specified in <code>KmsKeyId</code>:</p> <ul> <li> <p>If
     * <code>ReplicationSourceIdentifier</code> identifies an encrypted source, then
     * Amazon RDS uses the KMS key used to encrypt the source. Otherwise, Amazon RDS
     * uses your default KMS key.</p> </li> <li> <p>If the
     * <code>StorageEncrypted</code> parameter is enabled and
     * <code>ReplicationSourceIdentifier</code> isn't specified, then Amazon RDS uses
     * your default KMS key.</p> </li> </ul> <p>There is a default KMS key for your
     * Amazon Web Services account. Your Amazon Web Services account has a different
     * default KMS key for each Amazon Web Services Region.</p> <p>If you create a read
     * replica of an encrypted DB cluster in another Amazon Web Services Region, make
     * sure to set <code>KmsKeyId</code> to a KMS key identifier that is valid in the
     * destination Amazon Web Services Region. This KMS key is used to encrypt the read
     * replica in that Amazon Web Services Region.</p> <p>Valid for Cluster Type:
     * Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline CreateDBClusterRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline CreateDBClusterRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline CreateDBClusterRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When you are replicating a DB cluster from one Amazon Web Services GovCloud
     * (US) Region to another, an URL that contains a Signature Version 4 signed
     * request for the <code>CreateDBCluster</code> operation to be called in the
     * source Amazon Web Services Region where the DB cluster is replicated from.
     * Specify <code>PreSignedUrl</code> only when you are performing cross-Region
     * replication from an encrypted DB cluster.</p> <p>The presigned URL must be a
     * valid request for the <code>CreateDBCluster</code> API operation that can run in
     * the source Amazon Web Services Region that contains the encrypted DB cluster to
     * copy.</p> <p>The presigned URL request must contain the following parameter
     * values:</p> <ul> <li> <p> <code>KmsKeyId</code> - The KMS key identifier for the
     * KMS key to use to encrypt the copy of the DB cluster in the destination Amazon
     * Web Services Region. This should refer to the same KMS key for both the
     * <code>CreateDBCluster</code> operation that is called in the destination Amazon
     * Web Services Region, and the operation contained in the presigned URL.</p> </li>
     * <li> <p> <code>DestinationRegion</code> - The name of the Amazon Web Services
     * Region that Aurora read replica will be created in.</p> </li> <li> <p>
     * <code>ReplicationSourceIdentifier</code> - The DB cluster identifier for the
     * encrypted DB cluster to be copied. This identifier must be in the Amazon
     * Resource Name (ARN) format for the source Amazon Web Services Region. For
     * example, if you are copying an encrypted DB cluster from the us-west-2 Amazon
     * Web Services Region, then your <code>ReplicationSourceIdentifier</code> would
     * look like Example:
     * <code>arn:aws:rds:us-west-2:123456789012:cluster:aurora-cluster1</code>.</p>
     * </li> </ul> <p>To learn how to generate a Signature Version 4 signed request,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">
     * Authenticating Requests: Using Query Parameters (Amazon Web Services Signature
     * Version 4)</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">
     * Signature Version 4 Signing Process</a>.</p>  <p>If you are using an
     * Amazon Web Services SDK tool or the CLI, you can specify
     * <code>SourceRegion</code> (or <code>--source-region</code> for the CLI) instead
     * of specifying <code>PreSignedUrl</code> manually. Specifying
     * <code>SourceRegion</code> autogenerates a presigned URL that is a valid request
     * for the operation that can run in the source Amazon Web Services Region.</p>
     *  <p>Valid for Cluster Type: Aurora DB clusters only</p>
     */
    inline const Aws::String& GetPreSignedUrl() const{ return m_preSignedUrl; }
    inline bool PreSignedUrlHasBeenSet() const { return m_preSignedUrlHasBeenSet; }
    inline void SetPreSignedUrl(const Aws::String& value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl = value; }
    inline void SetPreSignedUrl(Aws::String&& value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl = std::move(value); }
    inline void SetPreSignedUrl(const char* value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl.assign(value); }
    inline CreateDBClusterRequest& WithPreSignedUrl(const Aws::String& value) { SetPreSignedUrl(value); return *this;}
    inline CreateDBClusterRequest& WithPreSignedUrl(Aws::String&& value) { SetPreSignedUrl(std::move(value)); return *this;}
    inline CreateDBClusterRequest& WithPreSignedUrl(const char* value) { SetPreSignedUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable mapping of Amazon Web Services Identity and
     * Access Management (IAM) accounts to database accounts. By default, mapping isn't
     * enabled.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/UsingWithRDS.IAMDBAuth.html">
     * IAM Database Authentication</a> in the <i>Amazon Aurora User Guide</i> or <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/UsingWithRDS.IAMDBAuth.html">IAM
     * database authentication for MariaDB, MySQL, and PostgreSQL</a> in the <i>Amazon
     * RDS User Guide</i>.</p> <p>Valid for Cluster Type: Aurora DB clusters and
     * Multi-AZ DB clusters</p>
     */
    inline bool GetEnableIAMDatabaseAuthentication() const{ return m_enableIAMDatabaseAuthentication; }
    inline bool EnableIAMDatabaseAuthenticationHasBeenSet() const { return m_enableIAMDatabaseAuthenticationHasBeenSet; }
    inline void SetEnableIAMDatabaseAuthentication(bool value) { m_enableIAMDatabaseAuthenticationHasBeenSet = true; m_enableIAMDatabaseAuthentication = value; }
    inline CreateDBClusterRequest& WithEnableIAMDatabaseAuthentication(bool value) { SetEnableIAMDatabaseAuthentication(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target backtrack window, in seconds. To disable backtracking, set this
     * value to <code>0</code>.</p> <p>Valid for Cluster Type: Aurora MySQL DB clusters
     * only</p> <p>Default: <code>0</code> </p> <p>Constraints:</p> <ul> <li> <p>If
     * specified, this value must be set to a number from 0 to 259,200 (72 hours).</p>
     * </li> </ul>
     */
    inline long long GetBacktrackWindow() const{ return m_backtrackWindow; }
    inline bool BacktrackWindowHasBeenSet() const { return m_backtrackWindowHasBeenSet; }
    inline void SetBacktrackWindow(long long value) { m_backtrackWindowHasBeenSet = true; m_backtrackWindow = value; }
    inline CreateDBClusterRequest& WithBacktrackWindow(long long value) { SetBacktrackWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of log types that need to be enabled for exporting to CloudWatch
     * Logs.</p> <p>Valid for Cluster Type: Aurora DB clusters and Multi-AZ DB
     * clusters</p> <p>The following values are valid for each DB engine:</p> <ul> <li>
     * <p>Aurora MySQL - <code>audit | error | general | slowquery</code> </p> </li>
     * <li> <p>Aurora PostgreSQL - <code>postgresql</code> </p> </li> <li> <p>RDS for
     * MySQL - <code>error | general | slowquery</code> </p> </li> <li> <p>RDS for
     * PostgreSQL - <code>postgresql | upgrade</code> </p> </li> </ul> <p>For more
     * information about exporting CloudWatch Logs for Amazon RDS, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>For more information about exporting CloudWatch Logs for
     * Amazon Aurora, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnableCloudwatchLogsExports() const{ return m_enableCloudwatchLogsExports; }
    inline bool EnableCloudwatchLogsExportsHasBeenSet() const { return m_enableCloudwatchLogsExportsHasBeenSet; }
    inline void SetEnableCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = value; }
    inline void SetEnableCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = std::move(value); }
    inline CreateDBClusterRequest& WithEnableCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { SetEnableCloudwatchLogsExports(value); return *this;}
    inline CreateDBClusterRequest& WithEnableCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { SetEnableCloudwatchLogsExports(std::move(value)); return *this;}
    inline CreateDBClusterRequest& AddEnableCloudwatchLogsExports(const Aws::String& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }
    inline CreateDBClusterRequest& AddEnableCloudwatchLogsExports(Aws::String&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(std::move(value)); return *this; }
    inline CreateDBClusterRequest& AddEnableCloudwatchLogsExports(const char* value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The DB engine mode of the DB cluster, either <code>provisioned</code> or
     * <code>serverless</code>.</p> <p>The <code>serverless</code> engine mode only
     * applies for Aurora Serverless v1 DB clusters. Aurora Serverless v2 DB clusters
     * use the <code>provisioned</code> engine mode.</p> <p>For information about
     * limitations and requirements for Serverless DB clusters, see the following
     * sections in the <i>Amazon Aurora User Guide</i>:</p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless.html#aurora-serverless.limitations">Limitations
     * of Aurora Serverless v1</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless-v2.requirements.html">Requirements
     * for Aurora Serverless v2</a> </p> </li> </ul> <p>Valid for Cluster Type: Aurora
     * DB clusters only</p>
     */
    inline const Aws::String& GetEngineMode() const{ return m_engineMode; }
    inline bool EngineModeHasBeenSet() const { return m_engineModeHasBeenSet; }
    inline void SetEngineMode(const Aws::String& value) { m_engineModeHasBeenSet = true; m_engineMode = value; }
    inline void SetEngineMode(Aws::String&& value) { m_engineModeHasBeenSet = true; m_engineMode = std::move(value); }
    inline void SetEngineMode(const char* value) { m_engineModeHasBeenSet = true; m_engineMode.assign(value); }
    inline CreateDBClusterRequest& WithEngineMode(const Aws::String& value) { SetEngineMode(value); return *this;}
    inline CreateDBClusterRequest& WithEngineMode(Aws::String&& value) { SetEngineMode(std::move(value)); return *this;}
    inline CreateDBClusterRequest& WithEngineMode(const char* value) { SetEngineMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For DB clusters in <code>serverless</code> DB engine mode, the scaling
     * properties of the DB cluster.</p> <p>Valid for Cluster Type: Aurora DB clusters
     * only</p>
     */
    inline const ScalingConfiguration& GetScalingConfiguration() const{ return m_scalingConfiguration; }
    inline bool ScalingConfigurationHasBeenSet() const { return m_scalingConfigurationHasBeenSet; }
    inline void SetScalingConfiguration(const ScalingConfiguration& value) { m_scalingConfigurationHasBeenSet = true; m_scalingConfiguration = value; }
    inline void SetScalingConfiguration(ScalingConfiguration&& value) { m_scalingConfigurationHasBeenSet = true; m_scalingConfiguration = std::move(value); }
    inline CreateDBClusterRequest& WithScalingConfiguration(const ScalingConfiguration& value) { SetScalingConfiguration(value); return *this;}
    inline CreateDBClusterRequest& WithScalingConfiguration(ScalingConfiguration&& value) { SetScalingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline const RdsCustomClusterConfiguration& GetRdsCustomClusterConfiguration() const{ return m_rdsCustomClusterConfiguration; }
    inline bool RdsCustomClusterConfigurationHasBeenSet() const { return m_rdsCustomClusterConfigurationHasBeenSet; }
    inline void SetRdsCustomClusterConfiguration(const RdsCustomClusterConfiguration& value) { m_rdsCustomClusterConfigurationHasBeenSet = true; m_rdsCustomClusterConfiguration = value; }
    inline void SetRdsCustomClusterConfiguration(RdsCustomClusterConfiguration&& value) { m_rdsCustomClusterConfigurationHasBeenSet = true; m_rdsCustomClusterConfiguration = std::move(value); }
    inline CreateDBClusterRequest& WithRdsCustomClusterConfiguration(const RdsCustomClusterConfiguration& value) { SetRdsCustomClusterConfiguration(value); return *this;}
    inline CreateDBClusterRequest& WithRdsCustomClusterConfiguration(RdsCustomClusterConfiguration&& value) { SetRdsCustomClusterConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the DB cluster has deletion protection enabled. The
     * database can't be deleted when deletion protection is enabled. By default,
     * deletion protection isn't enabled.</p> <p>Valid for Cluster Type: Aurora DB
     * clusters and Multi-AZ DB clusters</p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }
    inline CreateDBClusterRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The global cluster ID of an Aurora cluster that becomes the primary cluster
     * in the new global database cluster.</p> <p>Valid for Cluster Type: Aurora DB
     * clusters only</p>
     */
    inline const Aws::String& GetGlobalClusterIdentifier() const{ return m_globalClusterIdentifier; }
    inline bool GlobalClusterIdentifierHasBeenSet() const { return m_globalClusterIdentifierHasBeenSet; }
    inline void SetGlobalClusterIdentifier(const Aws::String& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = value; }
    inline void SetGlobalClusterIdentifier(Aws::String&& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = std::move(value); }
    inline void SetGlobalClusterIdentifier(const char* value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier.assign(value); }
    inline CreateDBClusterRequest& WithGlobalClusterIdentifier(const Aws::String& value) { SetGlobalClusterIdentifier(value); return *this;}
    inline CreateDBClusterRequest& WithGlobalClusterIdentifier(Aws::String&& value) { SetGlobalClusterIdentifier(std::move(value)); return *this;}
    inline CreateDBClusterRequest& WithGlobalClusterIdentifier(const char* value) { SetGlobalClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable the HTTP endpoint for the DB cluster. By default,
     * the HTTP endpoint isn't enabled.</p> <p>When enabled, the HTTP endpoint provides
     * a connectionless web service API (RDS Data API) for running SQL queries on the
     * DB cluster. You can also query your database from inside the RDS console with
     * the RDS query editor.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/data-api.html">Using
     * RDS Data API</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>Valid for
     * Cluster Type: Aurora DB clusters only</p>
     */
    inline bool GetEnableHttpEndpoint() const{ return m_enableHttpEndpoint; }
    inline bool EnableHttpEndpointHasBeenSet() const { return m_enableHttpEndpointHasBeenSet; }
    inline void SetEnableHttpEndpoint(bool value) { m_enableHttpEndpointHasBeenSet = true; m_enableHttpEndpoint = value; }
    inline CreateDBClusterRequest& WithEnableHttpEndpoint(bool value) { SetEnableHttpEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to copy all tags from the DB cluster to snapshots of the DB
     * cluster. The default is not to copy them.</p> <p>Valid for Cluster Type: Aurora
     * DB clusters and Multi-AZ DB clusters</p>
     */
    inline bool GetCopyTagsToSnapshot() const{ return m_copyTagsToSnapshot; }
    inline bool CopyTagsToSnapshotHasBeenSet() const { return m_copyTagsToSnapshotHasBeenSet; }
    inline void SetCopyTagsToSnapshot(bool value) { m_copyTagsToSnapshotHasBeenSet = true; m_copyTagsToSnapshot = value; }
    inline CreateDBClusterRequest& WithCopyTagsToSnapshot(bool value) { SetCopyTagsToSnapshot(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Active Directory directory ID to create the DB cluster in.</p> <p>For
     * Amazon Aurora DB clusters, Amazon RDS can use Kerberos authentication to
     * authenticate users that connect to the DB cluster.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/kerberos-authentication.html">Kerberos
     * authentication</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>Valid for
     * Cluster Type: Aurora DB clusters only</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }
    inline CreateDBClusterRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline CreateDBClusterRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline CreateDBClusterRequest& WithDomain(const char* value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the IAM role to use when making API calls to the Directory
     * Service.</p> <p>Valid for Cluster Type: Aurora DB clusters only</p>
     */
    inline const Aws::String& GetDomainIAMRoleName() const{ return m_domainIAMRoleName; }
    inline bool DomainIAMRoleNameHasBeenSet() const { return m_domainIAMRoleNameHasBeenSet; }
    inline void SetDomainIAMRoleName(const Aws::String& value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName = value; }
    inline void SetDomainIAMRoleName(Aws::String&& value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName = std::move(value); }
    inline void SetDomainIAMRoleName(const char* value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName.assign(value); }
    inline CreateDBClusterRequest& WithDomainIAMRoleName(const Aws::String& value) { SetDomainIAMRoleName(value); return *this;}
    inline CreateDBClusterRequest& WithDomainIAMRoleName(Aws::String&& value) { SetDomainIAMRoleName(std::move(value)); return *this;}
    inline CreateDBClusterRequest& WithDomainIAMRoleName(const char* value) { SetDomainIAMRoleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable this DB cluster to forward write operations to
     * the primary cluster of a global cluster (Aurora global database). By default,
     * write operations are not allowed on Aurora DB clusters that are secondary
     * clusters in an Aurora global database.</p> <p>You can set this value only on
     * Aurora DB clusters that are members of an Aurora global database. With this
     * parameter enabled, a secondary cluster can forward writes to the current primary
     * cluster, and the resulting changes are replicated back to this cluster. For the
     * primary DB cluster of an Aurora global database, this value is used immediately
     * if the primary is demoted by a global cluster API operation, but it does nothing
     * until then.</p> <p>Valid for Cluster Type: Aurora DB clusters only</p>
     */
    inline bool GetEnableGlobalWriteForwarding() const{ return m_enableGlobalWriteForwarding; }
    inline bool EnableGlobalWriteForwardingHasBeenSet() const { return m_enableGlobalWriteForwardingHasBeenSet; }
    inline void SetEnableGlobalWriteForwarding(bool value) { m_enableGlobalWriteForwardingHasBeenSet = true; m_enableGlobalWriteForwarding = value; }
    inline CreateDBClusterRequest& WithEnableGlobalWriteForwarding(bool value) { SetEnableGlobalWriteForwarding(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compute and memory capacity of each DB instance in the Multi-AZ DB
     * cluster, for example <code>db.m6gd.xlarge</code>. Not all DB instance classes
     * are available in all Amazon Web Services Regions, or for all database
     * engines.</p> <p>For the full list of DB instance classes and availability for
     * your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * instance class</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This setting is
     * required to create a Multi-AZ DB cluster.</p> <p>Valid for Cluster Type:
     * Multi-AZ DB clusters only</p>
     */
    inline const Aws::String& GetDBClusterInstanceClass() const{ return m_dBClusterInstanceClass; }
    inline bool DBClusterInstanceClassHasBeenSet() const { return m_dBClusterInstanceClassHasBeenSet; }
    inline void SetDBClusterInstanceClass(const Aws::String& value) { m_dBClusterInstanceClassHasBeenSet = true; m_dBClusterInstanceClass = value; }
    inline void SetDBClusterInstanceClass(Aws::String&& value) { m_dBClusterInstanceClassHasBeenSet = true; m_dBClusterInstanceClass = std::move(value); }
    inline void SetDBClusterInstanceClass(const char* value) { m_dBClusterInstanceClassHasBeenSet = true; m_dBClusterInstanceClass.assign(value); }
    inline CreateDBClusterRequest& WithDBClusterInstanceClass(const Aws::String& value) { SetDBClusterInstanceClass(value); return *this;}
    inline CreateDBClusterRequest& WithDBClusterInstanceClass(Aws::String&& value) { SetDBClusterInstanceClass(std::move(value)); return *this;}
    inline CreateDBClusterRequest& WithDBClusterInstanceClass(const char* value) { SetDBClusterInstanceClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of storage in gibibytes (GiB) to allocate to each DB instance in
     * the Multi-AZ DB cluster.</p> <p>Valid for Cluster Type: Multi-AZ DB clusters
     * only</p> <p>This setting is required to create a Multi-AZ DB cluster.</p>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }
    inline CreateDBClusterRequest& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage type to associate with the DB cluster.</p> <p>For information on
     * storage types for Aurora DB clusters, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Aurora.Overview.StorageReliability.html#aurora-storage-type">Storage
     * configurations for Amazon Aurora DB clusters</a>. For information on storage
     * types for Multi-AZ DB clusters, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/create-multi-az-db-cluster.html#create-multi-az-db-cluster-settings">Settings
     * for creating Multi-AZ DB clusters</a>.</p> <p>This setting is required to create
     * a Multi-AZ DB cluster.</p> <p>When specified for a Multi-AZ DB cluster, a value
     * for the <code>Iops</code> parameter is required.</p> <p>Valid for Cluster Type:
     * Aurora DB clusters and Multi-AZ DB clusters</p> <p>Valid Values:</p> <ul> <li>
     * <p>Aurora DB clusters - <code>aurora | aurora-iopt1</code> </p> </li> <li>
     * <p>Multi-AZ DB clusters - <code>io1 | io2 | gp3</code> </p> </li> </ul>
     * <p>Default:</p> <ul> <li> <p>Aurora DB clusters - <code>aurora</code> </p> </li>
     * <li> <p>Multi-AZ DB clusters - <code>io1</code> </p> </li> </ul>  <p>When
     * you create an Aurora DB cluster with the storage type set to
     * <code>aurora-iopt1</code>, the storage type is returned in the response. The
     * storage type isn't returned when you set it to <code>aurora</code>.</p> 
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }
    inline CreateDBClusterRequest& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}
    inline CreateDBClusterRequest& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}
    inline CreateDBClusterRequest& WithStorageType(const char* value) { SetStorageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to be
     * initially allocated for each DB instance in the Multi-AZ DB cluster.</p> <p>For
     * information about valid IOPS values, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Storage.html#USER_PIOPS">Provisioned
     * IOPS storage</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This setting is
     * required to create a Multi-AZ DB cluster.</p> <p>Valid for Cluster Type:
     * Multi-AZ DB clusters only</p> <p>Constraints:</p> <ul> <li> <p>Must be a
     * multiple between .5 and 50 of the storage amount for the DB cluster.</p> </li>
     * </ul>
     */
    inline int GetIops() const{ return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline CreateDBClusterRequest& WithIops(int value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the DB cluster is publicly accessible.</p> <p>When the DB
     * cluster is publicly accessible and you connect from outside of the DB cluster's
     * virtual private cloud (VPC), its Domain Name System (DNS) endpoint resolves to
     * the public IP address. When you connect from within the same VPC as the DB
     * cluster, the endpoint resolves to the private IP address. Access to the DB
     * cluster is ultimately controlled by the security group it uses. That public
     * access isn't permitted if the security group assigned to the DB cluster doesn't
     * permit it.</p> <p>When the DB cluster isn't publicly accessible, it is an
     * internal DB cluster with a DNS name that resolves to a private IP address.</p>
     * <p>Valid for Cluster Type: Multi-AZ DB clusters only</p> <p>Default: The default
     * behavior varies depending on whether <code>DBSubnetGroupName</code> is
     * specified.</p> <p>If <code>DBSubnetGroupName</code> isn't specified, and
     * <code>PubliclyAccessible</code> isn't specified, the following applies:</p> <ul>
     * <li> <p>If the default VPC in the target Region doesn’t have an internet gateway
     * attached to it, the DB cluster is private.</p> </li> <li> <p>If the default VPC
     * in the target Region has an internet gateway attached to it, the DB cluster is
     * public.</p> </li> </ul> <p>If <code>DBSubnetGroupName</code> is specified, and
     * <code>PubliclyAccessible</code> isn't specified, the following applies:</p> <ul>
     * <li> <p>If the subnets are part of a VPC that doesn’t have an internet gateway
     * attached to it, the DB cluster is private.</p> </li> <li> <p>If the subnets are
     * part of a VPC that has an internet gateway attached to it, the DB cluster is
     * public.</p> </li> </ul>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline CreateDBClusterRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether minor engine upgrades are applied automatically to the DB
     * cluster during the maintenance window. By default, minor engine upgrades are
     * applied automatically.</p> <p>Valid for Cluster Type: Aurora DB clusters and
     * Multi-AZ DB cluster</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }
    inline CreateDBClusterRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the DB cluster. To turn off collecting Enhanced Monitoring
     * metrics, specify <code>0</code>.</p> <p>If <code>MonitoringRoleArn</code> is
     * specified, also set <code>MonitoringInterval</code> to a value other than
     * <code>0</code>.</p> <p>Valid for Cluster Type: Aurora DB clusters and Multi-AZ
     * DB clusters</p> <p>Valid Values: <code>0 | 1 | 5 | 10 | 15 | 30 | 60</code> </p>
     * <p>Default: <code>0</code> </p>
     */
    inline int GetMonitoringInterval() const{ return m_monitoringInterval; }
    inline bool MonitoringIntervalHasBeenSet() const { return m_monitoringIntervalHasBeenSet; }
    inline void SetMonitoringInterval(int value) { m_monitoringIntervalHasBeenSet = true; m_monitoringInterval = value; }
    inline CreateDBClusterRequest& WithMonitoringInterval(int value) { SetMonitoringInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that permits RDS to send
     * Enhanced Monitoring metrics to Amazon CloudWatch Logs. An example is
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.OS.html#USER_Monitoring.OS.Enabling">Setting
     * up and enabling Enhanced Monitoring</a> in the <i>Amazon RDS User Guide</i>.</p>
     * <p>If <code>MonitoringInterval</code> is set to a value other than
     * <code>0</code>, supply a <code>MonitoringRoleArn</code> value.</p> <p>Valid for
     * Cluster Type: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline const Aws::String& GetMonitoringRoleArn() const{ return m_monitoringRoleArn; }
    inline bool MonitoringRoleArnHasBeenSet() const { return m_monitoringRoleArnHasBeenSet; }
    inline void SetMonitoringRoleArn(const Aws::String& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = value; }
    inline void SetMonitoringRoleArn(Aws::String&& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = std::move(value); }
    inline void SetMonitoringRoleArn(const char* value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn.assign(value); }
    inline CreateDBClusterRequest& WithMonitoringRoleArn(const Aws::String& value) { SetMonitoringRoleArn(value); return *this;}
    inline CreateDBClusterRequest& WithMonitoringRoleArn(Aws::String&& value) { SetMonitoringRoleArn(std::move(value)); return *this;}
    inline CreateDBClusterRequest& WithMonitoringRoleArn(const char* value) { SetMonitoringRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mode of Database Insights to enable for the DB cluster.</p> <p>If you set
     * this value to <code>advanced</code>, you must also set the
     * <code>PerformanceInsightsEnabled</code> parameter to <code>true</code> and the
     * <code>PerformanceInsightsRetentionPeriod</code> parameter to 465.</p> <p>Valid
     * for Cluster Type: Aurora DB clusters only</p>
     */
    inline const DatabaseInsightsMode& GetDatabaseInsightsMode() const{ return m_databaseInsightsMode; }
    inline bool DatabaseInsightsModeHasBeenSet() const { return m_databaseInsightsModeHasBeenSet; }
    inline void SetDatabaseInsightsMode(const DatabaseInsightsMode& value) { m_databaseInsightsModeHasBeenSet = true; m_databaseInsightsMode = value; }
    inline void SetDatabaseInsightsMode(DatabaseInsightsMode&& value) { m_databaseInsightsModeHasBeenSet = true; m_databaseInsightsMode = std::move(value); }
    inline CreateDBClusterRequest& WithDatabaseInsightsMode(const DatabaseInsightsMode& value) { SetDatabaseInsightsMode(value); return *this;}
    inline CreateDBClusterRequest& WithDatabaseInsightsMode(DatabaseInsightsMode&& value) { SetDatabaseInsightsMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to turn on Performance Insights for the DB cluster.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights.html">
     * Using Amazon Performance Insights</a> in the <i>Amazon RDS User Guide</i>.</p>
     * <p>Valid for Cluster Type: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline bool GetEnablePerformanceInsights() const{ return m_enablePerformanceInsights; }
    inline bool EnablePerformanceInsightsHasBeenSet() const { return m_enablePerformanceInsightsHasBeenSet; }
    inline void SetEnablePerformanceInsights(bool value) { m_enablePerformanceInsightsHasBeenSet = true; m_enablePerformanceInsights = value; }
    inline CreateDBClusterRequest& WithEnablePerformanceInsights(bool value) { SetEnablePerformanceInsights(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of Performance
     * Insights data.</p> <p>The Amazon Web Services KMS key identifier is the key ARN,
     * key ID, alias ARN, or alias name for the KMS key.</p> <p>If you don't specify a
     * value for <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your
     * default KMS key. There is a default KMS key for your Amazon Web Services
     * account. Your Amazon Web Services account has a different default KMS key for
     * each Amazon Web Services Region.</p> <p>Valid for Cluster Type: Aurora DB
     * clusters and Multi-AZ DB clusters</p>
     */
    inline const Aws::String& GetPerformanceInsightsKMSKeyId() const{ return m_performanceInsightsKMSKeyId; }
    inline bool PerformanceInsightsKMSKeyIdHasBeenSet() const { return m_performanceInsightsKMSKeyIdHasBeenSet; }
    inline void SetPerformanceInsightsKMSKeyId(const Aws::String& value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId = value; }
    inline void SetPerformanceInsightsKMSKeyId(Aws::String&& value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId = std::move(value); }
    inline void SetPerformanceInsightsKMSKeyId(const char* value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId.assign(value); }
    inline CreateDBClusterRequest& WithPerformanceInsightsKMSKeyId(const Aws::String& value) { SetPerformanceInsightsKMSKeyId(value); return *this;}
    inline CreateDBClusterRequest& WithPerformanceInsightsKMSKeyId(Aws::String&& value) { SetPerformanceInsightsKMSKeyId(std::move(value)); return *this;}
    inline CreateDBClusterRequest& WithPerformanceInsightsKMSKeyId(const char* value) { SetPerformanceInsightsKMSKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days to retain Performance Insights data.</p> <p>Valid for
     * Cluster Type: Aurora DB clusters and Multi-AZ DB clusters</p> <p>Valid
     * Values:</p> <ul> <li> <p> <code>7</code> </p> </li> <li> <p> <i>month</i> * 31,
     * where <i>month</i> is a number of months from 1-23. Examples: <code>93</code> (3
     * months * 31), <code>341</code> (11 months * 31), <code>589</code> (19 months *
     * 31)</p> </li> <li> <p> <code>731</code> </p> </li> </ul> <p>Default:
     * <code>7</code> days</p> <p>If you specify a retention period that isn't valid,
     * such as <code>94</code>, Amazon RDS issues an error.</p>
     */
    inline int GetPerformanceInsightsRetentionPeriod() const{ return m_performanceInsightsRetentionPeriod; }
    inline bool PerformanceInsightsRetentionPeriodHasBeenSet() const { return m_performanceInsightsRetentionPeriodHasBeenSet; }
    inline void SetPerformanceInsightsRetentionPeriod(int value) { m_performanceInsightsRetentionPeriodHasBeenSet = true; m_performanceInsightsRetentionPeriod = value; }
    inline CreateDBClusterRequest& WithPerformanceInsightsRetentionPeriod(int value) { SetPerformanceInsightsRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable Aurora Limitless Database. You must enable Aurora
     * Limitless Database to create a DB shard group.</p> <p>Valid for: Aurora DB
     * clusters only</p>  <p>This setting is no longer used. Instead use the
     * <code>ClusterScalabilityType</code> setting.</p> 
     */
    inline bool GetEnableLimitlessDatabase() const{ return m_enableLimitlessDatabase; }
    inline bool EnableLimitlessDatabaseHasBeenSet() const { return m_enableLimitlessDatabaseHasBeenSet; }
    inline void SetEnableLimitlessDatabase(bool value) { m_enableLimitlessDatabaseHasBeenSet = true; m_enableLimitlessDatabase = value; }
    inline CreateDBClusterRequest& WithEnableLimitlessDatabase(bool value) { SetEnableLimitlessDatabase(value); return *this;}
    ///@}

    ///@{
    
    inline const ServerlessV2ScalingConfiguration& GetServerlessV2ScalingConfiguration() const{ return m_serverlessV2ScalingConfiguration; }
    inline bool ServerlessV2ScalingConfigurationHasBeenSet() const { return m_serverlessV2ScalingConfigurationHasBeenSet; }
    inline void SetServerlessV2ScalingConfiguration(const ServerlessV2ScalingConfiguration& value) { m_serverlessV2ScalingConfigurationHasBeenSet = true; m_serverlessV2ScalingConfiguration = value; }
    inline void SetServerlessV2ScalingConfiguration(ServerlessV2ScalingConfiguration&& value) { m_serverlessV2ScalingConfigurationHasBeenSet = true; m_serverlessV2ScalingConfiguration = std::move(value); }
    inline CreateDBClusterRequest& WithServerlessV2ScalingConfiguration(const ServerlessV2ScalingConfiguration& value) { SetServerlessV2ScalingConfiguration(value); return *this;}
    inline CreateDBClusterRequest& WithServerlessV2ScalingConfiguration(ServerlessV2ScalingConfiguration&& value) { SetServerlessV2ScalingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network type of the DB cluster.</p> <p>The network type is determined by
     * the <code>DBSubnetGroup</code> specified for the DB cluster. A
     * <code>DBSubnetGroup</code> can support only the IPv4 protocol or the IPv4 and
     * the IPv6 protocols (<code>DUAL</code>).</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon Aurora User Guide.</i>
     * </p> <p>Valid for Cluster Type: Aurora DB clusters only</p> <p>Valid Values:
     * <code>IPV4 | DUAL</code> </p>
     */
    inline const Aws::String& GetNetworkType() const{ return m_networkType; }
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
    inline void SetNetworkType(const Aws::String& value) { m_networkTypeHasBeenSet = true; m_networkType = value; }
    inline void SetNetworkType(Aws::String&& value) { m_networkTypeHasBeenSet = true; m_networkType = std::move(value); }
    inline void SetNetworkType(const char* value) { m_networkTypeHasBeenSet = true; m_networkType.assign(value); }
    inline CreateDBClusterRequest& WithNetworkType(const Aws::String& value) { SetNetworkType(value); return *this;}
    inline CreateDBClusterRequest& WithNetworkType(Aws::String&& value) { SetNetworkType(std::move(value)); return *this;}
    inline CreateDBClusterRequest& WithNetworkType(const char* value) { SetNetworkType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the scalability mode of the Aurora DB cluster. When set to
     * <code>limitless</code>, the cluster operates as an Aurora Limitless Database.
     * When set to <code>standard</code> (the default), the cluster uses normal DB
     * instance creation.</p> <p>Valid for: Aurora DB clusters only</p>  <p>You
     * can't modify this setting after you create the DB cluster.</p> 
     */
    inline const ClusterScalabilityType& GetClusterScalabilityType() const{ return m_clusterScalabilityType; }
    inline bool ClusterScalabilityTypeHasBeenSet() const { return m_clusterScalabilityTypeHasBeenSet; }
    inline void SetClusterScalabilityType(const ClusterScalabilityType& value) { m_clusterScalabilityTypeHasBeenSet = true; m_clusterScalabilityType = value; }
    inline void SetClusterScalabilityType(ClusterScalabilityType&& value) { m_clusterScalabilityTypeHasBeenSet = true; m_clusterScalabilityType = std::move(value); }
    inline CreateDBClusterRequest& WithClusterScalabilityType(const ClusterScalabilityType& value) { SetClusterScalabilityType(value); return *this;}
    inline CreateDBClusterRequest& WithClusterScalabilityType(ClusterScalabilityType&& value) { SetClusterScalabilityType(std::move(value)); return *this;}
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
    inline CreateDBClusterRequest& WithDBSystemId(const Aws::String& value) { SetDBSystemId(value); return *this;}
    inline CreateDBClusterRequest& WithDBSystemId(Aws::String&& value) { SetDBSystemId(std::move(value)); return *this;}
    inline CreateDBClusterRequest& WithDBSystemId(const char* value) { SetDBSystemId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to manage the master user password with Amazon Web Services
     * Secrets Manager.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon RDS
     * User Guide</i> and <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon Aurora
     * User Guide.</i> </p> <p>Valid for Cluster Type: Aurora DB clusters and Multi-AZ
     * DB clusters</p> <p>Constraints:</p> <ul> <li> <p>Can't manage the master user
     * password with Amazon Web Services Secrets Manager if
     * <code>MasterUserPassword</code> is specified.</p> </li> </ul>
     */
    inline bool GetManageMasterUserPassword() const{ return m_manageMasterUserPassword; }
    inline bool ManageMasterUserPasswordHasBeenSet() const { return m_manageMasterUserPasswordHasBeenSet; }
    inline void SetManageMasterUserPassword(bool value) { m_manageMasterUserPasswordHasBeenSet = true; m_manageMasterUserPassword = value; }
    inline CreateDBClusterRequest& WithManageMasterUserPassword(bool value) { SetManageMasterUserPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS key identifier to encrypt a secret that is
     * automatically generated and managed in Amazon Web Services Secrets Manager.</p>
     * <p>This setting is valid only if the master user password is managed by RDS in
     * Amazon Web Services Secrets Manager for the DB cluster.</p> <p>The Amazon Web
     * Services KMS key identifier is the key ARN, key ID, alias ARN, or alias name for
     * the KMS key. To use a KMS key in a different Amazon Web Services account,
     * specify the key ARN or alias ARN.</p> <p>If you don't specify
     * <code>MasterUserSecretKmsKeyId</code>, then the <code>aws/secretsmanager</code>
     * KMS key is used to encrypt the secret. If the secret is in a different Amazon
     * Web Services account, then you can't use the <code>aws/secretsmanager</code> KMS
     * key to encrypt the secret, and you must use a customer managed KMS key.</p>
     * <p>There is a default KMS key for your Amazon Web Services account. Your Amazon
     * Web Services account has a different default KMS key for each Amazon Web
     * Services Region.</p> <p>Valid for Cluster Type: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline const Aws::String& GetMasterUserSecretKmsKeyId() const{ return m_masterUserSecretKmsKeyId; }
    inline bool MasterUserSecretKmsKeyIdHasBeenSet() const { return m_masterUserSecretKmsKeyIdHasBeenSet; }
    inline void SetMasterUserSecretKmsKeyId(const Aws::String& value) { m_masterUserSecretKmsKeyIdHasBeenSet = true; m_masterUserSecretKmsKeyId = value; }
    inline void SetMasterUserSecretKmsKeyId(Aws::String&& value) { m_masterUserSecretKmsKeyIdHasBeenSet = true; m_masterUserSecretKmsKeyId = std::move(value); }
    inline void SetMasterUserSecretKmsKeyId(const char* value) { m_masterUserSecretKmsKeyIdHasBeenSet = true; m_masterUserSecretKmsKeyId.assign(value); }
    inline CreateDBClusterRequest& WithMasterUserSecretKmsKeyId(const Aws::String& value) { SetMasterUserSecretKmsKeyId(value); return *this;}
    inline CreateDBClusterRequest& WithMasterUserSecretKmsKeyId(Aws::String&& value) { SetMasterUserSecretKmsKeyId(std::move(value)); return *this;}
    inline CreateDBClusterRequest& WithMasterUserSecretKmsKeyId(const char* value) { SetMasterUserSecretKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether read replicas can forward write operations to the writer DB
     * instance in the DB cluster. By default, write operations aren't allowed on
     * reader DB instances.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline bool GetEnableLocalWriteForwarding() const{ return m_enableLocalWriteForwarding; }
    inline bool EnableLocalWriteForwardingHasBeenSet() const { return m_enableLocalWriteForwardingHasBeenSet; }
    inline void SetEnableLocalWriteForwarding(bool value) { m_enableLocalWriteForwardingHasBeenSet = true; m_enableLocalWriteForwarding = value; }
    inline CreateDBClusterRequest& WithEnableLocalWriteForwarding(bool value) { SetEnableLocalWriteForwarding(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CA certificate identifier to use for the DB cluster's server
     * certificate.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/UsingWithRDS.SSL.html">Using
     * SSL/TLS to encrypt a connection to a DB instance</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>Valid for Cluster Type: Multi-AZ DB clusters</p>
     */
    inline const Aws::String& GetCACertificateIdentifier() const{ return m_cACertificateIdentifier; }
    inline bool CACertificateIdentifierHasBeenSet() const { return m_cACertificateIdentifierHasBeenSet; }
    inline void SetCACertificateIdentifier(const Aws::String& value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier = value; }
    inline void SetCACertificateIdentifier(Aws::String&& value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier = std::move(value); }
    inline void SetCACertificateIdentifier(const char* value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier.assign(value); }
    inline CreateDBClusterRequest& WithCACertificateIdentifier(const Aws::String& value) { SetCACertificateIdentifier(value); return *this;}
    inline CreateDBClusterRequest& WithCACertificateIdentifier(Aws::String&& value) { SetCACertificateIdentifier(std::move(value)); return *this;}
    inline CreateDBClusterRequest& WithCACertificateIdentifier(const char* value) { SetCACertificateIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The life cycle type for this DB cluster.</p>  <p>By default, this value
     * is set to <code>open-source-rds-extended-support</code>, which enrolls your DB
     * cluster into Amazon RDS Extended Support. At the end of standard support, you
     * can avoid charges for Extended Support by setting the value to
     * <code>open-source-rds-extended-support-disabled</code>. In this case, creating
     * the DB cluster will fail if the DB major version is past its end of standard
     * support date.</p>  <p>You can use this setting to enroll your DB cluster
     * into Amazon RDS Extended Support. With RDS Extended Support, you can run the
     * selected major engine version on your DB cluster past the end of standard
     * support for that engine version. For more information, see the following
     * sections:</p> <ul> <li> <p>Amazon Aurora - <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/extended-support.html">Using
     * Amazon RDS Extended Support</a> in the <i>Amazon Aurora User Guide</i> </p>
     * </li> <li> <p>Amazon RDS - <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/extended-support.html">Using
     * Amazon RDS Extended Support</a> in the <i>Amazon RDS User Guide</i> </p> </li>
     * </ul> <p>Valid for Cluster Type: Aurora DB clusters and Multi-AZ DB clusters</p>
     * <p>Valid Values: <code>open-source-rds-extended-support |
     * open-source-rds-extended-support-disabled</code> </p> <p>Default:
     * <code>open-source-rds-extended-support</code> </p>
     */
    inline const Aws::String& GetEngineLifecycleSupport() const{ return m_engineLifecycleSupport; }
    inline bool EngineLifecycleSupportHasBeenSet() const { return m_engineLifecycleSupportHasBeenSet; }
    inline void SetEngineLifecycleSupport(const Aws::String& value) { m_engineLifecycleSupportHasBeenSet = true; m_engineLifecycleSupport = value; }
    inline void SetEngineLifecycleSupport(Aws::String&& value) { m_engineLifecycleSupportHasBeenSet = true; m_engineLifecycleSupport = std::move(value); }
    inline void SetEngineLifecycleSupport(const char* value) { m_engineLifecycleSupportHasBeenSet = true; m_engineLifecycleSupport.assign(value); }
    inline CreateDBClusterRequest& WithEngineLifecycleSupport(const Aws::String& value) { SetEngineLifecycleSupport(value); return *this;}
    inline CreateDBClusterRequest& WithEngineLifecycleSupport(Aws::String&& value) { SetEngineLifecycleSupport(std::move(value)); return *this;}
    inline CreateDBClusterRequest& WithEngineLifecycleSupport(const char* value) { SetEngineLifecycleSupport(value); return *this;}
    ///@}

    ///@{
    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline const Aws::String& GetSourceRegion() const{ return m_sourceRegion; }
    inline bool SourceRegionHasBeenSet() const { return m_sourceRegionHasBeenSet; }
    inline void SetSourceRegion(const Aws::String& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = value; }
    inline void SetSourceRegion(Aws::String&& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = std::move(value); }
    inline void SetSourceRegion(const char* value) { m_sourceRegionHasBeenSet = true; m_sourceRegion.assign(value); }
    inline CreateDBClusterRequest& WithSourceRegion(const Aws::String& value) { SetSourceRegion(value); return *this;}
    inline CreateDBClusterRequest& WithSourceRegion(Aws::String&& value) { SetSourceRegion(std::move(value)); return *this;}
    inline CreateDBClusterRequest& WithSourceRegion(const char* value) { SetSourceRegion(value); return *this;}
    ///@}
  private:

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

    Aws::String m_dBClusterParameterGroupName;
    bool m_dBClusterParameterGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;

    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_masterUsername;
    bool m_masterUsernameHasBeenSet = false;

    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet = false;

    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet = false;

    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    Aws::String m_replicationSourceIdentifier;
    bool m_replicationSourceIdentifierHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_storageEncrypted;
    bool m_storageEncryptedHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_preSignedUrl;
    bool m_preSignedUrlHasBeenSet = false;

    bool m_enableIAMDatabaseAuthentication;
    bool m_enableIAMDatabaseAuthenticationHasBeenSet = false;

    long long m_backtrackWindow;
    bool m_backtrackWindowHasBeenSet = false;

    Aws::Vector<Aws::String> m_enableCloudwatchLogsExports;
    bool m_enableCloudwatchLogsExportsHasBeenSet = false;

    Aws::String m_engineMode;
    bool m_engineModeHasBeenSet = false;

    ScalingConfiguration m_scalingConfiguration;
    bool m_scalingConfigurationHasBeenSet = false;

    RdsCustomClusterConfiguration m_rdsCustomClusterConfiguration;
    bool m_rdsCustomClusterConfigurationHasBeenSet = false;

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet = false;

    Aws::String m_globalClusterIdentifier;
    bool m_globalClusterIdentifierHasBeenSet = false;

    bool m_enableHttpEndpoint;
    bool m_enableHttpEndpointHasBeenSet = false;

    bool m_copyTagsToSnapshot;
    bool m_copyTagsToSnapshotHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_domainIAMRoleName;
    bool m_domainIAMRoleNameHasBeenSet = false;

    bool m_enableGlobalWriteForwarding;
    bool m_enableGlobalWriteForwardingHasBeenSet = false;

    Aws::String m_dBClusterInstanceClass;
    bool m_dBClusterInstanceClassHasBeenSet = false;

    int m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet = false;

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

    bool m_enablePerformanceInsights;
    bool m_enablePerformanceInsightsHasBeenSet = false;

    Aws::String m_performanceInsightsKMSKeyId;
    bool m_performanceInsightsKMSKeyIdHasBeenSet = false;

    int m_performanceInsightsRetentionPeriod;
    bool m_performanceInsightsRetentionPeriodHasBeenSet = false;

    bool m_enableLimitlessDatabase;
    bool m_enableLimitlessDatabaseHasBeenSet = false;

    ServerlessV2ScalingConfiguration m_serverlessV2ScalingConfiguration;
    bool m_serverlessV2ScalingConfigurationHasBeenSet = false;

    Aws::String m_networkType;
    bool m_networkTypeHasBeenSet = false;

    ClusterScalabilityType m_clusterScalabilityType;
    bool m_clusterScalabilityTypeHasBeenSet = false;

    Aws::String m_dBSystemId;
    bool m_dBSystemIdHasBeenSet = false;

    bool m_manageMasterUserPassword;
    bool m_manageMasterUserPasswordHasBeenSet = false;

    Aws::String m_masterUserSecretKmsKeyId;
    bool m_masterUserSecretKmsKeyIdHasBeenSet = false;

    bool m_enableLocalWriteForwarding;
    bool m_enableLocalWriteForwardingHasBeenSet = false;

    Aws::String m_cACertificateIdentifier;
    bool m_cACertificateIdentifierHasBeenSet = false;

    Aws::String m_engineLifecycleSupport;
    bool m_engineLifecycleSupportHasBeenSet = false;

    Aws::String m_sourceRegion;
    bool m_sourceRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
