﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ModifyClusterMessage">AWS
   * API Reference</a></p>
   */
  class ModifyClusterRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API ModifyClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyCluster"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The unique identifier of the cluster to be modified.</p> <p>Example:
     * <code>examplecluster</code> </p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }
    inline ModifyClusterRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}
    inline ModifyClusterRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}
    inline ModifyClusterRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new cluster type.</p> <p>When you submit your cluster resize request,
     * your existing cluster goes into a read-only mode. After Amazon Redshift
     * provisions a new cluster based on your resize requirements, there will be outage
     * for a period while the old cluster is deleted and your connection is switched to
     * the new cluster. You can use <a>DescribeResize</a> to track the progress of the
     * resize request. </p> <p>Valid Values: <code> multi-node | single-node </code>
     * </p>
     */
    inline const Aws::String& GetClusterType() const{ return m_clusterType; }
    inline bool ClusterTypeHasBeenSet() const { return m_clusterTypeHasBeenSet; }
    inline void SetClusterType(const Aws::String& value) { m_clusterTypeHasBeenSet = true; m_clusterType = value; }
    inline void SetClusterType(Aws::String&& value) { m_clusterTypeHasBeenSet = true; m_clusterType = std::move(value); }
    inline void SetClusterType(const char* value) { m_clusterTypeHasBeenSet = true; m_clusterType.assign(value); }
    inline ModifyClusterRequest& WithClusterType(const Aws::String& value) { SetClusterType(value); return *this;}
    inline ModifyClusterRequest& WithClusterType(Aws::String&& value) { SetClusterType(std::move(value)); return *this;}
    inline ModifyClusterRequest& WithClusterType(const char* value) { SetClusterType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new node type of the cluster. If you specify a new node type, you must
     * also specify the number of nodes parameter.</p> <p> For more information about
     * resizing clusters, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/rs-resize-tutorial.html">Resizing
     * Clusters in Amazon Redshift</a> in the <i>Amazon Redshift Cluster Management
     * Guide</i>.</p> <p>Valid Values: <code>ds2.xlarge</code> |
     * <code>ds2.8xlarge</code> | <code>dc1.large</code> | <code>dc1.8xlarge</code> |
     * <code>dc2.large</code> | <code>dc2.8xlarge</code> | <code>ra3.xlplus</code> |
     * <code>ra3.4xlarge</code> | <code>ra3.16xlarge</code> </p>
     */
    inline const Aws::String& GetNodeType() const{ return m_nodeType; }
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
    inline void SetNodeType(const Aws::String& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }
    inline void SetNodeType(Aws::String&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::move(value); }
    inline void SetNodeType(const char* value) { m_nodeTypeHasBeenSet = true; m_nodeType.assign(value); }
    inline ModifyClusterRequest& WithNodeType(const Aws::String& value) { SetNodeType(value); return *this;}
    inline ModifyClusterRequest& WithNodeType(Aws::String&& value) { SetNodeType(std::move(value)); return *this;}
    inline ModifyClusterRequest& WithNodeType(const char* value) { SetNodeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new number of nodes of the cluster. If you specify a new number of nodes,
     * you must also specify the node type parameter.</p> <p> For more information
     * about resizing clusters, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/rs-resize-tutorial.html">Resizing
     * Clusters in Amazon Redshift</a> in the <i>Amazon Redshift Cluster Management
     * Guide</i>.</p> <p>Valid Values: Integer greater than <code>0</code>.</p>
     */
    inline int GetNumberOfNodes() const{ return m_numberOfNodes; }
    inline bool NumberOfNodesHasBeenSet() const { return m_numberOfNodesHasBeenSet; }
    inline void SetNumberOfNodes(int value) { m_numberOfNodesHasBeenSet = true; m_numberOfNodes = value; }
    inline ModifyClusterRequest& WithNumberOfNodes(int value) { SetNumberOfNodes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of cluster security groups to be authorized on this cluster. This
     * change is asynchronously applied as soon as possible.</p> <p>Security groups
     * currently associated with the cluster, and not in the list of groups to apply,
     * will be revoked from the cluster.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1
     * to 255 alphanumeric characters or hyphens</p> </li> <li> <p>First character must
     * be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetClusterSecurityGroups() const{ return m_clusterSecurityGroups; }
    inline bool ClusterSecurityGroupsHasBeenSet() const { return m_clusterSecurityGroupsHasBeenSet; }
    inline void SetClusterSecurityGroups(const Aws::Vector<Aws::String>& value) { m_clusterSecurityGroupsHasBeenSet = true; m_clusterSecurityGroups = value; }
    inline void SetClusterSecurityGroups(Aws::Vector<Aws::String>&& value) { m_clusterSecurityGroupsHasBeenSet = true; m_clusterSecurityGroups = std::move(value); }
    inline ModifyClusterRequest& WithClusterSecurityGroups(const Aws::Vector<Aws::String>& value) { SetClusterSecurityGroups(value); return *this;}
    inline ModifyClusterRequest& WithClusterSecurityGroups(Aws::Vector<Aws::String>&& value) { SetClusterSecurityGroups(std::move(value)); return *this;}
    inline ModifyClusterRequest& AddClusterSecurityGroups(const Aws::String& value) { m_clusterSecurityGroupsHasBeenSet = true; m_clusterSecurityGroups.push_back(value); return *this; }
    inline ModifyClusterRequest& AddClusterSecurityGroups(Aws::String&& value) { m_clusterSecurityGroupsHasBeenSet = true; m_clusterSecurityGroups.push_back(std::move(value)); return *this; }
    inline ModifyClusterRequest& AddClusterSecurityGroups(const char* value) { m_clusterSecurityGroupsHasBeenSet = true; m_clusterSecurityGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of virtual private cloud (VPC) security groups to be associated with
     * the cluster. This change is asynchronously applied as soon as possible.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }
    inline ModifyClusterRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}
    inline ModifyClusterRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}
    inline ModifyClusterRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }
    inline ModifyClusterRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }
    inline ModifyClusterRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The new password for the cluster admin user. This change is asynchronously
     * applied as soon as possible. Between the time of the request and the completion
     * of the request, the <code>MasterUserPassword</code> element exists in the
     * <code>PendingModifiedValues</code> element of the operation response. </p>
     * <p>You can't use <code>MasterUserPassword</code> if
     * <code>ManageMasterPassword</code> is <code>true</code>.</p>  <p>Operations
     * never return the password, so this operation provides a way to regain access to
     * the admin user account for a cluster if the password is lost.</p> 
     * <p>Default: Uses existing setting.</p> <p>Constraints:</p> <ul> <li> <p>Must be
     * between 8 and 64 characters in length.</p> </li> <li> <p>Must contain at least
     * one uppercase letter.</p> </li> <li> <p>Must contain at least one lowercase
     * letter.</p> </li> <li> <p>Must contain one number.</p> </li> <li> <p>Can be any
     * printable ASCII character (ASCII code 33-126) except <code>'</code> (single
     * quote), <code>"</code> (double quote), <code>\</code>, <code>/</code>, or
     * <code>@</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetMasterUserPassword() const{ return m_masterUserPassword; }
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }
    inline void SetMasterUserPassword(const Aws::String& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }
    inline void SetMasterUserPassword(Aws::String&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::move(value); }
    inline void SetMasterUserPassword(const char* value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword.assign(value); }
    inline ModifyClusterRequest& WithMasterUserPassword(const Aws::String& value) { SetMasterUserPassword(value); return *this;}
    inline ModifyClusterRequest& WithMasterUserPassword(Aws::String&& value) { SetMasterUserPassword(std::move(value)); return *this;}
    inline ModifyClusterRequest& WithMasterUserPassword(const char* value) { SetMasterUserPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the cluster parameter group to apply to this cluster. This change
     * is applied only after the cluster is rebooted. To reboot a cluster use
     * <a>RebootCluster</a>. </p> <p>Default: Uses existing setting.</p>
     * <p>Constraints: The cluster parameter group must be in the same parameter group
     * family that matches the cluster version.</p>
     */
    inline const Aws::String& GetClusterParameterGroupName() const{ return m_clusterParameterGroupName; }
    inline bool ClusterParameterGroupNameHasBeenSet() const { return m_clusterParameterGroupNameHasBeenSet; }
    inline void SetClusterParameterGroupName(const Aws::String& value) { m_clusterParameterGroupNameHasBeenSet = true; m_clusterParameterGroupName = value; }
    inline void SetClusterParameterGroupName(Aws::String&& value) { m_clusterParameterGroupNameHasBeenSet = true; m_clusterParameterGroupName = std::move(value); }
    inline void SetClusterParameterGroupName(const char* value) { m_clusterParameterGroupNameHasBeenSet = true; m_clusterParameterGroupName.assign(value); }
    inline ModifyClusterRequest& WithClusterParameterGroupName(const Aws::String& value) { SetClusterParameterGroupName(value); return *this;}
    inline ModifyClusterRequest& WithClusterParameterGroupName(Aws::String&& value) { SetClusterParameterGroupName(std::move(value)); return *this;}
    inline ModifyClusterRequest& WithClusterParameterGroupName(const char* value) { SetClusterParameterGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days that automated snapshots are retained. If the value is 0,
     * automated snapshots are disabled. Even if automated snapshots are disabled, you
     * can still create manual snapshots when you want with
     * <a>CreateClusterSnapshot</a>. </p> <p>If you decrease the automated snapshot
     * retention period from its current value, existing automated snapshots that fall
     * outside of the new retention period will be immediately deleted.</p> <p>You
     * can't disable automated snapshots for RA3 node types. Set the automated
     * retention period from 1-35 days.</p> <p>Default: Uses existing setting.</p>
     * <p>Constraints: Must be a value from 0 to 35.</p>
     */
    inline int GetAutomatedSnapshotRetentionPeriod() const{ return m_automatedSnapshotRetentionPeriod; }
    inline bool AutomatedSnapshotRetentionPeriodHasBeenSet() const { return m_automatedSnapshotRetentionPeriodHasBeenSet; }
    inline void SetAutomatedSnapshotRetentionPeriod(int value) { m_automatedSnapshotRetentionPeriodHasBeenSet = true; m_automatedSnapshotRetentionPeriod = value; }
    inline ModifyClusterRequest& WithAutomatedSnapshotRetentionPeriod(int value) { SetAutomatedSnapshotRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default for number of days that a newly created manual snapshot is
     * retained. If the value is -1, the manual snapshot is retained indefinitely. This
     * value doesn't retroactively change the retention periods of existing manual
     * snapshots.</p> <p>The value must be either -1 or an integer between 1 and
     * 3,653.</p> <p>The default value is -1.</p>
     */
    inline int GetManualSnapshotRetentionPeriod() const{ return m_manualSnapshotRetentionPeriod; }
    inline bool ManualSnapshotRetentionPeriodHasBeenSet() const { return m_manualSnapshotRetentionPeriodHasBeenSet; }
    inline void SetManualSnapshotRetentionPeriod(int value) { m_manualSnapshotRetentionPeriodHasBeenSet = true; m_manualSnapshotRetentionPeriod = value; }
    inline ModifyClusterRequest& WithManualSnapshotRetentionPeriod(int value) { SetManualSnapshotRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The weekly time range (in UTC) during which system maintenance can occur, if
     * necessary. If system maintenance is necessary during the window, it may result
     * in an outage.</p> <p>This maintenance window change is made immediately. If the
     * new maintenance window indicates the current time, there must be at least 120
     * minutes between the current time and end of the window in order to ensure that
     * pending changes are applied.</p> <p>Default: Uses existing setting.</p>
     * <p>Format: ddd:hh24:mi-ddd:hh24:mi, for example
     * <code>wed:07:30-wed:08:00</code>.</p> <p>Valid Days: Mon | Tue | Wed | Thu | Fri
     * | Sat | Sun</p> <p>Constraints: Must be at least 30 minutes.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }
    inline ModifyClusterRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}
    inline ModifyClusterRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}
    inline ModifyClusterRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new version number of the Amazon Redshift engine to upgrade to.</p>
     * <p>For major version upgrades, if a non-default cluster parameter group is
     * currently in use, a new cluster parameter group in the cluster parameter group
     * family for the new version must be specified. The new cluster parameter group
     * can be the default for that cluster parameter group family. For more information
     * about parameters and parameter groups, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon
     * Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management
     * Guide</i>.</p> <p>Example: <code>1.0</code> </p>
     */
    inline const Aws::String& GetClusterVersion() const{ return m_clusterVersion; }
    inline bool ClusterVersionHasBeenSet() const { return m_clusterVersionHasBeenSet; }
    inline void SetClusterVersion(const Aws::String& value) { m_clusterVersionHasBeenSet = true; m_clusterVersion = value; }
    inline void SetClusterVersion(Aws::String&& value) { m_clusterVersionHasBeenSet = true; m_clusterVersion = std::move(value); }
    inline void SetClusterVersion(const char* value) { m_clusterVersionHasBeenSet = true; m_clusterVersion.assign(value); }
    inline ModifyClusterRequest& WithClusterVersion(const Aws::String& value) { SetClusterVersion(value); return *this;}
    inline ModifyClusterRequest& WithClusterVersion(Aws::String&& value) { SetClusterVersion(std::move(value)); return *this;}
    inline ModifyClusterRequest& WithClusterVersion(const char* value) { SetClusterVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>true</code>, major version upgrades will be applied automatically to
     * the cluster during the maintenance window. </p> <p>Default: <code>false</code>
     * </p>
     */
    inline bool GetAllowVersionUpgrade() const{ return m_allowVersionUpgrade; }
    inline bool AllowVersionUpgradeHasBeenSet() const { return m_allowVersionUpgradeHasBeenSet; }
    inline void SetAllowVersionUpgrade(bool value) { m_allowVersionUpgradeHasBeenSet = true; m_allowVersionUpgrade = value; }
    inline ModifyClusterRequest& WithAllowVersionUpgrade(bool value) { SetAllowVersionUpgrade(value); return *this;}
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
    inline ModifyClusterRequest& WithHsmClientCertificateIdentifier(const Aws::String& value) { SetHsmClientCertificateIdentifier(value); return *this;}
    inline ModifyClusterRequest& WithHsmClientCertificateIdentifier(Aws::String&& value) { SetHsmClientCertificateIdentifier(std::move(value)); return *this;}
    inline ModifyClusterRequest& WithHsmClientCertificateIdentifier(const char* value) { SetHsmClientCertificateIdentifier(value); return *this;}
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
    inline ModifyClusterRequest& WithHsmConfigurationIdentifier(const Aws::String& value) { SetHsmConfigurationIdentifier(value); return *this;}
    inline ModifyClusterRequest& WithHsmConfigurationIdentifier(Aws::String&& value) { SetHsmConfigurationIdentifier(std::move(value)); return *this;}
    inline ModifyClusterRequest& WithHsmConfigurationIdentifier(const char* value) { SetHsmConfigurationIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new identifier for the cluster.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 63 alphanumeric characters or hyphens.</p> </li> <li>
     * <p>Alphabetic characters must be lowercase.</p> </li> <li> <p>First character
     * must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> <li> <p>Must be unique for all clusters within an
     * Amazon Web Services account.</p> </li> </ul> <p>Example:
     * <code>examplecluster</code> </p>
     */
    inline const Aws::String& GetNewClusterIdentifier() const{ return m_newClusterIdentifier; }
    inline bool NewClusterIdentifierHasBeenSet() const { return m_newClusterIdentifierHasBeenSet; }
    inline void SetNewClusterIdentifier(const Aws::String& value) { m_newClusterIdentifierHasBeenSet = true; m_newClusterIdentifier = value; }
    inline void SetNewClusterIdentifier(Aws::String&& value) { m_newClusterIdentifierHasBeenSet = true; m_newClusterIdentifier = std::move(value); }
    inline void SetNewClusterIdentifier(const char* value) { m_newClusterIdentifierHasBeenSet = true; m_newClusterIdentifier.assign(value); }
    inline ModifyClusterRequest& WithNewClusterIdentifier(const Aws::String& value) { SetNewClusterIdentifier(value); return *this;}
    inline ModifyClusterRequest& WithNewClusterIdentifier(Aws::String&& value) { SetNewClusterIdentifier(std::move(value)); return *this;}
    inline ModifyClusterRequest& WithNewClusterIdentifier(const char* value) { SetNewClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>true</code>, the cluster can be accessed from a public network. Only
     * clusters in VPCs can be set to be publicly available.</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline ModifyClusterRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Elastic IP (EIP) address for the cluster.</p> <p>Constraints: The cluster
     * must be provisioned in EC2-VPC and publicly-accessible through an Internet
     * gateway. For more information about provisioning clusters in EC2-VPC, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html#cluster-platforms">Supported
     * Platforms to Launch Your Cluster</a> in the Amazon Redshift Cluster Management
     * Guide.</p>
     */
    inline const Aws::String& GetElasticIp() const{ return m_elasticIp; }
    inline bool ElasticIpHasBeenSet() const { return m_elasticIpHasBeenSet; }
    inline void SetElasticIp(const Aws::String& value) { m_elasticIpHasBeenSet = true; m_elasticIp = value; }
    inline void SetElasticIp(Aws::String&& value) { m_elasticIpHasBeenSet = true; m_elasticIp = std::move(value); }
    inline void SetElasticIp(const char* value) { m_elasticIpHasBeenSet = true; m_elasticIp.assign(value); }
    inline ModifyClusterRequest& WithElasticIp(const Aws::String& value) { SetElasticIp(value); return *this;}
    inline ModifyClusterRequest& WithElasticIp(Aws::String&& value) { SetElasticIp(std::move(value)); return *this;}
    inline ModifyClusterRequest& WithElasticIp(const char* value) { SetElasticIp(value); return *this;}
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
    inline ModifyClusterRequest& WithEnhancedVpcRouting(bool value) { SetEnhancedVpcRouting(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the maintenance track that you want to assign for the cluster.
     * This name change is asynchronous. The new track name stays in the
     * <code>PendingModifiedValues</code> for the cluster until the next maintenance
     * window. When the maintenance track changes, the cluster is switched to the
     * latest cluster release available for the maintenance track. At this point, the
     * maintenance track name is applied.</p>
     */
    inline const Aws::String& GetMaintenanceTrackName() const{ return m_maintenanceTrackName; }
    inline bool MaintenanceTrackNameHasBeenSet() const { return m_maintenanceTrackNameHasBeenSet; }
    inline void SetMaintenanceTrackName(const Aws::String& value) { m_maintenanceTrackNameHasBeenSet = true; m_maintenanceTrackName = value; }
    inline void SetMaintenanceTrackName(Aws::String&& value) { m_maintenanceTrackNameHasBeenSet = true; m_maintenanceTrackName = std::move(value); }
    inline void SetMaintenanceTrackName(const char* value) { m_maintenanceTrackNameHasBeenSet = true; m_maintenanceTrackName.assign(value); }
    inline ModifyClusterRequest& WithMaintenanceTrackName(const Aws::String& value) { SetMaintenanceTrackName(value); return *this;}
    inline ModifyClusterRequest& WithMaintenanceTrackName(Aws::String&& value) { SetMaintenanceTrackName(std::move(value)); return *this;}
    inline ModifyClusterRequest& WithMaintenanceTrackName(const char* value) { SetMaintenanceTrackName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the cluster is encrypted. If the value is encrypted (true)
     * and you provide a value for the <code>KmsKeyId</code> parameter, we encrypt the
     * cluster with the provided <code>KmsKeyId</code>. If you don't provide a
     * <code>KmsKeyId</code>, we encrypt with the default key. </p> <p>If the value is
     * not encrypted (false), then the cluster is decrypted. </p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline ModifyClusterRequest& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
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
    inline ModifyClusterRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline ModifyClusterRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline ModifyClusterRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The option to enable relocation for an Amazon Redshift cluster between
     * Availability Zones after the cluster modification is complete.</p>
     */
    inline bool GetAvailabilityZoneRelocation() const{ return m_availabilityZoneRelocation; }
    inline bool AvailabilityZoneRelocationHasBeenSet() const { return m_availabilityZoneRelocationHasBeenSet; }
    inline void SetAvailabilityZoneRelocation(bool value) { m_availabilityZoneRelocationHasBeenSet = true; m_availabilityZoneRelocation = value; }
    inline ModifyClusterRequest& WithAvailabilityZoneRelocation(bool value) { SetAvailabilityZoneRelocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The option to initiate relocation for an Amazon Redshift cluster to the
     * target Availability Zone.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline ModifyClusterRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline ModifyClusterRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline ModifyClusterRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The option to change the port of an Amazon Redshift cluster.</p> <p>Valid
     * Values: </p> <ul> <li> <p>For clusters with ra3 nodes - Select a port within the
     * ranges <code>5431-5455</code> or <code>8191-8215</code>. (If you have an
     * existing cluster with ra3 nodes, it isn't required that you change the port to
     * these ranges.)</p> </li> <li> <p>For clusters with ds2 or dc2 nodes - Select a
     * port within the range <code>1150-65535</code>.</p> </li> </ul>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline ModifyClusterRequest& WithPort(int value) { SetPort(value); return *this;}
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
    inline ModifyClusterRequest& WithManageMasterPassword(bool value) { SetManageMasterPassword(value); return *this;}
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
    inline ModifyClusterRequest& WithMasterPasswordSecretKmsKeyId(const Aws::String& value) { SetMasterPasswordSecretKmsKeyId(value); return *this;}
    inline ModifyClusterRequest& WithMasterPasswordSecretKmsKeyId(Aws::String&& value) { SetMasterPasswordSecretKmsKeyId(std::move(value)); return *this;}
    inline ModifyClusterRequest& WithMasterPasswordSecretKmsKeyId(const char* value) { SetMasterPasswordSecretKmsKeyId(value); return *this;}
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
    inline ModifyClusterRequest& WithIpAddressType(const Aws::String& value) { SetIpAddressType(value); return *this;}
    inline ModifyClusterRequest& WithIpAddressType(Aws::String&& value) { SetIpAddressType(std::move(value)); return *this;}
    inline ModifyClusterRequest& WithIpAddressType(const char* value) { SetIpAddressType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If true and the cluster is currently only deployed in a single Availability
     * Zone, the cluster will be modified to be deployed in two Availability Zones.</p>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }
    inline ModifyClusterRequest& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_clusterType;
    bool m_clusterTypeHasBeenSet = false;

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet = false;

    int m_numberOfNodes;
    bool m_numberOfNodesHasBeenSet = false;

    Aws::Vector<Aws::String> m_clusterSecurityGroups;
    bool m_clusterSecurityGroupsHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;

    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet = false;

    Aws::String m_clusterParameterGroupName;
    bool m_clusterParameterGroupNameHasBeenSet = false;

    int m_automatedSnapshotRetentionPeriod;
    bool m_automatedSnapshotRetentionPeriodHasBeenSet = false;

    int m_manualSnapshotRetentionPeriod;
    bool m_manualSnapshotRetentionPeriodHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    Aws::String m_clusterVersion;
    bool m_clusterVersionHasBeenSet = false;

    bool m_allowVersionUpgrade;
    bool m_allowVersionUpgradeHasBeenSet = false;

    Aws::String m_hsmClientCertificateIdentifier;
    bool m_hsmClientCertificateIdentifierHasBeenSet = false;

    Aws::String m_hsmConfigurationIdentifier;
    bool m_hsmConfigurationIdentifierHasBeenSet = false;

    Aws::String m_newClusterIdentifier;
    bool m_newClusterIdentifierHasBeenSet = false;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet = false;

    Aws::String m_elasticIp;
    bool m_elasticIpHasBeenSet = false;

    bool m_enhancedVpcRouting;
    bool m_enhancedVpcRoutingHasBeenSet = false;

    Aws::String m_maintenanceTrackName;
    bool m_maintenanceTrackNameHasBeenSet = false;

    bool m_encrypted;
    bool m_encryptedHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    bool m_availabilityZoneRelocation;
    bool m_availabilityZoneRelocationHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    bool m_manageMasterPassword;
    bool m_manageMasterPasswordHasBeenSet = false;

    Aws::String m_masterPasswordSecretKmsKeyId;
    bool m_masterPasswordSecretKmsKeyIdHasBeenSet = false;

    Aws::String m_ipAddressType;
    bool m_ipAddressTypeHasBeenSet = false;

    bool m_multiAZ;
    bool m_multiAZHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
