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
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/RestoreFromClusterSnapshotMessage">AWS
   * API Reference</a></p>
   */
  class RestoreFromClusterSnapshotRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API RestoreFromClusterSnapshotRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RestoreFromClusterSnapshot"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identifier of the cluster that will be created from restoring the
     * snapshot.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * alphanumeric characters or hyphens.</p> </li> <li> <p>Alphabetic characters must
     * be lowercase.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens.</p> </li> <li>
     * <p>Must be unique for all clusters within an Amazon Web Services account.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetClusterIdentifier() const { return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    template<typename ClusterIdentifierT = Aws::String>
    void SetClusterIdentifier(ClusterIdentifierT&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::forward<ClusterIdentifierT>(value); }
    template<typename ClusterIdentifierT = Aws::String>
    RestoreFromClusterSnapshotRequest& WithClusterIdentifier(ClusterIdentifierT&& value) { SetClusterIdentifier(std::forward<ClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the snapshot from which to create the new cluster. This parameter
     * isn't case sensitive. You must specify this parameter or
     * <code>snapshotArn</code>, but not both.</p> <p>Example:
     * <code>my-snapshot-id</code> </p>
     */
    inline const Aws::String& GetSnapshotIdentifier() const { return m_snapshotIdentifier; }
    inline bool SnapshotIdentifierHasBeenSet() const { return m_snapshotIdentifierHasBeenSet; }
    template<typename SnapshotIdentifierT = Aws::String>
    void SetSnapshotIdentifier(SnapshotIdentifierT&& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = std::forward<SnapshotIdentifierT>(value); }
    template<typename SnapshotIdentifierT = Aws::String>
    RestoreFromClusterSnapshotRequest& WithSnapshotIdentifier(SnapshotIdentifierT&& value) { SetSnapshotIdentifier(std::forward<SnapshotIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot associated with the message to
     * restore from a cluster. You must specify this parameter or
     * <code>snapshotIdentifier</code>, but not both.</p>
     */
    inline const Aws::String& GetSnapshotArn() const { return m_snapshotArn; }
    inline bool SnapshotArnHasBeenSet() const { return m_snapshotArnHasBeenSet; }
    template<typename SnapshotArnT = Aws::String>
    void SetSnapshotArn(SnapshotArnT&& value) { m_snapshotArnHasBeenSet = true; m_snapshotArn = std::forward<SnapshotArnT>(value); }
    template<typename SnapshotArnT = Aws::String>
    RestoreFromClusterSnapshotRequest& WithSnapshotArn(SnapshotArnT&& value) { SetSnapshotArn(std::forward<SnapshotArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the cluster the source snapshot was created from. This parameter
     * is required if your IAM user has a policy containing a snapshot resource element
     * that specifies anything other than * for the cluster name.</p>
     */
    inline const Aws::String& GetSnapshotClusterIdentifier() const { return m_snapshotClusterIdentifier; }
    inline bool SnapshotClusterIdentifierHasBeenSet() const { return m_snapshotClusterIdentifierHasBeenSet; }
    template<typename SnapshotClusterIdentifierT = Aws::String>
    void SetSnapshotClusterIdentifier(SnapshotClusterIdentifierT&& value) { m_snapshotClusterIdentifierHasBeenSet = true; m_snapshotClusterIdentifier = std::forward<SnapshotClusterIdentifierT>(value); }
    template<typename SnapshotClusterIdentifierT = Aws::String>
    RestoreFromClusterSnapshotRequest& WithSnapshotClusterIdentifier(SnapshotClusterIdentifierT&& value) { SetSnapshotClusterIdentifier(std::forward<SnapshotClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number on which the cluster accepts connections.</p> <p>Default: The
     * same port as the original cluster.</p> <p>Valid values: For clusters with DC2
     * nodes, must be within the range <code>1150</code>-<code>65535</code>. For
     * clusters with ra3 nodes, must be within the ranges
     * <code>5431</code>-<code>5455</code> or <code>8191</code>-<code>8215</code>.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline RestoreFromClusterSnapshotRequest& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 Availability Zone in which to restore the cluster.</p>
     * <p>Default: A random, system-chosen Availability Zone.</p> <p>Example:
     * <code>us-east-2a</code> </p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    RestoreFromClusterSnapshotRequest& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>true</code>, major version upgrades can be applied during the
     * maintenance window to the Amazon Redshift engine that is running on the cluster.
     * </p> <p>Default: <code>true</code> </p>
     */
    inline bool GetAllowVersionUpgrade() const { return m_allowVersionUpgrade; }
    inline bool AllowVersionUpgradeHasBeenSet() const { return m_allowVersionUpgradeHasBeenSet; }
    inline void SetAllowVersionUpgrade(bool value) { m_allowVersionUpgradeHasBeenSet = true; m_allowVersionUpgrade = value; }
    inline RestoreFromClusterSnapshotRequest& WithAllowVersionUpgrade(bool value) { SetAllowVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the subnet group where you want to cluster restored.</p> <p>A
     * snapshot of cluster in VPC can be restored only in VPC. Therefore, you must
     * provide subnet group name where you want the cluster restored.</p>
     */
    inline const Aws::String& GetClusterSubnetGroupName() const { return m_clusterSubnetGroupName; }
    inline bool ClusterSubnetGroupNameHasBeenSet() const { return m_clusterSubnetGroupNameHasBeenSet; }
    template<typename ClusterSubnetGroupNameT = Aws::String>
    void SetClusterSubnetGroupName(ClusterSubnetGroupNameT&& value) { m_clusterSubnetGroupNameHasBeenSet = true; m_clusterSubnetGroupName = std::forward<ClusterSubnetGroupNameT>(value); }
    template<typename ClusterSubnetGroupNameT = Aws::String>
    RestoreFromClusterSnapshotRequest& WithClusterSubnetGroupName(ClusterSubnetGroupNameT&& value) { SetClusterSubnetGroupName(std::forward<ClusterSubnetGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>true</code>, the cluster can be accessed from a public network. </p>
     * <p>Default: false</p>
     */
    inline bool GetPubliclyAccessible() const { return m_publiclyAccessible; }
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline RestoreFromClusterSnapshotRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account used to create or copy the snapshot. Required
     * if you are restoring a snapshot you do not own, optional if you own the
     * snapshot.</p>
     */
    inline const Aws::String& GetOwnerAccount() const { return m_ownerAccount; }
    inline bool OwnerAccountHasBeenSet() const { return m_ownerAccountHasBeenSet; }
    template<typename OwnerAccountT = Aws::String>
    void SetOwnerAccount(OwnerAccountT&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = std::forward<OwnerAccountT>(value); }
    template<typename OwnerAccountT = Aws::String>
    RestoreFromClusterSnapshotRequest& WithOwnerAccount(OwnerAccountT&& value) { SetOwnerAccount(std::forward<OwnerAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the HSM client certificate the Amazon Redshift cluster
     * uses to retrieve the data encryption keys stored in an HSM.</p>
     */
    inline const Aws::String& GetHsmClientCertificateIdentifier() const { return m_hsmClientCertificateIdentifier; }
    inline bool HsmClientCertificateIdentifierHasBeenSet() const { return m_hsmClientCertificateIdentifierHasBeenSet; }
    template<typename HsmClientCertificateIdentifierT = Aws::String>
    void SetHsmClientCertificateIdentifier(HsmClientCertificateIdentifierT&& value) { m_hsmClientCertificateIdentifierHasBeenSet = true; m_hsmClientCertificateIdentifier = std::forward<HsmClientCertificateIdentifierT>(value); }
    template<typename HsmClientCertificateIdentifierT = Aws::String>
    RestoreFromClusterSnapshotRequest& WithHsmClientCertificateIdentifier(HsmClientCertificateIdentifierT&& value) { SetHsmClientCertificateIdentifier(std::forward<HsmClientCertificateIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the HSM configuration that contains the information the
     * Amazon Redshift cluster can use to retrieve and store keys in an HSM.</p>
     */
    inline const Aws::String& GetHsmConfigurationIdentifier() const { return m_hsmConfigurationIdentifier; }
    inline bool HsmConfigurationIdentifierHasBeenSet() const { return m_hsmConfigurationIdentifierHasBeenSet; }
    template<typename HsmConfigurationIdentifierT = Aws::String>
    void SetHsmConfigurationIdentifier(HsmConfigurationIdentifierT&& value) { m_hsmConfigurationIdentifierHasBeenSet = true; m_hsmConfigurationIdentifier = std::forward<HsmConfigurationIdentifierT>(value); }
    template<typename HsmConfigurationIdentifierT = Aws::String>
    RestoreFromClusterSnapshotRequest& WithHsmConfigurationIdentifier(HsmConfigurationIdentifierT&& value) { SetHsmConfigurationIdentifier(std::forward<HsmConfigurationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Elastic IP (EIP) address for the cluster. Don't specify the Elastic IP
     * address for a publicly accessible cluster with availability zone relocation
     * turned on.</p>
     */
    inline const Aws::String& GetElasticIp() const { return m_elasticIp; }
    inline bool ElasticIpHasBeenSet() const { return m_elasticIpHasBeenSet; }
    template<typename ElasticIpT = Aws::String>
    void SetElasticIp(ElasticIpT&& value) { m_elasticIpHasBeenSet = true; m_elasticIp = std::forward<ElasticIpT>(value); }
    template<typename ElasticIpT = Aws::String>
    RestoreFromClusterSnapshotRequest& WithElasticIp(ElasticIpT&& value) { SetElasticIp(std::forward<ElasticIpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the parameter group to be associated with this cluster.</p>
     * <p>Default: The default Amazon Redshift cluster parameter group. For information
     * about the default parameter group, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Working
     * with Amazon Redshift Parameter Groups</a>.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be 1 to 255 alphanumeric characters or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> </ul>
     */
    inline const Aws::String& GetClusterParameterGroupName() const { return m_clusterParameterGroupName; }
    inline bool ClusterParameterGroupNameHasBeenSet() const { return m_clusterParameterGroupNameHasBeenSet; }
    template<typename ClusterParameterGroupNameT = Aws::String>
    void SetClusterParameterGroupName(ClusterParameterGroupNameT&& value) { m_clusterParameterGroupNameHasBeenSet = true; m_clusterParameterGroupName = std::forward<ClusterParameterGroupNameT>(value); }
    template<typename ClusterParameterGroupNameT = Aws::String>
    RestoreFromClusterSnapshotRequest& WithClusterParameterGroupName(ClusterParameterGroupNameT&& value) { SetClusterParameterGroupName(std::forward<ClusterParameterGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of security groups to be associated with this cluster.</p> <p>Default:
     * The default cluster security group for Amazon Redshift.</p> <p>Cluster security
     * groups only apply to clusters outside of VPCs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClusterSecurityGroups() const { return m_clusterSecurityGroups; }
    inline bool ClusterSecurityGroupsHasBeenSet() const { return m_clusterSecurityGroupsHasBeenSet; }
    template<typename ClusterSecurityGroupsT = Aws::Vector<Aws::String>>
    void SetClusterSecurityGroups(ClusterSecurityGroupsT&& value) { m_clusterSecurityGroupsHasBeenSet = true; m_clusterSecurityGroups = std::forward<ClusterSecurityGroupsT>(value); }
    template<typename ClusterSecurityGroupsT = Aws::Vector<Aws::String>>
    RestoreFromClusterSnapshotRequest& WithClusterSecurityGroups(ClusterSecurityGroupsT&& value) { SetClusterSecurityGroups(std::forward<ClusterSecurityGroupsT>(value)); return *this;}
    template<typename ClusterSecurityGroupsT = Aws::String>
    RestoreFromClusterSnapshotRequest& AddClusterSecurityGroups(ClusterSecurityGroupsT&& value) { m_clusterSecurityGroupsHasBeenSet = true; m_clusterSecurityGroups.emplace_back(std::forward<ClusterSecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of Virtual Private Cloud (VPC) security groups to be associated with
     * the cluster.</p> <p>Default: The default VPC security group is associated with
     * the cluster.</p> <p>VPC security groups only apply to clusters in VPCs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const { return m_vpcSecurityGroupIds; }
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }
    template<typename VpcSecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::forward<VpcSecurityGroupIdsT>(value); }
    template<typename VpcSecurityGroupIdsT = Aws::Vector<Aws::String>>
    RestoreFromClusterSnapshotRequest& WithVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { SetVpcSecurityGroupIds(std::forward<VpcSecurityGroupIdsT>(value)); return *this;}
    template<typename VpcSecurityGroupIdsT = Aws::String>
    RestoreFromClusterSnapshotRequest& AddVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.emplace_back(std::forward<VpcSecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The weekly time range (in UTC) during which automated cluster maintenance can
     * occur.</p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p> <p> Default:
     * The value selected for the cluster from which the snapshot was taken. For more
     * information about the time blocks for each region, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html#rs-maintenance-windows">Maintenance
     * Windows</a> in Amazon Redshift Cluster Management Guide. </p> <p>Valid Days: Mon
     * | Tue | Wed | Thu | Fri | Sat | Sun</p> <p>Constraints: Minimum 30-minute
     * window.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const { return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    void SetPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::forward<PreferredMaintenanceWindowT>(value); }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    RestoreFromClusterSnapshotRequest& WithPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { SetPreferredMaintenanceWindow(std::forward<PreferredMaintenanceWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days that automated snapshots are retained. If the value is 0,
     * automated snapshots are disabled. Even if automated snapshots are disabled, you
     * can still create manual snapshots when you want with
     * <a>CreateClusterSnapshot</a>. </p> <p>You can't disable automated snapshots for
     * RA3 node types. Set the automated retention period from 1-35 days.</p>
     * <p>Default: The value selected for the cluster from which the snapshot was
     * taken.</p> <p>Constraints: Must be a value from 0 to 35.</p>
     */
    inline int GetAutomatedSnapshotRetentionPeriod() const { return m_automatedSnapshotRetentionPeriod; }
    inline bool AutomatedSnapshotRetentionPeriodHasBeenSet() const { return m_automatedSnapshotRetentionPeriodHasBeenSet; }
    inline void SetAutomatedSnapshotRetentionPeriod(int value) { m_automatedSnapshotRetentionPeriodHasBeenSet = true; m_automatedSnapshotRetentionPeriod = value; }
    inline RestoreFromClusterSnapshotRequest& WithAutomatedSnapshotRetentionPeriod(int value) { SetAutomatedSnapshotRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default number of days to retain a manual snapshot. If the value is -1,
     * the snapshot is retained indefinitely. This setting doesn't change the retention
     * period of existing snapshots.</p> <p>The value must be either -1 or an integer
     * between 1 and 3,653.</p>
     */
    inline int GetManualSnapshotRetentionPeriod() const { return m_manualSnapshotRetentionPeriod; }
    inline bool ManualSnapshotRetentionPeriodHasBeenSet() const { return m_manualSnapshotRetentionPeriodHasBeenSet; }
    inline void SetManualSnapshotRetentionPeriod(int value) { m_manualSnapshotRetentionPeriodHasBeenSet = true; m_manualSnapshotRetentionPeriod = value; }
    inline RestoreFromClusterSnapshotRequest& WithManualSnapshotRetentionPeriod(int value) { SetManualSnapshotRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Key Management Service (KMS) key ID of the encryption key that encrypts
     * data in the cluster restored from a shared snapshot. You can also provide the
     * key ID when you restore from an unencrypted snapshot to an encrypted cluster in
     * the same account. Additionally, you can specify a new KMS key ID when you
     * restore from an encrypted snapshot in the same account in order to change it. In
     * that case, the restored cluster is encrypted with the new KMS key ID.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    RestoreFromClusterSnapshotRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node type that the restored cluster will be provisioned with.</p> <p>If
     * you have a DC instance type, you must restore into that same instance type and
     * size. In other words, you can only restore a dc2.large node type into another
     * dc2 type. For more information about node types, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html#rs-about-clusters-and-nodes">
     * About Clusters and Nodes</a> in the <i>Amazon Redshift Cluster Management
     * Guide</i>. </p>
     */
    inline const Aws::String& GetNodeType() const { return m_nodeType; }
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
    template<typename NodeTypeT = Aws::String>
    void SetNodeType(NodeTypeT&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::forward<NodeTypeT>(value); }
    template<typename NodeTypeT = Aws::String>
    RestoreFromClusterSnapshotRequest& WithNodeType(NodeTypeT&& value) { SetNodeType(std::forward<NodeTypeT>(value)); return *this;}
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
    inline bool GetEnhancedVpcRouting() const { return m_enhancedVpcRouting; }
    inline bool EnhancedVpcRoutingHasBeenSet() const { return m_enhancedVpcRoutingHasBeenSet; }
    inline void SetEnhancedVpcRouting(bool value) { m_enhancedVpcRoutingHasBeenSet = true; m_enhancedVpcRouting = value; }
    inline RestoreFromClusterSnapshotRequest& WithEnhancedVpcRouting(bool value) { SetEnhancedVpcRouting(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved.</p>
     */
    inline const Aws::String& GetAdditionalInfo() const { return m_additionalInfo; }
    inline bool AdditionalInfoHasBeenSet() const { return m_additionalInfoHasBeenSet; }
    template<typename AdditionalInfoT = Aws::String>
    void SetAdditionalInfo(AdditionalInfoT&& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = std::forward<AdditionalInfoT>(value); }
    template<typename AdditionalInfoT = Aws::String>
    RestoreFromClusterSnapshotRequest& WithAdditionalInfo(AdditionalInfoT&& value) { SetAdditionalInfo(std::forward<AdditionalInfoT>(value)); return *this;}
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
    inline const Aws::Vector<Aws::String>& GetIamRoles() const { return m_iamRoles; }
    inline bool IamRolesHasBeenSet() const { return m_iamRolesHasBeenSet; }
    template<typename IamRolesT = Aws::Vector<Aws::String>>
    void SetIamRoles(IamRolesT&& value) { m_iamRolesHasBeenSet = true; m_iamRoles = std::forward<IamRolesT>(value); }
    template<typename IamRolesT = Aws::Vector<Aws::String>>
    RestoreFromClusterSnapshotRequest& WithIamRoles(IamRolesT&& value) { SetIamRoles(std::forward<IamRolesT>(value)); return *this;}
    template<typename IamRolesT = Aws::String>
    RestoreFromClusterSnapshotRequest& AddIamRoles(IamRolesT&& value) { m_iamRolesHasBeenSet = true; m_iamRoles.emplace_back(std::forward<IamRolesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the maintenance track for the restored cluster. When you take a
     * snapshot, the snapshot inherits the <code>MaintenanceTrack</code> value from the
     * cluster. The snapshot might be on a different track than the cluster that was
     * the source for the snapshot. For example, suppose that you take a snapshot of a
     * cluster that is on the current track and then change the cluster to be on the
     * trailing track. In this case, the snapshot and the source cluster are on
     * different tracks.</p>
     */
    inline const Aws::String& GetMaintenanceTrackName() const { return m_maintenanceTrackName; }
    inline bool MaintenanceTrackNameHasBeenSet() const { return m_maintenanceTrackNameHasBeenSet; }
    template<typename MaintenanceTrackNameT = Aws::String>
    void SetMaintenanceTrackName(MaintenanceTrackNameT&& value) { m_maintenanceTrackNameHasBeenSet = true; m_maintenanceTrackName = std::forward<MaintenanceTrackNameT>(value); }
    template<typename MaintenanceTrackNameT = Aws::String>
    RestoreFromClusterSnapshotRequest& WithMaintenanceTrackName(MaintenanceTrackNameT&& value) { SetMaintenanceTrackName(std::forward<MaintenanceTrackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the snapshot schedule.</p>
     */
    inline const Aws::String& GetSnapshotScheduleIdentifier() const { return m_snapshotScheduleIdentifier; }
    inline bool SnapshotScheduleIdentifierHasBeenSet() const { return m_snapshotScheduleIdentifierHasBeenSet; }
    template<typename SnapshotScheduleIdentifierT = Aws::String>
    void SetSnapshotScheduleIdentifier(SnapshotScheduleIdentifierT&& value) { m_snapshotScheduleIdentifierHasBeenSet = true; m_snapshotScheduleIdentifier = std::forward<SnapshotScheduleIdentifierT>(value); }
    template<typename SnapshotScheduleIdentifierT = Aws::String>
    RestoreFromClusterSnapshotRequest& WithSnapshotScheduleIdentifier(SnapshotScheduleIdentifierT&& value) { SetSnapshotScheduleIdentifier(std::forward<SnapshotScheduleIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of nodes specified when provisioning the restored cluster.</p>
     */
    inline int GetNumberOfNodes() const { return m_numberOfNodes; }
    inline bool NumberOfNodesHasBeenSet() const { return m_numberOfNodesHasBeenSet; }
    inline void SetNumberOfNodes(int value) { m_numberOfNodesHasBeenSet = true; m_numberOfNodes = value; }
    inline RestoreFromClusterSnapshotRequest& WithNumberOfNodes(int value) { SetNumberOfNodes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The option to enable relocation for an Amazon Redshift cluster between
     * Availability Zones after the cluster is restored.</p>
     */
    inline bool GetAvailabilityZoneRelocation() const { return m_availabilityZoneRelocation; }
    inline bool AvailabilityZoneRelocationHasBeenSet() const { return m_availabilityZoneRelocationHasBeenSet; }
    inline void SetAvailabilityZoneRelocation(bool value) { m_availabilityZoneRelocationHasBeenSet = true; m_availabilityZoneRelocation = value; }
    inline RestoreFromClusterSnapshotRequest& WithAvailabilityZoneRelocation(bool value) { SetAvailabilityZoneRelocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter is retired. It does not set the AQUA configuration status.
     * Amazon Redshift automatically determines whether to use AQUA (Advanced Query
     * Accelerator).</p>
     */
    inline AquaConfigurationStatus GetAquaConfigurationStatus() const { return m_aquaConfigurationStatus; }
    inline bool AquaConfigurationStatusHasBeenSet() const { return m_aquaConfigurationStatusHasBeenSet; }
    inline void SetAquaConfigurationStatus(AquaConfigurationStatus value) { m_aquaConfigurationStatusHasBeenSet = true; m_aquaConfigurationStatus = value; }
    inline RestoreFromClusterSnapshotRequest& WithAquaConfigurationStatus(AquaConfigurationStatus value) { SetAquaConfigurationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that was set as default for
     * the cluster when the cluster was last modified while it was restored from a
     * snapshot.</p>
     */
    inline const Aws::String& GetDefaultIamRoleArn() const { return m_defaultIamRoleArn; }
    inline bool DefaultIamRoleArnHasBeenSet() const { return m_defaultIamRoleArnHasBeenSet; }
    template<typename DefaultIamRoleArnT = Aws::String>
    void SetDefaultIamRoleArn(DefaultIamRoleArnT&& value) { m_defaultIamRoleArnHasBeenSet = true; m_defaultIamRoleArn = std::forward<DefaultIamRoleArnT>(value); }
    template<typename DefaultIamRoleArnT = Aws::String>
    RestoreFromClusterSnapshotRequest& WithDefaultIamRoleArn(DefaultIamRoleArnT&& value) { SetDefaultIamRoleArn(std::forward<DefaultIamRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the target reserved node offering.</p>
     */
    inline const Aws::String& GetReservedNodeId() const { return m_reservedNodeId; }
    inline bool ReservedNodeIdHasBeenSet() const { return m_reservedNodeIdHasBeenSet; }
    template<typename ReservedNodeIdT = Aws::String>
    void SetReservedNodeId(ReservedNodeIdT&& value) { m_reservedNodeIdHasBeenSet = true; m_reservedNodeId = std::forward<ReservedNodeIdT>(value); }
    template<typename ReservedNodeIdT = Aws::String>
    RestoreFromClusterSnapshotRequest& WithReservedNodeId(ReservedNodeIdT&& value) { SetReservedNodeId(std::forward<ReservedNodeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the target reserved node offering.</p>
     */
    inline const Aws::String& GetTargetReservedNodeOfferingId() const { return m_targetReservedNodeOfferingId; }
    inline bool TargetReservedNodeOfferingIdHasBeenSet() const { return m_targetReservedNodeOfferingIdHasBeenSet; }
    template<typename TargetReservedNodeOfferingIdT = Aws::String>
    void SetTargetReservedNodeOfferingId(TargetReservedNodeOfferingIdT&& value) { m_targetReservedNodeOfferingIdHasBeenSet = true; m_targetReservedNodeOfferingId = std::forward<TargetReservedNodeOfferingIdT>(value); }
    template<typename TargetReservedNodeOfferingIdT = Aws::String>
    RestoreFromClusterSnapshotRequest& WithTargetReservedNodeOfferingId(TargetReservedNodeOfferingIdT&& value) { SetTargetReservedNodeOfferingId(std::forward<TargetReservedNodeOfferingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables support for restoring an unencrypted snapshot to a cluster encrypted
     * with Key Management Service (KMS) and a customer managed key.</p>
     */
    inline bool GetEncrypted() const { return m_encrypted; }
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline RestoreFromClusterSnapshotRequest& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>true</code>, Amazon Redshift uses Secrets Manager to manage the
     * restored cluster's admin credentials. If <code>ManageMasterPassword</code> is
     * false or not set, Amazon Redshift uses the admin credentials the cluster had at
     * the time the snapshot was taken.</p>
     */
    inline bool GetManageMasterPassword() const { return m_manageMasterPassword; }
    inline bool ManageMasterPasswordHasBeenSet() const { return m_manageMasterPasswordHasBeenSet; }
    inline void SetManageMasterPassword(bool value) { m_manageMasterPasswordHasBeenSet = true; m_manageMasterPassword = value; }
    inline RestoreFromClusterSnapshotRequest& WithManageMasterPassword(bool value) { SetManageMasterPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Key Management Service (KMS) key used to encrypt and store the
     * cluster's admin credentials secret. You can only use this parameter if
     * <code>ManageMasterPassword</code> is true.</p>
     */
    inline const Aws::String& GetMasterPasswordSecretKmsKeyId() const { return m_masterPasswordSecretKmsKeyId; }
    inline bool MasterPasswordSecretKmsKeyIdHasBeenSet() const { return m_masterPasswordSecretKmsKeyIdHasBeenSet; }
    template<typename MasterPasswordSecretKmsKeyIdT = Aws::String>
    void SetMasterPasswordSecretKmsKeyId(MasterPasswordSecretKmsKeyIdT&& value) { m_masterPasswordSecretKmsKeyIdHasBeenSet = true; m_masterPasswordSecretKmsKeyId = std::forward<MasterPasswordSecretKmsKeyIdT>(value); }
    template<typename MasterPasswordSecretKmsKeyIdT = Aws::String>
    RestoreFromClusterSnapshotRequest& WithMasterPasswordSecretKmsKeyId(MasterPasswordSecretKmsKeyIdT&& value) { SetMasterPasswordSecretKmsKeyId(std::forward<MasterPasswordSecretKmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address type for the cluster. Possible values are <code>ipv4</code>
     * and <code>dualstack</code>.</p>
     */
    inline const Aws::String& GetIpAddressType() const { return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    template<typename IpAddressTypeT = Aws::String>
    void SetIpAddressType(IpAddressTypeT&& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = std::forward<IpAddressTypeT>(value); }
    template<typename IpAddressTypeT = Aws::String>
    RestoreFromClusterSnapshotRequest& WithIpAddressType(IpAddressTypeT&& value) { SetIpAddressType(std::forward<IpAddressTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If true, the snapshot will be restored to a cluster deployed in two
     * Availability Zones.</p>
     */
    inline bool GetMultiAZ() const { return m_multiAZ; }
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }
    inline RestoreFromClusterSnapshotRequest& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_snapshotIdentifier;
    bool m_snapshotIdentifierHasBeenSet = false;

    Aws::String m_snapshotArn;
    bool m_snapshotArnHasBeenSet = false;

    Aws::String m_snapshotClusterIdentifier;
    bool m_snapshotClusterIdentifierHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    bool m_allowVersionUpgrade{false};
    bool m_allowVersionUpgradeHasBeenSet = false;

    Aws::String m_clusterSubnetGroupName;
    bool m_clusterSubnetGroupNameHasBeenSet = false;

    bool m_publiclyAccessible{false};
    bool m_publiclyAccessibleHasBeenSet = false;

    Aws::String m_ownerAccount;
    bool m_ownerAccountHasBeenSet = false;

    Aws::String m_hsmClientCertificateIdentifier;
    bool m_hsmClientCertificateIdentifierHasBeenSet = false;

    Aws::String m_hsmConfigurationIdentifier;
    bool m_hsmConfigurationIdentifierHasBeenSet = false;

    Aws::String m_elasticIp;
    bool m_elasticIpHasBeenSet = false;

    Aws::String m_clusterParameterGroupName;
    bool m_clusterParameterGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_clusterSecurityGroups;
    bool m_clusterSecurityGroupsHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    int m_automatedSnapshotRetentionPeriod{0};
    bool m_automatedSnapshotRetentionPeriodHasBeenSet = false;

    int m_manualSnapshotRetentionPeriod{0};
    bool m_manualSnapshotRetentionPeriodHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet = false;

    bool m_enhancedVpcRouting{false};
    bool m_enhancedVpcRoutingHasBeenSet = false;

    Aws::String m_additionalInfo;
    bool m_additionalInfoHasBeenSet = false;

    Aws::Vector<Aws::String> m_iamRoles;
    bool m_iamRolesHasBeenSet = false;

    Aws::String m_maintenanceTrackName;
    bool m_maintenanceTrackNameHasBeenSet = false;

    Aws::String m_snapshotScheduleIdentifier;
    bool m_snapshotScheduleIdentifierHasBeenSet = false;

    int m_numberOfNodes{0};
    bool m_numberOfNodesHasBeenSet = false;

    bool m_availabilityZoneRelocation{false};
    bool m_availabilityZoneRelocationHasBeenSet = false;

    AquaConfigurationStatus m_aquaConfigurationStatus{AquaConfigurationStatus::NOT_SET};
    bool m_aquaConfigurationStatusHasBeenSet = false;

    Aws::String m_defaultIamRoleArn;
    bool m_defaultIamRoleArnHasBeenSet = false;

    Aws::String m_reservedNodeId;
    bool m_reservedNodeIdHasBeenSet = false;

    Aws::String m_targetReservedNodeOfferingId;
    bool m_targetReservedNodeOfferingIdHasBeenSet = false;

    bool m_encrypted{false};
    bool m_encryptedHasBeenSet = false;

    bool m_manageMasterPassword{false};
    bool m_manageMasterPasswordHasBeenSet = false;

    Aws::String m_masterPasswordSecretKmsKeyId;
    bool m_masterPasswordSecretKmsKeyIdHasBeenSet = false;

    Aws::String m_ipAddressType;
    bool m_ipAddressTypeHasBeenSet = false;

    bool m_multiAZ{false};
    bool m_multiAZHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
