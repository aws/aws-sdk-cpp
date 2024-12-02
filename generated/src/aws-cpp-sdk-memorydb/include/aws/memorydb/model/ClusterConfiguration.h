/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/memorydb/model/ShardDetail.h>
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
   * <p>A list of cluster configuration options. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/ClusterConfiguration">AWS
   * API Reference</a></p>
   */
  class ClusterConfiguration
  {
  public:
    AWS_MEMORYDB_API ClusterConfiguration();
    AWS_MEMORYDB_API ClusterConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API ClusterConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the cluster</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ClusterConfiguration& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ClusterConfiguration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ClusterConfiguration& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the cluster configuration</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ClusterConfiguration& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ClusterConfiguration& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ClusterConfiguration& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node type used for the cluster</p>
     */
    inline const Aws::String& GetNodeType() const{ return m_nodeType; }
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
    inline void SetNodeType(const Aws::String& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }
    inline void SetNodeType(Aws::String&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::move(value); }
    inline void SetNodeType(const char* value) { m_nodeTypeHasBeenSet = true; m_nodeType.assign(value); }
    inline ClusterConfiguration& WithNodeType(const Aws::String& value) { SetNodeType(value); return *this;}
    inline ClusterConfiguration& WithNodeType(Aws::String&& value) { SetNodeType(std::move(value)); return *this;}
    inline ClusterConfiguration& WithNodeType(const char* value) { SetNodeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the engine used by the cluster configuration.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline ClusterConfiguration& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline ClusterConfiguration& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline ClusterConfiguration& WithEngine(const char* value) { SetEngine(value); return *this;}
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
    inline ClusterConfiguration& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline ClusterConfiguration& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline ClusterConfiguration& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specified maintenance window for the cluster</p>
     */
    inline const Aws::String& GetMaintenanceWindow() const{ return m_maintenanceWindow; }
    inline bool MaintenanceWindowHasBeenSet() const { return m_maintenanceWindowHasBeenSet; }
    inline void SetMaintenanceWindow(const Aws::String& value) { m_maintenanceWindowHasBeenSet = true; m_maintenanceWindow = value; }
    inline void SetMaintenanceWindow(Aws::String&& value) { m_maintenanceWindowHasBeenSet = true; m_maintenanceWindow = std::move(value); }
    inline void SetMaintenanceWindow(const char* value) { m_maintenanceWindowHasBeenSet = true; m_maintenanceWindow.assign(value); }
    inline ClusterConfiguration& WithMaintenanceWindow(const Aws::String& value) { SetMaintenanceWindow(value); return *this;}
    inline ClusterConfiguration& WithMaintenanceWindow(Aws::String&& value) { SetMaintenanceWindow(std::move(value)); return *this;}
    inline ClusterConfiguration& WithMaintenanceWindow(const char* value) { SetMaintenanceWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the SNS notification topic for the
     * cluster</p>
     */
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }
    inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }
    inline void SetTopicArn(const Aws::String& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }
    inline void SetTopicArn(Aws::String&& value) { m_topicArnHasBeenSet = true; m_topicArn = std::move(value); }
    inline void SetTopicArn(const char* value) { m_topicArnHasBeenSet = true; m_topicArn.assign(value); }
    inline ClusterConfiguration& WithTopicArn(const Aws::String& value) { SetTopicArn(value); return *this;}
    inline ClusterConfiguration& WithTopicArn(Aws::String&& value) { SetTopicArn(std::move(value)); return *this;}
    inline ClusterConfiguration& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port used by the cluster</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline ClusterConfiguration& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of parameter group used by the cluster</p>
     */
    inline const Aws::String& GetParameterGroupName() const{ return m_parameterGroupName; }
    inline bool ParameterGroupNameHasBeenSet() const { return m_parameterGroupNameHasBeenSet; }
    inline void SetParameterGroupName(const Aws::String& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = value; }
    inline void SetParameterGroupName(Aws::String&& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = std::move(value); }
    inline void SetParameterGroupName(const char* value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName.assign(value); }
    inline ClusterConfiguration& WithParameterGroupName(const Aws::String& value) { SetParameterGroupName(value); return *this;}
    inline ClusterConfiguration& WithParameterGroupName(Aws::String&& value) { SetParameterGroupName(std::move(value)); return *this;}
    inline ClusterConfiguration& WithParameterGroupName(const char* value) { SetParameterGroupName(value); return *this;}
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
    inline ClusterConfiguration& WithSubnetGroupName(const Aws::String& value) { SetSubnetGroupName(value); return *this;}
    inline ClusterConfiguration& WithSubnetGroupName(Aws::String&& value) { SetSubnetGroupName(std::move(value)); return *this;}
    inline ClusterConfiguration& WithSubnetGroupName(const char* value) { SetSubnetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC the cluster belongs to</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline ClusterConfiguration& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline ClusterConfiguration& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline ClusterConfiguration& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The snapshot retention limit set by the cluster</p>
     */
    inline int GetSnapshotRetentionLimit() const{ return m_snapshotRetentionLimit; }
    inline bool SnapshotRetentionLimitHasBeenSet() const { return m_snapshotRetentionLimitHasBeenSet; }
    inline void SetSnapshotRetentionLimit(int value) { m_snapshotRetentionLimitHasBeenSet = true; m_snapshotRetentionLimit = value; }
    inline ClusterConfiguration& WithSnapshotRetentionLimit(int value) { SetSnapshotRetentionLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The snapshot window set by the cluster</p>
     */
    inline const Aws::String& GetSnapshotWindow() const{ return m_snapshotWindow; }
    inline bool SnapshotWindowHasBeenSet() const { return m_snapshotWindowHasBeenSet; }
    inline void SetSnapshotWindow(const Aws::String& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = value; }
    inline void SetSnapshotWindow(Aws::String&& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = std::move(value); }
    inline void SetSnapshotWindow(const char* value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow.assign(value); }
    inline ClusterConfiguration& WithSnapshotWindow(const Aws::String& value) { SetSnapshotWindow(value); return *this;}
    inline ClusterConfiguration& WithSnapshotWindow(Aws::String&& value) { SetSnapshotWindow(std::move(value)); return *this;}
    inline ClusterConfiguration& WithSnapshotWindow(const char* value) { SetSnapshotWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of shards in the cluster</p>
     */
    inline int GetNumShards() const{ return m_numShards; }
    inline bool NumShardsHasBeenSet() const { return m_numShardsHasBeenSet; }
    inline void SetNumShards(int value) { m_numShardsHasBeenSet = true; m_numShards = value; }
    inline ClusterConfiguration& WithNumShards(int value) { SetNumShards(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of shards in the cluster</p>
     */
    inline const Aws::Vector<ShardDetail>& GetShards() const{ return m_shards; }
    inline bool ShardsHasBeenSet() const { return m_shardsHasBeenSet; }
    inline void SetShards(const Aws::Vector<ShardDetail>& value) { m_shardsHasBeenSet = true; m_shards = value; }
    inline void SetShards(Aws::Vector<ShardDetail>&& value) { m_shardsHasBeenSet = true; m_shards = std::move(value); }
    inline ClusterConfiguration& WithShards(const Aws::Vector<ShardDetail>& value) { SetShards(value); return *this;}
    inline ClusterConfiguration& WithShards(Aws::Vector<ShardDetail>&& value) { SetShards(std::move(value)); return *this;}
    inline ClusterConfiguration& AddShards(const ShardDetail& value) { m_shardsHasBeenSet = true; m_shards.push_back(value); return *this; }
    inline ClusterConfiguration& AddShards(ShardDetail&& value) { m_shardsHasBeenSet = true; m_shards.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the multi-Region parameter group associated with the cluster
     * configuration.</p>
     */
    inline const Aws::String& GetMultiRegionParameterGroupName() const{ return m_multiRegionParameterGroupName; }
    inline bool MultiRegionParameterGroupNameHasBeenSet() const { return m_multiRegionParameterGroupNameHasBeenSet; }
    inline void SetMultiRegionParameterGroupName(const Aws::String& value) { m_multiRegionParameterGroupNameHasBeenSet = true; m_multiRegionParameterGroupName = value; }
    inline void SetMultiRegionParameterGroupName(Aws::String&& value) { m_multiRegionParameterGroupNameHasBeenSet = true; m_multiRegionParameterGroupName = std::move(value); }
    inline void SetMultiRegionParameterGroupName(const char* value) { m_multiRegionParameterGroupNameHasBeenSet = true; m_multiRegionParameterGroupName.assign(value); }
    inline ClusterConfiguration& WithMultiRegionParameterGroupName(const Aws::String& value) { SetMultiRegionParameterGroupName(value); return *this;}
    inline ClusterConfiguration& WithMultiRegionParameterGroupName(Aws::String&& value) { SetMultiRegionParameterGroupName(std::move(value)); return *this;}
    inline ClusterConfiguration& WithMultiRegionParameterGroupName(const char* value) { SetMultiRegionParameterGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the multi-Region cluster associated with the cluster
     * configuration.</p>
     */
    inline const Aws::String& GetMultiRegionClusterName() const{ return m_multiRegionClusterName; }
    inline bool MultiRegionClusterNameHasBeenSet() const { return m_multiRegionClusterNameHasBeenSet; }
    inline void SetMultiRegionClusterName(const Aws::String& value) { m_multiRegionClusterNameHasBeenSet = true; m_multiRegionClusterName = value; }
    inline void SetMultiRegionClusterName(Aws::String&& value) { m_multiRegionClusterNameHasBeenSet = true; m_multiRegionClusterName = std::move(value); }
    inline void SetMultiRegionClusterName(const char* value) { m_multiRegionClusterNameHasBeenSet = true; m_multiRegionClusterName.assign(value); }
    inline ClusterConfiguration& WithMultiRegionClusterName(const Aws::String& value) { SetMultiRegionClusterName(value); return *this;}
    inline ClusterConfiguration& WithMultiRegionClusterName(Aws::String&& value) { SetMultiRegionClusterName(std::move(value)); return *this;}
    inline ClusterConfiguration& WithMultiRegionClusterName(const char* value) { SetMultiRegionClusterName(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_maintenanceWindow;
    bool m_maintenanceWindowHasBeenSet = false;

    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_parameterGroupName;
    bool m_parameterGroupNameHasBeenSet = false;

    Aws::String m_subnetGroupName;
    bool m_subnetGroupNameHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    int m_snapshotRetentionLimit;
    bool m_snapshotRetentionLimitHasBeenSet = false;

    Aws::String m_snapshotWindow;
    bool m_snapshotWindowHasBeenSet = false;

    int m_numShards;
    bool m_numShardsHasBeenSet = false;

    Aws::Vector<ShardDetail> m_shards;
    bool m_shardsHasBeenSet = false;

    Aws::String m_multiRegionParameterGroupName;
    bool m_multiRegionParameterGroupNameHasBeenSet = false;

    Aws::String m_multiRegionClusterName;
    bool m_multiRegionClusterNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
