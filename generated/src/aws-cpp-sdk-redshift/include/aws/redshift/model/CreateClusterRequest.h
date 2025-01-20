/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/AquaConfigurationStatus.h>
#include <aws/redshift/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/CreateClusterMessage">AWS
   * API Reference</a></p>
   */
  class CreateClusterRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API CreateClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCluster"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the first database to be created when the cluster is created.</p>
     * <p>To create additional databases after the cluster is created, connect to the
     * cluster with a SQL client and use SQL commands to create a database. For more
     * information, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/dg/t_creating_database.html">Create
     * a Database</a> in the Amazon Redshift Database Developer Guide. </p> <p>Default:
     * <code>dev</code> </p> <p>Constraints:</p> <ul> <li> <p>Must contain 1 to 64
     * alphanumeric characters.</p> </li> <li> <p>Must contain only lowercase
     * letters.</p> </li> <li> <p>Cannot be a word that is reserved by the service. A
     * list of reserved words can be found in <a
     * href="https://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words</a> in the Amazon Redshift Database Developer Guide. </p> </li> </ul>
     */
    inline const Aws::String& GetDBName() const{ return m_dBName; }
    inline bool DBNameHasBeenSet() const { return m_dBNameHasBeenSet; }
    inline void SetDBName(const Aws::String& value) { m_dBNameHasBeenSet = true; m_dBName = value; }
    inline void SetDBName(Aws::String&& value) { m_dBNameHasBeenSet = true; m_dBName = std::move(value); }
    inline void SetDBName(const char* value) { m_dBNameHasBeenSet = true; m_dBName.assign(value); }
    inline CreateClusterRequest& WithDBName(const Aws::String& value) { SetDBName(value); return *this;}
    inline CreateClusterRequest& WithDBName(Aws::String&& value) { SetDBName(std::move(value)); return *this;}
    inline CreateClusterRequest& WithDBName(const char* value) { SetDBName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the cluster. You use this identifier to refer to the
     * cluster for any subsequent cluster operations such as deleting or modifying. The
     * identifier also appears in the Amazon Redshift console.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must contain from 1 to 63 alphanumeric characters or hyphens.</p>
     * </li> <li> <p>Alphabetic characters must be lowercase.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> <li> <p>Must be unique for all
     * clusters within an Amazon Web Services account.</p> </li> </ul> <p>Example:
     * <code>myexamplecluster</code> </p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }
    inline CreateClusterRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}
    inline CreateClusterRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}
    inline CreateClusterRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the cluster. When cluster type is specified as</p> <ul> <li> <p>
     * <code>single-node</code>, the <b>NumberOfNodes</b> parameter is not
     * required.</p> </li> <li> <p> <code>multi-node</code>, the <b>NumberOfNodes</b>
     * parameter is required.</p> </li> </ul> <p>Valid Values: <code>multi-node</code>
     * | <code>single-node</code> </p> <p>Default: <code>multi-node</code> </p>
     */
    inline const Aws::String& GetClusterType() const{ return m_clusterType; }
    inline bool ClusterTypeHasBeenSet() const { return m_clusterTypeHasBeenSet; }
    inline void SetClusterType(const Aws::String& value) { m_clusterTypeHasBeenSet = true; m_clusterType = value; }
    inline void SetClusterType(Aws::String&& value) { m_clusterTypeHasBeenSet = true; m_clusterType = std::move(value); }
    inline void SetClusterType(const char* value) { m_clusterTypeHasBeenSet = true; m_clusterType.assign(value); }
    inline CreateClusterRequest& WithClusterType(const Aws::String& value) { SetClusterType(value); return *this;}
    inline CreateClusterRequest& WithClusterType(Aws::String&& value) { SetClusterType(std::move(value)); return *this;}
    inline CreateClusterRequest& WithClusterType(const char* value) { SetClusterType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node type to be provisioned for the cluster. For information about node
     * types, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html#how-many-nodes">
     * Working with Clusters</a> in the <i>Amazon Redshift Cluster Management
     * Guide</i>. </p> <p>Valid Values: <code>dc2.large</code> |
     * <code>dc2.8xlarge</code> | <code>ra3.large</code> | <code>ra3.xlplus</code> |
     * <code>ra3.4xlarge</code> | <code>ra3.16xlarge</code> </p>
     */
    inline const Aws::String& GetNodeType() const{ return m_nodeType; }
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
    inline void SetNodeType(const Aws::String& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }
    inline void SetNodeType(Aws::String&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::move(value); }
    inline void SetNodeType(const char* value) { m_nodeTypeHasBeenSet = true; m_nodeType.assign(value); }
    inline CreateClusterRequest& WithNodeType(const Aws::String& value) { SetNodeType(value); return *this;}
    inline CreateClusterRequest& WithNodeType(Aws::String&& value) { SetNodeType(std::move(value)); return *this;}
    inline CreateClusterRequest& WithNodeType(const char* value) { SetNodeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user name associated with the admin user account for the cluster that is
     * being created.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 - 128 alphanumeric
     * characters or hyphens. The user name can't be <code>PUBLIC</code>.</p> </li>
     * <li> <p>Must contain only lowercase letters, numbers, underscore, plus sign,
     * period (dot), at symbol (@), or hyphen.</p> </li> <li> <p>The first character
     * must be a letter.</p> </li> <li> <p>Must not contain a colon (:) or a slash
     * (/).</p> </li> <li> <p>Cannot be a reserved word. A list of reserved words can
     * be found in <a
     * href="https://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words</a> in the Amazon Redshift Database Developer Guide. </p> </li> </ul>
     */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }
    inline void SetMasterUsername(Aws::String&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::move(value); }
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }
    inline CreateClusterRequest& WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}
    inline CreateClusterRequest& WithMasterUsername(Aws::String&& value) { SetMasterUsername(std::move(value)); return *this;}
    inline CreateClusterRequest& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password associated with the admin user account for the cluster that is
     * being created.</p> <p>You can't use <code>MasterUserPassword</code> if
     * <code>ManageMasterPassword</code> is <code>true</code>.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must be between 8 and 64 characters in length.</p> </li> <li>
     * <p>Must contain at least one uppercase letter.</p> </li> <li> <p>Must contain at
     * least one lowercase letter.</p> </li> <li> <p>Must contain one number.</p> </li>
     * <li> <p>Can be any printable ASCII character (ASCII code 33-126) except
     * <code>'</code> (single quote), <code>"</code> (double quote), <code>\</code>,
     * <code>/</code>, or <code>@</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetMasterUserPassword() const{ return m_masterUserPassword; }
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }
    inline void SetMasterUserPassword(const Aws::String& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }
    inline void SetMasterUserPassword(Aws::String&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::move(value); }
    inline void SetMasterUserPassword(const char* value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword.assign(value); }
    inline CreateClusterRequest& WithMasterUserPassword(const Aws::String& value) { SetMasterUserPassword(value); return *this;}
    inline CreateClusterRequest& WithMasterUserPassword(Aws::String&& value) { SetMasterUserPassword(std::move(value)); return *this;}
    inline CreateClusterRequest& WithMasterUserPassword(const char* value) { SetMasterUserPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of security groups to be associated with this cluster.</p> <p>Default:
     * The default cluster security group for Amazon Redshift.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClusterSecurityGroups() const{ return m_clusterSecurityGroups; }
    inline bool ClusterSecurityGroupsHasBeenSet() const { return m_clusterSecurityGroupsHasBeenSet; }
    inline void SetClusterSecurityGroups(const Aws::Vector<Aws::String>& value) { m_clusterSecurityGroupsHasBeenSet = true; m_clusterSecurityGroups = value; }
    inline void SetClusterSecurityGroups(Aws::Vector<Aws::String>&& value) { m_clusterSecurityGroupsHasBeenSet = true; m_clusterSecurityGroups = std::move(value); }
    inline CreateClusterRequest& WithClusterSecurityGroups(const Aws::Vector<Aws::String>& value) { SetClusterSecurityGroups(value); return *this;}
    inline CreateClusterRequest& WithClusterSecurityGroups(Aws::Vector<Aws::String>&& value) { SetClusterSecurityGroups(std::move(value)); return *this;}
    inline CreateClusterRequest& AddClusterSecurityGroups(const Aws::String& value) { m_clusterSecurityGroupsHasBeenSet = true; m_clusterSecurityGroups.push_back(value); return *this; }
    inline CreateClusterRequest& AddClusterSecurityGroups(Aws::String&& value) { m_clusterSecurityGroupsHasBeenSet = true; m_clusterSecurityGroups.push_back(std::move(value)); return *this; }
    inline CreateClusterRequest& AddClusterSecurityGroups(const char* value) { m_clusterSecurityGroupsHasBeenSet = true; m_clusterSecurityGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of Virtual Private Cloud (VPC) security groups to be associated with
     * the cluster.</p> <p>Default: The default VPC security group is associated with
     * the cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }
    inline CreateClusterRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}
    inline CreateClusterRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}
    inline CreateClusterRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }
    inline CreateClusterRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }
    inline CreateClusterRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of a cluster subnet group to be associated with this cluster.</p>
     * <p>If this parameter is not provided the resulting cluster will be deployed
     * outside virtual private cloud (VPC).</p>
     */
    inline const Aws::String& GetClusterSubnetGroupName() const{ return m_clusterSubnetGroupName; }
    inline bool ClusterSubnetGroupNameHasBeenSet() const { return m_clusterSubnetGroupNameHasBeenSet; }
    inline void SetClusterSubnetGroupName(const Aws::String& value) { m_clusterSubnetGroupNameHasBeenSet = true; m_clusterSubnetGroupName = value; }
    inline void SetClusterSubnetGroupName(Aws::String&& value) { m_clusterSubnetGroupNameHasBeenSet = true; m_clusterSubnetGroupName = std::move(value); }
    inline void SetClusterSubnetGroupName(const char* value) { m_clusterSubnetGroupNameHasBeenSet = true; m_clusterSubnetGroupName.assign(value); }
    inline CreateClusterRequest& WithClusterSubnetGroupName(const Aws::String& value) { SetClusterSubnetGroupName(value); return *this;}
    inline CreateClusterRequest& WithClusterSubnetGroupName(Aws::String&& value) { SetClusterSubnetGroupName(std::move(value)); return *this;}
    inline CreateClusterRequest& WithClusterSubnetGroupName(const char* value) { SetClusterSubnetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EC2 Availability Zone (AZ) in which you want Amazon Redshift to provision
     * the cluster. For example, if you have several EC2 instances running in a
     * specific Availability Zone, then you might want the cluster to be provisioned in
     * the same zone in order to decrease network latency.</p> <p>Default: A random,
     * system-chosen Availability Zone in the region that is specified by the
     * endpoint.</p> <p>Example: <code>us-east-2d</code> </p> <p>Constraint: The
     * specified Availability Zone must be in the same region as the current
     * endpoint.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline CreateClusterRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline CreateClusterRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline CreateClusterRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The weekly time range (in UTC) during which automated cluster maintenance can
     * occur.</p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p> <p> Default: A
     * 30-minute window selected at random from an 8-hour block of time per region,
     * occurring on a random day of the week. For more information about the time
     * blocks for each region, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html#rs-maintenance-windows">Maintenance
     * Windows</a> in Amazon Redshift Cluster Management Guide.</p> <p>Valid Days: Mon
     * | Tue | Wed | Thu | Fri | Sat | Sun</p> <p>Constraints: Minimum 30-minute
     * window.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }
    inline CreateClusterRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}
    inline CreateClusterRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}
    inline CreateClusterRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the parameter group to be associated with this cluster.</p>
     * <p>Default: The default Amazon Redshift cluster parameter group. For information
     * about the default parameter group, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Working
     * with Amazon Redshift Parameter Groups</a> </p> <p>Constraints:</p> <ul> <li>
     * <p>Must be 1 to 255 alphanumeric characters or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> </ul>
     */
    inline const Aws::String& GetClusterParameterGroupName() const{ return m_clusterParameterGroupName; }
    inline bool ClusterParameterGroupNameHasBeenSet() const { return m_clusterParameterGroupNameHasBeenSet; }
    inline void SetClusterParameterGroupName(const Aws::String& value) { m_clusterParameterGroupNameHasBeenSet = true; m_clusterParameterGroupName = value; }
    inline void SetClusterParameterGroupName(Aws::String&& value) { m_clusterParameterGroupNameHasBeenSet = true; m_clusterParameterGroupName = std::move(value); }
    inline void SetClusterParameterGroupName(const char* value) { m_clusterParameterGroupNameHasBeenSet = true; m_clusterParameterGroupName.assign(value); }
    inline CreateClusterRequest& WithClusterParameterGroupName(const Aws::String& value) { SetClusterParameterGroupName(value); return *this;}
    inline CreateClusterRequest& WithClusterParameterGroupName(Aws::String&& value) { SetClusterParameterGroupName(std::move(value)); return *this;}
    inline CreateClusterRequest& WithClusterParameterGroupName(const char* value) { SetClusterParameterGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days that automated snapshots are retained. If the value is 0,
     * automated snapshots are disabled. Even if automated snapshots are disabled, you
     * can still create manual snapshots when you want with
     * <a>CreateClusterSnapshot</a>. </p> <p>You can't disable automated snapshots for
     * RA3 node types. Set the automated retention period from 1-35 days.</p>
     * <p>Default: <code>1</code> </p> <p>Constraints: Must be a value from 0 to
     * 35.</p>
     */
    inline int GetAutomatedSnapshotRetentionPeriod() const{ return m_automatedSnapshotRetentionPeriod; }
    inline bool AutomatedSnapshotRetentionPeriodHasBeenSet() const { return m_automatedSnapshotRetentionPeriodHasBeenSet; }
    inline void SetAutomatedSnapshotRetentionPeriod(int value) { m_automatedSnapshotRetentionPeriodHasBeenSet = true; m_automatedSnapshotRetentionPeriod = value; }
    inline CreateClusterRequest& WithAutomatedSnapshotRetentionPeriod(int value) { SetAutomatedSnapshotRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default number of days to retain a manual snapshot. If the value is -1,
     * the snapshot is retained indefinitely. This setting doesn't change the retention
     * period of existing snapshots.</p> <p>The value must be either -1 or an integer
     * between 1 and 3,653.</p>
     */
    inline int GetManualSnapshotRetentionPeriod() const{ return m_manualSnapshotRetentionPeriod; }
    inline bool ManualSnapshotRetentionPeriodHasBeenSet() const { return m_manualSnapshotRetentionPeriodHasBeenSet; }
    inline void SetManualSnapshotRetentionPeriod(int value) { m_manualSnapshotRetentionPeriodHasBeenSet = true; m_manualSnapshotRetentionPeriod = value; }
    inline CreateClusterRequest& WithManualSnapshotRetentionPeriod(int value) { SetManualSnapshotRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number on which the cluster accepts incoming connections.</p> <p>The
     * cluster is accessible only via the JDBC and ODBC connection strings. Part of the
     * connection string requires the port on which the cluster will listen for
     * incoming connections.</p> <p>Default: <code>5439</code> </p> <p>Valid Values:
     * </p> <ul> <li> <p>For clusters with ra3 nodes - Select a port within the ranges
     * <code>5431-5455</code> or <code>8191-8215</code>. (If you have an existing
     * cluster with ra3 nodes, it isn't required that you change the port to these
     * ranges.)</p> </li> <li> <p>For clusters with dc2 nodes - Select a port within
     * the range <code>1150-65535</code>.</p> </li> </ul>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline CreateClusterRequest& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Amazon Redshift engine software that you want to deploy on
     * the cluster.</p> <p>The version selected runs on all the nodes in the
     * cluster.</p> <p>Constraints: Only version 1.0 is currently available.</p>
     * <p>Example: <code>1.0</code> </p>
     */
    inline const Aws::String& GetClusterVersion() const{ return m_clusterVersion; }
    inline bool ClusterVersionHasBeenSet() const { return m_clusterVersionHasBeenSet; }
    inline void SetClusterVersion(const Aws::String& value) { m_clusterVersionHasBeenSet = true; m_clusterVersion = value; }
    inline void SetClusterVersion(Aws::String&& value) { m_clusterVersionHasBeenSet = true; m_clusterVersion = std::move(value); }
    inline void SetClusterVersion(const char* value) { m_clusterVersionHasBeenSet = true; m_clusterVersion.assign(value); }
    inline CreateClusterRequest& WithClusterVersion(const Aws::String& value) { SetClusterVersion(value); return *this;}
    inline CreateClusterRequest& WithClusterVersion(Aws::String&& value) { SetClusterVersion(std::move(value)); return *this;}
    inline CreateClusterRequest& WithClusterVersion(const char* value) { SetClusterVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>true</code>, major version upgrades can be applied during the
     * maintenance window to the Amazon Redshift engine that is running on the
     * cluster.</p> <p>When a new major version of the Amazon Redshift engine is
     * released, you can request that the service automatically apply upgrades during
     * the maintenance window to the Amazon Redshift engine that is running on your
     * cluster.</p> <p>Default: <code>true</code> </p>
     */
    inline bool GetAllowVersionUpgrade() const{ return m_allowVersionUpgrade; }
    inline bool AllowVersionUpgradeHasBeenSet() const { return m_allowVersionUpgradeHasBeenSet; }
    inline void SetAllowVersionUpgrade(bool value) { m_allowVersionUpgradeHasBeenSet = true; m_allowVersionUpgrade = value; }
    inline CreateClusterRequest& WithAllowVersionUpgrade(bool value) { SetAllowVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of compute nodes in the cluster. This parameter is required when
     * the <b>ClusterType</b> parameter is specified as <code>multi-node</code>. </p>
     * <p>For information about determining how many nodes you need, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html#how-many-nodes">
     * Working with Clusters</a> in the <i>Amazon Redshift Cluster Management
     * Guide</i>. </p> <p>If you don't specify this parameter, you get a single-node
     * cluster. When requesting a multi-node cluster, you must specify the number of
     * nodes that you want in the cluster.</p> <p>Default: <code>1</code> </p>
     * <p>Constraints: Value must be at least 1 and no more than 100.</p>
     */
    inline int GetNumberOfNodes() const{ return m_numberOfNodes; }
    inline bool NumberOfNodesHasBeenSet() const { return m_numberOfNodesHasBeenSet; }
    inline void SetNumberOfNodes(int value) { m_numberOfNodesHasBeenSet = true; m_numberOfNodes = value; }
    inline CreateClusterRequest& WithNumberOfNodes(int value) { SetNumberOfNodes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>true</code>, the cluster can be accessed from a public network. </p>
     * <p>Default: false</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline CreateClusterRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>true</code>, the data in the cluster is encrypted at rest. If you
     * set the value on this parameter to <code>false</code>, the request will
     * fail.</p> <p>Default: true</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline CreateClusterRequest& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the HSM client certificate the Amazon Redshift cluster
     * uses to retrieve the data encryption keys stored in an HSM.</p>
     */
    inline const Aws::String& GetHsmClientCertificateIdentifier() const{ return m_hsmClientCertificateIdentifier; }
    inline bool HsmClientCertificateIdentifierHasBeenSet() const { return m_hsmClientCertificateIdentifierHasBeenSet; }
    inline void SetHsmClientCertificateIdentifier(const Aws::String& value) { m_hsmClientCertificateIdentifierHasBeenSet = true; m_hsmClientCertificateIdentifier = value; }
    inline void SetHsmClientCertificateIdentifier(Aws::String&& value) { m_hsmClientCertificateIdentifierHasBeenSet = true; m_hsmClientCertificateIdentifier = std::move(value); }
    inline void SetHsmClientCertificateIdentifier(const char* value) { m_hsmClientCertificateIdentifierHasBeenSet = true; m_hsmClientCertificateIdentifier.assign(value); }
    inline CreateClusterRequest& WithHsmClientCertificateIdentifier(const Aws::String& value) { SetHsmClientCertificateIdentifier(value); return *this;}
    inline CreateClusterRequest& WithHsmClientCertificateIdentifier(Aws::String&& value) { SetHsmClientCertificateIdentifier(std::move(value)); return *this;}
    inline CreateClusterRequest& WithHsmClientCertificateIdentifier(const char* value) { SetHsmClientCertificateIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the HSM configuration that contains the information the
     * Amazon Redshift cluster can use to retrieve and store keys in an HSM.</p>
     */
    inline const Aws::String& GetHsmConfigurationIdentifier() const{ return m_hsmConfigurationIdentifier; }
    inline bool HsmConfigurationIdentifierHasBeenSet() const { return m_hsmConfigurationIdentifierHasBeenSet; }
    inline void SetHsmConfigurationIdentifier(const Aws::String& value) { m_hsmConfigurationIdentifierHasBeenSet = true; m_hsmConfigurationIdentifier = value; }
    inline void SetHsmConfigurationIdentifier(Aws::String&& value) { m_hsmConfigurationIdentifierHasBeenSet = true; m_hsmConfigurationIdentifier = std::move(value); }
    inline void SetHsmConfigurationIdentifier(const char* value) { m_hsmConfigurationIdentifierHasBeenSet = true; m_hsmConfigurationIdentifier.assign(value); }
    inline CreateClusterRequest& WithHsmConfigurationIdentifier(const Aws::String& value) { SetHsmConfigurationIdentifier(value); return *this;}
    inline CreateClusterRequest& WithHsmConfigurationIdentifier(Aws::String&& value) { SetHsmConfigurationIdentifier(std::move(value)); return *this;}
    inline CreateClusterRequest& WithHsmConfigurationIdentifier(const char* value) { SetHsmConfigurationIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Elastic IP (EIP) address for the cluster.</p> <p>Constraints: The cluster
     * must be provisioned in EC2-VPC and publicly-accessible through an Internet
     * gateway. Don't specify the Elastic IP address for a publicly accessible cluster
     * with availability zone relocation turned on. For more information about
     * provisioning clusters in EC2-VPC, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html#cluster-platforms">Supported
     * Platforms to Launch Your Cluster</a> in the Amazon Redshift Cluster Management
     * Guide.</p>
     */
    inline const Aws::String& GetElasticIp() const{ return m_elasticIp; }
    inline bool ElasticIpHasBeenSet() const { return m_elasticIpHasBeenSet; }
    inline void SetElasticIp(const Aws::String& value) { m_elasticIpHasBeenSet = true; m_elasticIp = value; }
    inline void SetElasticIp(Aws::String&& value) { m_elasticIpHasBeenSet = true; m_elasticIp = std::move(value); }
    inline void SetElasticIp(const char* value) { m_elasticIpHasBeenSet = true; m_elasticIp.assign(value); }
    inline CreateClusterRequest& WithElasticIp(const Aws::String& value) { SetElasticIp(value); return *this;}
    inline CreateClusterRequest& WithElasticIp(Aws::String&& value) { SetElasticIp(std::move(value)); return *this;}
    inline CreateClusterRequest& WithElasticIp(const char* value) { SetElasticIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tag instances.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateClusterRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateClusterRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateClusterRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateClusterRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Key Management Service (KMS) key ID of the encryption key that you want
     * to use to encrypt data in the cluster.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline CreateClusterRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline CreateClusterRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline CreateClusterRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An option that specifies whether to create the cluster with enhanced VPC
     * routing enabled. To create a cluster that uses enhanced VPC routing, the cluster
     * must be in a VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/enhanced-vpc-routing.html">Enhanced
     * VPC Routing</a> in the Amazon Redshift Cluster Management Guide.</p> <p>If this
     * option is <code>true</code>, enhanced VPC routing is enabled. </p> <p>Default:
     * false</p>
     */
    inline bool GetEnhancedVpcRouting() const{ return m_enhancedVpcRouting; }
    inline bool EnhancedVpcRoutingHasBeenSet() const { return m_enhancedVpcRoutingHasBeenSet; }
    inline void SetEnhancedVpcRouting(bool value) { m_enhancedVpcRoutingHasBeenSet = true; m_enhancedVpcRouting = value; }
    inline CreateClusterRequest& WithEnhancedVpcRouting(bool value) { SetEnhancedVpcRouting(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved.</p>
     */
    inline const Aws::String& GetAdditionalInfo() const{ return m_additionalInfo; }
    inline bool AdditionalInfoHasBeenSet() const { return m_additionalInfoHasBeenSet; }
    inline void SetAdditionalInfo(const Aws::String& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = value; }
    inline void SetAdditionalInfo(Aws::String&& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = std::move(value); }
    inline void SetAdditionalInfo(const char* value) { m_additionalInfoHasBeenSet = true; m_additionalInfo.assign(value); }
    inline CreateClusterRequest& WithAdditionalInfo(const Aws::String& value) { SetAdditionalInfo(value); return *this;}
    inline CreateClusterRequest& WithAdditionalInfo(Aws::String&& value) { SetAdditionalInfo(std::move(value)); return *this;}
    inline CreateClusterRequest& WithAdditionalInfo(const char* value) { SetAdditionalInfo(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Identity and Access Management (IAM) roles that can be used by the
     * cluster to access other Amazon Web Services services. You must supply the IAM
     * roles in their Amazon Resource Name (ARN) format. </p> <p>The maximum number of
     * IAM roles that you can associate is subject to a quota. For more information, go
     * to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/amazon-redshift-limits.html">Quotas
     * and limits</a> in the <i>Amazon Redshift Cluster Management Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIamRoles() const{ return m_iamRoles; }
    inline bool IamRolesHasBeenSet() const { return m_iamRolesHasBeenSet; }
    inline void SetIamRoles(const Aws::Vector<Aws::String>& value) { m_iamRolesHasBeenSet = true; m_iamRoles = value; }
    inline void SetIamRoles(Aws::Vector<Aws::String>&& value) { m_iamRolesHasBeenSet = true; m_iamRoles = std::move(value); }
    inline CreateClusterRequest& WithIamRoles(const Aws::Vector<Aws::String>& value) { SetIamRoles(value); return *this;}
    inline CreateClusterRequest& WithIamRoles(Aws::Vector<Aws::String>&& value) { SetIamRoles(std::move(value)); return *this;}
    inline CreateClusterRequest& AddIamRoles(const Aws::String& value) { m_iamRolesHasBeenSet = true; m_iamRoles.push_back(value); return *this; }
    inline CreateClusterRequest& AddIamRoles(Aws::String&& value) { m_iamRolesHasBeenSet = true; m_iamRoles.push_back(std::move(value)); return *this; }
    inline CreateClusterRequest& AddIamRoles(const char* value) { m_iamRolesHasBeenSet = true; m_iamRoles.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional parameter for the name of the maintenance track for the cluster.
     * If you don't provide a maintenance track name, the cluster is assigned to the
     * <code>current</code> track.</p>
     */
    inline const Aws::String& GetMaintenanceTrackName() const{ return m_maintenanceTrackName; }
    inline bool MaintenanceTrackNameHasBeenSet() const { return m_maintenanceTrackNameHasBeenSet; }
    inline void SetMaintenanceTrackName(const Aws::String& value) { m_maintenanceTrackNameHasBeenSet = true; m_maintenanceTrackName = value; }
    inline void SetMaintenanceTrackName(Aws::String&& value) { m_maintenanceTrackNameHasBeenSet = true; m_maintenanceTrackName = std::move(value); }
    inline void SetMaintenanceTrackName(const char* value) { m_maintenanceTrackNameHasBeenSet = true; m_maintenanceTrackName.assign(value); }
    inline CreateClusterRequest& WithMaintenanceTrackName(const Aws::String& value) { SetMaintenanceTrackName(value); return *this;}
    inline CreateClusterRequest& WithMaintenanceTrackName(Aws::String&& value) { SetMaintenanceTrackName(std::move(value)); return *this;}
    inline CreateClusterRequest& WithMaintenanceTrackName(const char* value) { SetMaintenanceTrackName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the snapshot schedule.</p>
     */
    inline const Aws::String& GetSnapshotScheduleIdentifier() const{ return m_snapshotScheduleIdentifier; }
    inline bool SnapshotScheduleIdentifierHasBeenSet() const { return m_snapshotScheduleIdentifierHasBeenSet; }
    inline void SetSnapshotScheduleIdentifier(const Aws::String& value) { m_snapshotScheduleIdentifierHasBeenSet = true; m_snapshotScheduleIdentifier = value; }
    inline void SetSnapshotScheduleIdentifier(Aws::String&& value) { m_snapshotScheduleIdentifierHasBeenSet = true; m_snapshotScheduleIdentifier = std::move(value); }
    inline void SetSnapshotScheduleIdentifier(const char* value) { m_snapshotScheduleIdentifierHasBeenSet = true; m_snapshotScheduleIdentifier.assign(value); }
    inline CreateClusterRequest& WithSnapshotScheduleIdentifier(const Aws::String& value) { SetSnapshotScheduleIdentifier(value); return *this;}
    inline CreateClusterRequest& WithSnapshotScheduleIdentifier(Aws::String&& value) { SetSnapshotScheduleIdentifier(std::move(value)); return *this;}
    inline CreateClusterRequest& WithSnapshotScheduleIdentifier(const char* value) { SetSnapshotScheduleIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The option to enable relocation for an Amazon Redshift cluster between
     * Availability Zones after the cluster is created.</p>
     */
    inline bool GetAvailabilityZoneRelocation() const{ return m_availabilityZoneRelocation; }
    inline bool AvailabilityZoneRelocationHasBeenSet() const { return m_availabilityZoneRelocationHasBeenSet; }
    inline void SetAvailabilityZoneRelocation(bool value) { m_availabilityZoneRelocationHasBeenSet = true; m_availabilityZoneRelocation = value; }
    inline CreateClusterRequest& WithAvailabilityZoneRelocation(bool value) { SetAvailabilityZoneRelocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter is retired. It does not set the AQUA configuration status.
     * Amazon Redshift automatically determines whether to use AQUA (Advanced Query
     * Accelerator).</p>
     */
    inline const AquaConfigurationStatus& GetAquaConfigurationStatus() const{ return m_aquaConfigurationStatus; }
    inline bool AquaConfigurationStatusHasBeenSet() const { return m_aquaConfigurationStatusHasBeenSet; }
    inline void SetAquaConfigurationStatus(const AquaConfigurationStatus& value) { m_aquaConfigurationStatusHasBeenSet = true; m_aquaConfigurationStatus = value; }
    inline void SetAquaConfigurationStatus(AquaConfigurationStatus&& value) { m_aquaConfigurationStatusHasBeenSet = true; m_aquaConfigurationStatus = std::move(value); }
    inline CreateClusterRequest& WithAquaConfigurationStatus(const AquaConfigurationStatus& value) { SetAquaConfigurationStatus(value); return *this;}
    inline CreateClusterRequest& WithAquaConfigurationStatus(AquaConfigurationStatus&& value) { SetAquaConfigurationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that was set as default for
     * the cluster when the cluster was created. </p>
     */
    inline const Aws::String& GetDefaultIamRoleArn() const{ return m_defaultIamRoleArn; }
    inline bool DefaultIamRoleArnHasBeenSet() const { return m_defaultIamRoleArnHasBeenSet; }
    inline void SetDefaultIamRoleArn(const Aws::String& value) { m_defaultIamRoleArnHasBeenSet = true; m_defaultIamRoleArn = value; }
    inline void SetDefaultIamRoleArn(Aws::String&& value) { m_defaultIamRoleArnHasBeenSet = true; m_defaultIamRoleArn = std::move(value); }
    inline void SetDefaultIamRoleArn(const char* value) { m_defaultIamRoleArnHasBeenSet = true; m_defaultIamRoleArn.assign(value); }
    inline CreateClusterRequest& WithDefaultIamRoleArn(const Aws::String& value) { SetDefaultIamRoleArn(value); return *this;}
    inline CreateClusterRequest& WithDefaultIamRoleArn(Aws::String&& value) { SetDefaultIamRoleArn(std::move(value)); return *this;}
    inline CreateClusterRequest& WithDefaultIamRoleArn(const char* value) { SetDefaultIamRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag that specifies whether to load sample data once the cluster is
     * created.</p>
     */
    inline const Aws::String& GetLoadSampleData() const{ return m_loadSampleData; }
    inline bool LoadSampleDataHasBeenSet() const { return m_loadSampleDataHasBeenSet; }
    inline void SetLoadSampleData(const Aws::String& value) { m_loadSampleDataHasBeenSet = true; m_loadSampleData = value; }
    inline void SetLoadSampleData(Aws::String&& value) { m_loadSampleDataHasBeenSet = true; m_loadSampleData = std::move(value); }
    inline void SetLoadSampleData(const char* value) { m_loadSampleDataHasBeenSet = true; m_loadSampleData.assign(value); }
    inline CreateClusterRequest& WithLoadSampleData(const Aws::String& value) { SetLoadSampleData(value); return *this;}
    inline CreateClusterRequest& WithLoadSampleData(Aws::String&& value) { SetLoadSampleData(std::move(value)); return *this;}
    inline CreateClusterRequest& WithLoadSampleData(const char* value) { SetLoadSampleData(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>true</code>, Amazon Redshift uses Secrets Manager to manage this
     * cluster's admin credentials. You can't use <code>MasterUserPassword</code> if
     * <code>ManageMasterPassword</code> is true. If <code>ManageMasterPassword</code>
     * is false or not set, Amazon Redshift uses <code>MasterUserPassword</code> for
     * the admin user account's password. </p>
     */
    inline bool GetManageMasterPassword() const{ return m_manageMasterPassword; }
    inline bool ManageMasterPasswordHasBeenSet() const { return m_manageMasterPasswordHasBeenSet; }
    inline void SetManageMasterPassword(bool value) { m_manageMasterPasswordHasBeenSet = true; m_manageMasterPassword = value; }
    inline CreateClusterRequest& WithManageMasterPassword(bool value) { SetManageMasterPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Key Management Service (KMS) key used to encrypt and store the
     * cluster's admin credentials secret. You can only use this parameter if
     * <code>ManageMasterPassword</code> is true.</p>
     */
    inline const Aws::String& GetMasterPasswordSecretKmsKeyId() const{ return m_masterPasswordSecretKmsKeyId; }
    inline bool MasterPasswordSecretKmsKeyIdHasBeenSet() const { return m_masterPasswordSecretKmsKeyIdHasBeenSet; }
    inline void SetMasterPasswordSecretKmsKeyId(const Aws::String& value) { m_masterPasswordSecretKmsKeyIdHasBeenSet = true; m_masterPasswordSecretKmsKeyId = value; }
    inline void SetMasterPasswordSecretKmsKeyId(Aws::String&& value) { m_masterPasswordSecretKmsKeyIdHasBeenSet = true; m_masterPasswordSecretKmsKeyId = std::move(value); }
    inline void SetMasterPasswordSecretKmsKeyId(const char* value) { m_masterPasswordSecretKmsKeyIdHasBeenSet = true; m_masterPasswordSecretKmsKeyId.assign(value); }
    inline CreateClusterRequest& WithMasterPasswordSecretKmsKeyId(const Aws::String& value) { SetMasterPasswordSecretKmsKeyId(value); return *this;}
    inline CreateClusterRequest& WithMasterPasswordSecretKmsKeyId(Aws::String&& value) { SetMasterPasswordSecretKmsKeyId(std::move(value)); return *this;}
    inline CreateClusterRequest& WithMasterPasswordSecretKmsKeyId(const char* value) { SetMasterPasswordSecretKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address types that the cluster supports. Possible values are
     * <code>ipv4</code> and <code>dualstack</code>.</p>
     */
    inline const Aws::String& GetIpAddressType() const{ return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(const Aws::String& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline void SetIpAddressType(Aws::String&& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = std::move(value); }
    inline void SetIpAddressType(const char* value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType.assign(value); }
    inline CreateClusterRequest& WithIpAddressType(const Aws::String& value) { SetIpAddressType(value); return *this;}
    inline CreateClusterRequest& WithIpAddressType(Aws::String&& value) { SetIpAddressType(std::move(value)); return *this;}
    inline CreateClusterRequest& WithIpAddressType(const char* value) { SetIpAddressType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If true, Amazon Redshift will deploy the cluster in two Availability Zones
     * (AZ).</p>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }
    inline CreateClusterRequest& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon resource name (ARN) of the Amazon Redshift IAM Identity Center
     * application.</p>
     */
    inline const Aws::String& GetRedshiftIdcApplicationArn() const{ return m_redshiftIdcApplicationArn; }
    inline bool RedshiftIdcApplicationArnHasBeenSet() const { return m_redshiftIdcApplicationArnHasBeenSet; }
    inline void SetRedshiftIdcApplicationArn(const Aws::String& value) { m_redshiftIdcApplicationArnHasBeenSet = true; m_redshiftIdcApplicationArn = value; }
    inline void SetRedshiftIdcApplicationArn(Aws::String&& value) { m_redshiftIdcApplicationArnHasBeenSet = true; m_redshiftIdcApplicationArn = std::move(value); }
    inline void SetRedshiftIdcApplicationArn(const char* value) { m_redshiftIdcApplicationArnHasBeenSet = true; m_redshiftIdcApplicationArn.assign(value); }
    inline CreateClusterRequest& WithRedshiftIdcApplicationArn(const Aws::String& value) { SetRedshiftIdcApplicationArn(value); return *this;}
    inline CreateClusterRequest& WithRedshiftIdcApplicationArn(Aws::String&& value) { SetRedshiftIdcApplicationArn(std::move(value)); return *this;}
    inline CreateClusterRequest& WithRedshiftIdcApplicationArn(const char* value) { SetRedshiftIdcApplicationArn(value); return *this;}
    ///@}
  private:

    Aws::String m_dBName;
    bool m_dBNameHasBeenSet = false;

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_clusterType;
    bool m_clusterTypeHasBeenSet = false;

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet = false;

    Aws::String m_masterUsername;
    bool m_masterUsernameHasBeenSet = false;

    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet = false;

    Aws::Vector<Aws::String> m_clusterSecurityGroups;
    bool m_clusterSecurityGroupsHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;

    Aws::String m_clusterSubnetGroupName;
    bool m_clusterSubnetGroupNameHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    Aws::String m_clusterParameterGroupName;
    bool m_clusterParameterGroupNameHasBeenSet = false;

    int m_automatedSnapshotRetentionPeriod;
    bool m_automatedSnapshotRetentionPeriodHasBeenSet = false;

    int m_manualSnapshotRetentionPeriod;
    bool m_manualSnapshotRetentionPeriodHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_clusterVersion;
    bool m_clusterVersionHasBeenSet = false;

    bool m_allowVersionUpgrade;
    bool m_allowVersionUpgradeHasBeenSet = false;

    int m_numberOfNodes;
    bool m_numberOfNodesHasBeenSet = false;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet = false;

    bool m_encrypted;
    bool m_encryptedHasBeenSet = false;

    Aws::String m_hsmClientCertificateIdentifier;
    bool m_hsmClientCertificateIdentifierHasBeenSet = false;

    Aws::String m_hsmConfigurationIdentifier;
    bool m_hsmConfigurationIdentifierHasBeenSet = false;

    Aws::String m_elasticIp;
    bool m_elasticIpHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    bool m_enhancedVpcRouting;
    bool m_enhancedVpcRoutingHasBeenSet = false;

    Aws::String m_additionalInfo;
    bool m_additionalInfoHasBeenSet = false;

    Aws::Vector<Aws::String> m_iamRoles;
    bool m_iamRolesHasBeenSet = false;

    Aws::String m_maintenanceTrackName;
    bool m_maintenanceTrackNameHasBeenSet = false;

    Aws::String m_snapshotScheduleIdentifier;
    bool m_snapshotScheduleIdentifierHasBeenSet = false;

    bool m_availabilityZoneRelocation;
    bool m_availabilityZoneRelocationHasBeenSet = false;

    AquaConfigurationStatus m_aquaConfigurationStatus;
    bool m_aquaConfigurationStatusHasBeenSet = false;

    Aws::String m_defaultIamRoleArn;
    bool m_defaultIamRoleArnHasBeenSet = false;

    Aws::String m_loadSampleData;
    bool m_loadSampleDataHasBeenSet = false;

    bool m_manageMasterPassword;
    bool m_manageMasterPasswordHasBeenSet = false;

    Aws::String m_masterPasswordSecretKmsKeyId;
    bool m_masterPasswordSecretKmsKeyIdHasBeenSet = false;

    Aws::String m_ipAddressType;
    bool m_ipAddressTypeHasBeenSet = false;

    bool m_multiAZ;
    bool m_multiAZHasBeenSet = false;

    Aws::String m_redshiftIdcApplicationArn;
    bool m_redshiftIdcApplicationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
