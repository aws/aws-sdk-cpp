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
    AWS_MEMORYDB_API CreateMultiRegionClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMultiRegionCluster"; }

    AWS_MEMORYDB_API Aws::String SerializePayload() const override;

    AWS_MEMORYDB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A suffix to be added to the multi-Region cluster name.</p>
     */
    inline const Aws::String& GetMultiRegionClusterNameSuffix() const{ return m_multiRegionClusterNameSuffix; }
    inline bool MultiRegionClusterNameSuffixHasBeenSet() const { return m_multiRegionClusterNameSuffixHasBeenSet; }
    inline void SetMultiRegionClusterNameSuffix(const Aws::String& value) { m_multiRegionClusterNameSuffixHasBeenSet = true; m_multiRegionClusterNameSuffix = value; }
    inline void SetMultiRegionClusterNameSuffix(Aws::String&& value) { m_multiRegionClusterNameSuffixHasBeenSet = true; m_multiRegionClusterNameSuffix = std::move(value); }
    inline void SetMultiRegionClusterNameSuffix(const char* value) { m_multiRegionClusterNameSuffixHasBeenSet = true; m_multiRegionClusterNameSuffix.assign(value); }
    inline CreateMultiRegionClusterRequest& WithMultiRegionClusterNameSuffix(const Aws::String& value) { SetMultiRegionClusterNameSuffix(value); return *this;}
    inline CreateMultiRegionClusterRequest& WithMultiRegionClusterNameSuffix(Aws::String&& value) { SetMultiRegionClusterNameSuffix(std::move(value)); return *this;}
    inline CreateMultiRegionClusterRequest& WithMultiRegionClusterNameSuffix(const char* value) { SetMultiRegionClusterNameSuffix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the multi-Region cluster.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateMultiRegionClusterRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateMultiRegionClusterRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateMultiRegionClusterRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the engine to be used for the multi-Region cluster.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline CreateMultiRegionClusterRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline CreateMultiRegionClusterRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline CreateMultiRegionClusterRequest& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the engine to be used for the multi-Region cluster.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline CreateMultiRegionClusterRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline CreateMultiRegionClusterRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline CreateMultiRegionClusterRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node type to be used for the multi-Region cluster.</p>
     */
    inline const Aws::String& GetNodeType() const{ return m_nodeType; }
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
    inline void SetNodeType(const Aws::String& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }
    inline void SetNodeType(Aws::String&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::move(value); }
    inline void SetNodeType(const char* value) { m_nodeTypeHasBeenSet = true; m_nodeType.assign(value); }
    inline CreateMultiRegionClusterRequest& WithNodeType(const Aws::String& value) { SetNodeType(value); return *this;}
    inline CreateMultiRegionClusterRequest& WithNodeType(Aws::String&& value) { SetNodeType(std::move(value)); return *this;}
    inline CreateMultiRegionClusterRequest& WithNodeType(const char* value) { SetNodeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the multi-Region parameter group to be associated with the
     * cluster.</p>
     */
    inline const Aws::String& GetMultiRegionParameterGroupName() const{ return m_multiRegionParameterGroupName; }
    inline bool MultiRegionParameterGroupNameHasBeenSet() const { return m_multiRegionParameterGroupNameHasBeenSet; }
    inline void SetMultiRegionParameterGroupName(const Aws::String& value) { m_multiRegionParameterGroupNameHasBeenSet = true; m_multiRegionParameterGroupName = value; }
    inline void SetMultiRegionParameterGroupName(Aws::String&& value) { m_multiRegionParameterGroupNameHasBeenSet = true; m_multiRegionParameterGroupName = std::move(value); }
    inline void SetMultiRegionParameterGroupName(const char* value) { m_multiRegionParameterGroupNameHasBeenSet = true; m_multiRegionParameterGroupName.assign(value); }
    inline CreateMultiRegionClusterRequest& WithMultiRegionParameterGroupName(const Aws::String& value) { SetMultiRegionParameterGroupName(value); return *this;}
    inline CreateMultiRegionClusterRequest& WithMultiRegionParameterGroupName(Aws::String&& value) { SetMultiRegionParameterGroupName(std::move(value)); return *this;}
    inline CreateMultiRegionClusterRequest& WithMultiRegionParameterGroupName(const char* value) { SetMultiRegionParameterGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of shards for the multi-Region cluster.</p>
     */
    inline int GetNumShards() const{ return m_numShards; }
    inline bool NumShardsHasBeenSet() const { return m_numShardsHasBeenSet; }
    inline void SetNumShards(int value) { m_numShardsHasBeenSet = true; m_numShards = value; }
    inline CreateMultiRegionClusterRequest& WithNumShards(int value) { SetNumShards(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to enable TLS encryption for the multi-Region cluster.</p>
     */
    inline bool GetTLSEnabled() const{ return m_tLSEnabled; }
    inline bool TLSEnabledHasBeenSet() const { return m_tLSEnabledHasBeenSet; }
    inline void SetTLSEnabled(bool value) { m_tLSEnabledHasBeenSet = true; m_tLSEnabled = value; }
    inline CreateMultiRegionClusterRequest& WithTLSEnabled(bool value) { SetTLSEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags to be applied to the multi-Region cluster.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateMultiRegionClusterRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateMultiRegionClusterRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateMultiRegionClusterRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateMultiRegionClusterRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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

    int m_numShards;
    bool m_numShardsHasBeenSet = false;

    bool m_tLSEnabled;
    bool m_tLSEnabledHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
