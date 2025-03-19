/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/Endpoint.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/PendingModifiedValues.h>
#include <aws/redshift/model/RestoreStatus.h>
#include <aws/redshift/model/DataTransferProgress.h>
#include <aws/redshift/model/HsmStatus.h>
#include <aws/redshift/model/ClusterSnapshotCopyStatus.h>
#include <aws/redshift/model/ElasticIpStatus.h>
#include <aws/redshift/model/ScheduleState.h>
#include <aws/redshift/model/ResizeInfo.h>
#include <aws/redshift/model/AquaConfiguration.h>
#include <aws/redshift/model/ReservedNodeExchangeStatus.h>
#include <aws/redshift/model/SecondaryClusterInfo.h>
#include <aws/redshift/model/ClusterSecurityGroupMembership.h>
#include <aws/redshift/model/VpcSecurityGroupMembership.h>
#include <aws/redshift/model/ClusterParameterGroupStatus.h>
#include <aws/redshift/model/ClusterNode.h>
#include <aws/redshift/model/Tag.h>
#include <aws/redshift/model/ClusterIamRole.h>
#include <aws/redshift/model/DeferredMaintenanceWindow.h>
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
namespace Redshift
{
namespace Model
{

  /**
   * <p>Describes a cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/Cluster">AWS
   * API Reference</a></p>
   */
  class Cluster
  {
  public:
    AWS_REDSHIFT_API Cluster() = default;
    AWS_REDSHIFT_API Cluster(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API Cluster& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const { return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    template<typename ClusterIdentifierT = Aws::String>
    void SetClusterIdentifier(ClusterIdentifierT&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::forward<ClusterIdentifierT>(value); }
    template<typename ClusterIdentifierT = Aws::String>
    Cluster& WithClusterIdentifier(ClusterIdentifierT&& value) { SetClusterIdentifier(std::forward<ClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node type for the nodes in the cluster.</p>
     */
    inline const Aws::String& GetNodeType() const { return m_nodeType; }
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
    template<typename NodeTypeT = Aws::String>
    void SetNodeType(NodeTypeT&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::forward<NodeTypeT>(value); }
    template<typename NodeTypeT = Aws::String>
    Cluster& WithNodeType(NodeTypeT&& value) { SetNodeType(std::forward<NodeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current state of the cluster. Possible values are the following:</p>
     * <ul> <li> <p> <code>available</code> </p> </li> <li> <p> <code>available,
     * prep-for-resize</code> </p> </li> <li> <p> <code>available,
     * resize-cleanup</code> </p> </li> <li> <p> <code>cancelling-resize</code> </p>
     * </li> <li> <p> <code>creating</code> </p> </li> <li> <p> <code>deleting</code>
     * </p> </li> <li> <p> <code>final-snapshot</code> </p> </li> <li> <p>
     * <code>hardware-failure</code> </p> </li> <li> <p> <code>incompatible-hsm</code>
     * </p> </li> <li> <p> <code>incompatible-network</code> </p> </li> <li> <p>
     * <code>incompatible-parameters</code> </p> </li> <li> <p>
     * <code>incompatible-restore</code> </p> </li> <li> <p> <code>modifying</code>
     * </p> </li> <li> <p> <code>paused</code> </p> </li> <li> <p>
     * <code>rebooting</code> </p> </li> <li> <p> <code>renaming</code> </p> </li> <li>
     * <p> <code>resizing</code> </p> </li> <li> <p> <code>rotating-keys</code> </p>
     * </li> <li> <p> <code>storage-full</code> </p> </li> <li> <p>
     * <code>updating-hsm</code> </p> </li> </ul>
     */
    inline const Aws::String& GetClusterStatus() const { return m_clusterStatus; }
    inline bool ClusterStatusHasBeenSet() const { return m_clusterStatusHasBeenSet; }
    template<typename ClusterStatusT = Aws::String>
    void SetClusterStatus(ClusterStatusT&& value) { m_clusterStatusHasBeenSet = true; m_clusterStatus = std::forward<ClusterStatusT>(value); }
    template<typename ClusterStatusT = Aws::String>
    Cluster& WithClusterStatus(ClusterStatusT&& value) { SetClusterStatus(std::forward<ClusterStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The availability status of the cluster for queries. Possible values are the
     * following:</p> <ul> <li> <p>Available - The cluster is available for queries.
     * </p> </li> <li> <p>Unavailable - The cluster is not available for queries.</p>
     * </li> <li> <p>Maintenance - The cluster is intermittently available for queries
     * due to maintenance activities.</p> </li> <li> <p>Modifying - The cluster is
     * intermittently available for queries due to changes that modify the cluster.</p>
     * </li> <li> <p>Failed - The cluster failed and is not available for queries.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetClusterAvailabilityStatus() const { return m_clusterAvailabilityStatus; }
    inline bool ClusterAvailabilityStatusHasBeenSet() const { return m_clusterAvailabilityStatusHasBeenSet; }
    template<typename ClusterAvailabilityStatusT = Aws::String>
    void SetClusterAvailabilityStatus(ClusterAvailabilityStatusT&& value) { m_clusterAvailabilityStatusHasBeenSet = true; m_clusterAvailabilityStatus = std::forward<ClusterAvailabilityStatusT>(value); }
    template<typename ClusterAvailabilityStatusT = Aws::String>
    Cluster& WithClusterAvailabilityStatus(ClusterAvailabilityStatusT&& value) { SetClusterAvailabilityStatus(std::forward<ClusterAvailabilityStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a modify operation, if any, initiated for the cluster.</p>
     */
    inline const Aws::String& GetModifyStatus() const { return m_modifyStatus; }
    inline bool ModifyStatusHasBeenSet() const { return m_modifyStatusHasBeenSet; }
    template<typename ModifyStatusT = Aws::String>
    void SetModifyStatus(ModifyStatusT&& value) { m_modifyStatusHasBeenSet = true; m_modifyStatus = std::forward<ModifyStatusT>(value); }
    template<typename ModifyStatusT = Aws::String>
    Cluster& WithModifyStatus(ModifyStatusT&& value) { SetModifyStatus(std::forward<ModifyStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The admin user name for the cluster. This name is used to connect to the
     * database that is specified in the <b>DBName</b> parameter. </p>
     */
    inline const Aws::String& GetMasterUsername() const { return m_masterUsername; }
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }
    template<typename MasterUsernameT = Aws::String>
    void SetMasterUsername(MasterUsernameT&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::forward<MasterUsernameT>(value); }
    template<typename MasterUsernameT = Aws::String>
    Cluster& WithMasterUsername(MasterUsernameT&& value) { SetMasterUsername(std::forward<MasterUsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the initial database that was created when the cluster was
     * created. This same name is returned for the life of the cluster. If an initial
     * database was not specified, a database named <code>dev</code>dev was created by
     * default. </p>
     */
    inline const Aws::String& GetDBName() const { return m_dBName; }
    inline bool DBNameHasBeenSet() const { return m_dBNameHasBeenSet; }
    template<typename DBNameT = Aws::String>
    void SetDBName(DBNameT&& value) { m_dBNameHasBeenSet = true; m_dBName = std::forward<DBNameT>(value); }
    template<typename DBNameT = Aws::String>
    Cluster& WithDBName(DBNameT&& value) { SetDBName(std::forward<DBNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection endpoint.</p>
     */
    inline const Endpoint& GetEndpoint() const { return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    template<typename EndpointT = Endpoint>
    void SetEndpoint(EndpointT&& value) { m_endpointHasBeenSet = true; m_endpoint = std::forward<EndpointT>(value); }
    template<typename EndpointT = Endpoint>
    Cluster& WithEndpoint(EndpointT&& value) { SetEndpoint(std::forward<EndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the cluster was created.</p>
     */
    inline const Aws::Utils::DateTime& GetClusterCreateTime() const { return m_clusterCreateTime; }
    inline bool ClusterCreateTimeHasBeenSet() const { return m_clusterCreateTimeHasBeenSet; }
    template<typename ClusterCreateTimeT = Aws::Utils::DateTime>
    void SetClusterCreateTime(ClusterCreateTimeT&& value) { m_clusterCreateTimeHasBeenSet = true; m_clusterCreateTime = std::forward<ClusterCreateTimeT>(value); }
    template<typename ClusterCreateTimeT = Aws::Utils::DateTime>
    Cluster& WithClusterCreateTime(ClusterCreateTimeT&& value) { SetClusterCreateTime(std::forward<ClusterCreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days that automatic cluster snapshots are retained.</p>
     */
    inline int GetAutomatedSnapshotRetentionPeriod() const { return m_automatedSnapshotRetentionPeriod; }
    inline bool AutomatedSnapshotRetentionPeriodHasBeenSet() const { return m_automatedSnapshotRetentionPeriodHasBeenSet; }
    inline void SetAutomatedSnapshotRetentionPeriod(int value) { m_automatedSnapshotRetentionPeriodHasBeenSet = true; m_automatedSnapshotRetentionPeriod = value; }
    inline Cluster& WithAutomatedSnapshotRetentionPeriod(int value) { SetAutomatedSnapshotRetentionPeriod(value); return *this;}
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
    inline Cluster& WithManualSnapshotRetentionPeriod(int value) { SetManualSnapshotRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of cluster security group that are associated with the cluster. Each
     * security group is represented by an element that contains
     * <code>ClusterSecurityGroup.Name</code> and
     * <code>ClusterSecurityGroup.Status</code> subelements. </p> <p>Cluster security
     * groups are used when the cluster is not created in an Amazon Virtual Private
     * Cloud (VPC). Clusters that are created in a VPC use VPC security groups, which
     * are listed by the <b>VpcSecurityGroups</b> parameter. </p>
     */
    inline const Aws::Vector<ClusterSecurityGroupMembership>& GetClusterSecurityGroups() const { return m_clusterSecurityGroups; }
    inline bool ClusterSecurityGroupsHasBeenSet() const { return m_clusterSecurityGroupsHasBeenSet; }
    template<typename ClusterSecurityGroupsT = Aws::Vector<ClusterSecurityGroupMembership>>
    void SetClusterSecurityGroups(ClusterSecurityGroupsT&& value) { m_clusterSecurityGroupsHasBeenSet = true; m_clusterSecurityGroups = std::forward<ClusterSecurityGroupsT>(value); }
    template<typename ClusterSecurityGroupsT = Aws::Vector<ClusterSecurityGroupMembership>>
    Cluster& WithClusterSecurityGroups(ClusterSecurityGroupsT&& value) { SetClusterSecurityGroups(std::forward<ClusterSecurityGroupsT>(value)); return *this;}
    template<typename ClusterSecurityGroupsT = ClusterSecurityGroupMembership>
    Cluster& AddClusterSecurityGroups(ClusterSecurityGroupsT&& value) { m_clusterSecurityGroupsHasBeenSet = true; m_clusterSecurityGroups.emplace_back(std::forward<ClusterSecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of Amazon Virtual Private Cloud (Amazon VPC) security groups that are
     * associated with the cluster. This parameter is returned only if the cluster is
     * in a VPC.</p>
     */
    inline const Aws::Vector<VpcSecurityGroupMembership>& GetVpcSecurityGroups() const { return m_vpcSecurityGroups; }
    inline bool VpcSecurityGroupsHasBeenSet() const { return m_vpcSecurityGroupsHasBeenSet; }
    template<typename VpcSecurityGroupsT = Aws::Vector<VpcSecurityGroupMembership>>
    void SetVpcSecurityGroups(VpcSecurityGroupsT&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = std::forward<VpcSecurityGroupsT>(value); }
    template<typename VpcSecurityGroupsT = Aws::Vector<VpcSecurityGroupMembership>>
    Cluster& WithVpcSecurityGroups(VpcSecurityGroupsT&& value) { SetVpcSecurityGroups(std::forward<VpcSecurityGroupsT>(value)); return *this;}
    template<typename VpcSecurityGroupsT = VpcSecurityGroupMembership>
    Cluster& AddVpcSecurityGroups(VpcSecurityGroupsT&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.emplace_back(std::forward<VpcSecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of cluster parameter groups that are associated with this cluster.
     * Each parameter group in the list is returned with its status.</p>
     */
    inline const Aws::Vector<ClusterParameterGroupStatus>& GetClusterParameterGroups() const { return m_clusterParameterGroups; }
    inline bool ClusterParameterGroupsHasBeenSet() const { return m_clusterParameterGroupsHasBeenSet; }
    template<typename ClusterParameterGroupsT = Aws::Vector<ClusterParameterGroupStatus>>
    void SetClusterParameterGroups(ClusterParameterGroupsT&& value) { m_clusterParameterGroupsHasBeenSet = true; m_clusterParameterGroups = std::forward<ClusterParameterGroupsT>(value); }
    template<typename ClusterParameterGroupsT = Aws::Vector<ClusterParameterGroupStatus>>
    Cluster& WithClusterParameterGroups(ClusterParameterGroupsT&& value) { SetClusterParameterGroups(std::forward<ClusterParameterGroupsT>(value)); return *this;}
    template<typename ClusterParameterGroupsT = ClusterParameterGroupStatus>
    Cluster& AddClusterParameterGroups(ClusterParameterGroupsT&& value) { m_clusterParameterGroupsHasBeenSet = true; m_clusterParameterGroups.emplace_back(std::forward<ClusterParameterGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the subnet group that is associated with the cluster. This
     * parameter is valid only when the cluster is in a VPC.</p>
     */
    inline const Aws::String& GetClusterSubnetGroupName() const { return m_clusterSubnetGroupName; }
    inline bool ClusterSubnetGroupNameHasBeenSet() const { return m_clusterSubnetGroupNameHasBeenSet; }
    template<typename ClusterSubnetGroupNameT = Aws::String>
    void SetClusterSubnetGroupName(ClusterSubnetGroupNameT&& value) { m_clusterSubnetGroupNameHasBeenSet = true; m_clusterSubnetGroupName = std::forward<ClusterSubnetGroupNameT>(value); }
    template<typename ClusterSubnetGroupNameT = Aws::String>
    Cluster& WithClusterSubnetGroupName(ClusterSubnetGroupNameT&& value) { SetClusterSubnetGroupName(std::forward<ClusterSubnetGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the VPC the cluster is in, if the cluster is in a VPC.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    Cluster& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Availability Zone in which the cluster is located.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    Cluster& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The weekly time range, in Universal Coordinated Time (UTC), during which
     * system maintenance can occur.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const { return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    void SetPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::forward<PreferredMaintenanceWindowT>(value); }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    Cluster& WithPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { SetPreferredMaintenanceWindow(std::forward<PreferredMaintenanceWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that, if present, indicates that changes to the cluster are pending.
     * Specific pending changes are identified by subelements.</p>
     */
    inline const PendingModifiedValues& GetPendingModifiedValues() const { return m_pendingModifiedValues; }
    inline bool PendingModifiedValuesHasBeenSet() const { return m_pendingModifiedValuesHasBeenSet; }
    template<typename PendingModifiedValuesT = PendingModifiedValues>
    void SetPendingModifiedValues(PendingModifiedValuesT&& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = std::forward<PendingModifiedValuesT>(value); }
    template<typename PendingModifiedValuesT = PendingModifiedValues>
    Cluster& WithPendingModifiedValues(PendingModifiedValuesT&& value) { SetPendingModifiedValues(std::forward<PendingModifiedValuesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version ID of the Amazon Redshift engine that is running on the
     * cluster.</p>
     */
    inline const Aws::String& GetClusterVersion() const { return m_clusterVersion; }
    inline bool ClusterVersionHasBeenSet() const { return m_clusterVersionHasBeenSet; }
    template<typename ClusterVersionT = Aws::String>
    void SetClusterVersion(ClusterVersionT&& value) { m_clusterVersionHasBeenSet = true; m_clusterVersion = std::forward<ClusterVersionT>(value); }
    template<typename ClusterVersionT = Aws::String>
    Cluster& WithClusterVersion(ClusterVersionT&& value) { SetClusterVersion(std::forward<ClusterVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean value that, if <code>true</code>, indicates that major version
     * upgrades will be applied automatically to the cluster during the maintenance
     * window. </p>
     */
    inline bool GetAllowVersionUpgrade() const { return m_allowVersionUpgrade; }
    inline bool AllowVersionUpgradeHasBeenSet() const { return m_allowVersionUpgradeHasBeenSet; }
    inline void SetAllowVersionUpgrade(bool value) { m_allowVersionUpgradeHasBeenSet = true; m_allowVersionUpgrade = value; }
    inline Cluster& WithAllowVersionUpgrade(bool value) { SetAllowVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of compute nodes in the cluster.</p>
     */
    inline int GetNumberOfNodes() const { return m_numberOfNodes; }
    inline bool NumberOfNodesHasBeenSet() const { return m_numberOfNodesHasBeenSet; }
    inline void SetNumberOfNodes(int value) { m_numberOfNodesHasBeenSet = true; m_numberOfNodes = value; }
    inline Cluster& WithNumberOfNodes(int value) { SetNumberOfNodes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean value that, if <code>true</code>, indicates that the cluster can be
     * accessed from a public network.</p> <p>Default: false</p>
     */
    inline bool GetPubliclyAccessible() const { return m_publiclyAccessible; }
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline Cluster& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean value that, if <code>true</code>, indicates that data in the
     * cluster is encrypted at rest.</p>
     */
    inline bool GetEncrypted() const { return m_encrypted; }
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline Cluster& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that describes the status of a cluster restore action. This parameter
     * returns null if the cluster was not created by restoring a snapshot.</p>
     */
    inline const RestoreStatus& GetRestoreStatus() const { return m_restoreStatus; }
    inline bool RestoreStatusHasBeenSet() const { return m_restoreStatusHasBeenSet; }
    template<typename RestoreStatusT = RestoreStatus>
    void SetRestoreStatus(RestoreStatusT&& value) { m_restoreStatusHasBeenSet = true; m_restoreStatus = std::forward<RestoreStatusT>(value); }
    template<typename RestoreStatusT = RestoreStatus>
    Cluster& WithRestoreStatus(RestoreStatusT&& value) { SetRestoreStatus(std::forward<RestoreStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const DataTransferProgress& GetDataTransferProgress() const { return m_dataTransferProgress; }
    inline bool DataTransferProgressHasBeenSet() const { return m_dataTransferProgressHasBeenSet; }
    template<typename DataTransferProgressT = DataTransferProgress>
    void SetDataTransferProgress(DataTransferProgressT&& value) { m_dataTransferProgressHasBeenSet = true; m_dataTransferProgress = std::forward<DataTransferProgressT>(value); }
    template<typename DataTransferProgressT = DataTransferProgress>
    Cluster& WithDataTransferProgress(DataTransferProgressT&& value) { SetDataTransferProgress(std::forward<DataTransferProgressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that reports whether the Amazon Redshift cluster has finished
     * applying any hardware security module (HSM) settings changes specified in a
     * modify cluster command.</p> <p>Values: active, applying</p>
     */
    inline const HsmStatus& GetHsmStatus() const { return m_hsmStatus; }
    inline bool HsmStatusHasBeenSet() const { return m_hsmStatusHasBeenSet; }
    template<typename HsmStatusT = HsmStatus>
    void SetHsmStatus(HsmStatusT&& value) { m_hsmStatusHasBeenSet = true; m_hsmStatus = std::forward<HsmStatusT>(value); }
    template<typename HsmStatusT = HsmStatus>
    Cluster& WithHsmStatus(HsmStatusT&& value) { SetHsmStatus(std::forward<HsmStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that returns the destination region and retention period that are
     * configured for cross-region snapshot copy.</p>
     */
    inline const ClusterSnapshotCopyStatus& GetClusterSnapshotCopyStatus() const { return m_clusterSnapshotCopyStatus; }
    inline bool ClusterSnapshotCopyStatusHasBeenSet() const { return m_clusterSnapshotCopyStatusHasBeenSet; }
    template<typename ClusterSnapshotCopyStatusT = ClusterSnapshotCopyStatus>
    void SetClusterSnapshotCopyStatus(ClusterSnapshotCopyStatusT&& value) { m_clusterSnapshotCopyStatusHasBeenSet = true; m_clusterSnapshotCopyStatus = std::forward<ClusterSnapshotCopyStatusT>(value); }
    template<typename ClusterSnapshotCopyStatusT = ClusterSnapshotCopyStatus>
    Cluster& WithClusterSnapshotCopyStatus(ClusterSnapshotCopyStatusT&& value) { SetClusterSnapshotCopyStatus(std::forward<ClusterSnapshotCopyStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public key for the cluster.</p>
     */
    inline const Aws::String& GetClusterPublicKey() const { return m_clusterPublicKey; }
    inline bool ClusterPublicKeyHasBeenSet() const { return m_clusterPublicKeyHasBeenSet; }
    template<typename ClusterPublicKeyT = Aws::String>
    void SetClusterPublicKey(ClusterPublicKeyT&& value) { m_clusterPublicKeyHasBeenSet = true; m_clusterPublicKey = std::forward<ClusterPublicKeyT>(value); }
    template<typename ClusterPublicKeyT = Aws::String>
    Cluster& WithClusterPublicKey(ClusterPublicKeyT&& value) { SetClusterPublicKey(std::forward<ClusterPublicKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The nodes in the cluster.</p>
     */
    inline const Aws::Vector<ClusterNode>& GetClusterNodes() const { return m_clusterNodes; }
    inline bool ClusterNodesHasBeenSet() const { return m_clusterNodesHasBeenSet; }
    template<typename ClusterNodesT = Aws::Vector<ClusterNode>>
    void SetClusterNodes(ClusterNodesT&& value) { m_clusterNodesHasBeenSet = true; m_clusterNodes = std::forward<ClusterNodesT>(value); }
    template<typename ClusterNodesT = Aws::Vector<ClusterNode>>
    Cluster& WithClusterNodes(ClusterNodesT&& value) { SetClusterNodes(std::forward<ClusterNodesT>(value)); return *this;}
    template<typename ClusterNodesT = ClusterNode>
    Cluster& AddClusterNodes(ClusterNodesT&& value) { m_clusterNodesHasBeenSet = true; m_clusterNodes.emplace_back(std::forward<ClusterNodesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the elastic IP (EIP) address.</p>
     */
    inline const ElasticIpStatus& GetElasticIpStatus() const { return m_elasticIpStatus; }
    inline bool ElasticIpStatusHasBeenSet() const { return m_elasticIpStatusHasBeenSet; }
    template<typename ElasticIpStatusT = ElasticIpStatus>
    void SetElasticIpStatus(ElasticIpStatusT&& value) { m_elasticIpStatusHasBeenSet = true; m_elasticIpStatus = std::forward<ElasticIpStatusT>(value); }
    template<typename ElasticIpStatusT = ElasticIpStatus>
    Cluster& WithElasticIpStatus(ElasticIpStatusT&& value) { SetElasticIpStatus(std::forward<ElasticIpStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific revision number of the database in the cluster.</p>
     */
    inline const Aws::String& GetClusterRevisionNumber() const { return m_clusterRevisionNumber; }
    inline bool ClusterRevisionNumberHasBeenSet() const { return m_clusterRevisionNumberHasBeenSet; }
    template<typename ClusterRevisionNumberT = Aws::String>
    void SetClusterRevisionNumber(ClusterRevisionNumberT&& value) { m_clusterRevisionNumberHasBeenSet = true; m_clusterRevisionNumber = std::forward<ClusterRevisionNumberT>(value); }
    template<typename ClusterRevisionNumberT = Aws::String>
    Cluster& WithClusterRevisionNumber(ClusterRevisionNumberT&& value) { SetClusterRevisionNumber(std::forward<ClusterRevisionNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of tags for the cluster.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    Cluster& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    Cluster& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Key Management Service (KMS) key ID of the encryption key used to encrypt
     * data in the cluster.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    Cluster& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
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
    inline Cluster& WithEnhancedVpcRouting(bool value) { SetEnhancedVpcRouting(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Identity and Access Management (IAM) roles that can be used by the
     * cluster to access other Amazon Web Services services.</p>
     */
    inline const Aws::Vector<ClusterIamRole>& GetIamRoles() const { return m_iamRoles; }
    inline bool IamRolesHasBeenSet() const { return m_iamRolesHasBeenSet; }
    template<typename IamRolesT = Aws::Vector<ClusterIamRole>>
    void SetIamRoles(IamRolesT&& value) { m_iamRolesHasBeenSet = true; m_iamRoles = std::forward<IamRolesT>(value); }
    template<typename IamRolesT = Aws::Vector<ClusterIamRole>>
    Cluster& WithIamRoles(IamRolesT&& value) { SetIamRoles(std::forward<IamRolesT>(value)); return *this;}
    template<typename IamRolesT = ClusterIamRole>
    Cluster& AddIamRoles(IamRolesT&& value) { m_iamRolesHasBeenSet = true; m_iamRoles.emplace_back(std::forward<IamRolesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Cluster operations that are waiting to be started.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPendingActions() const { return m_pendingActions; }
    inline bool PendingActionsHasBeenSet() const { return m_pendingActionsHasBeenSet; }
    template<typename PendingActionsT = Aws::Vector<Aws::String>>
    void SetPendingActions(PendingActionsT&& value) { m_pendingActionsHasBeenSet = true; m_pendingActions = std::forward<PendingActionsT>(value); }
    template<typename PendingActionsT = Aws::Vector<Aws::String>>
    Cluster& WithPendingActions(PendingActionsT&& value) { SetPendingActions(std::forward<PendingActionsT>(value)); return *this;}
    template<typename PendingActionsT = Aws::String>
    Cluster& AddPendingActions(PendingActionsT&& value) { m_pendingActionsHasBeenSet = true; m_pendingActions.emplace_back(std::forward<PendingActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the maintenance track for the cluster.</p>
     */
    inline const Aws::String& GetMaintenanceTrackName() const { return m_maintenanceTrackName; }
    inline bool MaintenanceTrackNameHasBeenSet() const { return m_maintenanceTrackNameHasBeenSet; }
    template<typename MaintenanceTrackNameT = Aws::String>
    void SetMaintenanceTrackName(MaintenanceTrackNameT&& value) { m_maintenanceTrackNameHasBeenSet = true; m_maintenanceTrackName = std::forward<MaintenanceTrackNameT>(value); }
    template<typename MaintenanceTrackNameT = Aws::String>
    Cluster& WithMaintenanceTrackName(MaintenanceTrackNameT&& value) { SetMaintenanceTrackName(std::forward<MaintenanceTrackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of nodes that you can resize the cluster to with the elastic
     * resize method. </p>
     */
    inline const Aws::String& GetElasticResizeNumberOfNodeOptions() const { return m_elasticResizeNumberOfNodeOptions; }
    inline bool ElasticResizeNumberOfNodeOptionsHasBeenSet() const { return m_elasticResizeNumberOfNodeOptionsHasBeenSet; }
    template<typename ElasticResizeNumberOfNodeOptionsT = Aws::String>
    void SetElasticResizeNumberOfNodeOptions(ElasticResizeNumberOfNodeOptionsT&& value) { m_elasticResizeNumberOfNodeOptionsHasBeenSet = true; m_elasticResizeNumberOfNodeOptions = std::forward<ElasticResizeNumberOfNodeOptionsT>(value); }
    template<typename ElasticResizeNumberOfNodeOptionsT = Aws::String>
    Cluster& WithElasticResizeNumberOfNodeOptions(ElasticResizeNumberOfNodeOptionsT&& value) { SetElasticResizeNumberOfNodeOptions(std::forward<ElasticResizeNumberOfNodeOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes a group of <code>DeferredMaintenanceWindow</code> objects.</p>
     */
    inline const Aws::Vector<DeferredMaintenanceWindow>& GetDeferredMaintenanceWindows() const { return m_deferredMaintenanceWindows; }
    inline bool DeferredMaintenanceWindowsHasBeenSet() const { return m_deferredMaintenanceWindowsHasBeenSet; }
    template<typename DeferredMaintenanceWindowsT = Aws::Vector<DeferredMaintenanceWindow>>
    void SetDeferredMaintenanceWindows(DeferredMaintenanceWindowsT&& value) { m_deferredMaintenanceWindowsHasBeenSet = true; m_deferredMaintenanceWindows = std::forward<DeferredMaintenanceWindowsT>(value); }
    template<typename DeferredMaintenanceWindowsT = Aws::Vector<DeferredMaintenanceWindow>>
    Cluster& WithDeferredMaintenanceWindows(DeferredMaintenanceWindowsT&& value) { SetDeferredMaintenanceWindows(std::forward<DeferredMaintenanceWindowsT>(value)); return *this;}
    template<typename DeferredMaintenanceWindowsT = DeferredMaintenanceWindow>
    Cluster& AddDeferredMaintenanceWindows(DeferredMaintenanceWindowsT&& value) { m_deferredMaintenanceWindowsHasBeenSet = true; m_deferredMaintenanceWindows.emplace_back(std::forward<DeferredMaintenanceWindowsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the cluster snapshot schedule.</p>
     */
    inline const Aws::String& GetSnapshotScheduleIdentifier() const { return m_snapshotScheduleIdentifier; }
    inline bool SnapshotScheduleIdentifierHasBeenSet() const { return m_snapshotScheduleIdentifierHasBeenSet; }
    template<typename SnapshotScheduleIdentifierT = Aws::String>
    void SetSnapshotScheduleIdentifier(SnapshotScheduleIdentifierT&& value) { m_snapshotScheduleIdentifierHasBeenSet = true; m_snapshotScheduleIdentifier = std::forward<SnapshotScheduleIdentifierT>(value); }
    template<typename SnapshotScheduleIdentifierT = Aws::String>
    Cluster& WithSnapshotScheduleIdentifier(SnapshotScheduleIdentifierT&& value) { SetSnapshotScheduleIdentifier(std::forward<SnapshotScheduleIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the cluster snapshot schedule.</p>
     */
    inline ScheduleState GetSnapshotScheduleState() const { return m_snapshotScheduleState; }
    inline bool SnapshotScheduleStateHasBeenSet() const { return m_snapshotScheduleStateHasBeenSet; }
    inline void SetSnapshotScheduleState(ScheduleState value) { m_snapshotScheduleStateHasBeenSet = true; m_snapshotScheduleState = value; }
    inline Cluster& WithSnapshotScheduleState(ScheduleState value) { SetSnapshotScheduleState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the next snapshot is expected to be taken for clusters
     * with a valid snapshot schedule and backups enabled. </p>
     */
    inline const Aws::Utils::DateTime& GetExpectedNextSnapshotScheduleTime() const { return m_expectedNextSnapshotScheduleTime; }
    inline bool ExpectedNextSnapshotScheduleTimeHasBeenSet() const { return m_expectedNextSnapshotScheduleTimeHasBeenSet; }
    template<typename ExpectedNextSnapshotScheduleTimeT = Aws::Utils::DateTime>
    void SetExpectedNextSnapshotScheduleTime(ExpectedNextSnapshotScheduleTimeT&& value) { m_expectedNextSnapshotScheduleTimeHasBeenSet = true; m_expectedNextSnapshotScheduleTime = std::forward<ExpectedNextSnapshotScheduleTimeT>(value); }
    template<typename ExpectedNextSnapshotScheduleTimeT = Aws::Utils::DateTime>
    Cluster& WithExpectedNextSnapshotScheduleTime(ExpectedNextSnapshotScheduleTimeT&& value) { SetExpectedNextSnapshotScheduleTime(std::forward<ExpectedNextSnapshotScheduleTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of next expected snapshot for clusters having a valid snapshot
     * schedule and backups enabled. Possible values are the following:</p> <ul> <li>
     * <p>OnTrack - The next snapshot is expected to be taken on time. </p> </li> <li>
     * <p>Pending - The next snapshot is pending to be taken. </p> </li> </ul>
     */
    inline const Aws::String& GetExpectedNextSnapshotScheduleTimeStatus() const { return m_expectedNextSnapshotScheduleTimeStatus; }
    inline bool ExpectedNextSnapshotScheduleTimeStatusHasBeenSet() const { return m_expectedNextSnapshotScheduleTimeStatusHasBeenSet; }
    template<typename ExpectedNextSnapshotScheduleTimeStatusT = Aws::String>
    void SetExpectedNextSnapshotScheduleTimeStatus(ExpectedNextSnapshotScheduleTimeStatusT&& value) { m_expectedNextSnapshotScheduleTimeStatusHasBeenSet = true; m_expectedNextSnapshotScheduleTimeStatus = std::forward<ExpectedNextSnapshotScheduleTimeStatusT>(value); }
    template<typename ExpectedNextSnapshotScheduleTimeStatusT = Aws::String>
    Cluster& WithExpectedNextSnapshotScheduleTimeStatus(ExpectedNextSnapshotScheduleTimeStatusT&& value) { SetExpectedNextSnapshotScheduleTimeStatus(std::forward<ExpectedNextSnapshotScheduleTimeStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time in UTC when system maintenance can begin.</p>
     */
    inline const Aws::Utils::DateTime& GetNextMaintenanceWindowStartTime() const { return m_nextMaintenanceWindowStartTime; }
    inline bool NextMaintenanceWindowStartTimeHasBeenSet() const { return m_nextMaintenanceWindowStartTimeHasBeenSet; }
    template<typename NextMaintenanceWindowStartTimeT = Aws::Utils::DateTime>
    void SetNextMaintenanceWindowStartTime(NextMaintenanceWindowStartTimeT&& value) { m_nextMaintenanceWindowStartTimeHasBeenSet = true; m_nextMaintenanceWindowStartTime = std::forward<NextMaintenanceWindowStartTimeT>(value); }
    template<typename NextMaintenanceWindowStartTimeT = Aws::Utils::DateTime>
    Cluster& WithNextMaintenanceWindowStartTime(NextMaintenanceWindowStartTimeT&& value) { SetNextMaintenanceWindowStartTime(std::forward<NextMaintenanceWindowStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the following:</p> <ul> <li> <p>AllowCancelResize: a boolean value
     * indicating if the resize operation can be cancelled.</p> </li> <li>
     * <p>ResizeType: Returns ClassicResize</p> </li> </ul>
     */
    inline const ResizeInfo& GetResizeInfo() const { return m_resizeInfo; }
    inline bool ResizeInfoHasBeenSet() const { return m_resizeInfoHasBeenSet; }
    template<typename ResizeInfoT = ResizeInfo>
    void SetResizeInfo(ResizeInfoT&& value) { m_resizeInfoHasBeenSet = true; m_resizeInfo = std::forward<ResizeInfoT>(value); }
    template<typename ResizeInfoT = ResizeInfo>
    Cluster& WithResizeInfo(ResizeInfoT&& value) { SetResizeInfo(std::forward<ResizeInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the status of the Availability Zone relocation operation.</p>
     */
    inline const Aws::String& GetAvailabilityZoneRelocationStatus() const { return m_availabilityZoneRelocationStatus; }
    inline bool AvailabilityZoneRelocationStatusHasBeenSet() const { return m_availabilityZoneRelocationStatusHasBeenSet; }
    template<typename AvailabilityZoneRelocationStatusT = Aws::String>
    void SetAvailabilityZoneRelocationStatus(AvailabilityZoneRelocationStatusT&& value) { m_availabilityZoneRelocationStatusHasBeenSet = true; m_availabilityZoneRelocationStatus = std::forward<AvailabilityZoneRelocationStatusT>(value); }
    template<typename AvailabilityZoneRelocationStatusT = Aws::String>
    Cluster& WithAvailabilityZoneRelocationStatus(AvailabilityZoneRelocationStatusT&& value) { SetAvailabilityZoneRelocationStatus(std::forward<AvailabilityZoneRelocationStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace Amazon Resource Name (ARN) of the cluster.</p>
     */
    inline const Aws::String& GetClusterNamespaceArn() const { return m_clusterNamespaceArn; }
    inline bool ClusterNamespaceArnHasBeenSet() const { return m_clusterNamespaceArnHasBeenSet; }
    template<typename ClusterNamespaceArnT = Aws::String>
    void SetClusterNamespaceArn(ClusterNamespaceArnT&& value) { m_clusterNamespaceArnHasBeenSet = true; m_clusterNamespaceArn = std::forward<ClusterNamespaceArnT>(value); }
    template<typename ClusterNamespaceArnT = Aws::String>
    Cluster& WithClusterNamespaceArn(ClusterNamespaceArnT&& value) { SetClusterNamespaceArn(std::forward<ClusterNamespaceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total storage capacity of the cluster in megabytes. </p>
     */
    inline long long GetTotalStorageCapacityInMegaBytes() const { return m_totalStorageCapacityInMegaBytes; }
    inline bool TotalStorageCapacityInMegaBytesHasBeenSet() const { return m_totalStorageCapacityInMegaBytesHasBeenSet; }
    inline void SetTotalStorageCapacityInMegaBytes(long long value) { m_totalStorageCapacityInMegaBytesHasBeenSet = true; m_totalStorageCapacityInMegaBytes = value; }
    inline Cluster& WithTotalStorageCapacityInMegaBytes(long long value) { SetTotalStorageCapacityInMegaBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This field is retired. Amazon Redshift automatically determines whether to
     * use AQUA (Advanced Query Accelerator).</p>
     */
    inline const AquaConfiguration& GetAquaConfiguration() const { return m_aquaConfiguration; }
    inline bool AquaConfigurationHasBeenSet() const { return m_aquaConfigurationHasBeenSet; }
    template<typename AquaConfigurationT = AquaConfiguration>
    void SetAquaConfiguration(AquaConfigurationT&& value) { m_aquaConfigurationHasBeenSet = true; m_aquaConfiguration = std::forward<AquaConfigurationT>(value); }
    template<typename AquaConfigurationT = AquaConfiguration>
    Cluster& WithAquaConfiguration(AquaConfigurationT&& value) { SetAquaConfiguration(std::forward<AquaConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role set as default for the
     * cluster.</p>
     */
    inline const Aws::String& GetDefaultIamRoleArn() const { return m_defaultIamRoleArn; }
    inline bool DefaultIamRoleArnHasBeenSet() const { return m_defaultIamRoleArnHasBeenSet; }
    template<typename DefaultIamRoleArnT = Aws::String>
    void SetDefaultIamRoleArn(DefaultIamRoleArnT&& value) { m_defaultIamRoleArnHasBeenSet = true; m_defaultIamRoleArn = std::forward<DefaultIamRoleArnT>(value); }
    template<typename DefaultIamRoleArnT = Aws::String>
    Cluster& WithDefaultIamRoleArn(DefaultIamRoleArnT&& value) { SetDefaultIamRoleArn(std::forward<DefaultIamRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the reserved-node exchange request. Statuses include
     * in-progress and requested.</p>
     */
    inline const ReservedNodeExchangeStatus& GetReservedNodeExchangeStatus() const { return m_reservedNodeExchangeStatus; }
    inline bool ReservedNodeExchangeStatusHasBeenSet() const { return m_reservedNodeExchangeStatusHasBeenSet; }
    template<typename ReservedNodeExchangeStatusT = ReservedNodeExchangeStatus>
    void SetReservedNodeExchangeStatus(ReservedNodeExchangeStatusT&& value) { m_reservedNodeExchangeStatusHasBeenSet = true; m_reservedNodeExchangeStatus = std::forward<ReservedNodeExchangeStatusT>(value); }
    template<typename ReservedNodeExchangeStatusT = ReservedNodeExchangeStatus>
    Cluster& WithReservedNodeExchangeStatus(ReservedNodeExchangeStatusT&& value) { SetReservedNodeExchangeStatus(std::forward<ReservedNodeExchangeStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom domain name associated with the cluster.</p>
     */
    inline const Aws::String& GetCustomDomainName() const { return m_customDomainName; }
    inline bool CustomDomainNameHasBeenSet() const { return m_customDomainNameHasBeenSet; }
    template<typename CustomDomainNameT = Aws::String>
    void SetCustomDomainName(CustomDomainNameT&& value) { m_customDomainNameHasBeenSet = true; m_customDomainName = std::forward<CustomDomainNameT>(value); }
    template<typename CustomDomainNameT = Aws::String>
    Cluster& WithCustomDomainName(CustomDomainNameT&& value) { SetCustomDomainName(std::forward<CustomDomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The certificate Amazon Resource Name (ARN) for the custom domain name.</p>
     */
    inline const Aws::String& GetCustomDomainCertificateArn() const { return m_customDomainCertificateArn; }
    inline bool CustomDomainCertificateArnHasBeenSet() const { return m_customDomainCertificateArnHasBeenSet; }
    template<typename CustomDomainCertificateArnT = Aws::String>
    void SetCustomDomainCertificateArn(CustomDomainCertificateArnT&& value) { m_customDomainCertificateArnHasBeenSet = true; m_customDomainCertificateArn = std::forward<CustomDomainCertificateArnT>(value); }
    template<typename CustomDomainCertificateArnT = Aws::String>
    Cluster& WithCustomDomainCertificateArn(CustomDomainCertificateArnT&& value) { SetCustomDomainCertificateArn(std::forward<CustomDomainCertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expiration date for the certificate associated with the custom domain
     * name.</p>
     */
    inline const Aws::Utils::DateTime& GetCustomDomainCertificateExpiryDate() const { return m_customDomainCertificateExpiryDate; }
    inline bool CustomDomainCertificateExpiryDateHasBeenSet() const { return m_customDomainCertificateExpiryDateHasBeenSet; }
    template<typename CustomDomainCertificateExpiryDateT = Aws::Utils::DateTime>
    void SetCustomDomainCertificateExpiryDate(CustomDomainCertificateExpiryDateT&& value) { m_customDomainCertificateExpiryDateHasBeenSet = true; m_customDomainCertificateExpiryDate = std::forward<CustomDomainCertificateExpiryDateT>(value); }
    template<typename CustomDomainCertificateExpiryDateT = Aws::Utils::DateTime>
    Cluster& WithCustomDomainCertificateExpiryDate(CustomDomainCertificateExpiryDateT&& value) { SetCustomDomainCertificateExpiryDate(std::forward<CustomDomainCertificateExpiryDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the cluster's admin user credentials
     * secret.</p>
     */
    inline const Aws::String& GetMasterPasswordSecretArn() const { return m_masterPasswordSecretArn; }
    inline bool MasterPasswordSecretArnHasBeenSet() const { return m_masterPasswordSecretArnHasBeenSet; }
    template<typename MasterPasswordSecretArnT = Aws::String>
    void SetMasterPasswordSecretArn(MasterPasswordSecretArnT&& value) { m_masterPasswordSecretArnHasBeenSet = true; m_masterPasswordSecretArn = std::forward<MasterPasswordSecretArnT>(value); }
    template<typename MasterPasswordSecretArnT = Aws::String>
    Cluster& WithMasterPasswordSecretArn(MasterPasswordSecretArnT&& value) { SetMasterPasswordSecretArn(std::forward<MasterPasswordSecretArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Key Management Service (KMS) key used to encrypt and store the
     * cluster's admin credentials secret.</p>
     */
    inline const Aws::String& GetMasterPasswordSecretKmsKeyId() const { return m_masterPasswordSecretKmsKeyId; }
    inline bool MasterPasswordSecretKmsKeyIdHasBeenSet() const { return m_masterPasswordSecretKmsKeyIdHasBeenSet; }
    template<typename MasterPasswordSecretKmsKeyIdT = Aws::String>
    void SetMasterPasswordSecretKmsKeyId(MasterPasswordSecretKmsKeyIdT&& value) { m_masterPasswordSecretKmsKeyIdHasBeenSet = true; m_masterPasswordSecretKmsKeyId = std::forward<MasterPasswordSecretKmsKeyIdT>(value); }
    template<typename MasterPasswordSecretKmsKeyIdT = Aws::String>
    Cluster& WithMasterPasswordSecretKmsKeyId(MasterPasswordSecretKmsKeyIdT&& value) { SetMasterPasswordSecretKmsKeyId(std::forward<MasterPasswordSecretKmsKeyIdT>(value)); return *this;}
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
    Cluster& WithIpAddressType(IpAddressTypeT&& value) { SetIpAddressType(std::forward<IpAddressTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean value that, if true, indicates that the cluster is deployed in two
     * Availability Zones.</p>
     */
    inline const Aws::String& GetMultiAZ() const { return m_multiAZ; }
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }
    template<typename MultiAZT = Aws::String>
    void SetMultiAZ(MultiAZT&& value) { m_multiAZHasBeenSet = true; m_multiAZ = std::forward<MultiAZT>(value); }
    template<typename MultiAZT = Aws::String>
    Cluster& WithMultiAZ(MultiAZT&& value) { SetMultiAZ(std::forward<MultiAZT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secondary compute unit of a cluster, if Multi-AZ deployment is turned
     * on.</p>
     */
    inline const SecondaryClusterInfo& GetMultiAZSecondary() const { return m_multiAZSecondary; }
    inline bool MultiAZSecondaryHasBeenSet() const { return m_multiAZSecondaryHasBeenSet; }
    template<typename MultiAZSecondaryT = SecondaryClusterInfo>
    void SetMultiAZSecondary(MultiAZSecondaryT&& value) { m_multiAZSecondaryHasBeenSet = true; m_multiAZSecondary = std::forward<MultiAZSecondaryT>(value); }
    template<typename MultiAZSecondaryT = SecondaryClusterInfo>
    Cluster& WithMultiAZSecondary(MultiAZSecondaryT&& value) { SetMultiAZSecondary(std::forward<MultiAZSecondaryT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet = false;

    Aws::String m_clusterStatus;
    bool m_clusterStatusHasBeenSet = false;

    Aws::String m_clusterAvailabilityStatus;
    bool m_clusterAvailabilityStatusHasBeenSet = false;

    Aws::String m_modifyStatus;
    bool m_modifyStatusHasBeenSet = false;

    Aws::String m_masterUsername;
    bool m_masterUsernameHasBeenSet = false;

    Aws::String m_dBName;
    bool m_dBNameHasBeenSet = false;

    Endpoint m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::Utils::DateTime m_clusterCreateTime{};
    bool m_clusterCreateTimeHasBeenSet = false;

    int m_automatedSnapshotRetentionPeriod{0};
    bool m_automatedSnapshotRetentionPeriodHasBeenSet = false;

    int m_manualSnapshotRetentionPeriod{0};
    bool m_manualSnapshotRetentionPeriodHasBeenSet = false;

    Aws::Vector<ClusterSecurityGroupMembership> m_clusterSecurityGroups;
    bool m_clusterSecurityGroupsHasBeenSet = false;

    Aws::Vector<VpcSecurityGroupMembership> m_vpcSecurityGroups;
    bool m_vpcSecurityGroupsHasBeenSet = false;

    Aws::Vector<ClusterParameterGroupStatus> m_clusterParameterGroups;
    bool m_clusterParameterGroupsHasBeenSet = false;

    Aws::String m_clusterSubnetGroupName;
    bool m_clusterSubnetGroupNameHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    PendingModifiedValues m_pendingModifiedValues;
    bool m_pendingModifiedValuesHasBeenSet = false;

    Aws::String m_clusterVersion;
    bool m_clusterVersionHasBeenSet = false;

    bool m_allowVersionUpgrade{false};
    bool m_allowVersionUpgradeHasBeenSet = false;

    int m_numberOfNodes{0};
    bool m_numberOfNodesHasBeenSet = false;

    bool m_publiclyAccessible{false};
    bool m_publiclyAccessibleHasBeenSet = false;

    bool m_encrypted{false};
    bool m_encryptedHasBeenSet = false;

    RestoreStatus m_restoreStatus;
    bool m_restoreStatusHasBeenSet = false;

    DataTransferProgress m_dataTransferProgress;
    bool m_dataTransferProgressHasBeenSet = false;

    HsmStatus m_hsmStatus;
    bool m_hsmStatusHasBeenSet = false;

    ClusterSnapshotCopyStatus m_clusterSnapshotCopyStatus;
    bool m_clusterSnapshotCopyStatusHasBeenSet = false;

    Aws::String m_clusterPublicKey;
    bool m_clusterPublicKeyHasBeenSet = false;

    Aws::Vector<ClusterNode> m_clusterNodes;
    bool m_clusterNodesHasBeenSet = false;

    ElasticIpStatus m_elasticIpStatus;
    bool m_elasticIpStatusHasBeenSet = false;

    Aws::String m_clusterRevisionNumber;
    bool m_clusterRevisionNumberHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    bool m_enhancedVpcRouting{false};
    bool m_enhancedVpcRoutingHasBeenSet = false;

    Aws::Vector<ClusterIamRole> m_iamRoles;
    bool m_iamRolesHasBeenSet = false;

    Aws::Vector<Aws::String> m_pendingActions;
    bool m_pendingActionsHasBeenSet = false;

    Aws::String m_maintenanceTrackName;
    bool m_maintenanceTrackNameHasBeenSet = false;

    Aws::String m_elasticResizeNumberOfNodeOptions;
    bool m_elasticResizeNumberOfNodeOptionsHasBeenSet = false;

    Aws::Vector<DeferredMaintenanceWindow> m_deferredMaintenanceWindows;
    bool m_deferredMaintenanceWindowsHasBeenSet = false;

    Aws::String m_snapshotScheduleIdentifier;
    bool m_snapshotScheduleIdentifierHasBeenSet = false;

    ScheduleState m_snapshotScheduleState{ScheduleState::NOT_SET};
    bool m_snapshotScheduleStateHasBeenSet = false;

    Aws::Utils::DateTime m_expectedNextSnapshotScheduleTime{};
    bool m_expectedNextSnapshotScheduleTimeHasBeenSet = false;

    Aws::String m_expectedNextSnapshotScheduleTimeStatus;
    bool m_expectedNextSnapshotScheduleTimeStatusHasBeenSet = false;

    Aws::Utils::DateTime m_nextMaintenanceWindowStartTime{};
    bool m_nextMaintenanceWindowStartTimeHasBeenSet = false;

    ResizeInfo m_resizeInfo;
    bool m_resizeInfoHasBeenSet = false;

    Aws::String m_availabilityZoneRelocationStatus;
    bool m_availabilityZoneRelocationStatusHasBeenSet = false;

    Aws::String m_clusterNamespaceArn;
    bool m_clusterNamespaceArnHasBeenSet = false;

    long long m_totalStorageCapacityInMegaBytes{0};
    bool m_totalStorageCapacityInMegaBytesHasBeenSet = false;

    AquaConfiguration m_aquaConfiguration;
    bool m_aquaConfigurationHasBeenSet = false;

    Aws::String m_defaultIamRoleArn;
    bool m_defaultIamRoleArnHasBeenSet = false;

    ReservedNodeExchangeStatus m_reservedNodeExchangeStatus;
    bool m_reservedNodeExchangeStatusHasBeenSet = false;

    Aws::String m_customDomainName;
    bool m_customDomainNameHasBeenSet = false;

    Aws::String m_customDomainCertificateArn;
    bool m_customDomainCertificateArnHasBeenSet = false;

    Aws::Utils::DateTime m_customDomainCertificateExpiryDate{};
    bool m_customDomainCertificateExpiryDateHasBeenSet = false;

    Aws::String m_masterPasswordSecretArn;
    bool m_masterPasswordSecretArnHasBeenSet = false;

    Aws::String m_masterPasswordSecretKmsKeyId;
    bool m_masterPasswordSecretKmsKeyIdHasBeenSet = false;

    Aws::String m_ipAddressType;
    bool m_ipAddressTypeHasBeenSet = false;

    Aws::String m_multiAZ;
    bool m_multiAZHasBeenSet = false;

    SecondaryClusterInfo m_multiAZSecondary;
    bool m_multiAZSecondaryHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
