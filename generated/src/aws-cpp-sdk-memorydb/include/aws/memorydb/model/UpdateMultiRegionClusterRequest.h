/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/MemoryDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/memorydb/model/ShardConfigurationRequest.h>
#include <aws/memorydb/model/UpdateStrategy.h>
#include <utility>

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

  /**
   */
  class UpdateMultiRegionClusterRequest : public MemoryDBRequest
  {
  public:
    AWS_MEMORYDB_API UpdateMultiRegionClusterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMultiRegionCluster"; }

    AWS_MEMORYDB_API Aws::String SerializePayload() const override;

    AWS_MEMORYDB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the multi-Region cluster to be updated.</p>
     */
    inline const Aws::String& GetMultiRegionClusterName() const { return m_multiRegionClusterName; }
    inline bool MultiRegionClusterNameHasBeenSet() const { return m_multiRegionClusterNameHasBeenSet; }
    template<typename MultiRegionClusterNameT = Aws::String>
    void SetMultiRegionClusterName(MultiRegionClusterNameT&& value) { m_multiRegionClusterNameHasBeenSet = true; m_multiRegionClusterName = std::forward<MultiRegionClusterNameT>(value); }
    template<typename MultiRegionClusterNameT = Aws::String>
    UpdateMultiRegionClusterRequest& WithMultiRegionClusterName(MultiRegionClusterNameT&& value) { SetMultiRegionClusterName(std::forward<MultiRegionClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new node type to be used for the multi-Region cluster.</p>
     */
    inline const Aws::String& GetNodeType() const { return m_nodeType; }
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
    template<typename NodeTypeT = Aws::String>
    void SetNodeType(NodeTypeT&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::forward<NodeTypeT>(value); }
    template<typename NodeTypeT = Aws::String>
    UpdateMultiRegionClusterRequest& WithNodeType(NodeTypeT&& value) { SetNodeType(std::forward<NodeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new description for the multi-Region cluster.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateMultiRegionClusterRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new engine version to be used for the multi-Region cluster.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    UpdateMultiRegionClusterRequest& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ShardConfigurationRequest& GetShardConfiguration() const { return m_shardConfiguration; }
    inline bool ShardConfigurationHasBeenSet() const { return m_shardConfigurationHasBeenSet; }
    template<typename ShardConfigurationT = ShardConfigurationRequest>
    void SetShardConfiguration(ShardConfigurationT&& value) { m_shardConfigurationHasBeenSet = true; m_shardConfiguration = std::forward<ShardConfigurationT>(value); }
    template<typename ShardConfigurationT = ShardConfigurationRequest>
    UpdateMultiRegionClusterRequest& WithShardConfiguration(ShardConfigurationT&& value) { SetShardConfiguration(std::forward<ShardConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new multi-Region parameter group to be associated with the cluster.</p>
     */
    inline const Aws::String& GetMultiRegionParameterGroupName() const { return m_multiRegionParameterGroupName; }
    inline bool MultiRegionParameterGroupNameHasBeenSet() const { return m_multiRegionParameterGroupNameHasBeenSet; }
    template<typename MultiRegionParameterGroupNameT = Aws::String>
    void SetMultiRegionParameterGroupName(MultiRegionParameterGroupNameT&& value) { m_multiRegionParameterGroupNameHasBeenSet = true; m_multiRegionParameterGroupName = std::forward<MultiRegionParameterGroupNameT>(value); }
    template<typename MultiRegionParameterGroupNameT = Aws::String>
    UpdateMultiRegionClusterRequest& WithMultiRegionParameterGroupName(MultiRegionParameterGroupNameT&& value) { SetMultiRegionParameterGroupName(std::forward<MultiRegionParameterGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The strategy to use for the update operation. Supported values are
     * "coordinated" or "uncoordinated".</p>
     */
    inline UpdateStrategy GetUpdateStrategy() const { return m_updateStrategy; }
    inline bool UpdateStrategyHasBeenSet() const { return m_updateStrategyHasBeenSet; }
    inline void SetUpdateStrategy(UpdateStrategy value) { m_updateStrategyHasBeenSet = true; m_updateStrategy = value; }
    inline UpdateMultiRegionClusterRequest& WithUpdateStrategy(UpdateStrategy value) { SetUpdateStrategy(value); return *this;}
    ///@}
  private:

    Aws::String m_multiRegionClusterName;
    bool m_multiRegionClusterNameHasBeenSet = false;

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    ShardConfigurationRequest m_shardConfiguration;
    bool m_shardConfigurationHasBeenSet = false;

    Aws::String m_multiRegionParameterGroupName;
    bool m_multiRegionParameterGroupNameHasBeenSet = false;

    UpdateStrategy m_updateStrategy{UpdateStrategy::NOT_SET};
    bool m_updateStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
