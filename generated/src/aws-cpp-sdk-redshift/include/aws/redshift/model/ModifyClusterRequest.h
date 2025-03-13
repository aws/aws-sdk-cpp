/**
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
    AWS_REDSHIFT_API ModifyClusterRequest() = default;

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
    inline const Aws::String& GetClusterIdentifier() const { return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    template<typename ClusterIdentifierT = Aws::String>
    void SetClusterIdentifier(ClusterIdentifierT&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::forward<ClusterIdentifierT>(value); }
    template<typename ClusterIdentifierT = Aws::String>
    ModifyClusterRequest& WithClusterIdentifier(ClusterIdentifierT&& value) { SetClusterIdentifier(std::forward<ClusterIdentifierT>(value)); return *this;}
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
    inline const Aws::String& GetClusterType() const { return m_clusterType; }
    inline bool ClusterTypeHasBeenSet() const { return m_clusterTypeHasBeenSet; }
    template<typename ClusterTypeT = Aws::String>
    void SetClusterType(ClusterTypeT&& value) { m_clusterTypeHasBeenSet = true; m_clusterType = std::forward<ClusterTypeT>(value); }
    template<typename ClusterTypeT = Aws::String>
    ModifyClusterRequest& WithClusterType(ClusterTypeT&& value) { SetClusterType(std::forward<ClusterTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new node type of the cluster. If you specify a new node type, you must
     * also specify the number of nodes parameter.</p> <p> For more information about
     * resizing clusters, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/rs-resize-tutorial.html">Resizing
     * Clusters in Amazon Redshift</a> in the <i>Amazon Redshift Cluster Management
     * Guide</i>.</p> <p>Valid Values: <code>dc2.large</code> |
     * <code>dc2.8xlarge</code> | <code>ra3.large</code> | <code>ra3.xlplus</code> |
     * <code>ra3.4xlarge</code> | <code>ra3.16xlarge</code> </p>
     */
    inline const Aws::String& GetNodeType() const { return m_nodeType; }
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
    template<typename NodeTypeT = Aws::String>
    void SetNodeType(NodeTypeT&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::forward<NodeTypeT>(value); }
    template<typename NodeTypeT = Aws::String>
    ModifyClusterRequest& WithNodeType(NodeTypeT&& value) { SetNodeType(std::forward<NodeTypeT>(value)); return *this;}
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
    inline int GetNumberOfNodes() const { return m_numberOfNodes; }
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
    inline const Aws::Vector<Aws::String>& GetClusterSecurityGroups() const { return m_clusterSecurityGroups; }
    inline bool ClusterSecurityGroupsHasBeenSet() const { return m_clusterSecurityGroupsHasBeenSet; }
    template<typename ClusterSecurityGroupsT = Aws::Vector<Aws::String>>
    void SetClusterSecurityGroups(ClusterSecurityGroupsT&& value) { m_clusterSecurityGroupsHasBeenSet = true; m_clusterSecurityGroups = std::forward<ClusterSecurityGroupsT>(value); }
    template<typename ClusterSecurityGroupsT = Aws::Vector<Aws::String>>
    ModifyClusterRequest& WithClusterSecurityGroups(ClusterSecurityGroupsT&& value) { SetClusterSecurityGroups(std::forward<ClusterSecurityGroupsT>(value)); return *this;}
    template<typename ClusterSecurityGroupsT = Aws::String>
    ModifyClusterRequest& AddClusterSecurityGroups(ClusterSecurityGroupsT&& value) { m_clusterSecurityGroupsHasBeenSet = true; m_clusterSecurityGroups.emplace_back(std::forward<ClusterSecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of virtual private cloud (VPC) security groups to be associated with
     * the cluster. This change is asynchronously applied as soon as possible.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const { return m_vpcSecurityGroupIds; }
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }
    template<typename VpcSecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::forward<VpcSecurityGroupIdsT>(value); }
    template<typename VpcSecurityGroupIdsT = Aws::Vector<Aws::String>>
    ModifyClusterRequest& WithVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { SetVpcSecurityGroupIds(std::forward<VpcSecurityGroupIdsT>(value)); return *this;}
    template<typename VpcSecurityGroupIdsT = Aws::String>
    ModifyClusterRequest& AddVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.emplace_back(std::forward<VpcSecurityGroupIdsT>(value)); return *this; }
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
    inline const Aws::String& GetMasterUserPassword() const { return m_masterUserPassword; }
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }
    template<typename MasterUserPasswordT = Aws::String>
    void SetMasterUserPassword(MasterUserPasswordT&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::forward<MasterUserPasswordT>(value); }
    template<typename MasterUserPasswordT = Aws::String>
    ModifyClusterRequest& WithMasterUserPassword(MasterUserPasswordT&& value) { SetMasterUserPassword(std::forward<MasterUserPasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the cluster parameter group to apply to this cluster. This change
     * is applied only after the cluster is rebooted. To reboot a cluster use
     * <a>RebootCluster</a>. </p> <p>Default: Uses existing setting.</p>
     * <p>Constraints: The cluster parameter group must be in the same parameter group
     * family that matches the cluster version.</p>
     */
    inline const Aws::String& GetClusterParameterGroupName() const { return m_clusterParameterGroupName; }
    inline bool ClusterParameterGroupNameHasBeenSet() const { return m_clusterParameterGroupNameHasBeenSet; }
    template<typename ClusterParameterGroupNameT = Aws::String>
    void SetClusterParameterGroupName(ClusterParameterGroupNameT&& value) { m_clusterParameterGroupNameHasBeenSet = true; m_clusterParameterGroupName = std::forward<ClusterParameterGroupNameT>(value); }
    template<typename ClusterParameterGroupNameT = Aws::String>
    ModifyClusterRequest& WithClusterParameterGroupName(ClusterParameterGroupNameT&& value) { SetClusterParameterGroupName(std::forward<ClusterParameterGroupNameT>(value)); return *this;}
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
    inline int GetAutomatedSnapshotRetentionPeriod() const { return m_automatedSnapshotRetentionPeriod; }
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
    inline int GetManualSnapshotRetentionPeriod() const { return m_manualSnapshotRetentionPeriod; }
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
    inline const Aws::String& GetPreferredMaintenanceWindow() const { return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    void SetPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::forward<PreferredMaintenanceWindowT>(value); }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    ModifyClusterRequest& WithPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { SetPreferredMaintenanceWindow(std::forward<PreferredMaintenanceWindowT>(value)); return *this;}
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
    inline const Aws::String& GetClusterVersion() const { return m_clusterVersion; }
    inline bool ClusterVersionHasBeenSet() const { return m_clusterVersionHasBeenSet; }
    template<typename ClusterVersionT = Aws::String>
    void SetClusterVersion(ClusterVersionT&& value) { m_clusterVersionHasBeenSet = true; m_clusterVersion = std::forward<ClusterVersionT>(value); }
    template<typename ClusterVersionT = Aws::String>
    ModifyClusterRequest& WithClusterVersion(ClusterVersionT&& value) { SetClusterVersion(std::forward<ClusterVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>true</code>, major version upgrades will be applied automatically to
     * the cluster during the maintenance window. </p> <p>Default: <code>false</code>
     * </p>
     */
    inline bool GetAllowVersionUpgrade() const { return m_allowVersionUpgrade; }
    inline bool AllowVersionUpgradeHasBeenSet() const { return m_allowVersionUpgradeHasBeenSet; }
    inline void SetAllowVersionUpgrade(bool value) { m_allowVersionUpgradeHasBeenSet = true; m_allowVersionUpgrade = value; }
    inline ModifyClusterRequest& WithAllowVersionUpgrade(bool value) { SetAllowVersionUpgrade(value); return *this;}
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
    ModifyClusterRequest& WithHsmClientCertificateIdentifier(HsmClientCertificateIdentifierT&& value) { SetHsmClientCertificateIdentifier(std::forward<HsmClientCertificateIdentifierT>(value)); return *this;}
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
    ModifyClusterRequest& WithHsmConfigurationIdentifier(HsmConfigurationIdentifierT&& value) { SetHsmConfigurationIdentifier(std::forward<HsmConfigurationIdentifierT>(value)); return *this;}
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
    inline const Aws::String& GetNewClusterIdentifier() const { return m_newClusterIdentifier; }
    inline bool NewClusterIdentifierHasBeenSet() const { return m_newClusterIdentifierHasBeenSet; }
    template<typename NewClusterIdentifierT = Aws::String>
    void SetNewClusterIdentifier(NewClusterIdentifierT&& value) { m_newClusterIdentifierHasBeenSet = true; m_newClusterIdentifier = std::forward<NewClusterIdentifierT>(value); }
    template<typename NewClusterIdentifierT = Aws::String>
    ModifyClusterRequest& WithNewClusterIdentifier(NewClusterIdentifierT&& value) { SetNewClusterIdentifier(std::forward<NewClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>true</code>, the cluster can be accessed from a public network. Only
     * clusters in VPCs can be set to be publicly available.</p> <p>Default: false</p>
     */
    inline bool GetPubliclyAccessible() const { return m_publiclyAccessible; }
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
    inline const Aws::String& GetElasticIp() const { return m_elasticIp; }
    inline bool ElasticIpHasBeenSet() const { return m_elasticIpHasBeenSet; }
    template<typename ElasticIpT = Aws::String>
    void SetElasticIp(ElasticIpT&& value) { m_elasticIpHasBeenSet = true; m_elasticIp = std::forward<ElasticIpT>(value); }
    template<typename ElasticIpT = Aws::String>
    ModifyClusterRequest& WithElasticIp(ElasticIpT&& value) { SetElasticIp(std::forward<ElasticIpT>(value)); return *this;}
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
    inline const Aws::String& GetMaintenanceTrackName() const { return m_maintenanceTrackName; }
    inline bool MaintenanceTrackNameHasBeenSet() const { return m_maintenanceTrackNameHasBeenSet; }
    template<typename MaintenanceTrackNameT = Aws::String>
    void SetMaintenanceTrackName(MaintenanceTrackNameT&& value) { m_maintenanceTrackNameHasBeenSet = true; m_maintenanceTrackName = std::forward<MaintenanceTrackNameT>(value); }
    template<typename MaintenanceTrackNameT = Aws::String>
    ModifyClusterRequest& WithMaintenanceTrackName(MaintenanceTrackNameT&& value) { SetMaintenanceTrackName(std::forward<MaintenanceTrackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the cluster is encrypted. If the value is encrypted (true)
     * and you provide a value for the <code>KmsKeyId</code> parameter, we encrypt the
     * cluster with the provided <code>KmsKeyId</code>. If you don't provide a
     * <code>KmsKeyId</code>, we encrypt with the default key. </p> <p>If the value is
     * not encrypted (false), then the cluster is decrypted. </p>
     */
    inline bool GetEncrypted() const { return m_encrypted; }
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline ModifyClusterRequest& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Key Management Service (KMS) key ID of the encryption key that you want
     * to use to encrypt data in the cluster.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    ModifyClusterRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The option to enable relocation for an Amazon Redshift cluster between
     * Availability Zones after the cluster modification is complete.</p>
     */
    inline bool GetAvailabilityZoneRelocation() const { return m_availabilityZoneRelocation; }
    inline bool AvailabilityZoneRelocationHasBeenSet() const { return m_availabilityZoneRelocationHasBeenSet; }
    inline void SetAvailabilityZoneRelocation(bool value) { m_availabilityZoneRelocationHasBeenSet = true; m_availabilityZoneRelocation = value; }
    inline ModifyClusterRequest& WithAvailabilityZoneRelocation(bool value) { SetAvailabilityZoneRelocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The option to initiate relocation for an Amazon Redshift cluster to the
     * target Availability Zone.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    ModifyClusterRequest& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The option to change the port of an Amazon Redshift cluster.</p> <p>Valid
     * Values: </p> <ul> <li> <p>For clusters with ra3 nodes - Select a port within the
     * ranges <code>5431-5455</code> or <code>8191-8215</code>. (If you have an
     * existing cluster with ra3 nodes, it isn't required that you change the port to
     * these ranges.)</p> </li> <li> <p>For clusters with dc2 nodes - Select a port
     * within the range <code>1150-65535</code>.</p> </li> </ul>
     */
    inline int GetPort() const { return m_port; }
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
    inline bool GetManageMasterPassword() const { return m_manageMasterPassword; }
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
    inline const Aws::String& GetMasterPasswordSecretKmsKeyId() const { return m_masterPasswordSecretKmsKeyId; }
    inline bool MasterPasswordSecretKmsKeyIdHasBeenSet() const { return m_masterPasswordSecretKmsKeyIdHasBeenSet; }
    template<typename MasterPasswordSecretKmsKeyIdT = Aws::String>
    void SetMasterPasswordSecretKmsKeyId(MasterPasswordSecretKmsKeyIdT&& value) { m_masterPasswordSecretKmsKeyIdHasBeenSet = true; m_masterPasswordSecretKmsKeyId = std::forward<MasterPasswordSecretKmsKeyIdT>(value); }
    template<typename MasterPasswordSecretKmsKeyIdT = Aws::String>
    ModifyClusterRequest& WithMasterPasswordSecretKmsKeyId(MasterPasswordSecretKmsKeyIdT&& value) { SetMasterPasswordSecretKmsKeyId(std::forward<MasterPasswordSecretKmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address types that the cluster supports. Possible values are
     * <code>ipv4</code> and <code>dualstack</code>.</p>
     */
    inline const Aws::String& GetIpAddressType() const { return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    template<typename IpAddressTypeT = Aws::String>
    void SetIpAddressType(IpAddressTypeT&& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = std::forward<IpAddressTypeT>(value); }
    template<typename IpAddressTypeT = Aws::String>
    ModifyClusterRequest& WithIpAddressType(IpAddressTypeT&& value) { SetIpAddressType(std::forward<IpAddressTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If true and the cluster is currently only deployed in a single Availability
     * Zone, the cluster will be modified to be deployed in two Availability Zones.</p>
     */
    inline bool GetMultiAZ() const { return m_multiAZ; }
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

    int m_numberOfNodes{0};
    bool m_numberOfNodesHasBeenSet = false;

    Aws::Vector<Aws::String> m_clusterSecurityGroups;
    bool m_clusterSecurityGroupsHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;

    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet = false;

    Aws::String m_clusterParameterGroupName;
    bool m_clusterParameterGroupNameHasBeenSet = false;

    int m_automatedSnapshotRetentionPeriod{0};
    bool m_automatedSnapshotRetentionPeriodHasBeenSet = false;

    int m_manualSnapshotRetentionPeriod{0};
    bool m_manualSnapshotRetentionPeriodHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    Aws::String m_clusterVersion;
    bool m_clusterVersionHasBeenSet = false;

    bool m_allowVersionUpgrade{false};
    bool m_allowVersionUpgradeHasBeenSet = false;

    Aws::String m_hsmClientCertificateIdentifier;
    bool m_hsmClientCertificateIdentifierHasBeenSet = false;

    Aws::String m_hsmConfigurationIdentifier;
    bool m_hsmConfigurationIdentifierHasBeenSet = false;

    Aws::String m_newClusterIdentifier;
    bool m_newClusterIdentifierHasBeenSet = false;

    bool m_publiclyAccessible{false};
    bool m_publiclyAccessibleHasBeenSet = false;

    Aws::String m_elasticIp;
    bool m_elasticIpHasBeenSet = false;

    bool m_enhancedVpcRouting{false};
    bool m_enhancedVpcRoutingHasBeenSet = false;

    Aws::String m_maintenanceTrackName;
    bool m_maintenanceTrackNameHasBeenSet = false;

    bool m_encrypted{false};
    bool m_encryptedHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    bool m_availabilityZoneRelocation{false};
    bool m_availabilityZoneRelocationHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

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
