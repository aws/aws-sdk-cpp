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
    AWS_MEMORYDB_API UpdateMultiRegionClusterRequest();

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
    inline const Aws::String& GetMultiRegionClusterName() const{ return m_multiRegionClusterName; }
    inline bool MultiRegionClusterNameHasBeenSet() const { return m_multiRegionClusterNameHasBeenSet; }
    inline void SetMultiRegionClusterName(const Aws::String& value) { m_multiRegionClusterNameHasBeenSet = true; m_multiRegionClusterName = value; }
    inline void SetMultiRegionClusterName(Aws::String&& value) { m_multiRegionClusterNameHasBeenSet = true; m_multiRegionClusterName = std::move(value); }
    inline void SetMultiRegionClusterName(const char* value) { m_multiRegionClusterNameHasBeenSet = true; m_multiRegionClusterName.assign(value); }
    inline UpdateMultiRegionClusterRequest& WithMultiRegionClusterName(const Aws::String& value) { SetMultiRegionClusterName(value); return *this;}
    inline UpdateMultiRegionClusterRequest& WithMultiRegionClusterName(Aws::String&& value) { SetMultiRegionClusterName(std::move(value)); return *this;}
    inline UpdateMultiRegionClusterRequest& WithMultiRegionClusterName(const char* value) { SetMultiRegionClusterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new node type to be used for the multi-Region cluster.</p>
     */
    inline const Aws::String& GetNodeType() const{ return m_nodeType; }
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
    inline void SetNodeType(const Aws::String& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }
    inline void SetNodeType(Aws::String&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::move(value); }
    inline void SetNodeType(const char* value) { m_nodeTypeHasBeenSet = true; m_nodeType.assign(value); }
    inline UpdateMultiRegionClusterRequest& WithNodeType(const Aws::String& value) { SetNodeType(value); return *this;}
    inline UpdateMultiRegionClusterRequest& WithNodeType(Aws::String&& value) { SetNodeType(std::move(value)); return *this;}
    inline UpdateMultiRegionClusterRequest& WithNodeType(const char* value) { SetNodeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new description for the multi-Region cluster.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateMultiRegionClusterRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateMultiRegionClusterRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateMultiRegionClusterRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new engine version to be used for the multi-Region cluster.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline UpdateMultiRegionClusterRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline UpdateMultiRegionClusterRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline UpdateMultiRegionClusterRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const ShardConfigurationRequest& GetShardConfiguration() const{ return m_shardConfiguration; }
    inline bool ShardConfigurationHasBeenSet() const { return m_shardConfigurationHasBeenSet; }
    inline void SetShardConfiguration(const ShardConfigurationRequest& value) { m_shardConfigurationHasBeenSet = true; m_shardConfiguration = value; }
    inline void SetShardConfiguration(ShardConfigurationRequest&& value) { m_shardConfigurationHasBeenSet = true; m_shardConfiguration = std::move(value); }
    inline UpdateMultiRegionClusterRequest& WithShardConfiguration(const ShardConfigurationRequest& value) { SetShardConfiguration(value); return *this;}
    inline UpdateMultiRegionClusterRequest& WithShardConfiguration(ShardConfigurationRequest&& value) { SetShardConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new multi-Region parameter group to be associated with the cluster.</p>
     */
    inline const Aws::String& GetMultiRegionParameterGroupName() const{ return m_multiRegionParameterGroupName; }
    inline bool MultiRegionParameterGroupNameHasBeenSet() const { return m_multiRegionParameterGroupNameHasBeenSet; }
    inline void SetMultiRegionParameterGroupName(const Aws::String& value) { m_multiRegionParameterGroupNameHasBeenSet = true; m_multiRegionParameterGroupName = value; }
    inline void SetMultiRegionParameterGroupName(Aws::String&& value) { m_multiRegionParameterGroupNameHasBeenSet = true; m_multiRegionParameterGroupName = std::move(value); }
    inline void SetMultiRegionParameterGroupName(const char* value) { m_multiRegionParameterGroupNameHasBeenSet = true; m_multiRegionParameterGroupName.assign(value); }
    inline UpdateMultiRegionClusterRequest& WithMultiRegionParameterGroupName(const Aws::String& value) { SetMultiRegionParameterGroupName(value); return *this;}
    inline UpdateMultiRegionClusterRequest& WithMultiRegionParameterGroupName(Aws::String&& value) { SetMultiRegionParameterGroupName(std::move(value)); return *this;}
    inline UpdateMultiRegionClusterRequest& WithMultiRegionParameterGroupName(const char* value) { SetMultiRegionParameterGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to force the update even if it may cause data loss.</p>
     */
    inline const UpdateStrategy& GetUpdateStrategy() const{ return m_updateStrategy; }
    inline bool UpdateStrategyHasBeenSet() const { return m_updateStrategyHasBeenSet; }
    inline void SetUpdateStrategy(const UpdateStrategy& value) { m_updateStrategyHasBeenSet = true; m_updateStrategy = value; }
    inline void SetUpdateStrategy(UpdateStrategy&& value) { m_updateStrategyHasBeenSet = true; m_updateStrategy = std::move(value); }
    inline UpdateMultiRegionClusterRequest& WithUpdateStrategy(const UpdateStrategy& value) { SetUpdateStrategy(value); return *this;}
    inline UpdateMultiRegionClusterRequest& WithUpdateStrategy(UpdateStrategy&& value) { SetUpdateStrategy(std::move(value)); return *this;}
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

    UpdateStrategy m_updateStrategy;
    bool m_updateStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
