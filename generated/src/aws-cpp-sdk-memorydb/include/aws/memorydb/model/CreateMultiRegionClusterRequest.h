/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/MemoryDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/memorydb/model/Tag.h>
#include <utility>

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

  /**
   */
  class CreateMultiRegionClusterRequest : public MemoryDBRequest
  {
  public:
    AWS_MEMORYDB_API CreateMultiRegionClusterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMultiRegionCluster"; }

    AWS_MEMORYDB_API Aws::String SerializePayload() const override;

    AWS_MEMORYDB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A suffix to be added to the Multi-Region cluster name. Amazon MemoryDB
     * automatically applies a prefix to the Multi-Region cluster Name when it is
     * created. Each Amazon Region has its own prefix. For instance, a Multi-Region
     * cluster Name created in the US-West-1 region will begin with "virxk", along with
     * the suffix name you provide. The suffix guarantees uniqueness of the
     * Multi-Region cluster name across multiple regions.</p>
     */
    inline const Aws::String& GetMultiRegionClusterNameSuffix() const { return m_multiRegionClusterNameSuffix; }
    inline bool MultiRegionClusterNameSuffixHasBeenSet() const { return m_multiRegionClusterNameSuffixHasBeenSet; }
    template<typename MultiRegionClusterNameSuffixT = Aws::String>
    void SetMultiRegionClusterNameSuffix(MultiRegionClusterNameSuffixT&& value) { m_multiRegionClusterNameSuffixHasBeenSet = true; m_multiRegionClusterNameSuffix = std::forward<MultiRegionClusterNameSuffixT>(value); }
    template<typename MultiRegionClusterNameSuffixT = Aws::String>
    CreateMultiRegionClusterRequest& WithMultiRegionClusterNameSuffix(MultiRegionClusterNameSuffixT&& value) { SetMultiRegionClusterNameSuffix(std::forward<MultiRegionClusterNameSuffixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the multi-Region cluster.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateMultiRegionClusterRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the engine to be used for the multi-Region cluster.</p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    CreateMultiRegionClusterRequest& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the engine to be used for the multi-Region cluster.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    CreateMultiRegionClusterRequest& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node type to be used for the multi-Region cluster.</p>
     */
    inline const Aws::String& GetNodeType() const { return m_nodeType; }
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
    template<typename NodeTypeT = Aws::String>
    void SetNodeType(NodeTypeT&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::forward<NodeTypeT>(value); }
    template<typename NodeTypeT = Aws::String>
    CreateMultiRegionClusterRequest& WithNodeType(NodeTypeT&& value) { SetNodeType(std::forward<NodeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the multi-Region parameter group to be associated with the
     * cluster.</p>
     */
    inline const Aws::String& GetMultiRegionParameterGroupName() const { return m_multiRegionParameterGroupName; }
    inline bool MultiRegionParameterGroupNameHasBeenSet() const { return m_multiRegionParameterGroupNameHasBeenSet; }
    template<typename MultiRegionParameterGroupNameT = Aws::String>
    void SetMultiRegionParameterGroupName(MultiRegionParameterGroupNameT&& value) { m_multiRegionParameterGroupNameHasBeenSet = true; m_multiRegionParameterGroupName = std::forward<MultiRegionParameterGroupNameT>(value); }
    template<typename MultiRegionParameterGroupNameT = Aws::String>
    CreateMultiRegionClusterRequest& WithMultiRegionParameterGroupName(MultiRegionParameterGroupNameT&& value) { SetMultiRegionParameterGroupName(std::forward<MultiRegionParameterGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of shards for the multi-Region cluster.</p>
     */
    inline int GetNumShards() const { return m_numShards; }
    inline bool NumShardsHasBeenSet() const { return m_numShardsHasBeenSet; }
    inline void SetNumShards(int value) { m_numShardsHasBeenSet = true; m_numShards = value; }
    inline CreateMultiRegionClusterRequest& WithNumShards(int value) { SetNumShards(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to enable TLS encryption for the multi-Region cluster.</p>
     */
    inline bool GetTLSEnabled() const { return m_tLSEnabled; }
    inline bool TLSEnabledHasBeenSet() const { return m_tLSEnabledHasBeenSet; }
    inline void SetTLSEnabled(bool value) { m_tLSEnabledHasBeenSet = true; m_tLSEnabled = value; }
    inline CreateMultiRegionClusterRequest& WithTLSEnabled(bool value) { SetTLSEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags to be applied to the multi-Region cluster.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateMultiRegionClusterRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateMultiRegionClusterRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_multiRegionClusterNameSuffix;
    bool m_multiRegionClusterNameSuffixHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet = false;

    Aws::String m_multiRegionParameterGroupName;
    bool m_multiRegionParameterGroupNameHasBeenSet = false;

    int m_numShards{0};
    bool m_numShardsHasBeenSet = false;

    bool m_tLSEnabled{false};
    bool m_tLSEnabledHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
