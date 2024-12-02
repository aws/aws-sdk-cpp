/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/MemoryDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/memorydb/model/ReplicaConfigurationRequest.h>
#include <aws/memorydb/model/ShardConfigurationRequest.h>
#include <utility>

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

  /**
   */
  class UpdateClusterRequest : public MemoryDBRequest
  {
  public:
    AWS_MEMORYDB_API UpdateClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCluster"; }

    AWS_MEMORYDB_API Aws::String SerializePayload() const override;

    AWS_MEMORYDB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the cluster to update.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }
    inline UpdateClusterRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}
    inline UpdateClusterRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}
    inline UpdateClusterRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the cluster to update.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateClusterRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateClusterRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateClusterRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SecurityGroupIds to update.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }
    inline UpdateClusterRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}
    inline UpdateClusterRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}
    inline UpdateClusterRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    inline UpdateClusterRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }
    inline UpdateClusterRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the weekly time range during which maintenance on the cluster is
     * performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi (24H
     * Clock UTC). The minimum maintenance window is a 60 minute period.</p> <p>Valid
     * values for <code>ddd</code> are:</p> <ul> <li> <p> <code>sun</code> </p> </li>
     * <li> <p> <code>mon</code> </p> </li> <li> <p> <code>tue</code> </p> </li> <li>
     * <p> <code>wed</code> </p> </li> <li> <p> <code>thu</code> </p> </li> <li> <p>
     * <code>fri</code> </p> </li> <li> <p> <code>sat</code> </p> </li> </ul>
     * <p>Example: <code>sun:23:00-mon:01:30</code> </p>
     */
    inline const Aws::String& GetMaintenanceWindow() const{ return m_maintenanceWindow; }
    inline bool MaintenanceWindowHasBeenSet() const { return m_maintenanceWindowHasBeenSet; }
    inline void SetMaintenanceWindow(const Aws::String& value) { m_maintenanceWindowHasBeenSet = true; m_maintenanceWindow = value; }
    inline void SetMaintenanceWindow(Aws::String&& value) { m_maintenanceWindowHasBeenSet = true; m_maintenanceWindow = std::move(value); }
    inline void SetMaintenanceWindow(const char* value) { m_maintenanceWindowHasBeenSet = true; m_maintenanceWindow.assign(value); }
    inline UpdateClusterRequest& WithMaintenanceWindow(const Aws::String& value) { SetMaintenanceWindow(value); return *this;}
    inline UpdateClusterRequest& WithMaintenanceWindow(Aws::String&& value) { SetMaintenanceWindow(std::move(value)); return *this;}
    inline UpdateClusterRequest& WithMaintenanceWindow(const char* value) { SetMaintenanceWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SNS topic ARN to update.</p>
     */
    inline const Aws::String& GetSnsTopicArn() const{ return m_snsTopicArn; }
    inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }
    inline void SetSnsTopicArn(const Aws::String& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = value; }
    inline void SetSnsTopicArn(Aws::String&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::move(value); }
    inline void SetSnsTopicArn(const char* value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn.assign(value); }
    inline UpdateClusterRequest& WithSnsTopicArn(const Aws::String& value) { SetSnsTopicArn(value); return *this;}
    inline UpdateClusterRequest& WithSnsTopicArn(Aws::String&& value) { SetSnsTopicArn(std::move(value)); return *this;}
    inline UpdateClusterRequest& WithSnsTopicArn(const char* value) { SetSnsTopicArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Amazon SNS notification topic. Notifications are sent only
     * if the status is active.</p>
     */
    inline const Aws::String& GetSnsTopicStatus() const{ return m_snsTopicStatus; }
    inline bool SnsTopicStatusHasBeenSet() const { return m_snsTopicStatusHasBeenSet; }
    inline void SetSnsTopicStatus(const Aws::String& value) { m_snsTopicStatusHasBeenSet = true; m_snsTopicStatus = value; }
    inline void SetSnsTopicStatus(Aws::String&& value) { m_snsTopicStatusHasBeenSet = true; m_snsTopicStatus = std::move(value); }
    inline void SetSnsTopicStatus(const char* value) { m_snsTopicStatusHasBeenSet = true; m_snsTopicStatus.assign(value); }
    inline UpdateClusterRequest& WithSnsTopicStatus(const Aws::String& value) { SetSnsTopicStatus(value); return *this;}
    inline UpdateClusterRequest& WithSnsTopicStatus(Aws::String&& value) { SetSnsTopicStatus(std::move(value)); return *this;}
    inline UpdateClusterRequest& WithSnsTopicStatus(const char* value) { SetSnsTopicStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the parameter group to update.</p>
     */
    inline const Aws::String& GetParameterGroupName() const{ return m_parameterGroupName; }
    inline bool ParameterGroupNameHasBeenSet() const { return m_parameterGroupNameHasBeenSet; }
    inline void SetParameterGroupName(const Aws::String& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = value; }
    inline void SetParameterGroupName(Aws::String&& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = std::move(value); }
    inline void SetParameterGroupName(const char* value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName.assign(value); }
    inline UpdateClusterRequest& WithParameterGroupName(const Aws::String& value) { SetParameterGroupName(value); return *this;}
    inline UpdateClusterRequest& WithParameterGroupName(Aws::String&& value) { SetParameterGroupName(std::move(value)); return *this;}
    inline UpdateClusterRequest& WithParameterGroupName(const char* value) { SetParameterGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The daily time range (in UTC) during which MemoryDB begins taking a daily
     * snapshot of your cluster.</p>
     */
    inline const Aws::String& GetSnapshotWindow() const{ return m_snapshotWindow; }
    inline bool SnapshotWindowHasBeenSet() const { return m_snapshotWindowHasBeenSet; }
    inline void SetSnapshotWindow(const Aws::String& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = value; }
    inline void SetSnapshotWindow(Aws::String&& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = std::move(value); }
    inline void SetSnapshotWindow(const char* value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow.assign(value); }
    inline UpdateClusterRequest& WithSnapshotWindow(const Aws::String& value) { SetSnapshotWindow(value); return *this;}
    inline UpdateClusterRequest& WithSnapshotWindow(Aws::String&& value) { SetSnapshotWindow(std::move(value)); return *this;}
    inline UpdateClusterRequest& WithSnapshotWindow(const char* value) { SetSnapshotWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days for which MemoryDB retains automatic cluster snapshots
     * before deleting them. For example, if you set SnapshotRetentionLimit to 5, a
     * snapshot that was taken today is retained for 5 days before being deleted.</p>
     */
    inline int GetSnapshotRetentionLimit() const{ return m_snapshotRetentionLimit; }
    inline bool SnapshotRetentionLimitHasBeenSet() const { return m_snapshotRetentionLimitHasBeenSet; }
    inline void SetSnapshotRetentionLimit(int value) { m_snapshotRetentionLimitHasBeenSet = true; m_snapshotRetentionLimit = value; }
    inline UpdateClusterRequest& WithSnapshotRetentionLimit(int value) { SetSnapshotRetentionLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A valid node type that you want to scale this cluster up or down to.</p>
     */
    inline const Aws::String& GetNodeType() const{ return m_nodeType; }
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
    inline void SetNodeType(const Aws::String& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }
    inline void SetNodeType(Aws::String&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::move(value); }
    inline void SetNodeType(const char* value) { m_nodeTypeHasBeenSet = true; m_nodeType.assign(value); }
    inline UpdateClusterRequest& WithNodeType(const Aws::String& value) { SetNodeType(value); return *this;}
    inline UpdateClusterRequest& WithNodeType(Aws::String&& value) { SetNodeType(std::move(value)); return *this;}
    inline UpdateClusterRequest& WithNodeType(const char* value) { SetNodeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the engine to be used for the cluster.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline UpdateClusterRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline UpdateClusterRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline UpdateClusterRequest& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upgraded version of the engine to be run on the nodes. You can upgrade to
     * a newer engine version, but you cannot downgrade to an earlier engine version.
     * If you want to use an earlier engine version, you must delete the existing
     * cluster and create it anew with the earlier engine version.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline UpdateClusterRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline UpdateClusterRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline UpdateClusterRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of replicas that will reside in each shard.</p>
     */
    inline const ReplicaConfigurationRequest& GetReplicaConfiguration() const{ return m_replicaConfiguration; }
    inline bool ReplicaConfigurationHasBeenSet() const { return m_replicaConfigurationHasBeenSet; }
    inline void SetReplicaConfiguration(const ReplicaConfigurationRequest& value) { m_replicaConfigurationHasBeenSet = true; m_replicaConfiguration = value; }
    inline void SetReplicaConfiguration(ReplicaConfigurationRequest&& value) { m_replicaConfigurationHasBeenSet = true; m_replicaConfiguration = std::move(value); }
    inline UpdateClusterRequest& WithReplicaConfiguration(const ReplicaConfigurationRequest& value) { SetReplicaConfiguration(value); return *this;}
    inline UpdateClusterRequest& WithReplicaConfiguration(ReplicaConfigurationRequest&& value) { SetReplicaConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of shards in the cluster.</p>
     */
    inline const ShardConfigurationRequest& GetShardConfiguration() const{ return m_shardConfiguration; }
    inline bool ShardConfigurationHasBeenSet() const { return m_shardConfigurationHasBeenSet; }
    inline void SetShardConfiguration(const ShardConfigurationRequest& value) { m_shardConfigurationHasBeenSet = true; m_shardConfiguration = value; }
    inline void SetShardConfiguration(ShardConfigurationRequest&& value) { m_shardConfigurationHasBeenSet = true; m_shardConfiguration = std::move(value); }
    inline UpdateClusterRequest& WithShardConfiguration(const ShardConfigurationRequest& value) { SetShardConfiguration(value); return *this;}
    inline UpdateClusterRequest& WithShardConfiguration(ShardConfigurationRequest&& value) { SetShardConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Access Control List that is associated with the cluster.</p>
     */
    inline const Aws::String& GetACLName() const{ return m_aCLName; }
    inline bool ACLNameHasBeenSet() const { return m_aCLNameHasBeenSet; }
    inline void SetACLName(const Aws::String& value) { m_aCLNameHasBeenSet = true; m_aCLName = value; }
    inline void SetACLName(Aws::String&& value) { m_aCLNameHasBeenSet = true; m_aCLName = std::move(value); }
    inline void SetACLName(const char* value) { m_aCLNameHasBeenSet = true; m_aCLName.assign(value); }
    inline UpdateClusterRequest& WithACLName(const Aws::String& value) { SetACLName(value); return *this;}
    inline UpdateClusterRequest& WithACLName(Aws::String&& value) { SetACLName(std::move(value)); return *this;}
    inline UpdateClusterRequest& WithACLName(const char* value) { SetACLName(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::String m_maintenanceWindow;
    bool m_maintenanceWindowHasBeenSet = false;

    Aws::String m_snsTopicArn;
    bool m_snsTopicArnHasBeenSet = false;

    Aws::String m_snsTopicStatus;
    bool m_snsTopicStatusHasBeenSet = false;

    Aws::String m_parameterGroupName;
    bool m_parameterGroupNameHasBeenSet = false;

    Aws::String m_snapshotWindow;
    bool m_snapshotWindowHasBeenSet = false;

    int m_snapshotRetentionLimit;
    bool m_snapshotRetentionLimitHasBeenSet = false;

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    ReplicaConfigurationRequest m_replicaConfiguration;
    bool m_replicaConfigurationHasBeenSet = false;

    ShardConfigurationRequest m_shardConfiguration;
    bool m_shardConfigurationHasBeenSet = false;

    Aws::String m_aCLName;
    bool m_aCLNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
