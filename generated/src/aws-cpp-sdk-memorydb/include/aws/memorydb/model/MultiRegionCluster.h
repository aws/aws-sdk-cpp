/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/memorydb/model/RegionalCluster.h>
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
   * <p>Represents a multi-Region cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/MultiRegionCluster">AWS
   * API Reference</a></p>
   */
  class MultiRegionCluster
  {
  public:
    AWS_MEMORYDB_API MultiRegionCluster() = default;
    AWS_MEMORYDB_API MultiRegionCluster(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API MultiRegionCluster& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the multi-Region cluster.</p>
     */
    inline const Aws::String& GetMultiRegionClusterName() const { return m_multiRegionClusterName; }
    inline bool MultiRegionClusterNameHasBeenSet() const { return m_multiRegionClusterNameHasBeenSet; }
    template<typename MultiRegionClusterNameT = Aws::String>
    void SetMultiRegionClusterName(MultiRegionClusterNameT&& value) { m_multiRegionClusterNameHasBeenSet = true; m_multiRegionClusterName = std::forward<MultiRegionClusterNameT>(value); }
    template<typename MultiRegionClusterNameT = Aws::String>
    MultiRegionCluster& WithMultiRegionClusterName(MultiRegionClusterNameT&& value) { SetMultiRegionClusterName(std::forward<MultiRegionClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the multi-Region cluster.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    MultiRegionCluster& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the multi-Region cluster.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    MultiRegionCluster& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node type used by the multi-Region cluster.</p>
     */
    inline const Aws::String& GetNodeType() const { return m_nodeType; }
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
    template<typename NodeTypeT = Aws::String>
    void SetNodeType(NodeTypeT&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::forward<NodeTypeT>(value); }
    template<typename NodeTypeT = Aws::String>
    MultiRegionCluster& WithNodeType(NodeTypeT&& value) { SetNodeType(std::forward<NodeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the engine used by the multi-Region cluster.</p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    MultiRegionCluster& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the engine used by the multi-Region cluster.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    MultiRegionCluster& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of shards in the multi-Region cluster.</p>
     */
    inline int GetNumberOfShards() const { return m_numberOfShards; }
    inline bool NumberOfShardsHasBeenSet() const { return m_numberOfShardsHasBeenSet; }
    inline void SetNumberOfShards(int value) { m_numberOfShardsHasBeenSet = true; m_numberOfShards = value; }
    inline MultiRegionCluster& WithNumberOfShards(int value) { SetNumberOfShards(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The clusters in this multi-Region cluster.</p>
     */
    inline const Aws::Vector<RegionalCluster>& GetClusters() const { return m_clusters; }
    inline bool ClustersHasBeenSet() const { return m_clustersHasBeenSet; }
    template<typename ClustersT = Aws::Vector<RegionalCluster>>
    void SetClusters(ClustersT&& value) { m_clustersHasBeenSet = true; m_clusters = std::forward<ClustersT>(value); }
    template<typename ClustersT = Aws::Vector<RegionalCluster>>
    MultiRegionCluster& WithClusters(ClustersT&& value) { SetClusters(std::forward<ClustersT>(value)); return *this;}
    template<typename ClustersT = RegionalCluster>
    MultiRegionCluster& AddClusters(ClustersT&& value) { m_clustersHasBeenSet = true; m_clusters.emplace_back(std::forward<ClustersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the multi-Region parameter group associated with the cluster.</p>
     */
    inline const Aws::String& GetMultiRegionParameterGroupName() const { return m_multiRegionParameterGroupName; }
    inline bool MultiRegionParameterGroupNameHasBeenSet() const { return m_multiRegionParameterGroupNameHasBeenSet; }
    template<typename MultiRegionParameterGroupNameT = Aws::String>
    void SetMultiRegionParameterGroupName(MultiRegionParameterGroupNameT&& value) { m_multiRegionParameterGroupNameHasBeenSet = true; m_multiRegionParameterGroupName = std::forward<MultiRegionParameterGroupNameT>(value); }
    template<typename MultiRegionParameterGroupNameT = Aws::String>
    MultiRegionCluster& WithMultiRegionParameterGroupName(MultiRegionParameterGroupNameT&& value) { SetMultiRegionParameterGroupName(std::forward<MultiRegionParameterGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indiciates if the multi-Region cluster is TLS enabled.</p>
     */
    inline bool GetTLSEnabled() const { return m_tLSEnabled; }
    inline bool TLSEnabledHasBeenSet() const { return m_tLSEnabledHasBeenSet; }
    inline void SetTLSEnabled(bool value) { m_tLSEnabledHasBeenSet = true; m_tLSEnabled = value; }
    inline MultiRegionCluster& WithTLSEnabled(bool value) { SetTLSEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the multi-Region cluster.</p>
     */
    inline const Aws::String& GetARN() const { return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    template<typename ARNT = Aws::String>
    void SetARN(ARNT&& value) { m_aRNHasBeenSet = true; m_aRN = std::forward<ARNT>(value); }
    template<typename ARNT = Aws::String>
    MultiRegionCluster& WithARN(ARNT&& value) { SetARN(std::forward<ARNT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_multiRegionClusterName;
    bool m_multiRegionClusterNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    int m_numberOfShards{0};
    bool m_numberOfShardsHasBeenSet = false;

    Aws::Vector<RegionalCluster> m_clusters;
    bool m_clustersHasBeenSet = false;

    Aws::String m_multiRegionParameterGroupName;
    bool m_multiRegionParameterGroupNameHasBeenSet = false;

    bool m_tLSEnabled{false};
    bool m_tLSEnabledHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
