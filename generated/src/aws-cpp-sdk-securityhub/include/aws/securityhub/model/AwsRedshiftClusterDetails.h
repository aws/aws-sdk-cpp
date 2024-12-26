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
    AWS_SECURITYHUB_API AwsRedshiftClusterDetails();
    AWS_SECURITYHUB_API AwsRedshiftClusterDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRedshiftClusterDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether major version upgrades are applied automatically to the
     * cluster during the maintenance window.</p>
     */
    inline bool GetAllowVersionUpgrade() const{ return m_allowVersionUpgrade; }
    inline bool AllowVersionUpgradeHasBeenSet() const { return m_allowVersionUpgradeHasBeenSet; }
    inline void SetAllowVersionUpgrade(bool value) { m_allowVersionUpgradeHasBeenSet = true; m_allowVersionUpgrade = value; }
    inline AwsRedshiftClusterDetails& WithAllowVersionUpgrade(bool value) { SetAllowVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days that automatic cluster snapshots are retained.</p>
     */
    inline int GetAutomatedSnapshotRetentionPeriod() const{ return m_automatedSnapshotRetentionPeriod; }
    inline bool AutomatedSnapshotRetentionPeriodHasBeenSet() const { return m_automatedSnapshotRetentionPeriodHasBeenSet; }
    inline void SetAutomatedSnapshotRetentionPeriod(int value) { m_automatedSnapshotRetentionPeriodHasBeenSet = true; m_automatedSnapshotRetentionPeriod = value; }
    inline AwsRedshiftClusterDetails& WithAutomatedSnapshotRetentionPeriod(int value) { SetAutomatedSnapshotRetentionPeriod(value); return *this;}
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
    inline AwsRedshiftClusterDetails& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline AwsRedshiftClusterDetails& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline AwsRedshiftClusterDetails& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
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
    inline const Aws::String& GetClusterAvailabilityStatus() const{ return m_clusterAvailabilityStatus; }
    inline bool ClusterAvailabilityStatusHasBeenSet() const { return m_clusterAvailabilityStatusHasBeenSet; }
    inline void SetClusterAvailabilityStatus(const Aws::String& value) { m_clusterAvailabilityStatusHasBeenSet = true; m_clusterAvailabilityStatus = value; }
    inline void SetClusterAvailabilityStatus(Aws::String&& value) { m_clusterAvailabilityStatusHasBeenSet = true; m_clusterAvailabilityStatus = std::move(value); }
    inline void SetClusterAvailabilityStatus(const char* value) { m_clusterAvailabilityStatusHasBeenSet = true; m_clusterAvailabilityStatus.assign(value); }
    inline AwsRedshiftClusterDetails& WithClusterAvailabilityStatus(const Aws::String& value) { SetClusterAvailabilityStatus(value); return *this;}
    inline AwsRedshiftClusterDetails& WithClusterAvailabilityStatus(Aws::String&& value) { SetClusterAvailabilityStatus(std::move(value)); return *this;}
    inline AwsRedshiftClusterDetails& WithClusterAvailabilityStatus(const char* value) { SetClusterAvailabilityStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the cluster was created.</p> <p>For more information about the
     * validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetClusterCreateTime() const{ return m_clusterCreateTime; }
    inline bool ClusterCreateTimeHasBeenSet() const { return m_clusterCreateTimeHasBeenSet; }
    inline void SetClusterCreateTime(const Aws::String& value) { m_clusterCreateTimeHasBeenSet = true; m_clusterCreateTime = value; }
    inline void SetClusterCreateTime(Aws::String&& value) { m_clusterCreateTimeHasBeenSet = true; m_clusterCreateTime = std::move(value); }
    inline void SetClusterCreateTime(const char* value) { m_clusterCreateTimeHasBeenSet = true; m_clusterCreateTime.assign(value); }
    inline AwsRedshiftClusterDetails& WithClusterCreateTime(const Aws::String& value) { SetClusterCreateTime(value); return *this;}
    inline AwsRedshiftClusterDetails& WithClusterCreateTime(Aws::String&& value) { SetClusterCreateTime(std::move(value)); return *this;}
    inline AwsRedshiftClusterDetails& WithClusterCreateTime(const char* value) { SetClusterCreateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }
    inline AwsRedshiftClusterDetails& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}
    inline AwsRedshiftClusterDetails& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}
    inline AwsRedshiftClusterDetails& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The nodes in the cluster.</p>
     */
    inline const Aws::Vector<AwsRedshiftClusterClusterNode>& GetClusterNodes() const{ return m_clusterNodes; }
    inline bool ClusterNodesHasBeenSet() const { return m_clusterNodesHasBeenSet; }
    inline void SetClusterNodes(const Aws::Vector<AwsRedshiftClusterClusterNode>& value) { m_clusterNodesHasBeenSet = true; m_clusterNodes = value; }
    inline void SetClusterNodes(Aws::Vector<AwsRedshiftClusterClusterNode>&& value) { m_clusterNodesHasBeenSet = true; m_clusterNodes = std::move(value); }
    inline AwsRedshiftClusterDetails& WithClusterNodes(const Aws::Vector<AwsRedshiftClusterClusterNode>& value) { SetClusterNodes(value); return *this;}
    inline AwsRedshiftClusterDetails& WithClusterNodes(Aws::Vector<AwsRedshiftClusterClusterNode>&& value) { SetClusterNodes(std::move(value)); return *this;}
    inline AwsRedshiftClusterDetails& AddClusterNodes(const AwsRedshiftClusterClusterNode& value) { m_clusterNodesHasBeenSet = true; m_clusterNodes.push_back(value); return *this; }
    inline AwsRedshiftClusterDetails& AddClusterNodes(AwsRedshiftClusterClusterNode&& value) { m_clusterNodesHasBeenSet = true; m_clusterNodes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of cluster parameter groups that are associated with this
     * cluster.</p>
     */
    inline const Aws::Vector<AwsRedshiftClusterClusterParameterGroup>& GetClusterParameterGroups() const{ return m_clusterParameterGroups; }
    inline bool ClusterParameterGroupsHasBeenSet() const { return m_clusterParameterGroupsHasBeenSet; }
    inline void SetClusterParameterGroups(const Aws::Vector<AwsRedshiftClusterClusterParameterGroup>& value) { m_clusterParameterGroupsHasBeenSet = true; m_clusterParameterGroups = value; }
    inline void SetClusterParameterGroups(Aws::Vector<AwsRedshiftClusterClusterParameterGroup>&& value) { m_clusterParameterGroupsHasBeenSet = true; m_clusterParameterGroups = std::move(value); }
    inline AwsRedshiftClusterDetails& WithClusterParameterGroups(const Aws::Vector<AwsRedshiftClusterClusterParameterGroup>& value) { SetClusterParameterGroups(value); return *this;}
    inline AwsRedshiftClusterDetails& WithClusterParameterGroups(Aws::Vector<AwsRedshiftClusterClusterParameterGroup>&& value) { SetClusterParameterGroups(std::move(value)); return *this;}
    inline AwsRedshiftClusterDetails& AddClusterParameterGroups(const AwsRedshiftClusterClusterParameterGroup& value) { m_clusterParameterGroupsHasBeenSet = true; m_clusterParameterGroups.push_back(value); return *this; }
    inline AwsRedshiftClusterDetails& AddClusterParameterGroups(AwsRedshiftClusterClusterParameterGroup&& value) { m_clusterParameterGroupsHasBeenSet = true; m_clusterParameterGroups.push_back(std::move(value)); return *this; }
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
    inline AwsRedshiftClusterDetails& WithClusterPublicKey(const Aws::String& value) { SetClusterPublicKey(value); return *this;}
    inline AwsRedshiftClusterDetails& WithClusterPublicKey(Aws::String&& value) { SetClusterPublicKey(std::move(value)); return *this;}
    inline AwsRedshiftClusterDetails& WithClusterPublicKey(const char* value) { SetClusterPublicKey(value); return *this;}
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
    inline AwsRedshiftClusterDetails& WithClusterRevisionNumber(const Aws::String& value) { SetClusterRevisionNumber(value); return *this;}
    inline AwsRedshiftClusterDetails& WithClusterRevisionNumber(Aws::String&& value) { SetClusterRevisionNumber(std::move(value)); return *this;}
    inline AwsRedshiftClusterDetails& WithClusterRevisionNumber(const char* value) { SetClusterRevisionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of cluster security groups that are associated with the cluster.</p>
     */
    inline const Aws::Vector<AwsRedshiftClusterClusterSecurityGroup>& GetClusterSecurityGroups() const{ return m_clusterSecurityGroups; }
    inline bool ClusterSecurityGroupsHasBeenSet() const { return m_clusterSecurityGroupsHasBeenSet; }
    inline void SetClusterSecurityGroups(const Aws::Vector<AwsRedshiftClusterClusterSecurityGroup>& value) { m_clusterSecurityGroupsHasBeenSet = true; m_clusterSecurityGroups = value; }
    inline void SetClusterSecurityGroups(Aws::Vector<AwsRedshiftClusterClusterSecurityGroup>&& value) { m_clusterSecurityGroupsHasBeenSet = true; m_clusterSecurityGroups = std::move(value); }
    inline AwsRedshiftClusterDetails& WithClusterSecurityGroups(const Aws::Vector<AwsRedshiftClusterClusterSecurityGroup>& value) { SetClusterSecurityGroups(value); return *this;}
    inline AwsRedshiftClusterDetails& WithClusterSecurityGroups(Aws::Vector<AwsRedshiftClusterClusterSecurityGroup>&& value) { SetClusterSecurityGroups(std::move(value)); return *this;}
    inline AwsRedshiftClusterDetails& AddClusterSecurityGroups(const AwsRedshiftClusterClusterSecurityGroup& value) { m_clusterSecurityGroupsHasBeenSet = true; m_clusterSecurityGroups.push_back(value); return *this; }
    inline AwsRedshiftClusterDetails& AddClusterSecurityGroups(AwsRedshiftClusterClusterSecurityGroup&& value) { m_clusterSecurityGroupsHasBeenSet = true; m_clusterSecurityGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the destination Region and retention period for the
     * cross-Region snapshot copy.</p>
     */
    inline const AwsRedshiftClusterClusterSnapshotCopyStatus& GetClusterSnapshotCopyStatus() const{ return m_clusterSnapshotCopyStatus; }
    inline bool ClusterSnapshotCopyStatusHasBeenSet() const { return m_clusterSnapshotCopyStatusHasBeenSet; }
    inline void SetClusterSnapshotCopyStatus(const AwsRedshiftClusterClusterSnapshotCopyStatus& value) { m_clusterSnapshotCopyStatusHasBeenSet = true; m_clusterSnapshotCopyStatus = value; }
    inline void SetClusterSnapshotCopyStatus(AwsRedshiftClusterClusterSnapshotCopyStatus&& value) { m_clusterSnapshotCopyStatusHasBeenSet = true; m_clusterSnapshotCopyStatus = std::move(value); }
    inline AwsRedshiftClusterDetails& WithClusterSnapshotCopyStatus(const AwsRedshiftClusterClusterSnapshotCopyStatus& value) { SetClusterSnapshotCopyStatus(value); return *this;}
    inline AwsRedshiftClusterDetails& WithClusterSnapshotCopyStatus(AwsRedshiftClusterClusterSnapshotCopyStatus&& value) { SetClusterSnapshotCopyStatus(std::move(value)); return *this;}
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
    inline const Aws::String& GetClusterStatus() const{ return m_clusterStatus; }
    inline bool ClusterStatusHasBeenSet() const { return m_clusterStatusHasBeenSet; }
    inline void SetClusterStatus(const Aws::String& value) { m_clusterStatusHasBeenSet = true; m_clusterStatus = value; }
    inline void SetClusterStatus(Aws::String&& value) { m_clusterStatusHasBeenSet = true; m_clusterStatus = std::move(value); }
    inline void SetClusterStatus(const char* value) { m_clusterStatusHasBeenSet = true; m_clusterStatus.assign(value); }
    inline AwsRedshiftClusterDetails& WithClusterStatus(const Aws::String& value) { SetClusterStatus(value); return *this;}
    inline AwsRedshiftClusterDetails& WithClusterStatus(Aws::String&& value) { SetClusterStatus(std::move(value)); return *this;}
    inline AwsRedshiftClusterDetails& WithClusterStatus(const char* value) { SetClusterStatus(value); return *this;}
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
    inline AwsRedshiftClusterDetails& WithClusterSubnetGroupName(const Aws::String& value) { SetClusterSubnetGroupName(value); return *this;}
    inline AwsRedshiftClusterDetails& WithClusterSubnetGroupName(Aws::String&& value) { SetClusterSubnetGroupName(std::move(value)); return *this;}
    inline AwsRedshiftClusterDetails& WithClusterSubnetGroupName(const char* value) { SetClusterSubnetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version ID of the Amazon Redshift engine that runs on the cluster.</p>
     */
    inline const Aws::String& GetClusterVersion() const{ return m_clusterVersion; }
    inline bool ClusterVersionHasBeenSet() const { return m_clusterVersionHasBeenSet; }
    inline void SetClusterVersion(const Aws::String& value) { m_clusterVersionHasBeenSet = true; m_clusterVersion = value; }
    inline void SetClusterVersion(Aws::String&& value) { m_clusterVersionHasBeenSet = true; m_clusterVersion = std::move(value); }
    inline void SetClusterVersion(const char* value) { m_clusterVersionHasBeenSet = true; m_clusterVersion.assign(value); }
    inline AwsRedshiftClusterDetails& WithClusterVersion(const Aws::String& value) { SetClusterVersion(value); return *this;}
    inline AwsRedshiftClusterDetails& WithClusterVersion(Aws::String&& value) { SetClusterVersion(std::move(value)); return *this;}
    inline AwsRedshiftClusterDetails& WithClusterVersion(const char* value) { SetClusterVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the initial database that was created when the cluster was
     * created.</p> <p>The same name is returned for the life of the cluster.</p> <p>If
     * an initial database is not specified, a database named <code>devdev</code> is
     * created by default.</p>
     */
    inline const Aws::String& GetDBName() const{ return m_dBName; }
    inline bool DBNameHasBeenSet() const { return m_dBNameHasBeenSet; }
    inline void SetDBName(const Aws::String& value) { m_dBNameHasBeenSet = true; m_dBName = value; }
    inline void SetDBName(Aws::String&& value) { m_dBNameHasBeenSet = true; m_dBName = std::move(value); }
    inline void SetDBName(const char* value) { m_dBNameHasBeenSet = true; m_dBName.assign(value); }
    inline AwsRedshiftClusterDetails& WithDBName(const Aws::String& value) { SetDBName(value); return *this;}
    inline AwsRedshiftClusterDetails& WithDBName(Aws::String&& value) { SetDBName(std::move(value)); return *this;}
    inline AwsRedshiftClusterDetails& WithDBName(const char* value) { SetDBName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of time windows during which maintenance was deferred.</p>
     */
    inline const Aws::Vector<AwsRedshiftClusterDeferredMaintenanceWindow>& GetDeferredMaintenanceWindows() const{ return m_deferredMaintenanceWindows; }
    inline bool DeferredMaintenanceWindowsHasBeenSet() const { return m_deferredMaintenanceWindowsHasBeenSet; }
    inline void SetDeferredMaintenanceWindows(const Aws::Vector<AwsRedshiftClusterDeferredMaintenanceWindow>& value) { m_deferredMaintenanceWindowsHasBeenSet = true; m_deferredMaintenanceWindows = value; }
    inline void SetDeferredMaintenanceWindows(Aws::Vector<AwsRedshiftClusterDeferredMaintenanceWindow>&& value) { m_deferredMaintenanceWindowsHasBeenSet = true; m_deferredMaintenanceWindows = std::move(value); }
    inline AwsRedshiftClusterDetails& WithDeferredMaintenanceWindows(const Aws::Vector<AwsRedshiftClusterDeferredMaintenanceWindow>& value) { SetDeferredMaintenanceWindows(value); return *this;}
    inline AwsRedshiftClusterDetails& WithDeferredMaintenanceWindows(Aws::Vector<AwsRedshiftClusterDeferredMaintenanceWindow>&& value) { SetDeferredMaintenanceWindows(std::move(value)); return *this;}
    inline AwsRedshiftClusterDetails& AddDeferredMaintenanceWindows(const AwsRedshiftClusterDeferredMaintenanceWindow& value) { m_deferredMaintenanceWindowsHasBeenSet = true; m_deferredMaintenanceWindows.push_back(value); return *this; }
    inline AwsRedshiftClusterDetails& AddDeferredMaintenanceWindows(AwsRedshiftClusterDeferredMaintenanceWindow&& value) { m_deferredMaintenanceWindowsHasBeenSet = true; m_deferredMaintenanceWindows.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the status of the Elastic IP (EIP) address.</p>
     */
    inline const AwsRedshiftClusterElasticIpStatus& GetElasticIpStatus() const{ return m_elasticIpStatus; }
    inline bool ElasticIpStatusHasBeenSet() const { return m_elasticIpStatusHasBeenSet; }
    inline void SetElasticIpStatus(const AwsRedshiftClusterElasticIpStatus& value) { m_elasticIpStatusHasBeenSet = true; m_elasticIpStatus = value; }
    inline void SetElasticIpStatus(AwsRedshiftClusterElasticIpStatus&& value) { m_elasticIpStatusHasBeenSet = true; m_elasticIpStatus = std::move(value); }
    inline AwsRedshiftClusterDetails& WithElasticIpStatus(const AwsRedshiftClusterElasticIpStatus& value) { SetElasticIpStatus(value); return *this;}
    inline AwsRedshiftClusterDetails& WithElasticIpStatus(AwsRedshiftClusterElasticIpStatus&& value) { SetElasticIpStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of nodes that you can use the elastic resize method to resize the
     * cluster to.</p>
     */
    inline const Aws::String& GetElasticResizeNumberOfNodeOptions() const{ return m_elasticResizeNumberOfNodeOptions; }
    inline bool ElasticResizeNumberOfNodeOptionsHasBeenSet() const { return m_elasticResizeNumberOfNodeOptionsHasBeenSet; }
    inline void SetElasticResizeNumberOfNodeOptions(const Aws::String& value) { m_elasticResizeNumberOfNodeOptionsHasBeenSet = true; m_elasticResizeNumberOfNodeOptions = value; }
    inline void SetElasticResizeNumberOfNodeOptions(Aws::String&& value) { m_elasticResizeNumberOfNodeOptionsHasBeenSet = true; m_elasticResizeNumberOfNodeOptions = std::move(value); }
    inline void SetElasticResizeNumberOfNodeOptions(const char* value) { m_elasticResizeNumberOfNodeOptionsHasBeenSet = true; m_elasticResizeNumberOfNodeOptions.assign(value); }
    inline AwsRedshiftClusterDetails& WithElasticResizeNumberOfNodeOptions(const Aws::String& value) { SetElasticResizeNumberOfNodeOptions(value); return *this;}
    inline AwsRedshiftClusterDetails& WithElasticResizeNumberOfNodeOptions(Aws::String&& value) { SetElasticResizeNumberOfNodeOptions(std::move(value)); return *this;}
    inline AwsRedshiftClusterDetails& WithElasticResizeNumberOfNodeOptions(const char* value) { SetElasticResizeNumberOfNodeOptions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the data in the cluster is encrypted at rest.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline AwsRedshiftClusterDetails& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection endpoint.</p>
     */
    inline const AwsRedshiftClusterEndpoint& GetEndpoint() const{ return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    inline void SetEndpoint(const AwsRedshiftClusterEndpoint& value) { m_endpointHasBeenSet = true; m_endpoint = value; }
    inline void SetEndpoint(AwsRedshiftClusterEndpoint&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }
    inline AwsRedshiftClusterDetails& WithEndpoint(const AwsRedshiftClusterEndpoint& value) { SetEndpoint(value); return *this;}
    inline AwsRedshiftClusterDetails& WithEndpoint(AwsRedshiftClusterEndpoint&& value) { SetEndpoint(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to create the cluster with enhanced VPC routing
     * enabled.</p>
     */
    inline bool GetEnhancedVpcRouting() const{ return m_enhancedVpcRouting; }
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
    inline const Aws::String& GetExpectedNextSnapshotScheduleTime() const{ return m_expectedNextSnapshotScheduleTime; }
    inline bool ExpectedNextSnapshotScheduleTimeHasBeenSet() const { return m_expectedNextSnapshotScheduleTimeHasBeenSet; }
    inline void SetExpectedNextSnapshotScheduleTime(const Aws::String& value) { m_expectedNextSnapshotScheduleTimeHasBeenSet = true; m_expectedNextSnapshotScheduleTime = value; }
    inline void SetExpectedNextSnapshotScheduleTime(Aws::String&& value) { m_expectedNextSnapshotScheduleTimeHasBeenSet = true; m_expectedNextSnapshotScheduleTime = std::move(value); }
    inline void SetExpectedNextSnapshotScheduleTime(const char* value) { m_expectedNextSnapshotScheduleTimeHasBeenSet = true; m_expectedNextSnapshotScheduleTime.assign(value); }
    inline AwsRedshiftClusterDetails& WithExpectedNextSnapshotScheduleTime(const Aws::String& value) { SetExpectedNextSnapshotScheduleTime(value); return *this;}
    inline AwsRedshiftClusterDetails& WithExpectedNextSnapshotScheduleTime(Aws::String&& value) { SetExpectedNextSnapshotScheduleTime(std::move(value)); return *this;}
    inline AwsRedshiftClusterDetails& WithExpectedNextSnapshotScheduleTime(const char* value) { SetExpectedNextSnapshotScheduleTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the next expected snapshot.</p> <p>Valid values:
     * <code>OnTrack</code> | <code>Pending</code> </p>
     */
    inline const Aws::String& GetExpectedNextSnapshotScheduleTimeStatus() const{ return m_expectedNextSnapshotScheduleTimeStatus; }
    inline bool ExpectedNextSnapshotScheduleTimeStatusHasBeenSet() const { return m_expectedNextSnapshotScheduleTimeStatusHasBeenSet; }
    inline void SetExpectedNextSnapshotScheduleTimeStatus(const Aws::String& value) { m_expectedNextSnapshotScheduleTimeStatusHasBeenSet = true; m_expectedNextSnapshotScheduleTimeStatus = value; }
    inline void SetExpectedNextSnapshotScheduleTimeStatus(Aws::String&& value) { m_expectedNextSnapshotScheduleTimeStatusHasBeenSet = true; m_expectedNextSnapshotScheduleTimeStatus = std::move(value); }
    inline void SetExpectedNextSnapshotScheduleTimeStatus(const char* value) { m_expectedNextSnapshotScheduleTimeStatusHasBeenSet = true; m_expectedNextSnapshotScheduleTimeStatus.assign(value); }
    inline AwsRedshiftClusterDetails& WithExpectedNextSnapshotScheduleTimeStatus(const Aws::String& value) { SetExpectedNextSnapshotScheduleTimeStatus(value); return *this;}
    inline AwsRedshiftClusterDetails& WithExpectedNextSnapshotScheduleTimeStatus(Aws::String&& value) { SetExpectedNextSnapshotScheduleTimeStatus(std::move(value)); return *this;}
    inline AwsRedshiftClusterDetails& WithExpectedNextSnapshotScheduleTimeStatus(const char* value) { SetExpectedNextSnapshotScheduleTimeStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about whether the Amazon Redshift cluster finished applying any
     * changes to hardware security module (HSM) settings that were specified in a
     * modify cluster command.</p>
     */
    inline const AwsRedshiftClusterHsmStatus& GetHsmStatus() const{ return m_hsmStatus; }
    inline bool HsmStatusHasBeenSet() const { return m_hsmStatusHasBeenSet; }
    inline void SetHsmStatus(const AwsRedshiftClusterHsmStatus& value) { m_hsmStatusHasBeenSet = true; m_hsmStatus = value; }
    inline void SetHsmStatus(AwsRedshiftClusterHsmStatus&& value) { m_hsmStatusHasBeenSet = true; m_hsmStatus = std::move(value); }
    inline AwsRedshiftClusterDetails& WithHsmStatus(const AwsRedshiftClusterHsmStatus& value) { SetHsmStatus(value); return *this;}
    inline AwsRedshiftClusterDetails& WithHsmStatus(AwsRedshiftClusterHsmStatus&& value) { SetHsmStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of IAM roles that the cluster can use to access other Amazon Web
     * Services services.</p>
     */
    inline const Aws::Vector<AwsRedshiftClusterIamRole>& GetIamRoles() const{ return m_iamRoles; }
    inline bool IamRolesHasBeenSet() const { return m_iamRolesHasBeenSet; }
    inline void SetIamRoles(const Aws::Vector<AwsRedshiftClusterIamRole>& value) { m_iamRolesHasBeenSet = true; m_iamRoles = value; }
    inline void SetIamRoles(Aws::Vector<AwsRedshiftClusterIamRole>&& value) { m_iamRolesHasBeenSet = true; m_iamRoles = std::move(value); }
    inline AwsRedshiftClusterDetails& WithIamRoles(const Aws::Vector<AwsRedshiftClusterIamRole>& value) { SetIamRoles(value); return *this;}
    inline AwsRedshiftClusterDetails& WithIamRoles(Aws::Vector<AwsRedshiftClusterIamRole>&& value) { SetIamRoles(std::move(value)); return *this;}
    inline AwsRedshiftClusterDetails& AddIamRoles(const AwsRedshiftClusterIamRole& value) { m_iamRolesHasBeenSet = true; m_iamRoles.push_back(value); return *this; }
    inline AwsRedshiftClusterDetails& AddIamRoles(AwsRedshiftClusterIamRole&& value) { m_iamRolesHasBeenSet = true; m_iamRoles.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the KMS encryption key that is used to encrypt data in the
     * cluster.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline AwsRedshiftClusterDetails& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline AwsRedshiftClusterDetails& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline AwsRedshiftClusterDetails& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
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
    inline AwsRedshiftClusterDetails& WithMaintenanceTrackName(const Aws::String& value) { SetMaintenanceTrackName(value); return *this;}
    inline AwsRedshiftClusterDetails& WithMaintenanceTrackName(Aws::String&& value) { SetMaintenanceTrackName(std::move(value)); return *this;}
    inline AwsRedshiftClusterDetails& WithMaintenanceTrackName(const char* value) { SetMaintenanceTrackName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default number of days to retain a manual snapshot.</p> <p>If the value
     * is <code>-1</code>, the snapshot is retained indefinitely.</p> <p>This setting
     * doesn't change the retention period of existing snapshots.</p> <p>Valid values:
     * Either <code>-1</code> or an integer between 1 and 3,653</p>
     */
    inline int GetManualSnapshotRetentionPeriod() const{ return m_manualSnapshotRetentionPeriod; }
    inline bool ManualSnapshotRetentionPeriodHasBeenSet() const { return m_manualSnapshotRetentionPeriodHasBeenSet; }
    inline void SetManualSnapshotRetentionPeriod(int value) { m_manualSnapshotRetentionPeriodHasBeenSet = true; m_manualSnapshotRetentionPeriod = value; }
    inline AwsRedshiftClusterDetails& WithManualSnapshotRetentionPeriod(int value) { SetManualSnapshotRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The master user name for the cluster. This name is used to connect to the
     * database that is specified in as the value of <code>DBName</code>.</p>
     */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }
    inline void SetMasterUsername(Aws::String&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::move(value); }
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }
    inline AwsRedshiftClusterDetails& WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}
    inline AwsRedshiftClusterDetails& WithMasterUsername(Aws::String&& value) { SetMasterUsername(std::move(value)); return *this;}
    inline AwsRedshiftClusterDetails& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the start of the next maintenance window.</p> <p>For more
     * information about the validation and formatting of timestamp fields in Security
     * Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetNextMaintenanceWindowStartTime() const{ return m_nextMaintenanceWindowStartTime; }
    inline bool NextMaintenanceWindowStartTimeHasBeenSet() const { return m_nextMaintenanceWindowStartTimeHasBeenSet; }
    inline void SetNextMaintenanceWindowStartTime(const Aws::String& value) { m_nextMaintenanceWindowStartTimeHasBeenSet = true; m_nextMaintenanceWindowStartTime = value; }
    inline void SetNextMaintenanceWindowStartTime(Aws::String&& value) { m_nextMaintenanceWindowStartTimeHasBeenSet = true; m_nextMaintenanceWindowStartTime = std::move(value); }
    inline void SetNextMaintenanceWindowStartTime(const char* value) { m_nextMaintenanceWindowStartTimeHasBeenSet = true; m_nextMaintenanceWindowStartTime.assign(value); }
    inline AwsRedshiftClusterDetails& WithNextMaintenanceWindowStartTime(const Aws::String& value) { SetNextMaintenanceWindowStartTime(value); return *this;}
    inline AwsRedshiftClusterDetails& WithNextMaintenanceWindowStartTime(Aws::String&& value) { SetNextMaintenanceWindowStartTime(std::move(value)); return *this;}
    inline AwsRedshiftClusterDetails& WithNextMaintenanceWindowStartTime(const char* value) { SetNextMaintenanceWindowStartTime(value); return *this;}
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
    inline AwsRedshiftClusterDetails& WithNodeType(const Aws::String& value) { SetNodeType(value); return *this;}
    inline AwsRedshiftClusterDetails& WithNodeType(Aws::String&& value) { SetNodeType(std::move(value)); return *this;}
    inline AwsRedshiftClusterDetails& WithNodeType(const char* value) { SetNodeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of compute nodes in the cluster.</p>
     */
    inline int GetNumberOfNodes() const{ return m_numberOfNodes; }
    inline bool NumberOfNodesHasBeenSet() const { return m_numberOfNodesHasBeenSet; }
    inline void SetNumberOfNodes(int value) { m_numberOfNodesHasBeenSet = true; m_numberOfNodes = value; }
    inline AwsRedshiftClusterDetails& WithNumberOfNodes(int value) { SetNumberOfNodes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of cluster operations that are waiting to start.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPendingActions() const{ return m_pendingActions; }
    inline bool PendingActionsHasBeenSet() const { return m_pendingActionsHasBeenSet; }
    inline void SetPendingActions(const Aws::Vector<Aws::String>& value) { m_pendingActionsHasBeenSet = true; m_pendingActions = value; }
    inline void SetPendingActions(Aws::Vector<Aws::String>&& value) { m_pendingActionsHasBeenSet = true; m_pendingActions = std::move(value); }
    inline AwsRedshiftClusterDetails& WithPendingActions(const Aws::Vector<Aws::String>& value) { SetPendingActions(value); return *this;}
    inline AwsRedshiftClusterDetails& WithPendingActions(Aws::Vector<Aws::String>&& value) { SetPendingActions(std::move(value)); return *this;}
    inline AwsRedshiftClusterDetails& AddPendingActions(const Aws::String& value) { m_pendingActionsHasBeenSet = true; m_pendingActions.push_back(value); return *this; }
    inline AwsRedshiftClusterDetails& AddPendingActions(Aws::String&& value) { m_pendingActionsHasBeenSet = true; m_pendingActions.push_back(std::move(value)); return *this; }
    inline AwsRedshiftClusterDetails& AddPendingActions(const char* value) { m_pendingActionsHasBeenSet = true; m_pendingActions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of changes to the cluster that are currently pending.</p>
     */
    inline const AwsRedshiftClusterPendingModifiedValues& GetPendingModifiedValues() const{ return m_pendingModifiedValues; }
    inline bool PendingModifiedValuesHasBeenSet() const { return m_pendingModifiedValuesHasBeenSet; }
    inline void SetPendingModifiedValues(const AwsRedshiftClusterPendingModifiedValues& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = value; }
    inline void SetPendingModifiedValues(AwsRedshiftClusterPendingModifiedValues&& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = std::move(value); }
    inline AwsRedshiftClusterDetails& WithPendingModifiedValues(const AwsRedshiftClusterPendingModifiedValues& value) { SetPendingModifiedValues(value); return *this;}
    inline AwsRedshiftClusterDetails& WithPendingModifiedValues(AwsRedshiftClusterPendingModifiedValues&& value) { SetPendingModifiedValues(std::move(value)); return *this;}
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
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }
    inline AwsRedshiftClusterDetails& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}
    inline AwsRedshiftClusterDetails& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}
    inline AwsRedshiftClusterDetails& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the cluster can be accessed from a public network.</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline AwsRedshiftClusterDetails& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the resize operation for the cluster.</p>
     */
    inline const AwsRedshiftClusterResizeInfo& GetResizeInfo() const{ return m_resizeInfo; }
    inline bool ResizeInfoHasBeenSet() const { return m_resizeInfoHasBeenSet; }
    inline void SetResizeInfo(const AwsRedshiftClusterResizeInfo& value) { m_resizeInfoHasBeenSet = true; m_resizeInfo = value; }
    inline void SetResizeInfo(AwsRedshiftClusterResizeInfo&& value) { m_resizeInfoHasBeenSet = true; m_resizeInfo = std::move(value); }
    inline AwsRedshiftClusterDetails& WithResizeInfo(const AwsRedshiftClusterResizeInfo& value) { SetResizeInfo(value); return *this;}
    inline AwsRedshiftClusterDetails& WithResizeInfo(AwsRedshiftClusterResizeInfo&& value) { SetResizeInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the status of a cluster restore action. Only applies to a
     * cluster that was created by restoring a snapshot.</p>
     */
    inline const AwsRedshiftClusterRestoreStatus& GetRestoreStatus() const{ return m_restoreStatus; }
    inline bool RestoreStatusHasBeenSet() const { return m_restoreStatusHasBeenSet; }
    inline void SetRestoreStatus(const AwsRedshiftClusterRestoreStatus& value) { m_restoreStatusHasBeenSet = true; m_restoreStatus = value; }
    inline void SetRestoreStatus(AwsRedshiftClusterRestoreStatus&& value) { m_restoreStatusHasBeenSet = true; m_restoreStatus = std::move(value); }
    inline AwsRedshiftClusterDetails& WithRestoreStatus(const AwsRedshiftClusterRestoreStatus& value) { SetRestoreStatus(value); return *this;}
    inline AwsRedshiftClusterDetails& WithRestoreStatus(AwsRedshiftClusterRestoreStatus&& value) { SetRestoreStatus(std::move(value)); return *this;}
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
    inline AwsRedshiftClusterDetails& WithSnapshotScheduleIdentifier(const Aws::String& value) { SetSnapshotScheduleIdentifier(value); return *this;}
    inline AwsRedshiftClusterDetails& WithSnapshotScheduleIdentifier(Aws::String&& value) { SetSnapshotScheduleIdentifier(std::move(value)); return *this;}
    inline AwsRedshiftClusterDetails& WithSnapshotScheduleIdentifier(const char* value) { SetSnapshotScheduleIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the cluster snapshot schedule.</p> <p>Valid values:
     * <code>MODIFYING</code> | <code>ACTIVE</code> | <code>FAILED</code> </p>
     */
    inline const Aws::String& GetSnapshotScheduleState() const{ return m_snapshotScheduleState; }
    inline bool SnapshotScheduleStateHasBeenSet() const { return m_snapshotScheduleStateHasBeenSet; }
    inline void SetSnapshotScheduleState(const Aws::String& value) { m_snapshotScheduleStateHasBeenSet = true; m_snapshotScheduleState = value; }
    inline void SetSnapshotScheduleState(Aws::String&& value) { m_snapshotScheduleStateHasBeenSet = true; m_snapshotScheduleState = std::move(value); }
    inline void SetSnapshotScheduleState(const char* value) { m_snapshotScheduleStateHasBeenSet = true; m_snapshotScheduleState.assign(value); }
    inline AwsRedshiftClusterDetails& WithSnapshotScheduleState(const Aws::String& value) { SetSnapshotScheduleState(value); return *this;}
    inline AwsRedshiftClusterDetails& WithSnapshotScheduleState(Aws::String&& value) { SetSnapshotScheduleState(std::move(value)); return *this;}
    inline AwsRedshiftClusterDetails& WithSnapshotScheduleState(const char* value) { SetSnapshotScheduleState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the VPC that the cluster is in, if the cluster is in a
     * VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline AwsRedshiftClusterDetails& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline AwsRedshiftClusterDetails& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline AwsRedshiftClusterDetails& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of VPC security groups that the cluster belongs to, if the cluster
     * is in a VPC.</p>
     */
    inline const Aws::Vector<AwsRedshiftClusterVpcSecurityGroup>& GetVpcSecurityGroups() const{ return m_vpcSecurityGroups; }
    inline bool VpcSecurityGroupsHasBeenSet() const { return m_vpcSecurityGroupsHasBeenSet; }
    inline void SetVpcSecurityGroups(const Aws::Vector<AwsRedshiftClusterVpcSecurityGroup>& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = value; }
    inline void SetVpcSecurityGroups(Aws::Vector<AwsRedshiftClusterVpcSecurityGroup>&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = std::move(value); }
    inline AwsRedshiftClusterDetails& WithVpcSecurityGroups(const Aws::Vector<AwsRedshiftClusterVpcSecurityGroup>& value) { SetVpcSecurityGroups(value); return *this;}
    inline AwsRedshiftClusterDetails& WithVpcSecurityGroups(Aws::Vector<AwsRedshiftClusterVpcSecurityGroup>&& value) { SetVpcSecurityGroups(std::move(value)); return *this;}
    inline AwsRedshiftClusterDetails& AddVpcSecurityGroups(const AwsRedshiftClusterVpcSecurityGroup& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.push_back(value); return *this; }
    inline AwsRedshiftClusterDetails& AddVpcSecurityGroups(AwsRedshiftClusterVpcSecurityGroup&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the logging status of the cluster.</p>
     */
    inline const AwsRedshiftClusterLoggingStatus& GetLoggingStatus() const{ return m_loggingStatus; }
    inline bool LoggingStatusHasBeenSet() const { return m_loggingStatusHasBeenSet; }
    inline void SetLoggingStatus(const AwsRedshiftClusterLoggingStatus& value) { m_loggingStatusHasBeenSet = true; m_loggingStatus = value; }
    inline void SetLoggingStatus(AwsRedshiftClusterLoggingStatus&& value) { m_loggingStatusHasBeenSet = true; m_loggingStatus = std::move(value); }
    inline AwsRedshiftClusterDetails& WithLoggingStatus(const AwsRedshiftClusterLoggingStatus& value) { SetLoggingStatus(value); return *this;}
    inline AwsRedshiftClusterDetails& WithLoggingStatus(AwsRedshiftClusterLoggingStatus&& value) { SetLoggingStatus(std::move(value)); return *this;}
    ///@}
  private:

    bool m_allowVersionUpgrade;
    bool m_allowVersionUpgradeHasBeenSet = false;

    int m_automatedSnapshotRetentionPeriod;
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

    bool m_encrypted;
    bool m_encryptedHasBeenSet = false;

    AwsRedshiftClusterEndpoint m_endpoint;
    bool m_endpointHasBeenSet = false;

    bool m_enhancedVpcRouting;
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

    int m_manualSnapshotRetentionPeriod;
    bool m_manualSnapshotRetentionPeriodHasBeenSet = false;

    Aws::String m_masterUsername;
    bool m_masterUsernameHasBeenSet = false;

    Aws::String m_nextMaintenanceWindowStartTime;
    bool m_nextMaintenanceWindowStartTimeHasBeenSet = false;

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet = false;

    int m_numberOfNodes;
    bool m_numberOfNodesHasBeenSet = false;

    Aws::Vector<Aws::String> m_pendingActions;
    bool m_pendingActionsHasBeenSet = false;

    AwsRedshiftClusterPendingModifiedValues m_pendingModifiedValues;
    bool m_pendingModifiedValuesHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    bool m_publiclyAccessible;
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
