﻿/**
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
    AWS_REDSHIFT_API Cluster();
    AWS_REDSHIFT_API Cluster(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API Cluster& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }
    inline Cluster& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}
    inline Cluster& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}
    inline Cluster& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node type for the nodes in the cluster.</p>
     */
    inline const Aws::String& GetNodeType() const{ return m_nodeType; }
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
    inline void SetNodeType(const Aws::String& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }
    inline void SetNodeType(Aws::String&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::move(value); }
    inline void SetNodeType(const char* value) { m_nodeTypeHasBeenSet = true; m_nodeType.assign(value); }
    inline Cluster& WithNodeType(const Aws::String& value) { SetNodeType(value); return *this;}
    inline Cluster& WithNodeType(Aws::String&& value) { SetNodeType(std::move(value)); return *this;}
    inline Cluster& WithNodeType(const char* value) { SetNodeType(value); return *this;}
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
    inline const Aws::String& GetClusterStatus() const{ return m_clusterStatus; }
    inline bool ClusterStatusHasBeenSet() const { return m_clusterStatusHasBeenSet; }
    inline void SetClusterStatus(const Aws::String& value) { m_clusterStatusHasBeenSet = true; m_clusterStatus = value; }
    inline void SetClusterStatus(Aws::String&& value) { m_clusterStatusHasBeenSet = true; m_clusterStatus = std::move(value); }
    inline void SetClusterStatus(const char* value) { m_clusterStatusHasBeenSet = true; m_clusterStatus.assign(value); }
    inline Cluster& WithClusterStatus(const Aws::String& value) { SetClusterStatus(value); return *this;}
    inline Cluster& WithClusterStatus(Aws::String&& value) { SetClusterStatus(std::move(value)); return *this;}
    inline Cluster& WithClusterStatus(const char* value) { SetClusterStatus(value); return *this;}
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
    inline const Aws::String& GetClusterAvailabilityStatus() const{ return m_clusterAvailabilityStatus; }
    inline bool ClusterAvailabilityStatusHasBeenSet() const { return m_clusterAvailabilityStatusHasBeenSet; }
    inline void SetClusterAvailabilityStatus(const Aws::String& value) { m_clusterAvailabilityStatusHasBeenSet = true; m_clusterAvailabilityStatus = value; }
    inline void SetClusterAvailabilityStatus(Aws::String&& value) { m_clusterAvailabilityStatusHasBeenSet = true; m_clusterAvailabilityStatus = std::move(value); }
    inline void SetClusterAvailabilityStatus(const char* value) { m_clusterAvailabilityStatusHasBeenSet = true; m_clusterAvailabilityStatus.assign(value); }
    inline Cluster& WithClusterAvailabilityStatus(const Aws::String& value) { SetClusterAvailabilityStatus(value); return *this;}
    inline Cluster& WithClusterAvailabilityStatus(Aws::String&& value) { SetClusterAvailabilityStatus(std::move(value)); return *this;}
    inline Cluster& WithClusterAvailabilityStatus(const char* value) { SetClusterAvailabilityStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a modify operation, if any, initiated for the cluster.</p>
     */
    inline const Aws::String& GetModifyStatus() const{ return m_modifyStatus; }
    inline bool ModifyStatusHasBeenSet() const { return m_modifyStatusHasBeenSet; }
    inline void SetModifyStatus(const Aws::String& value) { m_modifyStatusHasBeenSet = true; m_modifyStatus = value; }
    inline void SetModifyStatus(Aws::String&& value) { m_modifyStatusHasBeenSet = true; m_modifyStatus = std::move(value); }
    inline void SetModifyStatus(const char* value) { m_modifyStatusHasBeenSet = true; m_modifyStatus.assign(value); }
    inline Cluster& WithModifyStatus(const Aws::String& value) { SetModifyStatus(value); return *this;}
    inline Cluster& WithModifyStatus(Aws::String&& value) { SetModifyStatus(std::move(value)); return *this;}
    inline Cluster& WithModifyStatus(const char* value) { SetModifyStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The admin user name for the cluster. This name is used to connect to the
     * database that is specified in the <b>DBName</b> parameter. </p>
     */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }
    inline void SetMasterUsername(Aws::String&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::move(value); }
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }
    inline Cluster& WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}
    inline Cluster& WithMasterUsername(Aws::String&& value) { SetMasterUsername(std::move(value)); return *this;}
    inline Cluster& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the initial database that was created when the cluster was
     * created. This same name is returned for the life of the cluster. If an initial
     * database was not specified, a database named <code>dev</code>dev was created by
     * default. </p>
     */
    inline const Aws::String& GetDBName() const{ return m_dBName; }
    inline bool DBNameHasBeenSet() const { return m_dBNameHasBeenSet; }
    inline void SetDBName(const Aws::String& value) { m_dBNameHasBeenSet = true; m_dBName = value; }
    inline void SetDBName(Aws::String&& value) { m_dBNameHasBeenSet = true; m_dBName = std::move(value); }
    inline void SetDBName(const char* value) { m_dBNameHasBeenSet = true; m_dBName.assign(value); }
    inline Cluster& WithDBName(const Aws::String& value) { SetDBName(value); return *this;}
    inline Cluster& WithDBName(Aws::String&& value) { SetDBName(std::move(value)); return *this;}
    inline Cluster& WithDBName(const char* value) { SetDBName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection endpoint.</p>
     */
    inline const Endpoint& GetEndpoint() const{ return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    inline void SetEndpoint(const Endpoint& value) { m_endpointHasBeenSet = true; m_endpoint = value; }
    inline void SetEndpoint(Endpoint&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }
    inline Cluster& WithEndpoint(const Endpoint& value) { SetEndpoint(value); return *this;}
    inline Cluster& WithEndpoint(Endpoint&& value) { SetEndpoint(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the cluster was created.</p>
     */
    inline const Aws::Utils::DateTime& GetClusterCreateTime() const{ return m_clusterCreateTime; }
    inline bool ClusterCreateTimeHasBeenSet() const { return m_clusterCreateTimeHasBeenSet; }
    inline void SetClusterCreateTime(const Aws::Utils::DateTime& value) { m_clusterCreateTimeHasBeenSet = true; m_clusterCreateTime = value; }
    inline void SetClusterCreateTime(Aws::Utils::DateTime&& value) { m_clusterCreateTimeHasBeenSet = true; m_clusterCreateTime = std::move(value); }
    inline Cluster& WithClusterCreateTime(const Aws::Utils::DateTime& value) { SetClusterCreateTime(value); return *this;}
    inline Cluster& WithClusterCreateTime(Aws::Utils::DateTime&& value) { SetClusterCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days that automatic cluster snapshots are retained.</p>
     */
    inline int GetAutomatedSnapshotRetentionPeriod() const{ return m_automatedSnapshotRetentionPeriod; }
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
    inline int GetManualSnapshotRetentionPeriod() const{ return m_manualSnapshotRetentionPeriod; }
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
    inline const Aws::Vector<ClusterSecurityGroupMembership>& GetClusterSecurityGroups() const{ return m_clusterSecurityGroups; }
    inline bool ClusterSecurityGroupsHasBeenSet() const { return m_clusterSecurityGroupsHasBeenSet; }
    inline void SetClusterSecurityGroups(const Aws::Vector<ClusterSecurityGroupMembership>& value) { m_clusterSecurityGroupsHasBeenSet = true; m_clusterSecurityGroups = value; }
    inline void SetClusterSecurityGroups(Aws::Vector<ClusterSecurityGroupMembership>&& value) { m_clusterSecurityGroupsHasBeenSet = true; m_clusterSecurityGroups = std::move(value); }
    inline Cluster& WithClusterSecurityGroups(const Aws::Vector<ClusterSecurityGroupMembership>& value) { SetClusterSecurityGroups(value); return *this;}
    inline Cluster& WithClusterSecurityGroups(Aws::Vector<ClusterSecurityGroupMembership>&& value) { SetClusterSecurityGroups(std::move(value)); return *this;}
    inline Cluster& AddClusterSecurityGroups(const ClusterSecurityGroupMembership& value) { m_clusterSecurityGroupsHasBeenSet = true; m_clusterSecurityGroups.push_back(value); return *this; }
    inline Cluster& AddClusterSecurityGroups(ClusterSecurityGroupMembership&& value) { m_clusterSecurityGroupsHasBeenSet = true; m_clusterSecurityGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of Amazon Virtual Private Cloud (Amazon VPC) security groups that are
     * associated with the cluster. This parameter is returned only if the cluster is
     * in a VPC.</p>
     */
    inline const Aws::Vector<VpcSecurityGroupMembership>& GetVpcSecurityGroups() const{ return m_vpcSecurityGroups; }
    inline bool VpcSecurityGroupsHasBeenSet() const { return m_vpcSecurityGroupsHasBeenSet; }
    inline void SetVpcSecurityGroups(const Aws::Vector<VpcSecurityGroupMembership>& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = value; }
    inline void SetVpcSecurityGroups(Aws::Vector<VpcSecurityGroupMembership>&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = std::move(value); }
    inline Cluster& WithVpcSecurityGroups(const Aws::Vector<VpcSecurityGroupMembership>& value) { SetVpcSecurityGroups(value); return *this;}
    inline Cluster& WithVpcSecurityGroups(Aws::Vector<VpcSecurityGroupMembership>&& value) { SetVpcSecurityGroups(std::move(value)); return *this;}
    inline Cluster& AddVpcSecurityGroups(const VpcSecurityGroupMembership& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.push_back(value); return *this; }
    inline Cluster& AddVpcSecurityGroups(VpcSecurityGroupMembership&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of cluster parameter groups that are associated with this cluster.
     * Each parameter group in the list is returned with its status.</p>
     */
    inline const Aws::Vector<ClusterParameterGroupStatus>& GetClusterParameterGroups() const{ return m_clusterParameterGroups; }
    inline bool ClusterParameterGroupsHasBeenSet() const { return m_clusterParameterGroupsHasBeenSet; }
    inline void SetClusterParameterGroups(const Aws::Vector<ClusterParameterGroupStatus>& value) { m_clusterParameterGroupsHasBeenSet = true; m_clusterParameterGroups = value; }
    inline void SetClusterParameterGroups(Aws::Vector<ClusterParameterGroupStatus>&& value) { m_clusterParameterGroupsHasBeenSet = true; m_clusterParameterGroups = std::move(value); }
    inline Cluster& WithClusterParameterGroups(const Aws::Vector<ClusterParameterGroupStatus>& value) { SetClusterParameterGroups(value); return *this;}
    inline Cluster& WithClusterParameterGroups(Aws::Vector<ClusterParameterGroupStatus>&& value) { SetClusterParameterGroups(std::move(value)); return *this;}
    inline Cluster& AddClusterParameterGroups(const ClusterParameterGroupStatus& value) { m_clusterParameterGroupsHasBeenSet = true; m_clusterParameterGroups.push_back(value); return *this; }
    inline Cluster& AddClusterParameterGroups(ClusterParameterGroupStatus&& value) { m_clusterParameterGroupsHasBeenSet = true; m_clusterParameterGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the subnet group that is associated with the cluster. This
     * parameter is valid only when the cluster is in a VPC.</p>
     */
    inline const Aws::String& GetClusterSubnetGroupName() const{ return m_clusterSubnetGroupName; }
    inline bool ClusterSubnetGroupNameHasBeenSet() const { return m_clusterSubnetGroupNameHasBeenSet; }
    inline void SetClusterSubnetGroupName(const Aws::String& value) { m_clusterSubnetGroupNameHasBeenSet = true; m_clusterSubnetGroupName = value; }
    inline void SetClusterSubnetGroupName(Aws::String&& value) { m_clusterSubnetGroupNameHasBeenSet = true; m_clusterSubnetGroupName = std::move(value); }
    inline void SetClusterSubnetGroupName(const char* value) { m_clusterSubnetGroupNameHasBeenSet = true; m_clusterSubnetGroupName.assign(value); }
    inline Cluster& WithClusterSubnetGroupName(const Aws::String& value) { SetClusterSubnetGroupName(value); return *this;}
    inline Cluster& WithClusterSubnetGroupName(Aws::String&& value) { SetClusterSubnetGroupName(std::move(value)); return *this;}
    inline Cluster& WithClusterSubnetGroupName(const char* value) { SetClusterSubnetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the VPC the cluster is in, if the cluster is in a VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline Cluster& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline Cluster& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline Cluster& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Availability Zone in which the cluster is located.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline Cluster& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline Cluster& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline Cluster& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The weekly time range, in Universal Coordinated Time (UTC), during which
     * system maintenance can occur.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }
    inline Cluster& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}
    inline Cluster& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}
    inline Cluster& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that, if present, indicates that changes to the cluster are pending.
     * Specific pending changes are identified by subelements.</p>
     */
    inline const PendingModifiedValues& GetPendingModifiedValues() const{ return m_pendingModifiedValues; }
    inline bool PendingModifiedValuesHasBeenSet() const { return m_pendingModifiedValuesHasBeenSet; }
    inline void SetPendingModifiedValues(const PendingModifiedValues& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = value; }
    inline void SetPendingModifiedValues(PendingModifiedValues&& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = std::move(value); }
    inline Cluster& WithPendingModifiedValues(const PendingModifiedValues& value) { SetPendingModifiedValues(value); return *this;}
    inline Cluster& WithPendingModifiedValues(PendingModifiedValues&& value) { SetPendingModifiedValues(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version ID of the Amazon Redshift engine that is running on the
     * cluster.</p>
     */
    inline const Aws::String& GetClusterVersion() const{ return m_clusterVersion; }
    inline bool ClusterVersionHasBeenSet() const { return m_clusterVersionHasBeenSet; }
    inline void SetClusterVersion(const Aws::String& value) { m_clusterVersionHasBeenSet = true; m_clusterVersion = value; }
    inline void SetClusterVersion(Aws::String&& value) { m_clusterVersionHasBeenSet = true; m_clusterVersion = std::move(value); }
    inline void SetClusterVersion(const char* value) { m_clusterVersionHasBeenSet = true; m_clusterVersion.assign(value); }
    inline Cluster& WithClusterVersion(const Aws::String& value) { SetClusterVersion(value); return *this;}
    inline Cluster& WithClusterVersion(Aws::String&& value) { SetClusterVersion(std::move(value)); return *this;}
    inline Cluster& WithClusterVersion(const char* value) { SetClusterVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean value that, if <code>true</code>, indicates that major version
     * upgrades will be applied automatically to the cluster during the maintenance
     * window. </p>
     */
    inline bool GetAllowVersionUpgrade() const{ return m_allowVersionUpgrade; }
    inline bool AllowVersionUpgradeHasBeenSet() const { return m_allowVersionUpgradeHasBeenSet; }
    inline void SetAllowVersionUpgrade(bool value) { m_allowVersionUpgradeHasBeenSet = true; m_allowVersionUpgrade = value; }
    inline Cluster& WithAllowVersionUpgrade(bool value) { SetAllowVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of compute nodes in the cluster.</p>
     */
    inline int GetNumberOfNodes() const{ return m_numberOfNodes; }
    inline bool NumberOfNodesHasBeenSet() const { return m_numberOfNodesHasBeenSet; }
    inline void SetNumberOfNodes(int value) { m_numberOfNodesHasBeenSet = true; m_numberOfNodes = value; }
    inline Cluster& WithNumberOfNodes(int value) { SetNumberOfNodes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean value that, if <code>true</code>, indicates that the cluster can be
     * accessed from a public network.</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline Cluster& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean value that, if <code>true</code>, indicates that data in the
     * cluster is encrypted at rest.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline Cluster& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that describes the status of a cluster restore action. This parameter
     * returns null if the cluster was not created by restoring a snapshot.</p>
     */
    inline const RestoreStatus& GetRestoreStatus() const{ return m_restoreStatus; }
    inline bool RestoreStatusHasBeenSet() const { return m_restoreStatusHasBeenSet; }
    inline void SetRestoreStatus(const RestoreStatus& value) { m_restoreStatusHasBeenSet = true; m_restoreStatus = value; }
    inline void SetRestoreStatus(RestoreStatus&& value) { m_restoreStatusHasBeenSet = true; m_restoreStatus = std::move(value); }
    inline Cluster& WithRestoreStatus(const RestoreStatus& value) { SetRestoreStatus(value); return *this;}
    inline Cluster& WithRestoreStatus(RestoreStatus&& value) { SetRestoreStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const DataTransferProgress& GetDataTransferProgress() const{ return m_dataTransferProgress; }
    inline bool DataTransferProgressHasBeenSet() const { return m_dataTransferProgressHasBeenSet; }
    inline void SetDataTransferProgress(const DataTransferProgress& value) { m_dataTransferProgressHasBeenSet = true; m_dataTransferProgress = value; }
    inline void SetDataTransferProgress(DataTransferProgress&& value) { m_dataTransferProgressHasBeenSet = true; m_dataTransferProgress = std::move(value); }
    inline Cluster& WithDataTransferProgress(const DataTransferProgress& value) { SetDataTransferProgress(value); return *this;}
    inline Cluster& WithDataTransferProgress(DataTransferProgress&& value) { SetDataTransferProgress(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that reports whether the Amazon Redshift cluster has finished
     * applying any hardware security module (HSM) settings changes specified in a
     * modify cluster command.</p> <p>Values: active, applying</p>
     */
    inline const HsmStatus& GetHsmStatus() const{ return m_hsmStatus; }
    inline bool HsmStatusHasBeenSet() const { return m_hsmStatusHasBeenSet; }
    inline void SetHsmStatus(const HsmStatus& value) { m_hsmStatusHasBeenSet = true; m_hsmStatus = value; }
    inline void SetHsmStatus(HsmStatus&& value) { m_hsmStatusHasBeenSet = true; m_hsmStatus = std::move(value); }
    inline Cluster& WithHsmStatus(const HsmStatus& value) { SetHsmStatus(value); return *this;}
    inline Cluster& WithHsmStatus(HsmStatus&& value) { SetHsmStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that returns the destination region and retention period that are
     * configured for cross-region snapshot copy.</p>
     */
    inline const ClusterSnapshotCopyStatus& GetClusterSnapshotCopyStatus() const{ return m_clusterSnapshotCopyStatus; }
    inline bool ClusterSnapshotCopyStatusHasBeenSet() const { return m_clusterSnapshotCopyStatusHasBeenSet; }
    inline void SetClusterSnapshotCopyStatus(const ClusterSnapshotCopyStatus& value) { m_clusterSnapshotCopyStatusHasBeenSet = true; m_clusterSnapshotCopyStatus = value; }
    inline void SetClusterSnapshotCopyStatus(ClusterSnapshotCopyStatus&& value) { m_clusterSnapshotCopyStatusHasBeenSet = true; m_clusterSnapshotCopyStatus = std::move(value); }
    inline Cluster& WithClusterSnapshotCopyStatus(const ClusterSnapshotCopyStatus& value) { SetClusterSnapshotCopyStatus(value); return *this;}
    inline Cluster& WithClusterSnapshotCopyStatus(ClusterSnapshotCopyStatus&& value) { SetClusterSnapshotCopyStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public key for the cluster.</p>
     */
    inline const Aws::String& GetClusterPublicKey() const{ return m_clusterPublicKey; }
    inline bool ClusterPublicKeyHasBeenSet() const { return m_clusterPublicKeyHasBeenSet; }
    inline void SetClusterPublicKey(const Aws::String& value) { m_clusterPublicKeyHasBeenSet = true; m_clusterPublicKey = value; }
    inline void SetClusterPublicKey(Aws::String&& value) { m_clusterPublicKeyHasBeenSet = true; m_clusterPublicKey = std::move(value); }
    inline void SetClusterPublicKey(const char* value) { m_clusterPublicKeyHasBeenSet = true; m_clusterPublicKey.assign(value); }
    inline Cluster& WithClusterPublicKey(const Aws::String& value) { SetClusterPublicKey(value); return *this;}
    inline Cluster& WithClusterPublicKey(Aws::String&& value) { SetClusterPublicKey(std::move(value)); return *this;}
    inline Cluster& WithClusterPublicKey(const char* value) { SetClusterPublicKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The nodes in the cluster.</p>
     */
    inline const Aws::Vector<ClusterNode>& GetClusterNodes() const{ return m_clusterNodes; }
    inline bool ClusterNodesHasBeenSet() const { return m_clusterNodesHasBeenSet; }
    inline void SetClusterNodes(const Aws::Vector<ClusterNode>& value) { m_clusterNodesHasBeenSet = true; m_clusterNodes = value; }
    inline void SetClusterNodes(Aws::Vector<ClusterNode>&& value) { m_clusterNodesHasBeenSet = true; m_clusterNodes = std::move(value); }
    inline Cluster& WithClusterNodes(const Aws::Vector<ClusterNode>& value) { SetClusterNodes(value); return *this;}
    inline Cluster& WithClusterNodes(Aws::Vector<ClusterNode>&& value) { SetClusterNodes(std::move(value)); return *this;}
    inline Cluster& AddClusterNodes(const ClusterNode& value) { m_clusterNodesHasBeenSet = true; m_clusterNodes.push_back(value); return *this; }
    inline Cluster& AddClusterNodes(ClusterNode&& value) { m_clusterNodesHasBeenSet = true; m_clusterNodes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the elastic IP (EIP) address.</p>
     */
    inline const ElasticIpStatus& GetElasticIpStatus() const{ return m_elasticIpStatus; }
    inline bool ElasticIpStatusHasBeenSet() const { return m_elasticIpStatusHasBeenSet; }
    inline void SetElasticIpStatus(const ElasticIpStatus& value) { m_elasticIpStatusHasBeenSet = true; m_elasticIpStatus = value; }
    inline void SetElasticIpStatus(ElasticIpStatus&& value) { m_elasticIpStatusHasBeenSet = true; m_elasticIpStatus = std::move(value); }
    inline Cluster& WithElasticIpStatus(const ElasticIpStatus& value) { SetElasticIpStatus(value); return *this;}
    inline Cluster& WithElasticIpStatus(ElasticIpStatus&& value) { SetElasticIpStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific revision number of the database in the cluster.</p>
     */
    inline const Aws::String& GetClusterRevisionNumber() const{ return m_clusterRevisionNumber; }
    inline bool ClusterRevisionNumberHasBeenSet() const { return m_clusterRevisionNumberHasBeenSet; }
    inline void SetClusterRevisionNumber(const Aws::String& value) { m_clusterRevisionNumberHasBeenSet = true; m_clusterRevisionNumber = value; }
    inline void SetClusterRevisionNumber(Aws::String&& value) { m_clusterRevisionNumberHasBeenSet = true; m_clusterRevisionNumber = std::move(value); }
    inline void SetClusterRevisionNumber(const char* value) { m_clusterRevisionNumberHasBeenSet = true; m_clusterRevisionNumber.assign(value); }
    inline Cluster& WithClusterRevisionNumber(const Aws::String& value) { SetClusterRevisionNumber(value); return *this;}
    inline Cluster& WithClusterRevisionNumber(Aws::String&& value) { SetClusterRevisionNumber(std::move(value)); return *this;}
    inline Cluster& WithClusterRevisionNumber(const char* value) { SetClusterRevisionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of tags for the cluster.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Cluster& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline Cluster& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline Cluster& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline Cluster& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Key Management Service (KMS) key ID of the encryption key used to encrypt
     * data in the cluster.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline Cluster& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline Cluster& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline Cluster& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
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
    inline Cluster& WithEnhancedVpcRouting(bool value) { SetEnhancedVpcRouting(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Identity and Access Management (IAM) roles that can be used by the
     * cluster to access other Amazon Web Services services.</p>
     */
    inline const Aws::Vector<ClusterIamRole>& GetIamRoles() const{ return m_iamRoles; }
    inline bool IamRolesHasBeenSet() const { return m_iamRolesHasBeenSet; }
    inline void SetIamRoles(const Aws::Vector<ClusterIamRole>& value) { m_iamRolesHasBeenSet = true; m_iamRoles = value; }
    inline void SetIamRoles(Aws::Vector<ClusterIamRole>&& value) { m_iamRolesHasBeenSet = true; m_iamRoles = std::move(value); }
    inline Cluster& WithIamRoles(const Aws::Vector<ClusterIamRole>& value) { SetIamRoles(value); return *this;}
    inline Cluster& WithIamRoles(Aws::Vector<ClusterIamRole>&& value) { SetIamRoles(std::move(value)); return *this;}
    inline Cluster& AddIamRoles(const ClusterIamRole& value) { m_iamRolesHasBeenSet = true; m_iamRoles.push_back(value); return *this; }
    inline Cluster& AddIamRoles(ClusterIamRole&& value) { m_iamRolesHasBeenSet = true; m_iamRoles.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Cluster operations that are waiting to be started.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPendingActions() const{ return m_pendingActions; }
    inline bool PendingActionsHasBeenSet() const { return m_pendingActionsHasBeenSet; }
    inline void SetPendingActions(const Aws::Vector<Aws::String>& value) { m_pendingActionsHasBeenSet = true; m_pendingActions = value; }
    inline void SetPendingActions(Aws::Vector<Aws::String>&& value) { m_pendingActionsHasBeenSet = true; m_pendingActions = std::move(value); }
    inline Cluster& WithPendingActions(const Aws::Vector<Aws::String>& value) { SetPendingActions(value); return *this;}
    inline Cluster& WithPendingActions(Aws::Vector<Aws::String>&& value) { SetPendingActions(std::move(value)); return *this;}
    inline Cluster& AddPendingActions(const Aws::String& value) { m_pendingActionsHasBeenSet = true; m_pendingActions.push_back(value); return *this; }
    inline Cluster& AddPendingActions(Aws::String&& value) { m_pendingActionsHasBeenSet = true; m_pendingActions.push_back(std::move(value)); return *this; }
    inline Cluster& AddPendingActions(const char* value) { m_pendingActionsHasBeenSet = true; m_pendingActions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the maintenance track for the cluster.</p>
     */
    inline const Aws::String& GetMaintenanceTrackName() const{ return m_maintenanceTrackName; }
    inline bool MaintenanceTrackNameHasBeenSet() const { return m_maintenanceTrackNameHasBeenSet; }
    inline void SetMaintenanceTrackName(const Aws::String& value) { m_maintenanceTrackNameHasBeenSet = true; m_maintenanceTrackName = value; }
    inline void SetMaintenanceTrackName(Aws::String&& value) { m_maintenanceTrackNameHasBeenSet = true; m_maintenanceTrackName = std::move(value); }
    inline void SetMaintenanceTrackName(const char* value) { m_maintenanceTrackNameHasBeenSet = true; m_maintenanceTrackName.assign(value); }
    inline Cluster& WithMaintenanceTrackName(const Aws::String& value) { SetMaintenanceTrackName(value); return *this;}
    inline Cluster& WithMaintenanceTrackName(Aws::String&& value) { SetMaintenanceTrackName(std::move(value)); return *this;}
    inline Cluster& WithMaintenanceTrackName(const char* value) { SetMaintenanceTrackName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of nodes that you can resize the cluster to with the elastic
     * resize method. </p>
     */
    inline const Aws::String& GetElasticResizeNumberOfNodeOptions() const{ return m_elasticResizeNumberOfNodeOptions; }
    inline bool ElasticResizeNumberOfNodeOptionsHasBeenSet() const { return m_elasticResizeNumberOfNodeOptionsHasBeenSet; }
    inline void SetElasticResizeNumberOfNodeOptions(const Aws::String& value) { m_elasticResizeNumberOfNodeOptionsHasBeenSet = true; m_elasticResizeNumberOfNodeOptions = value; }
    inline void SetElasticResizeNumberOfNodeOptions(Aws::String&& value) { m_elasticResizeNumberOfNodeOptionsHasBeenSet = true; m_elasticResizeNumberOfNodeOptions = std::move(value); }
    inline void SetElasticResizeNumberOfNodeOptions(const char* value) { m_elasticResizeNumberOfNodeOptionsHasBeenSet = true; m_elasticResizeNumberOfNodeOptions.assign(value); }
    inline Cluster& WithElasticResizeNumberOfNodeOptions(const Aws::String& value) { SetElasticResizeNumberOfNodeOptions(value); return *this;}
    inline Cluster& WithElasticResizeNumberOfNodeOptions(Aws::String&& value) { SetElasticResizeNumberOfNodeOptions(std::move(value)); return *this;}
    inline Cluster& WithElasticResizeNumberOfNodeOptions(const char* value) { SetElasticResizeNumberOfNodeOptions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes a group of <code>DeferredMaintenanceWindow</code> objects.</p>
     */
    inline const Aws::Vector<DeferredMaintenanceWindow>& GetDeferredMaintenanceWindows() const{ return m_deferredMaintenanceWindows; }
    inline bool DeferredMaintenanceWindowsHasBeenSet() const { return m_deferredMaintenanceWindowsHasBeenSet; }
    inline void SetDeferredMaintenanceWindows(const Aws::Vector<DeferredMaintenanceWindow>& value) { m_deferredMaintenanceWindowsHasBeenSet = true; m_deferredMaintenanceWindows = value; }
    inline void SetDeferredMaintenanceWindows(Aws::Vector<DeferredMaintenanceWindow>&& value) { m_deferredMaintenanceWindowsHasBeenSet = true; m_deferredMaintenanceWindows = std::move(value); }
    inline Cluster& WithDeferredMaintenanceWindows(const Aws::Vector<DeferredMaintenanceWindow>& value) { SetDeferredMaintenanceWindows(value); return *this;}
    inline Cluster& WithDeferredMaintenanceWindows(Aws::Vector<DeferredMaintenanceWindow>&& value) { SetDeferredMaintenanceWindows(std::move(value)); return *this;}
    inline Cluster& AddDeferredMaintenanceWindows(const DeferredMaintenanceWindow& value) { m_deferredMaintenanceWindowsHasBeenSet = true; m_deferredMaintenanceWindows.push_back(value); return *this; }
    inline Cluster& AddDeferredMaintenanceWindows(DeferredMaintenanceWindow&& value) { m_deferredMaintenanceWindowsHasBeenSet = true; m_deferredMaintenanceWindows.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the cluster snapshot schedule.</p>
     */
    inline const Aws::String& GetSnapshotScheduleIdentifier() const{ return m_snapshotScheduleIdentifier; }
    inline bool SnapshotScheduleIdentifierHasBeenSet() const { return m_snapshotScheduleIdentifierHasBeenSet; }
    inline void SetSnapshotScheduleIdentifier(const Aws::String& value) { m_snapshotScheduleIdentifierHasBeenSet = true; m_snapshotScheduleIdentifier = value; }
    inline void SetSnapshotScheduleIdentifier(Aws::String&& value) { m_snapshotScheduleIdentifierHasBeenSet = true; m_snapshotScheduleIdentifier = std::move(value); }
    inline void SetSnapshotScheduleIdentifier(const char* value) { m_snapshotScheduleIdentifierHasBeenSet = true; m_snapshotScheduleIdentifier.assign(value); }
    inline Cluster& WithSnapshotScheduleIdentifier(const Aws::String& value) { SetSnapshotScheduleIdentifier(value); return *this;}
    inline Cluster& WithSnapshotScheduleIdentifier(Aws::String&& value) { SetSnapshotScheduleIdentifier(std::move(value)); return *this;}
    inline Cluster& WithSnapshotScheduleIdentifier(const char* value) { SetSnapshotScheduleIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the cluster snapshot schedule.</p>
     */
    inline const ScheduleState& GetSnapshotScheduleState() const{ return m_snapshotScheduleState; }
    inline bool SnapshotScheduleStateHasBeenSet() const { return m_snapshotScheduleStateHasBeenSet; }
    inline void SetSnapshotScheduleState(const ScheduleState& value) { m_snapshotScheduleStateHasBeenSet = true; m_snapshotScheduleState = value; }
    inline void SetSnapshotScheduleState(ScheduleState&& value) { m_snapshotScheduleStateHasBeenSet = true; m_snapshotScheduleState = std::move(value); }
    inline Cluster& WithSnapshotScheduleState(const ScheduleState& value) { SetSnapshotScheduleState(value); return *this;}
    inline Cluster& WithSnapshotScheduleState(ScheduleState&& value) { SetSnapshotScheduleState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the next snapshot is expected to be taken for clusters
     * with a valid snapshot schedule and backups enabled. </p>
     */
    inline const Aws::Utils::DateTime& GetExpectedNextSnapshotScheduleTime() const{ return m_expectedNextSnapshotScheduleTime; }
    inline bool ExpectedNextSnapshotScheduleTimeHasBeenSet() const { return m_expectedNextSnapshotScheduleTimeHasBeenSet; }
    inline void SetExpectedNextSnapshotScheduleTime(const Aws::Utils::DateTime& value) { m_expectedNextSnapshotScheduleTimeHasBeenSet = true; m_expectedNextSnapshotScheduleTime = value; }
    inline void SetExpectedNextSnapshotScheduleTime(Aws::Utils::DateTime&& value) { m_expectedNextSnapshotScheduleTimeHasBeenSet = true; m_expectedNextSnapshotScheduleTime = std::move(value); }
    inline Cluster& WithExpectedNextSnapshotScheduleTime(const Aws::Utils::DateTime& value) { SetExpectedNextSnapshotScheduleTime(value); return *this;}
    inline Cluster& WithExpectedNextSnapshotScheduleTime(Aws::Utils::DateTime&& value) { SetExpectedNextSnapshotScheduleTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of next expected snapshot for clusters having a valid snapshot
     * schedule and backups enabled. Possible values are the following:</p> <ul> <li>
     * <p>OnTrack - The next snapshot is expected to be taken on time. </p> </li> <li>
     * <p>Pending - The next snapshot is pending to be taken. </p> </li> </ul>
     */
    inline const Aws::String& GetExpectedNextSnapshotScheduleTimeStatus() const{ return m_expectedNextSnapshotScheduleTimeStatus; }
    inline bool ExpectedNextSnapshotScheduleTimeStatusHasBeenSet() const { return m_expectedNextSnapshotScheduleTimeStatusHasBeenSet; }
    inline void SetExpectedNextSnapshotScheduleTimeStatus(const Aws::String& value) { m_expectedNextSnapshotScheduleTimeStatusHasBeenSet = true; m_expectedNextSnapshotScheduleTimeStatus = value; }
    inline void SetExpectedNextSnapshotScheduleTimeStatus(Aws::String&& value) { m_expectedNextSnapshotScheduleTimeStatusHasBeenSet = true; m_expectedNextSnapshotScheduleTimeStatus = std::move(value); }
    inline void SetExpectedNextSnapshotScheduleTimeStatus(const char* value) { m_expectedNextSnapshotScheduleTimeStatusHasBeenSet = true; m_expectedNextSnapshotScheduleTimeStatus.assign(value); }
    inline Cluster& WithExpectedNextSnapshotScheduleTimeStatus(const Aws::String& value) { SetExpectedNextSnapshotScheduleTimeStatus(value); return *this;}
    inline Cluster& WithExpectedNextSnapshotScheduleTimeStatus(Aws::String&& value) { SetExpectedNextSnapshotScheduleTimeStatus(std::move(value)); return *this;}
    inline Cluster& WithExpectedNextSnapshotScheduleTimeStatus(const char* value) { SetExpectedNextSnapshotScheduleTimeStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time in UTC when system maintenance can begin.</p>
     */
    inline const Aws::Utils::DateTime& GetNextMaintenanceWindowStartTime() const{ return m_nextMaintenanceWindowStartTime; }
    inline bool NextMaintenanceWindowStartTimeHasBeenSet() const { return m_nextMaintenanceWindowStartTimeHasBeenSet; }
    inline void SetNextMaintenanceWindowStartTime(const Aws::Utils::DateTime& value) { m_nextMaintenanceWindowStartTimeHasBeenSet = true; m_nextMaintenanceWindowStartTime = value; }
    inline void SetNextMaintenanceWindowStartTime(Aws::Utils::DateTime&& value) { m_nextMaintenanceWindowStartTimeHasBeenSet = true; m_nextMaintenanceWindowStartTime = std::move(value); }
    inline Cluster& WithNextMaintenanceWindowStartTime(const Aws::Utils::DateTime& value) { SetNextMaintenanceWindowStartTime(value); return *this;}
    inline Cluster& WithNextMaintenanceWindowStartTime(Aws::Utils::DateTime&& value) { SetNextMaintenanceWindowStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the following:</p> <ul> <li> <p>AllowCancelResize: a boolean value
     * indicating if the resize operation can be cancelled.</p> </li> <li>
     * <p>ResizeType: Returns ClassicResize</p> </li> </ul>
     */
    inline const ResizeInfo& GetResizeInfo() const{ return m_resizeInfo; }
    inline bool ResizeInfoHasBeenSet() const { return m_resizeInfoHasBeenSet; }
    inline void SetResizeInfo(const ResizeInfo& value) { m_resizeInfoHasBeenSet = true; m_resizeInfo = value; }
    inline void SetResizeInfo(ResizeInfo&& value) { m_resizeInfoHasBeenSet = true; m_resizeInfo = std::move(value); }
    inline Cluster& WithResizeInfo(const ResizeInfo& value) { SetResizeInfo(value); return *this;}
    inline Cluster& WithResizeInfo(ResizeInfo&& value) { SetResizeInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the status of the Availability Zone relocation operation.</p>
     */
    inline const Aws::String& GetAvailabilityZoneRelocationStatus() const{ return m_availabilityZoneRelocationStatus; }
    inline bool AvailabilityZoneRelocationStatusHasBeenSet() const { return m_availabilityZoneRelocationStatusHasBeenSet; }
    inline void SetAvailabilityZoneRelocationStatus(const Aws::String& value) { m_availabilityZoneRelocationStatusHasBeenSet = true; m_availabilityZoneRelocationStatus = value; }
    inline void SetAvailabilityZoneRelocationStatus(Aws::String&& value) { m_availabilityZoneRelocationStatusHasBeenSet = true; m_availabilityZoneRelocationStatus = std::move(value); }
    inline void SetAvailabilityZoneRelocationStatus(const char* value) { m_availabilityZoneRelocationStatusHasBeenSet = true; m_availabilityZoneRelocationStatus.assign(value); }
    inline Cluster& WithAvailabilityZoneRelocationStatus(const Aws::String& value) { SetAvailabilityZoneRelocationStatus(value); return *this;}
    inline Cluster& WithAvailabilityZoneRelocationStatus(Aws::String&& value) { SetAvailabilityZoneRelocationStatus(std::move(value)); return *this;}
    inline Cluster& WithAvailabilityZoneRelocationStatus(const char* value) { SetAvailabilityZoneRelocationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace Amazon Resource Name (ARN) of the cluster.</p>
     */
    inline const Aws::String& GetClusterNamespaceArn() const{ return m_clusterNamespaceArn; }
    inline bool ClusterNamespaceArnHasBeenSet() const { return m_clusterNamespaceArnHasBeenSet; }
    inline void SetClusterNamespaceArn(const Aws::String& value) { m_clusterNamespaceArnHasBeenSet = true; m_clusterNamespaceArn = value; }
    inline void SetClusterNamespaceArn(Aws::String&& value) { m_clusterNamespaceArnHasBeenSet = true; m_clusterNamespaceArn = std::move(value); }
    inline void SetClusterNamespaceArn(const char* value) { m_clusterNamespaceArnHasBeenSet = true; m_clusterNamespaceArn.assign(value); }
    inline Cluster& WithClusterNamespaceArn(const Aws::String& value) { SetClusterNamespaceArn(value); return *this;}
    inline Cluster& WithClusterNamespaceArn(Aws::String&& value) { SetClusterNamespaceArn(std::move(value)); return *this;}
    inline Cluster& WithClusterNamespaceArn(const char* value) { SetClusterNamespaceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total storage capacity of the cluster in megabytes. </p>
     */
    inline long long GetTotalStorageCapacityInMegaBytes() const{ return m_totalStorageCapacityInMegaBytes; }
    inline bool TotalStorageCapacityInMegaBytesHasBeenSet() const { return m_totalStorageCapacityInMegaBytesHasBeenSet; }
    inline void SetTotalStorageCapacityInMegaBytes(long long value) { m_totalStorageCapacityInMegaBytesHasBeenSet = true; m_totalStorageCapacityInMegaBytes = value; }
    inline Cluster& WithTotalStorageCapacityInMegaBytes(long long value) { SetTotalStorageCapacityInMegaBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This field is retired. Amazon Redshift automatically determines whether to
     * use AQUA (Advanced Query Accelerator).</p>
     */
    inline const AquaConfiguration& GetAquaConfiguration() const{ return m_aquaConfiguration; }
    inline bool AquaConfigurationHasBeenSet() const { return m_aquaConfigurationHasBeenSet; }
    inline void SetAquaConfiguration(const AquaConfiguration& value) { m_aquaConfigurationHasBeenSet = true; m_aquaConfiguration = value; }
    inline void SetAquaConfiguration(AquaConfiguration&& value) { m_aquaConfigurationHasBeenSet = true; m_aquaConfiguration = std::move(value); }
    inline Cluster& WithAquaConfiguration(const AquaConfiguration& value) { SetAquaConfiguration(value); return *this;}
    inline Cluster& WithAquaConfiguration(AquaConfiguration&& value) { SetAquaConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role set as default for the
     * cluster.</p>
     */
    inline const Aws::String& GetDefaultIamRoleArn() const{ return m_defaultIamRoleArn; }
    inline bool DefaultIamRoleArnHasBeenSet() const { return m_defaultIamRoleArnHasBeenSet; }
    inline void SetDefaultIamRoleArn(const Aws::String& value) { m_defaultIamRoleArnHasBeenSet = true; m_defaultIamRoleArn = value; }
    inline void SetDefaultIamRoleArn(Aws::String&& value) { m_defaultIamRoleArnHasBeenSet = true; m_defaultIamRoleArn = std::move(value); }
    inline void SetDefaultIamRoleArn(const char* value) { m_defaultIamRoleArnHasBeenSet = true; m_defaultIamRoleArn.assign(value); }
    inline Cluster& WithDefaultIamRoleArn(const Aws::String& value) { SetDefaultIamRoleArn(value); return *this;}
    inline Cluster& WithDefaultIamRoleArn(Aws::String&& value) { SetDefaultIamRoleArn(std::move(value)); return *this;}
    inline Cluster& WithDefaultIamRoleArn(const char* value) { SetDefaultIamRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the reserved-node exchange request. Statuses include
     * in-progress and requested.</p>
     */
    inline const ReservedNodeExchangeStatus& GetReservedNodeExchangeStatus() const{ return m_reservedNodeExchangeStatus; }
    inline bool ReservedNodeExchangeStatusHasBeenSet() const { return m_reservedNodeExchangeStatusHasBeenSet; }
    inline void SetReservedNodeExchangeStatus(const ReservedNodeExchangeStatus& value) { m_reservedNodeExchangeStatusHasBeenSet = true; m_reservedNodeExchangeStatus = value; }
    inline void SetReservedNodeExchangeStatus(ReservedNodeExchangeStatus&& value) { m_reservedNodeExchangeStatusHasBeenSet = true; m_reservedNodeExchangeStatus = std::move(value); }
    inline Cluster& WithReservedNodeExchangeStatus(const ReservedNodeExchangeStatus& value) { SetReservedNodeExchangeStatus(value); return *this;}
    inline Cluster& WithReservedNodeExchangeStatus(ReservedNodeExchangeStatus&& value) { SetReservedNodeExchangeStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom domain name associated with the cluster.</p>
     */
    inline const Aws::String& GetCustomDomainName() const{ return m_customDomainName; }
    inline bool CustomDomainNameHasBeenSet() const { return m_customDomainNameHasBeenSet; }
    inline void SetCustomDomainName(const Aws::String& value) { m_customDomainNameHasBeenSet = true; m_customDomainName = value; }
    inline void SetCustomDomainName(Aws::String&& value) { m_customDomainNameHasBeenSet = true; m_customDomainName = std::move(value); }
    inline void SetCustomDomainName(const char* value) { m_customDomainNameHasBeenSet = true; m_customDomainName.assign(value); }
    inline Cluster& WithCustomDomainName(const Aws::String& value) { SetCustomDomainName(value); return *this;}
    inline Cluster& WithCustomDomainName(Aws::String&& value) { SetCustomDomainName(std::move(value)); return *this;}
    inline Cluster& WithCustomDomainName(const char* value) { SetCustomDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The certificate Amazon Resource Name (ARN) for the custom domain name.</p>
     */
    inline const Aws::String& GetCustomDomainCertificateArn() const{ return m_customDomainCertificateArn; }
    inline bool CustomDomainCertificateArnHasBeenSet() const { return m_customDomainCertificateArnHasBeenSet; }
    inline void SetCustomDomainCertificateArn(const Aws::String& value) { m_customDomainCertificateArnHasBeenSet = true; m_customDomainCertificateArn = value; }
    inline void SetCustomDomainCertificateArn(Aws::String&& value) { m_customDomainCertificateArnHasBeenSet = true; m_customDomainCertificateArn = std::move(value); }
    inline void SetCustomDomainCertificateArn(const char* value) { m_customDomainCertificateArnHasBeenSet = true; m_customDomainCertificateArn.assign(value); }
    inline Cluster& WithCustomDomainCertificateArn(const Aws::String& value) { SetCustomDomainCertificateArn(value); return *this;}
    inline Cluster& WithCustomDomainCertificateArn(Aws::String&& value) { SetCustomDomainCertificateArn(std::move(value)); return *this;}
    inline Cluster& WithCustomDomainCertificateArn(const char* value) { SetCustomDomainCertificateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expiration date for the certificate associated with the custom domain
     * name.</p>
     */
    inline const Aws::Utils::DateTime& GetCustomDomainCertificateExpiryDate() const{ return m_customDomainCertificateExpiryDate; }
    inline bool CustomDomainCertificateExpiryDateHasBeenSet() const { return m_customDomainCertificateExpiryDateHasBeenSet; }
    inline void SetCustomDomainCertificateExpiryDate(const Aws::Utils::DateTime& value) { m_customDomainCertificateExpiryDateHasBeenSet = true; m_customDomainCertificateExpiryDate = value; }
    inline void SetCustomDomainCertificateExpiryDate(Aws::Utils::DateTime&& value) { m_customDomainCertificateExpiryDateHasBeenSet = true; m_customDomainCertificateExpiryDate = std::move(value); }
    inline Cluster& WithCustomDomainCertificateExpiryDate(const Aws::Utils::DateTime& value) { SetCustomDomainCertificateExpiryDate(value); return *this;}
    inline Cluster& WithCustomDomainCertificateExpiryDate(Aws::Utils::DateTime&& value) { SetCustomDomainCertificateExpiryDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the cluster's admin user credentials
     * secret.</p>
     */
    inline const Aws::String& GetMasterPasswordSecretArn() const{ return m_masterPasswordSecretArn; }
    inline bool MasterPasswordSecretArnHasBeenSet() const { return m_masterPasswordSecretArnHasBeenSet; }
    inline void SetMasterPasswordSecretArn(const Aws::String& value) { m_masterPasswordSecretArnHasBeenSet = true; m_masterPasswordSecretArn = value; }
    inline void SetMasterPasswordSecretArn(Aws::String&& value) { m_masterPasswordSecretArnHasBeenSet = true; m_masterPasswordSecretArn = std::move(value); }
    inline void SetMasterPasswordSecretArn(const char* value) { m_masterPasswordSecretArnHasBeenSet = true; m_masterPasswordSecretArn.assign(value); }
    inline Cluster& WithMasterPasswordSecretArn(const Aws::String& value) { SetMasterPasswordSecretArn(value); return *this;}
    inline Cluster& WithMasterPasswordSecretArn(Aws::String&& value) { SetMasterPasswordSecretArn(std::move(value)); return *this;}
    inline Cluster& WithMasterPasswordSecretArn(const char* value) { SetMasterPasswordSecretArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Key Management Service (KMS) key used to encrypt and store the
     * cluster's admin credentials secret.</p>
     */
    inline const Aws::String& GetMasterPasswordSecretKmsKeyId() const{ return m_masterPasswordSecretKmsKeyId; }
    inline bool MasterPasswordSecretKmsKeyIdHasBeenSet() const { return m_masterPasswordSecretKmsKeyIdHasBeenSet; }
    inline void SetMasterPasswordSecretKmsKeyId(const Aws::String& value) { m_masterPasswordSecretKmsKeyIdHasBeenSet = true; m_masterPasswordSecretKmsKeyId = value; }
    inline void SetMasterPasswordSecretKmsKeyId(Aws::String&& value) { m_masterPasswordSecretKmsKeyIdHasBeenSet = true; m_masterPasswordSecretKmsKeyId = std::move(value); }
    inline void SetMasterPasswordSecretKmsKeyId(const char* value) { m_masterPasswordSecretKmsKeyIdHasBeenSet = true; m_masterPasswordSecretKmsKeyId.assign(value); }
    inline Cluster& WithMasterPasswordSecretKmsKeyId(const Aws::String& value) { SetMasterPasswordSecretKmsKeyId(value); return *this;}
    inline Cluster& WithMasterPasswordSecretKmsKeyId(Aws::String&& value) { SetMasterPasswordSecretKmsKeyId(std::move(value)); return *this;}
    inline Cluster& WithMasterPasswordSecretKmsKeyId(const char* value) { SetMasterPasswordSecretKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address type for the cluster. Possible values are <code>ipv4</code>
     * and <code>dualstack</code>.</p>
     */
    inline const Aws::String& GetIpAddressType() const{ return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(const Aws::String& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline void SetIpAddressType(Aws::String&& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = std::move(value); }
    inline void SetIpAddressType(const char* value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType.assign(value); }
    inline Cluster& WithIpAddressType(const Aws::String& value) { SetIpAddressType(value); return *this;}
    inline Cluster& WithIpAddressType(Aws::String&& value) { SetIpAddressType(std::move(value)); return *this;}
    inline Cluster& WithIpAddressType(const char* value) { SetIpAddressType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean value that, if true, indicates that the cluster is deployed in two
     * Availability Zones.</p>
     */
    inline const Aws::String& GetMultiAZ() const{ return m_multiAZ; }
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }
    inline void SetMultiAZ(const Aws::String& value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }
    inline void SetMultiAZ(Aws::String&& value) { m_multiAZHasBeenSet = true; m_multiAZ = std::move(value); }
    inline void SetMultiAZ(const char* value) { m_multiAZHasBeenSet = true; m_multiAZ.assign(value); }
    inline Cluster& WithMultiAZ(const Aws::String& value) { SetMultiAZ(value); return *this;}
    inline Cluster& WithMultiAZ(Aws::String&& value) { SetMultiAZ(std::move(value)); return *this;}
    inline Cluster& WithMultiAZ(const char* value) { SetMultiAZ(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secondary compute unit of a cluster, if Multi-AZ deployment is turned
     * on.</p>
     */
    inline const SecondaryClusterInfo& GetMultiAZSecondary() const{ return m_multiAZSecondary; }
    inline bool MultiAZSecondaryHasBeenSet() const { return m_multiAZSecondaryHasBeenSet; }
    inline void SetMultiAZSecondary(const SecondaryClusterInfo& value) { m_multiAZSecondaryHasBeenSet = true; m_multiAZSecondary = value; }
    inline void SetMultiAZSecondary(SecondaryClusterInfo&& value) { m_multiAZSecondaryHasBeenSet = true; m_multiAZSecondary = std::move(value); }
    inline Cluster& WithMultiAZSecondary(const SecondaryClusterInfo& value) { SetMultiAZSecondary(value); return *this;}
    inline Cluster& WithMultiAZSecondary(SecondaryClusterInfo&& value) { SetMultiAZSecondary(std::move(value)); return *this;}
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

    Aws::Utils::DateTime m_clusterCreateTime;
    bool m_clusterCreateTimeHasBeenSet = false;

    int m_automatedSnapshotRetentionPeriod;
    bool m_automatedSnapshotRetentionPeriodHasBeenSet = false;

    int m_manualSnapshotRetentionPeriod;
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

    bool m_allowVersionUpgrade;
    bool m_allowVersionUpgradeHasBeenSet = false;

    int m_numberOfNodes;
    bool m_numberOfNodesHasBeenSet = false;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet = false;

    bool m_encrypted;
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

    bool m_enhancedVpcRouting;
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

    ScheduleState m_snapshotScheduleState;
    bool m_snapshotScheduleStateHasBeenSet = false;

    Aws::Utils::DateTime m_expectedNextSnapshotScheduleTime;
    bool m_expectedNextSnapshotScheduleTimeHasBeenSet = false;

    Aws::String m_expectedNextSnapshotScheduleTimeStatus;
    bool m_expectedNextSnapshotScheduleTimeStatusHasBeenSet = false;

    Aws::Utils::DateTime m_nextMaintenanceWindowStartTime;
    bool m_nextMaintenanceWindowStartTimeHasBeenSet = false;

    ResizeInfo m_resizeInfo;
    bool m_resizeInfoHasBeenSet = false;

    Aws::String m_availabilityZoneRelocationStatus;
    bool m_availabilityZoneRelocationStatusHasBeenSet = false;

    Aws::String m_clusterNamespaceArn;
    bool m_clusterNamespaceArnHasBeenSet = false;

    long long m_totalStorageCapacityInMegaBytes;
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

    Aws::Utils::DateTime m_customDomainCertificateExpiryDate;
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
