/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/CloudwatchLogsExportConfiguration.h>
#include <aws/rds/model/ScalingConfiguration.h>
#include <aws/rds/model/DatabaseInsightsMode.h>
#include <aws/rds/model/ServerlessV2ScalingConfiguration.h>
#include <aws/rds/model/MasterUserAuthenticationType.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBClusterMessage">AWS
   * API Reference</a></p>
   */
  class ModifyDBClusterRequest : public RDSRequest
  {
  public:
    AWS_RDS_API ModifyDBClusterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyDBCluster"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The DB cluster identifier for the cluster being modified. This parameter
     * isn't case-sensitive.</p> <p>Valid for Cluster Type: Aurora DB clusters and
     * Multi-AZ DB clusters</p> <p>Constraints:</p> <ul> <li> <p>Must match the
     * identifier of an existing DB cluster.</p> </li> </ul>
     */
    inline const Aws::String& GetDBClusterIdentifier() const { return m_dBClusterIdentifier; }
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }
    template<typename DBClusterIdentifierT = Aws::String>
    void SetDBClusterIdentifier(DBClusterIdentifierT&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::forward<DBClusterIdentifierT>(value); }
    template<typename DBClusterIdentifierT = Aws::String>
    ModifyDBClusterRequest& WithDBClusterIdentifier(DBClusterIdentifierT&& value) { SetDBClusterIdentifier(std::forward<DBClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new DB cluster identifier for the DB cluster when renaming a DB cluster.
     * This value is stored as a lowercase string.</p> <p>Valid for Cluster Type:
     * Aurora DB clusters and Multi-AZ DB clusters</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li> <li> <p>The
     * first character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>my-cluster2</code> </p>
     */
    inline const Aws::String& GetNewDBClusterIdentifier() const { return m_newDBClusterIdentifier; }
    inline bool NewDBClusterIdentifierHasBeenSet() const { return m_newDBClusterIdentifierHasBeenSet; }
    template<typename NewDBClusterIdentifierT = Aws::String>
    void SetNewDBClusterIdentifier(NewDBClusterIdentifierT&& value) { m_newDBClusterIdentifierHasBeenSet = true; m_newDBClusterIdentifier = std::forward<NewDBClusterIdentifierT>(value); }
    template<typename NewDBClusterIdentifierT = Aws::String>
    ModifyDBClusterRequest& WithNewDBClusterIdentifier(NewDBClusterIdentifierT&& value) { SetNewDBClusterIdentifier(std::forward<NewDBClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the modifications in this request are asynchronously
     * applied as soon as possible, regardless of the
     * <code>PreferredMaintenanceWindow</code> setting for the DB cluster. If this
     * parameter is disabled, changes to the DB cluster are applied during the next
     * maintenance window.</p> <p>Most modifications can be applied immediately or
     * during the next scheduled maintenance window. Some modifications, such as
     * turning on deletion protection and changing the master password, are applied
     * immediately—regardless of when you choose to apply them.</p> <p>By default, this
     * parameter is disabled.</p> <p>Valid for Cluster Type: Aurora DB clusters and
     * Multi-AZ DB clusters</p>
     */
    inline bool GetApplyImmediately() const { return m_applyImmediately; }
    inline bool ApplyImmediatelyHasBeenSet() const { return m_applyImmediatelyHasBeenSet; }
    inline void SetApplyImmediately(bool value) { m_applyImmediatelyHasBeenSet = true; m_applyImmediately = value; }
    inline ModifyDBClusterRequest& WithApplyImmediately(bool value) { SetApplyImmediately(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days for which automated backups are retained. Specify a
     * minimum value of <code>1</code>.</p> <p>Valid for Cluster Type: Aurora DB
     * clusters and Multi-AZ DB clusters</p> <p>Default: <code>1</code> </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be a value from 1 to 35.</p> </li> </ul>
     */
    inline int GetBackupRetentionPeriod() const { return m_backupRetentionPeriod; }
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }
    inline ModifyDBClusterRequest& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the DB cluster parameter group to use for the DB cluster.</p>
     * <p>Valid for Cluster Type: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline const Aws::String& GetDBClusterParameterGroupName() const { return m_dBClusterParameterGroupName; }
    inline bool DBClusterParameterGroupNameHasBeenSet() const { return m_dBClusterParameterGroupNameHasBeenSet; }
    template<typename DBClusterParameterGroupNameT = Aws::String>
    void SetDBClusterParameterGroupName(DBClusterParameterGroupNameT&& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = std::forward<DBClusterParameterGroupNameT>(value); }
    template<typename DBClusterParameterGroupNameT = Aws::String>
    ModifyDBClusterRequest& WithDBClusterParameterGroupName(DBClusterParameterGroupNameT&& value) { SetDBClusterParameterGroupName(std::forward<DBClusterParameterGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of EC2 VPC security groups to associate with this DB cluster.</p>
     * <p>Valid for Cluster Type: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const { return m_vpcSecurityGroupIds; }
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }
    template<typename VpcSecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::forward<VpcSecurityGroupIdsT>(value); }
    template<typename VpcSecurityGroupIdsT = Aws::Vector<Aws::String>>
    ModifyDBClusterRequest& WithVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { SetVpcSecurityGroupIds(std::forward<VpcSecurityGroupIdsT>(value)); return *this;}
    template<typename VpcSecurityGroupIdsT = Aws::String>
    ModifyDBClusterRequest& AddVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.emplace_back(std::forward<VpcSecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The port number on which the DB cluster accepts connections.</p> <p>Valid for
     * Cluster Type: Aurora DB clusters only</p> <p>Valid Values:
     * <code>1150-65535</code> </p> <p>Default: The same port as the original DB
     * cluster.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline ModifyDBClusterRequest& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new password for the master database user.</p> <p>Valid for Cluster Type:
     * Aurora DB clusters and Multi-AZ DB clusters</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 8 to 41 characters.</p> </li> <li> <p>Can contain any
     * printable ASCII character except "/", """, or "@".</p> </li> <li> <p>Can't be
     * specified if <code>ManageMasterUserPassword</code> is turned on.</p> </li> </ul>
     */
    inline const Aws::String& GetMasterUserPassword() const { return m_masterUserPassword; }
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }
    template<typename MasterUserPasswordT = Aws::String>
    void SetMasterUserPassword(MasterUserPasswordT&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::forward<MasterUserPasswordT>(value); }
    template<typename MasterUserPasswordT = Aws::String>
    ModifyDBClusterRequest& WithMasterUserPassword(MasterUserPasswordT&& value) { SetMasterUserPassword(std::forward<MasterUserPasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The option group to associate the DB cluster with.</p> <p>DB clusters are
     * associated with a default option group that can't be modified.</p>
     */
    inline const Aws::String& GetOptionGroupName() const { return m_optionGroupName; }
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }
    template<typename OptionGroupNameT = Aws::String>
    void SetOptionGroupName(OptionGroupNameT&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::forward<OptionGroupNameT>(value); }
    template<typename OptionGroupNameT = Aws::String>
    ModifyDBClusterRequest& WithOptionGroupName(OptionGroupNameT&& value) { SetOptionGroupName(std::forward<OptionGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled, using the <code>BackupRetentionPeriod</code> parameter.</p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region. To view the time blocks available, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Aurora.Managing.Backups.html#Aurora.Managing.Backups.BackupWindow">
     * Backup window</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>Valid for
     * Cluster Type: Aurora DB clusters and Multi-AZ DB clusters</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal Coordinated
     * Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline const Aws::String& GetPreferredBackupWindow() const { return m_preferredBackupWindow; }
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }
    template<typename PreferredBackupWindowT = Aws::String>
    void SetPreferredBackupWindow(PreferredBackupWindowT&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::forward<PreferredBackupWindowT>(value); }
    template<typename PreferredBackupWindowT = Aws::String>
    ModifyDBClusterRequest& WithPreferredBackupWindow(PreferredBackupWindowT&& value) { SetPreferredBackupWindow(std::forward<PreferredBackupWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Valid for Cluster Type: Aurora DB clusters and
     * Multi-AZ DB clusters</p> <p>The default is a 30-minute window selected at random
     * from an 8-hour block of time for each Amazon Web Services Region, occurring on a
     * random day of the week. To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide</i>.</p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * format <code>ddd:hh24:mi-ddd:hh24:mi</code>.</p> </li> <li> <p>Days must be one
     * of <code>Mon | Tue | Wed | Thu | Fri | Sat | Sun</code>.</p> </li> <li> <p>Must
     * be in Universal Coordinated Time (UTC).</p> </li> <li> <p>Must be at least 30
     * minutes.</p> </li> </ul>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const { return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    void SetPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::forward<PreferredMaintenanceWindowT>(value); }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    ModifyDBClusterRequest& WithPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { SetPreferredMaintenanceWindow(std::forward<PreferredMaintenanceWindowT>(value)); return *this;}
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
    inline bool GetEnableIAMDatabaseAuthentication() const { return m_enableIAMDatabaseAuthentication; }
    inline bool EnableIAMDatabaseAuthenticationHasBeenSet() const { return m_enableIAMDatabaseAuthenticationHasBeenSet; }
    inline void SetEnableIAMDatabaseAuthentication(bool value) { m_enableIAMDatabaseAuthenticationHasBeenSet = true; m_enableIAMDatabaseAuthentication = value; }
    inline ModifyDBClusterRequest& WithEnableIAMDatabaseAuthentication(bool value) { SetEnableIAMDatabaseAuthentication(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target backtrack window, in seconds. To disable backtracking, set this
     * value to <code>0</code>.</p> <p>Valid for Cluster Type: Aurora MySQL DB clusters
     * only</p> <p>Default: <code>0</code> </p> <p>Constraints:</p> <ul> <li> <p>If
     * specified, this value must be set to a number from 0 to 259,200 (72 hours).</p>
     * </li> </ul>
     */
    inline long long GetBacktrackWindow() const { return m_backtrackWindow; }
    inline bool BacktrackWindowHasBeenSet() const { return m_backtrackWindowHasBeenSet; }
    inline void SetBacktrackWindow(long long value) { m_backtrackWindowHasBeenSet = true; m_backtrackWindow = value; }
    inline ModifyDBClusterRequest& WithBacktrackWindow(long long value) { SetBacktrackWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration setting for the log types to be enabled for export to
     * CloudWatch Logs for a specific DB cluster.</p> <p>Valid for Cluster Type: Aurora
     * DB clusters and Multi-AZ DB clusters</p> <p>The following values are valid for
     * each DB engine:</p> <ul> <li> <p>Aurora MySQL - <code>audit | error | general |
     * instance | slowquery | iam-db-auth-error</code> </p> </li> <li> <p>Aurora
     * PostgreSQL - <code>instance | postgresql | iam-db-auth-error</code> </p> </li>
     * <li> <p>RDS for MySQL - <code>error | general | slowquery |
     * iam-db-auth-error</code> </p> </li> <li> <p>RDS for PostgreSQL -
     * <code>postgresql | upgrade | iam-db-auth-error</code> </p> </li> </ul> <p>For
     * more information about exporting CloudWatch Logs for Amazon RDS, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">
     * Publishing Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>For more information about exporting CloudWatch Logs for
     * Amazon Aurora, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline const CloudwatchLogsExportConfiguration& GetCloudwatchLogsExportConfiguration() const { return m_cloudwatchLogsExportConfiguration; }
    inline bool CloudwatchLogsExportConfigurationHasBeenSet() const { return m_cloudwatchLogsExportConfigurationHasBeenSet; }
    template<typename CloudwatchLogsExportConfigurationT = CloudwatchLogsExportConfiguration>
    void SetCloudwatchLogsExportConfiguration(CloudwatchLogsExportConfigurationT&& value) { m_cloudwatchLogsExportConfigurationHasBeenSet = true; m_cloudwatchLogsExportConfiguration = std::forward<CloudwatchLogsExportConfigurationT>(value); }
    template<typename CloudwatchLogsExportConfigurationT = CloudwatchLogsExportConfiguration>
    ModifyDBClusterRequest& WithCloudwatchLogsExportConfiguration(CloudwatchLogsExportConfigurationT&& value) { SetCloudwatchLogsExportConfiguration(std::forward<CloudwatchLogsExportConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the database engine to which you want to upgrade.
     * Changing this parameter results in an outage. The change is applied during the
     * next maintenance window unless <code>ApplyImmediately</code> is enabled.</p>
     * <p>If the cluster that you're modifying has one or more read replicas, all
     * replicas must be running an engine version that's the same or later than the
     * version you specify.</p> <p>To list all of the available engine versions for
     * Aurora MySQL, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora-mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for Aurora PostgreSQL, use the following command:</p> <p>
     * <code>aws rds describe-db-engine-versions --engine aurora-postgresql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for RDS for MySQL, use the following command:</p> <p> <code>aws
     * rds describe-db-engine-versions --engine mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for RDS for PostgreSQL, use the following command:</p> <p>
     * <code>aws rds describe-db-engine-versions --engine postgres --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>Valid for Cluster Type: Aurora
     * DB clusters and Multi-AZ DB clusters</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    ModifyDBClusterRequest& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether major version upgrades are allowed.</p> <p>Valid for
     * Cluster Type: Aurora DB clusters and Multi-AZ DB clusters</p>
     * <p>Constraints:</p> <ul> <li> <p>You must allow major version upgrades when
     * specifying a value for the <code>EngineVersion</code> parameter that is a
     * different major version than the DB cluster's current version.</p> </li> </ul>
     */
    inline bool GetAllowMajorVersionUpgrade() const { return m_allowMajorVersionUpgrade; }
    inline bool AllowMajorVersionUpgradeHasBeenSet() const { return m_allowMajorVersionUpgradeHasBeenSet; }
    inline void SetAllowMajorVersionUpgrade(bool value) { m_allowMajorVersionUpgradeHasBeenSet = true; m_allowMajorVersionUpgrade = value; }
    inline ModifyDBClusterRequest& WithAllowMajorVersionUpgrade(bool value) { SetAllowMajorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the DB parameter group to apply to all instances of the DB
     * cluster.</p>  <p>When you apply a parameter group using the
     * <code>DBInstanceParameterGroupName</code> parameter, the DB cluster isn't
     * rebooted automatically. Also, parameter changes are applied immediately rather
     * than during the next maintenance window.</p>  <p>Valid for Cluster Type:
     * Aurora DB clusters only</p> <p>Default: The existing name setting</p>
     * <p>Constraints:</p> <ul> <li> <p>The DB parameter group must be in the same DB
     * parameter group family as this DB cluster.</p> </li> <li> <p>The
     * <code>DBInstanceParameterGroupName</code> parameter is valid in combination with
     * the <code>AllowMajorVersionUpgrade</code> parameter for a major version upgrade
     * only.</p> </li> </ul>
     */
    inline const Aws::String& GetDBInstanceParameterGroupName() const { return m_dBInstanceParameterGroupName; }
    inline bool DBInstanceParameterGroupNameHasBeenSet() const { return m_dBInstanceParameterGroupNameHasBeenSet; }
    template<typename DBInstanceParameterGroupNameT = Aws::String>
    void SetDBInstanceParameterGroupName(DBInstanceParameterGroupNameT&& value) { m_dBInstanceParameterGroupNameHasBeenSet = true; m_dBInstanceParameterGroupName = std::forward<DBInstanceParameterGroupNameT>(value); }
    template<typename DBInstanceParameterGroupNameT = Aws::String>
    ModifyDBClusterRequest& WithDBInstanceParameterGroupName(DBInstanceParameterGroupNameT&& value) { SetDBInstanceParameterGroupName(std::forward<DBInstanceParameterGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Active Directory directory ID to move the DB cluster to. Specify
     * <code>none</code> to remove the cluster from its current domain. The domain must
     * be created prior to this operation.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/kerberos-authentication.html">Kerberos
     * Authentication</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>Valid for
     * Cluster Type: Aurora DB clusters only</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    ModifyDBClusterRequest& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the IAM role to use when making API calls to the Directory
     * Service.</p> <p>Valid for Cluster Type: Aurora DB clusters only</p>
     */
    inline const Aws::String& GetDomainIAMRoleName() const { return m_domainIAMRoleName; }
    inline bool DomainIAMRoleNameHasBeenSet() const { return m_domainIAMRoleNameHasBeenSet; }
    template<typename DomainIAMRoleNameT = Aws::String>
    void SetDomainIAMRoleName(DomainIAMRoleNameT&& value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName = std::forward<DomainIAMRoleNameT>(value); }
    template<typename DomainIAMRoleNameT = Aws::String>
    ModifyDBClusterRequest& WithDomainIAMRoleName(DomainIAMRoleNameT&& value) { SetDomainIAMRoleName(std::forward<DomainIAMRoleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scaling properties of the DB cluster. You can only modify scaling
     * properties for DB clusters in <code>serverless</code> DB engine mode.</p>
     * <p>Valid for Cluster Type: Aurora DB clusters only</p>
     */
    inline const ScalingConfiguration& GetScalingConfiguration() const { return m_scalingConfiguration; }
    inline bool ScalingConfigurationHasBeenSet() const { return m_scalingConfigurationHasBeenSet; }
    template<typename ScalingConfigurationT = ScalingConfiguration>
    void SetScalingConfiguration(ScalingConfigurationT&& value) { m_scalingConfigurationHasBeenSet = true; m_scalingConfiguration = std::forward<ScalingConfigurationT>(value); }
    template<typename ScalingConfigurationT = ScalingConfiguration>
    ModifyDBClusterRequest& WithScalingConfiguration(ScalingConfigurationT&& value) { SetScalingConfiguration(std::forward<ScalingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the DB cluster has deletion protection enabled. The
     * database can't be deleted when deletion protection is enabled. By default,
     * deletion protection isn't enabled.</p> <p>Valid for Cluster Type: Aurora DB
     * clusters and Multi-AZ DB clusters</p>
     */
    inline bool GetDeletionProtection() const { return m_deletionProtection; }
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }
    inline ModifyDBClusterRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable the HTTP endpoint for an Aurora Serverless v1 DB
     * cluster. By default, the HTTP endpoint isn't enabled.</p> <p>When enabled, the
     * HTTP endpoint provides a connectionless web service API (RDS Data API) for
     * running SQL queries on the Aurora Serverless v1 DB cluster. You can also query
     * your database from inside the RDS console with the RDS query editor.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/data-api.html">Using
     * RDS Data API</a> in the <i>Amazon Aurora User Guide</i>.</p>  <p>This
     * parameter applies only to Aurora Serverless v1 DB clusters. To enable or disable
     * the HTTP endpoint for an Aurora Serverless v2 or provisioned DB cluster, use the
     * <code>EnableHttpEndpoint</code> and <code>DisableHttpEndpoint</code>
     * operations.</p>  <p>Valid for Cluster Type: Aurora DB clusters only</p>
     */
    inline bool GetEnableHttpEndpoint() const { return m_enableHttpEndpoint; }
    inline bool EnableHttpEndpointHasBeenSet() const { return m_enableHttpEndpointHasBeenSet; }
    inline void SetEnableHttpEndpoint(bool value) { m_enableHttpEndpointHasBeenSet = true; m_enableHttpEndpoint = value; }
    inline ModifyDBClusterRequest& WithEnableHttpEndpoint(bool value) { SetEnableHttpEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to copy all tags from the DB cluster to snapshots of the DB
     * cluster. The default is not to copy them.</p> <p>Valid for Cluster Type: Aurora
     * DB clusters and Multi-AZ DB clusters</p>
     */
    inline bool GetCopyTagsToSnapshot() const { return m_copyTagsToSnapshot; }
    inline bool CopyTagsToSnapshotHasBeenSet() const { return m_copyTagsToSnapshotHasBeenSet; }
    inline void SetCopyTagsToSnapshot(bool value) { m_copyTagsToSnapshotHasBeenSet = true; m_copyTagsToSnapshot = value; }
    inline ModifyDBClusterRequest& WithCopyTagsToSnapshot(bool value) { SetCopyTagsToSnapshot(value); return *this;}
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
    inline bool GetEnableGlobalWriteForwarding() const { return m_enableGlobalWriteForwarding; }
    inline bool EnableGlobalWriteForwardingHasBeenSet() const { return m_enableGlobalWriteForwardingHasBeenSet; }
    inline void SetEnableGlobalWriteForwarding(bool value) { m_enableGlobalWriteForwardingHasBeenSet = true; m_enableGlobalWriteForwarding = value; }
    inline ModifyDBClusterRequest& WithEnableGlobalWriteForwarding(bool value) { SetEnableGlobalWriteForwarding(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compute and memory capacity of each DB instance in the Multi-AZ DB
     * cluster, for example <code>db.m6gd.xlarge</code>. Not all DB instance classes
     * are available in all Amazon Web Services Regions, or for all database
     * engines.</p> <p>For the full list of DB instance classes and availability for
     * your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">
     * DB Instance Class</a> in the <i>Amazon RDS User Guide</i>.</p> <p>Valid for
     * Cluster Type: Multi-AZ DB clusters only</p>
     */
    inline const Aws::String& GetDBClusterInstanceClass() const { return m_dBClusterInstanceClass; }
    inline bool DBClusterInstanceClassHasBeenSet() const { return m_dBClusterInstanceClassHasBeenSet; }
    template<typename DBClusterInstanceClassT = Aws::String>
    void SetDBClusterInstanceClass(DBClusterInstanceClassT&& value) { m_dBClusterInstanceClassHasBeenSet = true; m_dBClusterInstanceClass = std::forward<DBClusterInstanceClassT>(value); }
    template<typename DBClusterInstanceClassT = Aws::String>
    ModifyDBClusterRequest& WithDBClusterInstanceClass(DBClusterInstanceClassT&& value) { SetDBClusterInstanceClass(std::forward<DBClusterInstanceClassT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of storage in gibibytes (GiB) to allocate to each DB instance in
     * the Multi-AZ DB cluster.</p> <p>Valid for Cluster Type: Multi-AZ DB clusters
     * only</p>
     */
    inline int GetAllocatedStorage() const { return m_allocatedStorage; }
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }
    inline ModifyDBClusterRequest& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage type to associate with the DB cluster.</p> <p>For information on
     * storage types for Aurora DB clusters, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Aurora.Overview.StorageReliability.html#aurora-storage-type">Storage
     * configurations for Amazon Aurora DB clusters</a>. For information on storage
     * types for Multi-AZ DB clusters, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/create-multi-az-db-cluster.html#create-multi-az-db-cluster-settings">Settings
     * for creating Multi-AZ DB clusters</a>.</p> <p>When specified for a Multi-AZ DB
     * cluster, a value for the <code>Iops</code> parameter is required.</p> <p>Valid
     * for Cluster Type: Aurora DB clusters and Multi-AZ DB clusters</p> <p>Valid
     * Values:</p> <ul> <li> <p>Aurora DB clusters - <code>aurora | aurora-iopt1</code>
     * </p> </li> <li> <p>Multi-AZ DB clusters - <code>io1 | io2 | gp3</code> </p>
     * </li> </ul> <p>Default:</p> <ul> <li> <p>Aurora DB clusters -
     * <code>aurora</code> </p> </li> <li> <p>Multi-AZ DB clusters - <code>io1</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetStorageType() const { return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    template<typename StorageTypeT = Aws::String>
    void SetStorageType(StorageTypeT&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::forward<StorageTypeT>(value); }
    template<typename StorageTypeT = Aws::String>
    ModifyDBClusterRequest& WithStorageType(StorageTypeT&& value) { SetStorageType(std::forward<StorageTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to be
     * initially allocated for each DB instance in the Multi-AZ DB cluster.</p> <p>For
     * information about valid IOPS values, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Storage.html#USER_PIOPS">Amazon
     * RDS Provisioned IOPS storage</a> in the <i>Amazon RDS User Guide</i>.</p>
     * <p>Valid for Cluster Type: Multi-AZ DB clusters only</p> <p>Constraints:</p>
     * <ul> <li> <p>Must be a multiple between .5 and 50 of the storage amount for the
     * DB cluster.</p> </li> </ul>
     */
    inline int GetIops() const { return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline ModifyDBClusterRequest& WithIops(int value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether minor engine upgrades are applied automatically to the DB
     * cluster during the maintenance window. By default, minor engine upgrades are
     * applied automatically.</p> <p>Valid for Cluster Type: Aurora DB clusters and
     * Multi-AZ DB clusters.</p> <p>For more information about automatic minor version
     * upgrades, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_UpgradeDBInstance.Upgrading.html#USER_UpgradeDBInstance.Upgrading.AutoMinorVersionUpgrades">Automatically
     * upgrading the minor engine version</a>.</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const { return m_autoMinorVersionUpgrade; }
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }
    inline ModifyDBClusterRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the DB cluster. To turn off collecting Enhanced Monitoring
     * metrics, specify <code>0</code>.</p> <p>If <code>MonitoringRoleArn</code> is
     * specified, also set <code>MonitoringInterval</code> to a value other than
     * <code>0</code>.</p> <p>Valid for Cluster Type: Multi-AZ DB clusters only</p>
     * <p>Valid Values: <code>0 | 1 | 5 | 10 | 15 | 30 | 60</code> </p> <p>Default:
     * <code>0</code> </p>
     */
    inline int GetMonitoringInterval() const { return m_monitoringInterval; }
    inline bool MonitoringIntervalHasBeenSet() const { return m_monitoringIntervalHasBeenSet; }
    inline void SetMonitoringInterval(int value) { m_monitoringIntervalHasBeenSet = true; m_monitoringInterval = value; }
    inline ModifyDBClusterRequest& WithMonitoringInterval(int value) { SetMonitoringInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that permits RDS to send
     * Enhanced Monitoring metrics to Amazon CloudWatch Logs. An example is
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.html#USER_Monitoring.OS.IAMRole">To
     * create an IAM role for Amazon RDS Enhanced Monitoring</a> in the <i>Amazon RDS
     * User Guide.</i> </p> <p>If <code>MonitoringInterval</code> is set to a value
     * other than <code>0</code>, supply a <code>MonitoringRoleArn</code> value.</p>
     * <p>Valid for Cluster Type: Multi-AZ DB clusters only</p>
     */
    inline const Aws::String& GetMonitoringRoleArn() const { return m_monitoringRoleArn; }
    inline bool MonitoringRoleArnHasBeenSet() const { return m_monitoringRoleArnHasBeenSet; }
    template<typename MonitoringRoleArnT = Aws::String>
    void SetMonitoringRoleArn(MonitoringRoleArnT&& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = std::forward<MonitoringRoleArnT>(value); }
    template<typename MonitoringRoleArnT = Aws::String>
    ModifyDBClusterRequest& WithMonitoringRoleArn(MonitoringRoleArnT&& value) { SetMonitoringRoleArn(std::forward<MonitoringRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the mode of Database Insights to enable for the DB cluster.</p>
     * <p>If you change the value from <code>standard</code> to <code>advanced</code>,
     * you must set the <code>PerformanceInsightsEnabled</code> parameter to
     * <code>true</code> and the <code>PerformanceInsightsRetentionPeriod</code>
     * parameter to 465.</p> <p>If you change the value from <code>advanced</code> to
     * <code>standard</code>, you can set the <code>PerformanceInsightsEnabled</code>
     * parameter to <code>true</code> to collect detailed database counter and
     * per-query metrics.</p> <p>Valid for Cluster Type: Aurora DB clusters and
     * Multi-AZ DB clusters</p>
     */
    inline DatabaseInsightsMode GetDatabaseInsightsMode() const { return m_databaseInsightsMode; }
    inline bool DatabaseInsightsModeHasBeenSet() const { return m_databaseInsightsModeHasBeenSet; }
    inline void SetDatabaseInsightsMode(DatabaseInsightsMode value) { m_databaseInsightsModeHasBeenSet = true; m_databaseInsightsMode = value; }
    inline ModifyDBClusterRequest& WithDatabaseInsightsMode(DatabaseInsightsMode value) { SetDatabaseInsightsMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to turn on Performance Insights for the DB cluster.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights.html">
     * Using Amazon Performance Insights</a> in the <i>Amazon RDS User Guide</i>.</p>
     * <p>Valid for Cluster Type: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline bool GetEnablePerformanceInsights() const { return m_enablePerformanceInsights; }
    inline bool EnablePerformanceInsightsHasBeenSet() const { return m_enablePerformanceInsightsHasBeenSet; }
    inline void SetEnablePerformanceInsights(bool value) { m_enablePerformanceInsightsHasBeenSet = true; m_enablePerformanceInsights = value; }
    inline ModifyDBClusterRequest& WithEnablePerformanceInsights(bool value) { SetEnablePerformanceInsights(value); return *this;}
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
    inline const Aws::String& GetPerformanceInsightsKMSKeyId() const { return m_performanceInsightsKMSKeyId; }
    inline bool PerformanceInsightsKMSKeyIdHasBeenSet() const { return m_performanceInsightsKMSKeyIdHasBeenSet; }
    template<typename PerformanceInsightsKMSKeyIdT = Aws::String>
    void SetPerformanceInsightsKMSKeyId(PerformanceInsightsKMSKeyIdT&& value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId = std::forward<PerformanceInsightsKMSKeyIdT>(value); }
    template<typename PerformanceInsightsKMSKeyIdT = Aws::String>
    ModifyDBClusterRequest& WithPerformanceInsightsKMSKeyId(PerformanceInsightsKMSKeyIdT&& value) { SetPerformanceInsightsKMSKeyId(std::forward<PerformanceInsightsKMSKeyIdT>(value)); return *this;}
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
    inline int GetPerformanceInsightsRetentionPeriod() const { return m_performanceInsightsRetentionPeriod; }
    inline bool PerformanceInsightsRetentionPeriodHasBeenSet() const { return m_performanceInsightsRetentionPeriodHasBeenSet; }
    inline void SetPerformanceInsightsRetentionPeriod(int value) { m_performanceInsightsRetentionPeriodHasBeenSet = true; m_performanceInsightsRetentionPeriod = value; }
    inline ModifyDBClusterRequest& WithPerformanceInsightsRetentionPeriod(int value) { SetPerformanceInsightsRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    
    inline const ServerlessV2ScalingConfiguration& GetServerlessV2ScalingConfiguration() const { return m_serverlessV2ScalingConfiguration; }
    inline bool ServerlessV2ScalingConfigurationHasBeenSet() const { return m_serverlessV2ScalingConfigurationHasBeenSet; }
    template<typename ServerlessV2ScalingConfigurationT = ServerlessV2ScalingConfiguration>
    void SetServerlessV2ScalingConfiguration(ServerlessV2ScalingConfigurationT&& value) { m_serverlessV2ScalingConfigurationHasBeenSet = true; m_serverlessV2ScalingConfiguration = std::forward<ServerlessV2ScalingConfigurationT>(value); }
    template<typename ServerlessV2ScalingConfigurationT = ServerlessV2ScalingConfiguration>
    ModifyDBClusterRequest& WithServerlessV2ScalingConfiguration(ServerlessV2ScalingConfigurationT&& value) { SetServerlessV2ScalingConfiguration(std::forward<ServerlessV2ScalingConfigurationT>(value)); return *this;}
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
    inline const Aws::String& GetNetworkType() const { return m_networkType; }
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
    template<typename NetworkTypeT = Aws::String>
    void SetNetworkType(NetworkTypeT&& value) { m_networkTypeHasBeenSet = true; m_networkType = std::forward<NetworkTypeT>(value); }
    template<typename NetworkTypeT = Aws::String>
    ModifyDBClusterRequest& WithNetworkType(NetworkTypeT&& value) { SetNetworkType(std::forward<NetworkTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to manage the master user password with Amazon Web Services
     * Secrets Manager.</p> <p>If the DB cluster doesn't manage the master user
     * password with Amazon Web Services Secrets Manager, you can turn on this
     * management. In this case, you can't specify <code>MasterUserPassword</code>.</p>
     * <p>If the DB cluster already manages the master user password with Amazon Web
     * Services Secrets Manager, and you specify that the master user password is not
     * managed with Amazon Web Services Secrets Manager, then you must specify
     * <code>MasterUserPassword</code>. In this case, RDS deletes the secret and uses
     * the new password for the master user specified by
     * <code>MasterUserPassword</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon RDS
     * User Guide</i> and <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon Aurora
     * User Guide.</i> </p> <p>Valid for Cluster Type: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline bool GetManageMasterUserPassword() const { return m_manageMasterUserPassword; }
    inline bool ManageMasterUserPasswordHasBeenSet() const { return m_manageMasterUserPasswordHasBeenSet; }
    inline void SetManageMasterUserPassword(bool value) { m_manageMasterUserPasswordHasBeenSet = true; m_manageMasterUserPassword = value; }
    inline ModifyDBClusterRequest& WithManageMasterUserPassword(bool value) { SetManageMasterUserPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to rotate the secret managed by Amazon Web Services Secrets
     * Manager for the master user password.</p> <p>This setting is valid only if the
     * master user password is managed by RDS in Amazon Web Services Secrets Manager
     * for the DB cluster. The secret value contains the updated password.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon RDS
     * User Guide</i> and <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon Aurora
     * User Guide.</i> </p> <p>Valid for Cluster Type: Aurora DB clusters and Multi-AZ
     * DB clusters</p> <p>Constraints:</p> <ul> <li> <p>You must apply the change
     * immediately when rotating the master user password.</p> </li> </ul>
     */
    inline bool GetRotateMasterUserPassword() const { return m_rotateMasterUserPassword; }
    inline bool RotateMasterUserPasswordHasBeenSet() const { return m_rotateMasterUserPasswordHasBeenSet; }
    inline void SetRotateMasterUserPassword(bool value) { m_rotateMasterUserPasswordHasBeenSet = true; m_rotateMasterUserPassword = value; }
    inline ModifyDBClusterRequest& WithRotateMasterUserPassword(bool value) { SetRotateMasterUserPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS key identifier to encrypt a secret that is
     * automatically generated and managed in Amazon Web Services Secrets Manager.</p>
     * <p>This setting is valid only if both of the following conditions are met:</p>
     * <ul> <li> <p>The DB cluster doesn't manage the master user password in Amazon
     * Web Services Secrets Manager.</p> <p>If the DB cluster already manages the
     * master user password in Amazon Web Services Secrets Manager, you can't change
     * the KMS key that is used to encrypt the secret.</p> </li> <li> <p>You are
     * turning on <code>ManageMasterUserPassword</code> to manage the master user
     * password in Amazon Web Services Secrets Manager.</p> <p>If you are turning on
     * <code>ManageMasterUserPassword</code> and don't specify
     * <code>MasterUserSecretKmsKeyId</code>, then the <code>aws/secretsmanager</code>
     * KMS key is used to encrypt the secret. If the secret is in a different Amazon
     * Web Services account, then you can't use the <code>aws/secretsmanager</code> KMS
     * key to encrypt the secret, and you must use a customer managed KMS key.</p>
     * </li> </ul> <p>The Amazon Web Services KMS key identifier is the key ARN, key
     * ID, alias ARN, or alias name for the KMS key. To use a KMS key in a different
     * Amazon Web Services account, specify the key ARN or alias ARN.</p> <p>There is a
     * default KMS key for your Amazon Web Services account. Your Amazon Web Services
     * account has a different default KMS key for each Amazon Web Services Region.</p>
     * <p>Valid for Cluster Type: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline const Aws::String& GetMasterUserSecretKmsKeyId() const { return m_masterUserSecretKmsKeyId; }
    inline bool MasterUserSecretKmsKeyIdHasBeenSet() const { return m_masterUserSecretKmsKeyIdHasBeenSet; }
    template<typename MasterUserSecretKmsKeyIdT = Aws::String>
    void SetMasterUserSecretKmsKeyId(MasterUserSecretKmsKeyIdT&& value) { m_masterUserSecretKmsKeyIdHasBeenSet = true; m_masterUserSecretKmsKeyId = std::forward<MasterUserSecretKmsKeyIdT>(value); }
    template<typename MasterUserSecretKmsKeyIdT = Aws::String>
    ModifyDBClusterRequest& WithMasterUserSecretKmsKeyId(MasterUserSecretKmsKeyIdT&& value) { SetMasterUserSecretKmsKeyId(std::forward<MasterUserSecretKmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DB engine mode of the DB cluster, either <code>provisioned</code> or
     * <code>serverless</code>.</p>  <p>The DB engine mode can be modified only
     * from <code>serverless</code> to <code>provisioned</code>.</p>  <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_CreateDBCluster.html">
     * CreateDBCluster</a>.</p> <p>Valid for Cluster Type: Aurora DB clusters only</p>
     */
    inline const Aws::String& GetEngineMode() const { return m_engineMode; }
    inline bool EngineModeHasBeenSet() const { return m_engineModeHasBeenSet; }
    template<typename EngineModeT = Aws::String>
    void SetEngineMode(EngineModeT&& value) { m_engineModeHasBeenSet = true; m_engineMode = std::forward<EngineModeT>(value); }
    template<typename EngineModeT = Aws::String>
    ModifyDBClusterRequest& WithEngineMode(EngineModeT&& value) { SetEngineMode(std::forward<EngineModeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether engine mode changes from <code>serverless</code> to
     * <code>provisioned</code> are allowed.</p> <p>Valid for Cluster Type: Aurora
     * Serverless v1 DB clusters only</p> <p>Constraints:</p> <ul> <li> <p>You must
     * allow engine mode changes when specifying a different value for the
     * <code>EngineMode</code> parameter from the DB cluster's current engine mode.</p>
     * </li> </ul>
     */
    inline bool GetAllowEngineModeChange() const { return m_allowEngineModeChange; }
    inline bool AllowEngineModeChangeHasBeenSet() const { return m_allowEngineModeChangeHasBeenSet; }
    inline void SetAllowEngineModeChange(bool value) { m_allowEngineModeChangeHasBeenSet = true; m_allowEngineModeChange = value; }
    inline ModifyDBClusterRequest& WithAllowEngineModeChange(bool value) { SetAllowEngineModeChange(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether read replicas can forward write operations to the writer DB
     * instance in the DB cluster. By default, write operations aren't allowed on
     * reader DB instances.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline bool GetEnableLocalWriteForwarding() const { return m_enableLocalWriteForwarding; }
    inline bool EnableLocalWriteForwardingHasBeenSet() const { return m_enableLocalWriteForwardingHasBeenSet; }
    inline void SetEnableLocalWriteForwarding(bool value) { m_enableLocalWriteForwardingHasBeenSet = true; m_enableLocalWriteForwarding = value; }
    inline ModifyDBClusterRequest& WithEnableLocalWriteForwarding(bool value) { SetEnableLocalWriteForwarding(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the recovery point in Amazon Web Services
     * Backup.</p>
     */
    inline const Aws::String& GetAwsBackupRecoveryPointArn() const { return m_awsBackupRecoveryPointArn; }
    inline bool AwsBackupRecoveryPointArnHasBeenSet() const { return m_awsBackupRecoveryPointArnHasBeenSet; }
    template<typename AwsBackupRecoveryPointArnT = Aws::String>
    void SetAwsBackupRecoveryPointArn(AwsBackupRecoveryPointArnT&& value) { m_awsBackupRecoveryPointArnHasBeenSet = true; m_awsBackupRecoveryPointArn = std::forward<AwsBackupRecoveryPointArnT>(value); }
    template<typename AwsBackupRecoveryPointArnT = Aws::String>
    ModifyDBClusterRequest& WithAwsBackupRecoveryPointArn(AwsBackupRecoveryPointArnT&& value) { SetAwsBackupRecoveryPointArn(std::forward<AwsBackupRecoveryPointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable Aurora Limitless Database. You must enable Aurora
     * Limitless Database to create a DB shard group.</p> <p>Valid for: Aurora DB
     * clusters only</p>  <p>This setting is no longer used. Instead use the
     * <code>ClusterScalabilityType</code> setting when you create your Aurora
     * Limitless Database DB cluster.</p> 
     */
    inline bool GetEnableLimitlessDatabase() const { return m_enableLimitlessDatabase; }
    inline bool EnableLimitlessDatabaseHasBeenSet() const { return m_enableLimitlessDatabaseHasBeenSet; }
    inline void SetEnableLimitlessDatabase(bool value) { m_enableLimitlessDatabaseHasBeenSet = true; m_enableLimitlessDatabase = value; }
    inline ModifyDBClusterRequest& WithEnableLimitlessDatabase(bool value) { SetEnableLimitlessDatabase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CA certificate identifier to use for the DB cluster's server
     * certificate.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/UsingWithRDS.SSL.html">Using
     * SSL/TLS to encrypt a connection to a DB instance</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>Valid for Cluster Type: Multi-AZ DB clusters</p>
     */
    inline const Aws::String& GetCACertificateIdentifier() const { return m_cACertificateIdentifier; }
    inline bool CACertificateIdentifierHasBeenSet() const { return m_cACertificateIdentifierHasBeenSet; }
    template<typename CACertificateIdentifierT = Aws::String>
    void SetCACertificateIdentifier(CACertificateIdentifierT&& value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier = std::forward<CACertificateIdentifierT>(value); }
    template<typename CACertificateIdentifierT = Aws::String>
    ModifyDBClusterRequest& WithCACertificateIdentifier(CACertificateIdentifierT&& value) { SetCACertificateIdentifier(std::forward<CACertificateIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the authentication type for the master user. With IAM master user
     * authentication, you can change the master DB user to use IAM database
     * authentication.</p> <p>You can specify one of the following values:</p> <ul>
     * <li> <p> <code>password</code> - Use standard database authentication with a
     * password.</p> </li> <li> <p> <code>iam-db-auth</code> - Use IAM database
     * authentication for the master user.</p> </li> </ul> <p>Valid for Cluster Type:
     * Aurora DB clusters and Multi-AZ DB clusters</p> <p>This option is only valid for
     * RDS for PostgreSQL and Aurora PostgreSQL engines.</p>
     */
    inline MasterUserAuthenticationType GetMasterUserAuthenticationType() const { return m_masterUserAuthenticationType; }
    inline bool MasterUserAuthenticationTypeHasBeenSet() const { return m_masterUserAuthenticationTypeHasBeenSet; }
    inline void SetMasterUserAuthenticationType(MasterUserAuthenticationType value) { m_masterUserAuthenticationTypeHasBeenSet = true; m_masterUserAuthenticationType = value; }
    inline ModifyDBClusterRequest& WithMasterUserAuthenticationType(MasterUserAuthenticationType value) { SetMasterUserAuthenticationType(value); return *this;}
    ///@}
  private:

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;

    Aws::String m_newDBClusterIdentifier;
    bool m_newDBClusterIdentifierHasBeenSet = false;

    bool m_applyImmediately{false};
    bool m_applyImmediatelyHasBeenSet = false;

    int m_backupRetentionPeriod{0};
    bool m_backupRetentionPeriodHasBeenSet = false;

    Aws::String m_dBClusterParameterGroupName;
    bool m_dBClusterParameterGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet = false;

    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet = false;

    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    bool m_enableIAMDatabaseAuthentication{false};
    bool m_enableIAMDatabaseAuthenticationHasBeenSet = false;

    long long m_backtrackWindow{0};
    bool m_backtrackWindowHasBeenSet = false;

    CloudwatchLogsExportConfiguration m_cloudwatchLogsExportConfiguration;
    bool m_cloudwatchLogsExportConfigurationHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    bool m_allowMajorVersionUpgrade{false};
    bool m_allowMajorVersionUpgradeHasBeenSet = false;

    Aws::String m_dBInstanceParameterGroupName;
    bool m_dBInstanceParameterGroupNameHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_domainIAMRoleName;
    bool m_domainIAMRoleNameHasBeenSet = false;

    ScalingConfiguration m_scalingConfiguration;
    bool m_scalingConfigurationHasBeenSet = false;

    bool m_deletionProtection{false};
    bool m_deletionProtectionHasBeenSet = false;

    bool m_enableHttpEndpoint{false};
    bool m_enableHttpEndpointHasBeenSet = false;

    bool m_copyTagsToSnapshot{false};
    bool m_copyTagsToSnapshotHasBeenSet = false;

    bool m_enableGlobalWriteForwarding{false};
    bool m_enableGlobalWriteForwardingHasBeenSet = false;

    Aws::String m_dBClusterInstanceClass;
    bool m_dBClusterInstanceClassHasBeenSet = false;

    int m_allocatedStorage{0};
    bool m_allocatedStorageHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    int m_iops{0};
    bool m_iopsHasBeenSet = false;

    bool m_autoMinorVersionUpgrade{false};
    bool m_autoMinorVersionUpgradeHasBeenSet = false;

    int m_monitoringInterval{0};
    bool m_monitoringIntervalHasBeenSet = false;

    Aws::String m_monitoringRoleArn;
    bool m_monitoringRoleArnHasBeenSet = false;

    DatabaseInsightsMode m_databaseInsightsMode{DatabaseInsightsMode::NOT_SET};
    bool m_databaseInsightsModeHasBeenSet = false;

    bool m_enablePerformanceInsights{false};
    bool m_enablePerformanceInsightsHasBeenSet = false;

    Aws::String m_performanceInsightsKMSKeyId;
    bool m_performanceInsightsKMSKeyIdHasBeenSet = false;

    int m_performanceInsightsRetentionPeriod{0};
    bool m_performanceInsightsRetentionPeriodHasBeenSet = false;

    ServerlessV2ScalingConfiguration m_serverlessV2ScalingConfiguration;
    bool m_serverlessV2ScalingConfigurationHasBeenSet = false;

    Aws::String m_networkType;
    bool m_networkTypeHasBeenSet = false;

    bool m_manageMasterUserPassword{false};
    bool m_manageMasterUserPasswordHasBeenSet = false;

    bool m_rotateMasterUserPassword{false};
    bool m_rotateMasterUserPasswordHasBeenSet = false;

    Aws::String m_masterUserSecretKmsKeyId;
    bool m_masterUserSecretKmsKeyIdHasBeenSet = false;

    Aws::String m_engineMode;
    bool m_engineModeHasBeenSet = false;

    bool m_allowEngineModeChange{false};
    bool m_allowEngineModeChangeHasBeenSet = false;

    bool m_enableLocalWriteForwarding{false};
    bool m_enableLocalWriteForwardingHasBeenSet = false;

    Aws::String m_awsBackupRecoveryPointArn;
    bool m_awsBackupRecoveryPointArnHasBeenSet = false;

    bool m_enableLimitlessDatabase{false};
    bool m_enableLimitlessDatabaseHasBeenSet = false;

    Aws::String m_cACertificateIdentifier;
    bool m_cACertificateIdentifierHasBeenSet = false;

    MasterUserAuthenticationType m_masterUserAuthenticationType{MasterUserAuthenticationType::NOT_SET};
    bool m_masterUserAuthenticationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
