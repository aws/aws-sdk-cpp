/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/memorydb/model/ClusterPendingUpdates.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/memorydb/model/AZStatus.h>
#include <aws/memorydb/model/Endpoint.h>
#include <aws/memorydb/model/DataTieringStatus.h>
#include <aws/memorydb/model/Shard.h>
#include <aws/memorydb/model/SecurityGroupMembership.h>
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
namespace MemoryDB
{
namespace Model
{

  /**
   * <p>Contains all of the attributes of a specific cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/Cluster">AWS
   * API Reference</a></p>
   */
  class Cluster
  {
  public:
    AWS_MEMORYDB_API Cluster();
    AWS_MEMORYDB_API Cluster(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Cluster& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user-supplied name of the cluster. This identifier is a unique key that
     * identifies a cluster.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Cluster& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Cluster& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Cluster& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the cluster</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Cluster& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Cluster& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Cluster& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the cluster. For example, Available, Updating, Creating.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline Cluster& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline Cluster& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline Cluster& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A group of settings that are currently being applied.</p>
     */
    inline const ClusterPendingUpdates& GetPendingUpdates() const{ return m_pendingUpdates; }
    inline bool PendingUpdatesHasBeenSet() const { return m_pendingUpdatesHasBeenSet; }
    inline void SetPendingUpdates(const ClusterPendingUpdates& value) { m_pendingUpdatesHasBeenSet = true; m_pendingUpdates = value; }
    inline void SetPendingUpdates(ClusterPendingUpdates&& value) { m_pendingUpdatesHasBeenSet = true; m_pendingUpdates = std::move(value); }
    inline Cluster& WithPendingUpdates(const ClusterPendingUpdates& value) { SetPendingUpdates(value); return *this;}
    inline Cluster& WithPendingUpdates(ClusterPendingUpdates&& value) { SetPendingUpdates(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the multi-Region cluster that this cluster belongs to.</p>
     */
    inline const Aws::String& GetMultiRegionClusterName() const{ return m_multiRegionClusterName; }
    inline bool MultiRegionClusterNameHasBeenSet() const { return m_multiRegionClusterNameHasBeenSet; }
    inline void SetMultiRegionClusterName(const Aws::String& value) { m_multiRegionClusterNameHasBeenSet = true; m_multiRegionClusterName = value; }
    inline void SetMultiRegionClusterName(Aws::String&& value) { m_multiRegionClusterNameHasBeenSet = true; m_multiRegionClusterName = std::move(value); }
    inline void SetMultiRegionClusterName(const char* value) { m_multiRegionClusterNameHasBeenSet = true; m_multiRegionClusterName.assign(value); }
    inline Cluster& WithMultiRegionClusterName(const Aws::String& value) { SetMultiRegionClusterName(value); return *this;}
    inline Cluster& WithMultiRegionClusterName(Aws::String&& value) { SetMultiRegionClusterName(std::move(value)); return *this;}
    inline Cluster& WithMultiRegionClusterName(const char* value) { SetMultiRegionClusterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of shards in the cluster</p>
     */
    inline int GetNumberOfShards() const{ return m_numberOfShards; }
    inline bool NumberOfShardsHasBeenSet() const { return m_numberOfShardsHasBeenSet; }
    inline void SetNumberOfShards(int value) { m_numberOfShardsHasBeenSet = true; m_numberOfShards = value; }
    inline Cluster& WithNumberOfShards(int value) { SetNumberOfShards(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of shards that are members of the cluster.</p>
     */
    inline const Aws::Vector<Shard>& GetShards() const{ return m_shards; }
    inline bool ShardsHasBeenSet() const { return m_shardsHasBeenSet; }
    inline void SetShards(const Aws::Vector<Shard>& value) { m_shardsHasBeenSet = true; m_shards = value; }
    inline void SetShards(Aws::Vector<Shard>&& value) { m_shardsHasBeenSet = true; m_shards = std::move(value); }
    inline Cluster& WithShards(const Aws::Vector<Shard>& value) { SetShards(value); return *this;}
    inline Cluster& WithShards(Aws::Vector<Shard>&& value) { SetShards(std::move(value)); return *this;}
    inline Cluster& AddShards(const Shard& value) { m_shardsHasBeenSet = true; m_shards.push_back(value); return *this; }
    inline Cluster& AddShards(Shard&& value) { m_shardsHasBeenSet = true; m_shards.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates if the cluster has a Multi-AZ configuration (multiaz) or not
     * (singleaz).</p>
     */
    inline const AZStatus& GetAvailabilityMode() const{ return m_availabilityMode; }
    inline bool AvailabilityModeHasBeenSet() const { return m_availabilityModeHasBeenSet; }
    inline void SetAvailabilityMode(const AZStatus& value) { m_availabilityModeHasBeenSet = true; m_availabilityMode = value; }
    inline void SetAvailabilityMode(AZStatus&& value) { m_availabilityModeHasBeenSet = true; m_availabilityMode = std::move(value); }
    inline Cluster& WithAvailabilityMode(const AZStatus& value) { SetAvailabilityMode(value); return *this;}
    inline Cluster& WithAvailabilityMode(AZStatus&& value) { SetAvailabilityMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cluster's configuration endpoint</p>
     */
    inline const Endpoint& GetClusterEndpoint() const{ return m_clusterEndpoint; }
    inline bool ClusterEndpointHasBeenSet() const { return m_clusterEndpointHasBeenSet; }
    inline void SetClusterEndpoint(const Endpoint& value) { m_clusterEndpointHasBeenSet = true; m_clusterEndpoint = value; }
    inline void SetClusterEndpoint(Endpoint&& value) { m_clusterEndpointHasBeenSet = true; m_clusterEndpoint = std::move(value); }
    inline Cluster& WithClusterEndpoint(const Endpoint& value) { SetClusterEndpoint(value); return *this;}
    inline Cluster& WithClusterEndpoint(Endpoint&& value) { SetClusterEndpoint(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cluster's node type</p>
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
     * <p>The name of the engine used by the cluster.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline Cluster& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline Cluster& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline Cluster& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Redis OSS engine version used by the cluster</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline Cluster& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline Cluster& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline Cluster& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Redis OSS engine patch version used by the cluster</p>
     */
    inline const Aws::String& GetEnginePatchVersion() const{ return m_enginePatchVersion; }
    inline bool EnginePatchVersionHasBeenSet() const { return m_enginePatchVersionHasBeenSet; }
    inline void SetEnginePatchVersion(const Aws::String& value) { m_enginePatchVersionHasBeenSet = true; m_enginePatchVersion = value; }
    inline void SetEnginePatchVersion(Aws::String&& value) { m_enginePatchVersionHasBeenSet = true; m_enginePatchVersion = std::move(value); }
    inline void SetEnginePatchVersion(const char* value) { m_enginePatchVersionHasBeenSet = true; m_enginePatchVersion.assign(value); }
    inline Cluster& WithEnginePatchVersion(const Aws::String& value) { SetEnginePatchVersion(value); return *this;}
    inline Cluster& WithEnginePatchVersion(Aws::String&& value) { SetEnginePatchVersion(std::move(value)); return *this;}
    inline Cluster& WithEnginePatchVersion(const char* value) { SetEnginePatchVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the parameter group used by the cluster</p>
     */
    inline const Aws::String& GetParameterGroupName() const{ return m_parameterGroupName; }
    inline bool ParameterGroupNameHasBeenSet() const { return m_parameterGroupNameHasBeenSet; }
    inline void SetParameterGroupName(const Aws::String& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = value; }
    inline void SetParameterGroupName(Aws::String&& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = std::move(value); }
    inline void SetParameterGroupName(const char* value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName.assign(value); }
    inline Cluster& WithParameterGroupName(const Aws::String& value) { SetParameterGroupName(value); return *this;}
    inline Cluster& WithParameterGroupName(Aws::String&& value) { SetParameterGroupName(std::move(value)); return *this;}
    inline Cluster& WithParameterGroupName(const char* value) { SetParameterGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the parameter group used by the cluster, for example 'active'
     * or 'applying'.</p>
     */
    inline const Aws::String& GetParameterGroupStatus() const{ return m_parameterGroupStatus; }
    inline bool ParameterGroupStatusHasBeenSet() const { return m_parameterGroupStatusHasBeenSet; }
    inline void SetParameterGroupStatus(const Aws::String& value) { m_parameterGroupStatusHasBeenSet = true; m_parameterGroupStatus = value; }
    inline void SetParameterGroupStatus(Aws::String&& value) { m_parameterGroupStatusHasBeenSet = true; m_parameterGroupStatus = std::move(value); }
    inline void SetParameterGroupStatus(const char* value) { m_parameterGroupStatusHasBeenSet = true; m_parameterGroupStatus.assign(value); }
    inline Cluster& WithParameterGroupStatus(const Aws::String& value) { SetParameterGroupStatus(value); return *this;}
    inline Cluster& WithParameterGroupStatus(Aws::String&& value) { SetParameterGroupStatus(std::move(value)); return *this;}
    inline Cluster& WithParameterGroupStatus(const char* value) { SetParameterGroupStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of security groups used by the cluster</p>
     */
    inline const Aws::Vector<SecurityGroupMembership>& GetSecurityGroups() const{ return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    inline void SetSecurityGroups(const Aws::Vector<SecurityGroupMembership>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }
    inline void SetSecurityGroups(Aws::Vector<SecurityGroupMembership>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }
    inline Cluster& WithSecurityGroups(const Aws::Vector<SecurityGroupMembership>& value) { SetSecurityGroups(value); return *this;}
    inline Cluster& WithSecurityGroups(Aws::Vector<SecurityGroupMembership>&& value) { SetSecurityGroups(std::move(value)); return *this;}
    inline Cluster& AddSecurityGroups(const SecurityGroupMembership& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    inline Cluster& AddSecurityGroups(SecurityGroupMembership&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the subnet group used by the cluster</p>
     */
    inline const Aws::String& GetSubnetGroupName() const{ return m_subnetGroupName; }
    inline bool SubnetGroupNameHasBeenSet() const { return m_subnetGroupNameHasBeenSet; }
    inline void SetSubnetGroupName(const Aws::String& value) { m_subnetGroupNameHasBeenSet = true; m_subnetGroupName = value; }
    inline void SetSubnetGroupName(Aws::String&& value) { m_subnetGroupNameHasBeenSet = true; m_subnetGroupName = std::move(value); }
    inline void SetSubnetGroupName(const char* value) { m_subnetGroupNameHasBeenSet = true; m_subnetGroupName.assign(value); }
    inline Cluster& WithSubnetGroupName(const Aws::String& value) { SetSubnetGroupName(value); return *this;}
    inline Cluster& WithSubnetGroupName(Aws::String&& value) { SetSubnetGroupName(std::move(value)); return *this;}
    inline Cluster& WithSubnetGroupName(const char* value) { SetSubnetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag to indicate if In-transit encryption is enabled</p>
     */
    inline bool GetTLSEnabled() const{ return m_tLSEnabled; }
    inline bool TLSEnabledHasBeenSet() const { return m_tLSEnabledHasBeenSet; }
    inline void SetTLSEnabled(bool value) { m_tLSEnabledHasBeenSet = true; m_tLSEnabled = value; }
    inline Cluster& WithTLSEnabled(bool value) { SetTLSEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the KMS key used to encrypt the cluster</p>
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
     * <p>The Amazon Resource Name (ARN) of the cluster.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }
    inline Cluster& WithARN(const Aws::String& value) { SetARN(value); return *this;}
    inline Cluster& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}
    inline Cluster& WithARN(const char* value) { SetARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the SNS notification topic</p>
     */
    inline const Aws::String& GetSnsTopicArn() const{ return m_snsTopicArn; }
    inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }
    inline void SetSnsTopicArn(const Aws::String& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = value; }
    inline void SetSnsTopicArn(Aws::String&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::move(value); }
    inline void SetSnsTopicArn(const char* value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn.assign(value); }
    inline Cluster& WithSnsTopicArn(const Aws::String& value) { SetSnsTopicArn(value); return *this;}
    inline Cluster& WithSnsTopicArn(Aws::String&& value) { SetSnsTopicArn(std::move(value)); return *this;}
    inline Cluster& WithSnsTopicArn(const char* value) { SetSnsTopicArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SNS topic must be in Active status to receive notifications</p>
     */
    inline const Aws::String& GetSnsTopicStatus() const{ return m_snsTopicStatus; }
    inline bool SnsTopicStatusHasBeenSet() const { return m_snsTopicStatusHasBeenSet; }
    inline void SetSnsTopicStatus(const Aws::String& value) { m_snsTopicStatusHasBeenSet = true; m_snsTopicStatus = value; }
    inline void SetSnsTopicStatus(Aws::String&& value) { m_snsTopicStatusHasBeenSet = true; m_snsTopicStatus = std::move(value); }
    inline void SetSnsTopicStatus(const char* value) { m_snsTopicStatusHasBeenSet = true; m_snsTopicStatus.assign(value); }
    inline Cluster& WithSnsTopicStatus(const Aws::String& value) { SetSnsTopicStatus(value); return *this;}
    inline Cluster& WithSnsTopicStatus(Aws::String&& value) { SetSnsTopicStatus(std::move(value)); return *this;}
    inline Cluster& WithSnsTopicStatus(const char* value) { SetSnsTopicStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days for which MemoryDB retains automatic snapshots before
     * deleting them. For example, if you set SnapshotRetentionLimit to 5, a snapshot
     * that was taken today is retained for 5 days before being deleted.</p>
     */
    inline int GetSnapshotRetentionLimit() const{ return m_snapshotRetentionLimit; }
    inline bool SnapshotRetentionLimitHasBeenSet() const { return m_snapshotRetentionLimitHasBeenSet; }
    inline void SetSnapshotRetentionLimit(int value) { m_snapshotRetentionLimitHasBeenSet = true; m_snapshotRetentionLimit = value; }
    inline Cluster& WithSnapshotRetentionLimit(int value) { SetSnapshotRetentionLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the weekly time range during which maintenance on the cluster is
     * performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi (24H
     * Clock UTC). The minimum maintenance window is a 60 minute period. </p>
     */
    inline const Aws::String& GetMaintenanceWindow() const{ return m_maintenanceWindow; }
    inline bool MaintenanceWindowHasBeenSet() const { return m_maintenanceWindowHasBeenSet; }
    inline void SetMaintenanceWindow(const Aws::String& value) { m_maintenanceWindowHasBeenSet = true; m_maintenanceWindow = value; }
    inline void SetMaintenanceWindow(Aws::String&& value) { m_maintenanceWindowHasBeenSet = true; m_maintenanceWindow = std::move(value); }
    inline void SetMaintenanceWindow(const char* value) { m_maintenanceWindowHasBeenSet = true; m_maintenanceWindow.assign(value); }
    inline Cluster& WithMaintenanceWindow(const Aws::String& value) { SetMaintenanceWindow(value); return *this;}
    inline Cluster& WithMaintenanceWindow(Aws::String&& value) { SetMaintenanceWindow(std::move(value)); return *this;}
    inline Cluster& WithMaintenanceWindow(const char* value) { SetMaintenanceWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The daily time range (in UTC) during which MemoryDB begins taking a daily
     * snapshot of your shard. Example: 05:00-09:00 If you do not specify this
     * parameter, MemoryDB automatically chooses an appropriate time range.</p>
     */
    inline const Aws::String& GetSnapshotWindow() const{ return m_snapshotWindow; }
    inline bool SnapshotWindowHasBeenSet() const { return m_snapshotWindowHasBeenSet; }
    inline void SetSnapshotWindow(const Aws::String& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = value; }
    inline void SetSnapshotWindow(Aws::String&& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = std::move(value); }
    inline void SetSnapshotWindow(const char* value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow.assign(value); }
    inline Cluster& WithSnapshotWindow(const Aws::String& value) { SetSnapshotWindow(value); return *this;}
    inline Cluster& WithSnapshotWindow(Aws::String&& value) { SetSnapshotWindow(std::move(value)); return *this;}
    inline Cluster& WithSnapshotWindow(const char* value) { SetSnapshotWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Access Control List associated with this cluster.</p>
     */
    inline const Aws::String& GetACLName() const{ return m_aCLName; }
    inline bool ACLNameHasBeenSet() const { return m_aCLNameHasBeenSet; }
    inline void SetACLName(const Aws::String& value) { m_aCLNameHasBeenSet = true; m_aCLName = value; }
    inline void SetACLName(Aws::String&& value) { m_aCLNameHasBeenSet = true; m_aCLName = std::move(value); }
    inline void SetACLName(const char* value) { m_aCLNameHasBeenSet = true; m_aCLName.assign(value); }
    inline Cluster& WithACLName(const Aws::String& value) { SetACLName(value); return *this;}
    inline Cluster& WithACLName(Aws::String&& value) { SetACLName(std::move(value)); return *this;}
    inline Cluster& WithACLName(const char* value) { SetACLName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When set to true, the cluster will automatically receive minor engine version
     * upgrades after launch.</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }
    inline Cluster& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables data tiering. Data tiering is only supported for clusters using the
     * r6gd node type. This parameter must be set when using r6gd nodes. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/memorydb/latest/devguide/data-tiering.html">Data
     * tiering</a>.</p>
     */
    inline const DataTieringStatus& GetDataTiering() const{ return m_dataTiering; }
    inline bool DataTieringHasBeenSet() const { return m_dataTieringHasBeenSet; }
    inline void SetDataTiering(const DataTieringStatus& value) { m_dataTieringHasBeenSet = true; m_dataTiering = value; }
    inline void SetDataTiering(DataTieringStatus&& value) { m_dataTieringHasBeenSet = true; m_dataTiering = std::move(value); }
    inline Cluster& WithDataTiering(const DataTieringStatus& value) { SetDataTiering(value); return *this;}
    inline Cluster& WithDataTiering(DataTieringStatus&& value) { SetDataTiering(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    ClusterPendingUpdates m_pendingUpdates;
    bool m_pendingUpdatesHasBeenSet = false;

    Aws::String m_multiRegionClusterName;
    bool m_multiRegionClusterNameHasBeenSet = false;

    int m_numberOfShards;
    bool m_numberOfShardsHasBeenSet = false;

    Aws::Vector<Shard> m_shards;
    bool m_shardsHasBeenSet = false;

    AZStatus m_availabilityMode;
    bool m_availabilityModeHasBeenSet = false;

    Endpoint m_clusterEndpoint;
    bool m_clusterEndpointHasBeenSet = false;

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_enginePatchVersion;
    bool m_enginePatchVersionHasBeenSet = false;

    Aws::String m_parameterGroupName;
    bool m_parameterGroupNameHasBeenSet = false;

    Aws::String m_parameterGroupStatus;
    bool m_parameterGroupStatusHasBeenSet = false;

    Aws::Vector<SecurityGroupMembership> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    Aws::String m_subnetGroupName;
    bool m_subnetGroupNameHasBeenSet = false;

    bool m_tLSEnabled;
    bool m_tLSEnabledHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    Aws::String m_snsTopicArn;
    bool m_snsTopicArnHasBeenSet = false;

    Aws::String m_snsTopicStatus;
    bool m_snsTopicStatusHasBeenSet = false;

    int m_snapshotRetentionLimit;
    bool m_snapshotRetentionLimitHasBeenSet = false;

    Aws::String m_maintenanceWindow;
    bool m_maintenanceWindowHasBeenSet = false;

    Aws::String m_snapshotWindow;
    bool m_snapshotWindowHasBeenSet = false;

    Aws::String m_aCLName;
    bool m_aCLNameHasBeenSet = false;

    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet = false;

    DataTieringStatus m_dataTiering;
    bool m_dataTieringHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
