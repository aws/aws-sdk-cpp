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
    AWS_MEMORYDB_API MultiRegionCluster();
    AWS_MEMORYDB_API MultiRegionCluster(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API MultiRegionCluster& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the multi-Region cluster.</p>
     */
    inline const Aws::String& GetMultiRegionClusterName() const{ return m_multiRegionClusterName; }
    inline bool MultiRegionClusterNameHasBeenSet() const { return m_multiRegionClusterNameHasBeenSet; }
    inline void SetMultiRegionClusterName(const Aws::String& value) { m_multiRegionClusterNameHasBeenSet = true; m_multiRegionClusterName = value; }
    inline void SetMultiRegionClusterName(Aws::String&& value) { m_multiRegionClusterNameHasBeenSet = true; m_multiRegionClusterName = std::move(value); }
    inline void SetMultiRegionClusterName(const char* value) { m_multiRegionClusterNameHasBeenSet = true; m_multiRegionClusterName.assign(value); }
    inline MultiRegionCluster& WithMultiRegionClusterName(const Aws::String& value) { SetMultiRegionClusterName(value); return *this;}
    inline MultiRegionCluster& WithMultiRegionClusterName(Aws::String&& value) { SetMultiRegionClusterName(std::move(value)); return *this;}
    inline MultiRegionCluster& WithMultiRegionClusterName(const char* value) { SetMultiRegionClusterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the multi-Region cluster.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline MultiRegionCluster& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline MultiRegionCluster& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline MultiRegionCluster& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the multi-Region cluster.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline MultiRegionCluster& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline MultiRegionCluster& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline MultiRegionCluster& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node type used by the multi-Region cluster.</p>
     */
    inline const Aws::String& GetNodeType() const{ return m_nodeType; }
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
    inline void SetNodeType(const Aws::String& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }
    inline void SetNodeType(Aws::String&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::move(value); }
    inline void SetNodeType(const char* value) { m_nodeTypeHasBeenSet = true; m_nodeType.assign(value); }
    inline MultiRegionCluster& WithNodeType(const Aws::String& value) { SetNodeType(value); return *this;}
    inline MultiRegionCluster& WithNodeType(Aws::String&& value) { SetNodeType(std::move(value)); return *this;}
    inline MultiRegionCluster& WithNodeType(const char* value) { SetNodeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the engine used by the multi-Region cluster.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline MultiRegionCluster& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline MultiRegionCluster& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline MultiRegionCluster& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the engine used by the multi-Region cluster.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline MultiRegionCluster& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline MultiRegionCluster& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline MultiRegionCluster& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of shards in the multi-Region cluster.</p>
     */
    inline int GetNumberOfShards() const{ return m_numberOfShards; }
    inline bool NumberOfShardsHasBeenSet() const { return m_numberOfShardsHasBeenSet; }
    inline void SetNumberOfShards(int value) { m_numberOfShardsHasBeenSet = true; m_numberOfShards = value; }
    inline MultiRegionCluster& WithNumberOfShards(int value) { SetNumberOfShards(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The clusters in this multi-Region cluster.</p>
     */
    inline const Aws::Vector<RegionalCluster>& GetClusters() const{ return m_clusters; }
    inline bool ClustersHasBeenSet() const { return m_clustersHasBeenSet; }
    inline void SetClusters(const Aws::Vector<RegionalCluster>& value) { m_clustersHasBeenSet = true; m_clusters = value; }
    inline void SetClusters(Aws::Vector<RegionalCluster>&& value) { m_clustersHasBeenSet = true; m_clusters = std::move(value); }
    inline MultiRegionCluster& WithClusters(const Aws::Vector<RegionalCluster>& value) { SetClusters(value); return *this;}
    inline MultiRegionCluster& WithClusters(Aws::Vector<RegionalCluster>&& value) { SetClusters(std::move(value)); return *this;}
    inline MultiRegionCluster& AddClusters(const RegionalCluster& value) { m_clustersHasBeenSet = true; m_clusters.push_back(value); return *this; }
    inline MultiRegionCluster& AddClusters(RegionalCluster&& value) { m_clustersHasBeenSet = true; m_clusters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the multi-Region parameter group associated with the cluster.</p>
     */
    inline const Aws::String& GetMultiRegionParameterGroupName() const{ return m_multiRegionParameterGroupName; }
    inline bool MultiRegionParameterGroupNameHasBeenSet() const { return m_multiRegionParameterGroupNameHasBeenSet; }
    inline void SetMultiRegionParameterGroupName(const Aws::String& value) { m_multiRegionParameterGroupNameHasBeenSet = true; m_multiRegionParameterGroupName = value; }
    inline void SetMultiRegionParameterGroupName(Aws::String&& value) { m_multiRegionParameterGroupNameHasBeenSet = true; m_multiRegionParameterGroupName = std::move(value); }
    inline void SetMultiRegionParameterGroupName(const char* value) { m_multiRegionParameterGroupNameHasBeenSet = true; m_multiRegionParameterGroupName.assign(value); }
    inline MultiRegionCluster& WithMultiRegionParameterGroupName(const Aws::String& value) { SetMultiRegionParameterGroupName(value); return *this;}
    inline MultiRegionCluster& WithMultiRegionParameterGroupName(Aws::String&& value) { SetMultiRegionParameterGroupName(std::move(value)); return *this;}
    inline MultiRegionCluster& WithMultiRegionParameterGroupName(const char* value) { SetMultiRegionParameterGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indiciates if the multi-Region cluster is TLS enabled.</p>
     */
    inline bool GetTLSEnabled() const{ return m_tLSEnabled; }
    inline bool TLSEnabledHasBeenSet() const { return m_tLSEnabledHasBeenSet; }
    inline void SetTLSEnabled(bool value) { m_tLSEnabledHasBeenSet = true; m_tLSEnabled = value; }
    inline MultiRegionCluster& WithTLSEnabled(bool value) { SetTLSEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the multi-Region cluster.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }
    inline MultiRegionCluster& WithARN(const Aws::String& value) { SetARN(value); return *this;}
    inline MultiRegionCluster& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}
    inline MultiRegionCluster& WithARN(const char* value) { SetARN(value); return *this;}
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

    int m_numberOfShards;
    bool m_numberOfShardsHasBeenSet = false;

    Aws::Vector<RegionalCluster> m_clusters;
    bool m_clustersHasBeenSet = false;

    Aws::String m_multiRegionParameterGroupName;
    bool m_multiRegionParameterGroupNameHasBeenSet = false;

    bool m_tLSEnabled;
    bool m_tLSEnabledHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
