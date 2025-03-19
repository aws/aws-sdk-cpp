/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsRedshiftClusterClusterSnapshotCopyStatus.h>
#include <aws/securityhub/model/AwsRedshiftClusterElasticIpStatus.h>
#include <aws/securityhub/model/AwsRedshiftClusterEndpoint.h>
#include <aws/securityhub/model/AwsRedshiftClusterHsmStatus.h>
#include <aws/securityhub/model/AwsRedshiftClusterPendingModifiedValues.h>
#include <aws/securityhub/model/AwsRedshiftClusterResizeInfo.h>
#include <aws/securityhub/model/AwsRedshiftClusterRestoreStatus.h>
#include <aws/securityhub/model/AwsRedshiftClusterLoggingStatus.h>
#include <aws/securityhub/model/AwsRedshiftClusterClusterNode.h>
#include <aws/securityhub/model/AwsRedshiftClusterClusterParameterGroup.h>
#include <aws/securityhub/model/AwsRedshiftClusterClusterSecurityGroup.h>
#include <aws/securityhub/model/AwsRedshiftClusterDeferredMaintenanceWindow.h>
#include <aws/securityhub/model/AwsRedshiftClusterIamRole.h>
#include <aws/securityhub/model/AwsRedshiftClusterVpcSecurityGroup.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Details about an Amazon Redshift cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRedshiftClusterDetails">AWS
   * API Reference</a></p>
   */
  class AwsRedshiftClusterDetails
  {
  public:
    AWS_SECURITYHUB_API AwsRedshiftClusterDetails() = default;
    AWS_SECURITYHUB_API AwsRedshiftClusterDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRedshiftClusterDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether major version upgrades are applied automatically to the
     * cluster during the maintenance window.</p>
     */
    inline bool GetAllowVersionUpgrade() const { return m_allowVersionUpgrade; }
    inline bool AllowVersionUpgradeHasBeenSet() const { return m_allowVersionUpgradeHasBeenSet; }
    inline void SetAllowVersionUpgrade(bool value) { m_allowVersionUpgradeHasBeenSet = true; m_allowVersionUpgrade = value; }
    inline AwsRedshiftClusterDetails& WithAllowVersionUpgrade(bool value) { SetAllowVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days that automatic cluster snapshots are retained.</p>
     */
    inline int GetAutomatedSnapshotRetentionPeriod() const { return m_automatedSnapshotRetentionPeriod; }
    inline bool AutomatedSnapshotRetentionPeriodHasBeenSet() const { return m_automatedSnapshotRetentionPeriodHasBeenSet; }
    inline void SetAutomatedSnapshotRetentionPeriod(int value) { m_automatedSnapshotRetentionPeriodHasBeenSet = true; m_automatedSnapshotRetentionPeriod = value; }
    inline AwsRedshiftClusterDetails& WithAutomatedSnapshotRetentionPeriod(int value) { SetAutomatedSnapshotRetentionPeriod(value); return *this;}
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
    AwsRedshiftClusterDetails& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The availability status of the cluster for queries. Possible values are the
     * following:</p> <ul> <li> <p> <code>Available</code> - The cluster is available
     * for queries.</p> </li> <li> <p> <code>Unavailable</code> - The cluster is not
     * available for queries.</p> </li> <li> <p> <code>Maintenance</code> - The cluster
     * is intermittently available for queries due to maintenance activities.</p> </li>
     * <li> <p> <code>Modifying</code> -The cluster is intermittently available for
     * queries due to changes that modify the cluster.</p> </li> <li> <p>
     * <code>Failed</code> - The cluster failed and is not available for queries.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetClusterAvailabilityStatus() const { return m_clusterAvailabilityStatus; }
    inline bool ClusterAvailabilityStatusHasBeenSet() const { return m_clusterAvailabilityStatusHasBeenSet; }
    template<typename ClusterAvailabilityStatusT = Aws::String>
    void SetClusterAvailabilityStatus(ClusterAvailabilityStatusT&& value) { m_clusterAvailabilityStatusHasBeenSet = true; m_clusterAvailabilityStatus = std::forward<ClusterAvailabilityStatusT>(value); }
    template<typename ClusterAvailabilityStatusT = Aws::String>
    AwsRedshiftClusterDetails& WithClusterAvailabilityStatus(ClusterAvailabilityStatusT&& value) { SetClusterAvailabilityStatus(std::forward<ClusterAvailabilityStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the cluster was created.</p> <p>For more information about the
     * validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetClusterCreateTime() const { return m_clusterCreateTime; }
    inline bool ClusterCreateTimeHasBeenSet() const { return m_clusterCreateTimeHasBeenSet; }
    template<typename ClusterCreateTimeT = Aws::String>
    void SetClusterCreateTime(ClusterCreateTimeT&& value) { m_clusterCreateTimeHasBeenSet = true; m_clusterCreateTime = std::forward<ClusterCreateTimeT>(value); }
    template<typename ClusterCreateTimeT = Aws::String>
    AwsRedshiftClusterDetails& WithClusterCreateTime(ClusterCreateTimeT&& value) { SetClusterCreateTime(std::forward<ClusterCreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const { return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    template<typename ClusterIdentifierT = Aws::String>
    void SetClusterIdentifier(ClusterIdentifierT&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::forward<ClusterIdentifierT>(value); }
    template<typename ClusterIdentifierT = Aws::String>
    AwsRedshiftClusterDetails& WithClusterIdentifier(ClusterIdentifierT&& value) { SetClusterIdentifier(std::forward<ClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The nodes in the cluster.</p>
     */
    inline const Aws::Vector<AwsRedshiftClusterClusterNode>& GetClusterNodes() const { return m_clusterNodes; }
    inline bool ClusterNodesHasBeenSet() const { return m_clusterNodesHasBeenSet; }
    template<typename ClusterNodesT = Aws::Vector<AwsRedshiftClusterClusterNode>>
    void SetClusterNodes(ClusterNodesT&& value) { m_clusterNodesHasBeenSet = true; m_clusterNodes = std::forward<ClusterNodesT>(value); }
    template<typename ClusterNodesT = Aws::Vector<AwsRedshiftClusterClusterNode>>
    AwsRedshiftClusterDetails& WithClusterNodes(ClusterNodesT&& value) { SetClusterNodes(std::forward<ClusterNodesT>(value)); return *this;}
    template<typename ClusterNodesT = AwsRedshiftClusterClusterNode>
    AwsRedshiftClusterDetails& AddClusterNodes(ClusterNodesT&& value) { m_clusterNodesHasBeenSet = true; m_clusterNodes.emplace_back(std::forward<ClusterNodesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of cluster parameter groups that are associated with this
     * cluster.</p>
     */
    inline const Aws::Vector<AwsRedshiftClusterClusterParameterGroup>& GetClusterParameterGroups() const { return m_clusterParameterGroups; }
    inline bool ClusterParameterGroupsHasBeenSet() const { return m_clusterParameterGroupsHasBeenSet; }
    template<typename ClusterParameterGroupsT = Aws::Vector<AwsRedshiftClusterClusterParameterGroup>>
    void SetClusterParameterGroups(ClusterParameterGroupsT&& value) { m_clusterParameterGroupsHasBeenSet = true; m_clusterParameterGroups = std::forward<ClusterParameterGroupsT>(value); }
    template<typename ClusterParameterGroupsT = Aws::Vector<AwsRedshiftClusterClusterParameterGroup>>
    AwsRedshiftClusterDetails& WithClusterParameterGroups(ClusterParameterGroupsT&& value) { SetClusterParameterGroups(std::forward<ClusterParameterGroupsT>(value)); return *this;}
    template<typename ClusterParameterGroupsT = AwsRedshiftClusterClusterParameterGroup>
    AwsRedshiftClusterDetails& AddClusterParameterGroups(ClusterParameterGroupsT&& value) { m_clusterParameterGroupsHasBeenSet = true; m_clusterParameterGroups.emplace_back(std::forward<ClusterParameterGroupsT>(value)); return *this; }
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
    AwsRedshiftClusterDetails& WithClusterPublicKey(ClusterPublicKeyT&& value) { SetClusterPublicKey(std::forward<ClusterPublicKeyT>(value)); return *this;}
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
    AwsRedshiftClusterDetails& WithClusterRevisionNumber(ClusterRevisionNumberT&& value) { SetClusterRevisionNumber(std::forward<ClusterRevisionNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of cluster security groups that are associated with the cluster.</p>
     */
    inline const Aws::Vector<AwsRedshiftClusterClusterSecurityGroup>& GetClusterSecurityGroups() const { return m_clusterSecurityGroups; }
    inline bool ClusterSecurityGroupsHasBeenSet() const { return m_clusterSecurityGroupsHasBeenSet; }
    template<typename ClusterSecurityGroupsT = Aws::Vector<AwsRedshiftClusterClusterSecurityGroup>>
    void SetClusterSecurityGroups(ClusterSecurityGroupsT&& value) { m_clusterSecurityGroupsHasBeenSet = true; m_clusterSecurityGroups = std::forward<ClusterSecurityGroupsT>(value); }
    template<typename ClusterSecurityGroupsT = Aws::Vector<AwsRedshiftClusterClusterSecurityGroup>>
    AwsRedshiftClusterDetails& WithClusterSecurityGroups(ClusterSecurityGroupsT&& value) { SetClusterSecurityGroups(std::forward<ClusterSecurityGroupsT>(value)); return *this;}
    template<typename ClusterSecurityGroupsT = AwsRedshiftClusterClusterSecurityGroup>
    AwsRedshiftClusterDetails& AddClusterSecurityGroups(ClusterSecurityGroupsT&& value) { m_clusterSecurityGroupsHasBeenSet = true; m_clusterSecurityGroups.emplace_back(std::forward<ClusterSecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the destination Region and retention period for the
     * cross-Region snapshot copy.</p>
     */
    inline const AwsRedshiftClusterClusterSnapshotCopyStatus& GetClusterSnapshotCopyStatus() const { return m_clusterSnapshotCopyStatus; }
    inline bool ClusterSnapshotCopyStatusHasBeenSet() const { return m_clusterSnapshotCopyStatusHasBeenSet; }
    template<typename ClusterSnapshotCopyStatusT = AwsRedshiftClusterClusterSnapshotCopyStatus>
    void SetClusterSnapshotCopyStatus(ClusterSnapshotCopyStatusT&& value) { m_clusterSnapshotCopyStatusHasBeenSet = true; m_clusterSnapshotCopyStatus = std::forward<ClusterSnapshotCopyStatusT>(value); }
    template<typename ClusterSnapshotCopyStatusT = AwsRedshiftClusterClusterSnapshotCopyStatus>
    AwsRedshiftClusterDetails& WithClusterSnapshotCopyStatus(ClusterSnapshotCopyStatusT&& value) { SetClusterSnapshotCopyStatus(std::forward<ClusterSnapshotCopyStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the cluster.</p> <p>Valid values:
     * <code>available</code> | <code>available, prep-for-resize</code> |
     * <code>available, resize-cleanup</code> |<code> cancelling-resize</code> |
     * <code>creating</code> | <code>deleting</code> | <code>final-snapshot</code> |
     * <code>hardware-failure</code> | <code>incompatible-hsm</code> |<code>
     * incompatible-network</code> | <code>incompatible-parameters</code> |
     * <code>incompatible-restore</code> | <code>modifying</code> | <code>paused</code>
     * | <code>rebooting</code> | <code>renaming</code> | <code>resizing</code> |
     * <code>rotating-keys</code> | <code>storage-full</code> |
     * <code>updating-hsm</code> </p>
     */
    inline const Aws::String& GetClusterStatus() const { return m_clusterStatus; }
    inline bool ClusterStatusHasBeenSet() const { return m_clusterStatusHasBeenSet; }
    template<typename ClusterStatusT = Aws::String>
    void SetClusterStatus(ClusterStatusT&& value) { m_clusterStatusHasBeenSet = true; m_clusterStatus = std::forward<ClusterStatusT>(value); }
    template<typename ClusterStatusT = Aws::String>
    AwsRedshiftClusterDetails& WithClusterStatus(ClusterStatusT&& value) { SetClusterStatus(std::forward<ClusterStatusT>(value)); return *this;}
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
    AwsRedshiftClusterDetails& WithClusterSubnetGroupName(ClusterSubnetGroupNameT&& value) { SetClusterSubnetGroupName(std::forward<ClusterSubnetGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version ID of the Amazon Redshift engine that runs on the cluster.</p>
     */
    inline const Aws::String& GetClusterVersion() const { return m_clusterVersion; }
    inline bool ClusterVersionHasBeenSet() const { return m_clusterVersionHasBeenSet; }
    template<typename ClusterVersionT = Aws::String>
    void SetClusterVersion(ClusterVersionT&& value) { m_clusterVersionHasBeenSet = true; m_clusterVersion = std::forward<ClusterVersionT>(value); }
    template<typename ClusterVersionT = Aws::String>
    AwsRedshiftClusterDetails& WithClusterVersion(ClusterVersionT&& value) { SetClusterVersion(std::forward<ClusterVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the initial database that was created when the cluster was
     * created.</p> <p>The same name is returned for the life of the cluster.</p> <p>If
     * an initial database is not specified, a database named <code>devdev</code> is
     * created by default.</p>
     */
    inline const Aws::String& GetDBName() const { return m_dBName; }
    inline bool DBNameHasBeenSet() const { return m_dBNameHasBeenSet; }
    template<typename DBNameT = Aws::String>
    void SetDBName(DBNameT&& value) { m_dBNameHasBeenSet = true; m_dBName = std::forward<DBNameT>(value); }
    template<typename DBNameT = Aws::String>
    AwsRedshiftClusterDetails& WithDBName(DBNameT&& value) { SetDBName(std::forward<DBNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of time windows during which maintenance was deferred.</p>
     */
    inline const Aws::Vector<AwsRedshiftClusterDeferredMaintenanceWindow>& GetDeferredMaintenanceWindows() const { return m_deferredMaintenanceWindows; }
    inline bool DeferredMaintenanceWindowsHasBeenSet() const { return m_deferredMaintenanceWindowsHasBeenSet; }
    template<typename DeferredMaintenanceWindowsT = Aws::Vector<AwsRedshiftClusterDeferredMaintenanceWindow>>
    void SetDeferredMaintenanceWindows(DeferredMaintenanceWindowsT&& value) { m_deferredMaintenanceWindowsHasBeenSet = true; m_deferredMaintenanceWindows = std::forward<DeferredMaintenanceWindowsT>(value); }
    template<typename DeferredMaintenanceWindowsT = Aws::Vector<AwsRedshiftClusterDeferredMaintenanceWindow>>
    AwsRedshiftClusterDetails& WithDeferredMaintenanceWindows(DeferredMaintenanceWindowsT&& value) { SetDeferredMaintenanceWindows(std::forward<DeferredMaintenanceWindowsT>(value)); return *this;}
    template<typename DeferredMaintenanceWindowsT = AwsRedshiftClusterDeferredMaintenanceWindow>
    AwsRedshiftClusterDetails& AddDeferredMaintenanceWindows(DeferredMaintenanceWindowsT&& value) { m_deferredMaintenanceWindowsHasBeenSet = true; m_deferredMaintenanceWindows.emplace_back(std::forward<DeferredMaintenanceWindowsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the status of the Elastic IP (EIP) address.</p>
     */
    inline const AwsRedshiftClusterElasticIpStatus& GetElasticIpStatus() const { return m_elasticIpStatus; }
    inline bool ElasticIpStatusHasBeenSet() const { return m_elasticIpStatusHasBeenSet; }
    template<typename ElasticIpStatusT = AwsRedshiftClusterElasticIpStatus>
    void SetElasticIpStatus(ElasticIpStatusT&& value) { m_elasticIpStatusHasBeenSet = true; m_elasticIpStatus = std::forward<ElasticIpStatusT>(value); }
    template<typename ElasticIpStatusT = AwsRedshiftClusterElasticIpStatus>
    AwsRedshiftClusterDetails& WithElasticIpStatus(ElasticIpStatusT&& value) { SetElasticIpStatus(std::forward<ElasticIpStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of nodes that you can use the elastic resize method to resize the
     * cluster to.</p>
     */
    inline const Aws::String& GetElasticResizeNumberOfNodeOptions() const { return m_elasticResizeNumberOfNodeOptions; }
    inline bool ElasticResizeNumberOfNodeOptionsHasBeenSet() const { return m_elasticResizeNumberOfNodeOptionsHasBeenSet; }
    template<typename ElasticResizeNumberOfNodeOptionsT = Aws::String>
    void SetElasticResizeNumberOfNodeOptions(ElasticResizeNumberOfNodeOptionsT&& value) { m_elasticResizeNumberOfNodeOptionsHasBeenSet = true; m_elasticResizeNumberOfNodeOptions = std::forward<ElasticResizeNumberOfNodeOptionsT>(value); }
    template<typename ElasticResizeNumberOfNodeOptionsT = Aws::String>
    AwsRedshiftClusterDetails& WithElasticResizeNumberOfNodeOptions(ElasticResizeNumberOfNodeOptionsT&& value) { SetElasticResizeNumberOfNodeOptions(std::forward<ElasticResizeNumberOfNodeOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the data in the cluster is encrypted at rest.</p>
     */
    inline bool GetEncrypted() const { return m_encrypted; }
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline AwsRedshiftClusterDetails& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection endpoint.</p>
     */
    inline const AwsRedshiftClusterEndpoint& GetEndpoint() const { return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    template<typename EndpointT = AwsRedshiftClusterEndpoint>
    void SetEndpoint(EndpointT&& value) { m_endpointHasBeenSet = true; m_endpoint = std::forward<EndpointT>(value); }
    template<typename EndpointT = AwsRedshiftClusterEndpoint>
    AwsRedshiftClusterDetails& WithEndpoint(EndpointT&& value) { SetEndpoint(std::forward<EndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to create the cluster with enhanced VPC routing
     * enabled.</p>
     */
    inline bool GetEnhancedVpcRouting() const { return m_enhancedVpcRouting; }
    inline bool EnhancedVpcRoutingHasBeenSet() const { return m_enhancedVpcRoutingHasBeenSet; }
    inline void SetEnhancedVpcRouting(bool value) { m_enhancedVpcRoutingHasBeenSet = true; m_enhancedVpcRouting = value; }
    inline AwsRedshiftClusterDetails& WithEnhancedVpcRouting(bool value) { SetEnhancedVpcRouting(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the next snapshot is expected to be taken. The cluster must
     * have a valid snapshot schedule and have backups enabled.</p> <p>For more
     * information about the validation and formatting of timestamp fields in Security
     * Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetExpectedNextSnapshotScheduleTime() const { return m_expectedNextSnapshotScheduleTime; }
    inline bool ExpectedNextSnapshotScheduleTimeHasBeenSet() const { return m_expectedNextSnapshotScheduleTimeHasBeenSet; }
    template<typename ExpectedNextSnapshotScheduleTimeT = Aws::String>
    void SetExpectedNextSnapshotScheduleTime(ExpectedNextSnapshotScheduleTimeT&& value) { m_expectedNextSnapshotScheduleTimeHasBeenSet = true; m_expectedNextSnapshotScheduleTime = std::forward<ExpectedNextSnapshotScheduleTimeT>(value); }
    template<typename ExpectedNextSnapshotScheduleTimeT = Aws::String>
    AwsRedshiftClusterDetails& WithExpectedNextSnapshotScheduleTime(ExpectedNextSnapshotScheduleTimeT&& value) { SetExpectedNextSnapshotScheduleTime(std::forward<ExpectedNextSnapshotScheduleTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the next expected snapshot.</p> <p>Valid values:
     * <code>OnTrack</code> | <code>Pending</code> </p>
     */
    inline const Aws::String& GetExpectedNextSnapshotScheduleTimeStatus() const { return m_expectedNextSnapshotScheduleTimeStatus; }
    inline bool ExpectedNextSnapshotScheduleTimeStatusHasBeenSet() const { return m_expectedNextSnapshotScheduleTimeStatusHasBeenSet; }
    template<typename ExpectedNextSnapshotScheduleTimeStatusT = Aws::String>
    void SetExpectedNextSnapshotScheduleTimeStatus(ExpectedNextSnapshotScheduleTimeStatusT&& value) { m_expectedNextSnapshotScheduleTimeStatusHasBeenSet = true; m_expectedNextSnapshotScheduleTimeStatus = std::forward<ExpectedNextSnapshotScheduleTimeStatusT>(value); }
    template<typename ExpectedNextSnapshotScheduleTimeStatusT = Aws::String>
    AwsRedshiftClusterDetails& WithExpectedNextSnapshotScheduleTimeStatus(ExpectedNextSnapshotScheduleTimeStatusT&& value) { SetExpectedNextSnapshotScheduleTimeStatus(std::forward<ExpectedNextSnapshotScheduleTimeStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about whether the Amazon Redshift cluster finished applying any
     * changes to hardware security module (HSM) settings that were specified in a
     * modify cluster command.</p>
     */
    inline const AwsRedshiftClusterHsmStatus& GetHsmStatus() const { return m_hsmStatus; }
    inline bool HsmStatusHasBeenSet() const { return m_hsmStatusHasBeenSet; }
    template<typename HsmStatusT = AwsRedshiftClusterHsmStatus>
    void SetHsmStatus(HsmStatusT&& value) { m_hsmStatusHasBeenSet = true; m_hsmStatus = std::forward<HsmStatusT>(value); }
    template<typename HsmStatusT = AwsRedshiftClusterHsmStatus>
    AwsRedshiftClusterDetails& WithHsmStatus(HsmStatusT&& value) { SetHsmStatus(std::forward<HsmStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of IAM roles that the cluster can use to access other Amazon Web
     * Services services.</p>
     */
    inline const Aws::Vector<AwsRedshiftClusterIamRole>& GetIamRoles() const { return m_iamRoles; }
    inline bool IamRolesHasBeenSet() const { return m_iamRolesHasBeenSet; }
    template<typename IamRolesT = Aws::Vector<AwsRedshiftClusterIamRole>>
    void SetIamRoles(IamRolesT&& value) { m_iamRolesHasBeenSet = true; m_iamRoles = std::forward<IamRolesT>(value); }
    template<typename IamRolesT = Aws::Vector<AwsRedshiftClusterIamRole>>
    AwsRedshiftClusterDetails& WithIamRoles(IamRolesT&& value) { SetIamRoles(std::forward<IamRolesT>(value)); return *this;}
    template<typename IamRolesT = AwsRedshiftClusterIamRole>
    AwsRedshiftClusterDetails& AddIamRoles(IamRolesT&& value) { m_iamRolesHasBeenSet = true; m_iamRoles.emplace_back(std::forward<IamRolesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the KMS encryption key that is used to encrypt data in the
     * cluster.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    AwsRedshiftClusterDetails& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
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
    AwsRedshiftClusterDetails& WithMaintenanceTrackName(MaintenanceTrackNameT&& value) { SetMaintenanceTrackName(std::forward<MaintenanceTrackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default number of days to retain a manual snapshot.</p> <p>If the value
     * is <code>-1</code>, the snapshot is retained indefinitely.</p> <p>This setting
     * doesn't change the retention period of existing snapshots.</p> <p>Valid values:
     * Either <code>-1</code> or an integer between 1 and 3,653</p>
     */
    inline int GetManualSnapshotRetentionPeriod() const { return m_manualSnapshotRetentionPeriod; }
    inline bool ManualSnapshotRetentionPeriodHasBeenSet() const { return m_manualSnapshotRetentionPeriodHasBeenSet; }
    inline void SetManualSnapshotRetentionPeriod(int value) { m_manualSnapshotRetentionPeriodHasBeenSet = true; m_manualSnapshotRetentionPeriod = value; }
    inline AwsRedshiftClusterDetails& WithManualSnapshotRetentionPeriod(int value) { SetManualSnapshotRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The master user name for the cluster. This name is used to connect to the
     * database that is specified in as the value of <code>DBName</code>.</p>
     */
    inline const Aws::String& GetMasterUsername() const { return m_masterUsername; }
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }
    template<typename MasterUsernameT = Aws::String>
    void SetMasterUsername(MasterUsernameT&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::forward<MasterUsernameT>(value); }
    template<typename MasterUsernameT = Aws::String>
    AwsRedshiftClusterDetails& WithMasterUsername(MasterUsernameT&& value) { SetMasterUsername(std::forward<MasterUsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the start of the next maintenance window.</p> <p>For more
     * information about the validation and formatting of timestamp fields in Security
     * Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetNextMaintenanceWindowStartTime() const { return m_nextMaintenanceWindowStartTime; }
    inline bool NextMaintenanceWindowStartTimeHasBeenSet() const { return m_nextMaintenanceWindowStartTimeHasBeenSet; }
    template<typename NextMaintenanceWindowStartTimeT = Aws::String>
    void SetNextMaintenanceWindowStartTime(NextMaintenanceWindowStartTimeT&& value) { m_nextMaintenanceWindowStartTimeHasBeenSet = true; m_nextMaintenanceWindowStartTime = std::forward<NextMaintenanceWindowStartTimeT>(value); }
    template<typename NextMaintenanceWindowStartTimeT = Aws::String>
    AwsRedshiftClusterDetails& WithNextMaintenanceWindowStartTime(NextMaintenanceWindowStartTimeT&& value) { SetNextMaintenanceWindowStartTime(std::forward<NextMaintenanceWindowStartTimeT>(value)); return *this;}
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
    AwsRedshiftClusterDetails& WithNodeType(NodeTypeT&& value) { SetNodeType(std::forward<NodeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of compute nodes in the cluster.</p>
     */
    inline int GetNumberOfNodes() const { return m_numberOfNodes; }
    inline bool NumberOfNodesHasBeenSet() const { return m_numberOfNodesHasBeenSet; }
    inline void SetNumberOfNodes(int value) { m_numberOfNodesHasBeenSet = true; m_numberOfNodes = value; }
    inline AwsRedshiftClusterDetails& WithNumberOfNodes(int value) { SetNumberOfNodes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of cluster operations that are waiting to start.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPendingActions() const { return m_pendingActions; }
    inline bool PendingActionsHasBeenSet() const { return m_pendingActionsHasBeenSet; }
    template<typename PendingActionsT = Aws::Vector<Aws::String>>
    void SetPendingActions(PendingActionsT&& value) { m_pendingActionsHasBeenSet = true; m_pendingActions = std::forward<PendingActionsT>(value); }
    template<typename PendingActionsT = Aws::Vector<Aws::String>>
    AwsRedshiftClusterDetails& WithPendingActions(PendingActionsT&& value) { SetPendingActions(std::forward<PendingActionsT>(value)); return *this;}
    template<typename PendingActionsT = Aws::String>
    AwsRedshiftClusterDetails& AddPendingActions(PendingActionsT&& value) { m_pendingActionsHasBeenSet = true; m_pendingActions.emplace_back(std::forward<PendingActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of changes to the cluster that are currently pending.</p>
     */
    inline const AwsRedshiftClusterPendingModifiedValues& GetPendingModifiedValues() const { return m_pendingModifiedValues; }
    inline bool PendingModifiedValuesHasBeenSet() const { return m_pendingModifiedValuesHasBeenSet; }
    template<typename PendingModifiedValuesT = AwsRedshiftClusterPendingModifiedValues>
    void SetPendingModifiedValues(PendingModifiedValuesT&& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = std::forward<PendingModifiedValuesT>(value); }
    template<typename PendingModifiedValuesT = AwsRedshiftClusterPendingModifiedValues>
    AwsRedshiftClusterDetails& WithPendingModifiedValues(PendingModifiedValuesT&& value) { SetPendingModifiedValues(std::forward<PendingModifiedValuesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The weekly time range, in Universal Coordinated Time (UTC), during which
     * system maintenance can occur.</p> <p>Format: <code>
     * <i>&lt;day&gt;</i>:HH:MM-<i>&lt;day&gt;</i>:HH:MM</code> </p> <p>For the day
     * values, use <code>mon</code> | <code>tue</code> | <code>wed</code> |
     * <code>thu</code> | <code>fri</code> | <code>sat</code> | <code>sun</code> </p>
     * <p>For example, <code>sun:09:32-sun:10:02</code> </p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const { return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    void SetPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::forward<PreferredMaintenanceWindowT>(value); }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    AwsRedshiftClusterDetails& WithPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { SetPreferredMaintenanceWindow(std::forward<PreferredMaintenanceWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the cluster can be accessed from a public network.</p>
     */
    inline bool GetPubliclyAccessible() const { return m_publiclyAccessible; }
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline AwsRedshiftClusterDetails& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the resize operation for the cluster.</p>
     */
    inline const AwsRedshiftClusterResizeInfo& GetResizeInfo() const { return m_resizeInfo; }
    inline bool ResizeInfoHasBeenSet() const { return m_resizeInfoHasBeenSet; }
    template<typename ResizeInfoT = AwsRedshiftClusterResizeInfo>
    void SetResizeInfo(ResizeInfoT&& value) { m_resizeInfoHasBeenSet = true; m_resizeInfo = std::forward<ResizeInfoT>(value); }
    template<typename ResizeInfoT = AwsRedshiftClusterResizeInfo>
    AwsRedshiftClusterDetails& WithResizeInfo(ResizeInfoT&& value) { SetResizeInfo(std::forward<ResizeInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the status of a cluster restore action. Only applies to a
     * cluster that was created by restoring a snapshot.</p>
     */
    inline const AwsRedshiftClusterRestoreStatus& GetRestoreStatus() const { return m_restoreStatus; }
    inline bool RestoreStatusHasBeenSet() const { return m_restoreStatusHasBeenSet; }
    template<typename RestoreStatusT = AwsRedshiftClusterRestoreStatus>
    void SetRestoreStatus(RestoreStatusT&& value) { m_restoreStatusHasBeenSet = true; m_restoreStatus = std::forward<RestoreStatusT>(value); }
    template<typename RestoreStatusT = AwsRedshiftClusterRestoreStatus>
    AwsRedshiftClusterDetails& WithRestoreStatus(RestoreStatusT&& value) { SetRestoreStatus(std::forward<RestoreStatusT>(value)); return *this;}
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
    AwsRedshiftClusterDetails& WithSnapshotScheduleIdentifier(SnapshotScheduleIdentifierT&& value) { SetSnapshotScheduleIdentifier(std::forward<SnapshotScheduleIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the cluster snapshot schedule.</p> <p>Valid values:
     * <code>MODIFYING</code> | <code>ACTIVE</code> | <code>FAILED</code> </p>
     */
    inline const Aws::String& GetSnapshotScheduleState() const { return m_snapshotScheduleState; }
    inline bool SnapshotScheduleStateHasBeenSet() const { return m_snapshotScheduleStateHasBeenSet; }
    template<typename SnapshotScheduleStateT = Aws::String>
    void SetSnapshotScheduleState(SnapshotScheduleStateT&& value) { m_snapshotScheduleStateHasBeenSet = true; m_snapshotScheduleState = std::forward<SnapshotScheduleStateT>(value); }
    template<typename SnapshotScheduleStateT = Aws::String>
    AwsRedshiftClusterDetails& WithSnapshotScheduleState(SnapshotScheduleStateT&& value) { SetSnapshotScheduleState(std::forward<SnapshotScheduleStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the VPC that the cluster is in, if the cluster is in a
     * VPC.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    AwsRedshiftClusterDetails& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of VPC security groups that the cluster belongs to, if the cluster
     * is in a VPC.</p>
     */
    inline const Aws::Vector<AwsRedshiftClusterVpcSecurityGroup>& GetVpcSecurityGroups() const { return m_vpcSecurityGroups; }
    inline bool VpcSecurityGroupsHasBeenSet() const { return m_vpcSecurityGroupsHasBeenSet; }
    template<typename VpcSecurityGroupsT = Aws::Vector<AwsRedshiftClusterVpcSecurityGroup>>
    void SetVpcSecurityGroups(VpcSecurityGroupsT&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = std::forward<VpcSecurityGroupsT>(value); }
    template<typename VpcSecurityGroupsT = Aws::Vector<AwsRedshiftClusterVpcSecurityGroup>>
    AwsRedshiftClusterDetails& WithVpcSecurityGroups(VpcSecurityGroupsT&& value) { SetVpcSecurityGroups(std::forward<VpcSecurityGroupsT>(value)); return *this;}
    template<typename VpcSecurityGroupsT = AwsRedshiftClusterVpcSecurityGroup>
    AwsRedshiftClusterDetails& AddVpcSecurityGroups(VpcSecurityGroupsT&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.emplace_back(std::forward<VpcSecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the logging status of the cluster.</p>
     */
    inline const AwsRedshiftClusterLoggingStatus& GetLoggingStatus() const { return m_loggingStatus; }
    inline bool LoggingStatusHasBeenSet() const { return m_loggingStatusHasBeenSet; }
    template<typename LoggingStatusT = AwsRedshiftClusterLoggingStatus>
    void SetLoggingStatus(LoggingStatusT&& value) { m_loggingStatusHasBeenSet = true; m_loggingStatus = std::forward<LoggingStatusT>(value); }
    template<typename LoggingStatusT = AwsRedshiftClusterLoggingStatus>
    AwsRedshiftClusterDetails& WithLoggingStatus(LoggingStatusT&& value) { SetLoggingStatus(std::forward<LoggingStatusT>(value)); return *this;}
    ///@}
  private:

    bool m_allowVersionUpgrade{false};
    bool m_allowVersionUpgradeHasBeenSet = false;

    int m_automatedSnapshotRetentionPeriod{0};
    bool m_automatedSnapshotRetentionPeriodHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_clusterAvailabilityStatus;
    bool m_clusterAvailabilityStatusHasBeenSet = false;

    Aws::String m_clusterCreateTime;
    bool m_clusterCreateTimeHasBeenSet = false;

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::Vector<AwsRedshiftClusterClusterNode> m_clusterNodes;
    bool m_clusterNodesHasBeenSet = false;

    Aws::Vector<AwsRedshiftClusterClusterParameterGroup> m_clusterParameterGroups;
    bool m_clusterParameterGroupsHasBeenSet = false;

    Aws::String m_clusterPublicKey;
    bool m_clusterPublicKeyHasBeenSet = false;

    Aws::String m_clusterRevisionNumber;
    bool m_clusterRevisionNumberHasBeenSet = false;

    Aws::Vector<AwsRedshiftClusterClusterSecurityGroup> m_clusterSecurityGroups;
    bool m_clusterSecurityGroupsHasBeenSet = false;

    AwsRedshiftClusterClusterSnapshotCopyStatus m_clusterSnapshotCopyStatus;
    bool m_clusterSnapshotCopyStatusHasBeenSet = false;

    Aws::String m_clusterStatus;
    bool m_clusterStatusHasBeenSet = false;

    Aws::String m_clusterSubnetGroupName;
    bool m_clusterSubnetGroupNameHasBeenSet = false;

    Aws::String m_clusterVersion;
    bool m_clusterVersionHasBeenSet = false;

    Aws::String m_dBName;
    bool m_dBNameHasBeenSet = false;

    Aws::Vector<AwsRedshiftClusterDeferredMaintenanceWindow> m_deferredMaintenanceWindows;
    bool m_deferredMaintenanceWindowsHasBeenSet = false;

    AwsRedshiftClusterElasticIpStatus m_elasticIpStatus;
    bool m_elasticIpStatusHasBeenSet = false;

    Aws::String m_elasticResizeNumberOfNodeOptions;
    bool m_elasticResizeNumberOfNodeOptionsHasBeenSet = false;

    bool m_encrypted{false};
    bool m_encryptedHasBeenSet = false;

    AwsRedshiftClusterEndpoint m_endpoint;
    bool m_endpointHasBeenSet = false;

    bool m_enhancedVpcRouting{false};
    bool m_enhancedVpcRoutingHasBeenSet = false;

    Aws::String m_expectedNextSnapshotScheduleTime;
    bool m_expectedNextSnapshotScheduleTimeHasBeenSet = false;

    Aws::String m_expectedNextSnapshotScheduleTimeStatus;
    bool m_expectedNextSnapshotScheduleTimeStatusHasBeenSet = false;

    AwsRedshiftClusterHsmStatus m_hsmStatus;
    bool m_hsmStatusHasBeenSet = false;

    Aws::Vector<AwsRedshiftClusterIamRole> m_iamRoles;
    bool m_iamRolesHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_maintenanceTrackName;
    bool m_maintenanceTrackNameHasBeenSet = false;

    int m_manualSnapshotRetentionPeriod{0};
    bool m_manualSnapshotRetentionPeriodHasBeenSet = false;

    Aws::String m_masterUsername;
    bool m_masterUsernameHasBeenSet = false;

    Aws::String m_nextMaintenanceWindowStartTime;
    bool m_nextMaintenanceWindowStartTimeHasBeenSet = false;

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet = false;

    int m_numberOfNodes{0};
    bool m_numberOfNodesHasBeenSet = false;

    Aws::Vector<Aws::String> m_pendingActions;
    bool m_pendingActionsHasBeenSet = false;

    AwsRedshiftClusterPendingModifiedValues m_pendingModifiedValues;
    bool m_pendingModifiedValuesHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    bool m_publiclyAccessible{false};
    bool m_publiclyAccessibleHasBeenSet = false;

    AwsRedshiftClusterResizeInfo m_resizeInfo;
    bool m_resizeInfoHasBeenSet = false;

    AwsRedshiftClusterRestoreStatus m_restoreStatus;
    bool m_restoreStatusHasBeenSet = false;

    Aws::String m_snapshotScheduleIdentifier;
    bool m_snapshotScheduleIdentifierHasBeenSet = false;

    Aws::String m_snapshotScheduleState;
    bool m_snapshotScheduleStateHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Vector<AwsRedshiftClusterVpcSecurityGroup> m_vpcSecurityGroups;
    bool m_vpcSecurityGroupsHasBeenSet = false;

    AwsRedshiftClusterLoggingStatus m_loggingStatus;
    bool m_loggingStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
