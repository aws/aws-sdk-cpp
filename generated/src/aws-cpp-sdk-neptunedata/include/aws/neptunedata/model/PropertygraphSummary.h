/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/neptunedata/model/NodeStructure.h>
#include <aws/neptunedata/model/EdgeStructure.h>
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
namespace neptunedata
{
namespace Model
{

  /**
   * <p>The graph summary API returns a read-only list of node and edge labels and
   * property keys, along with counts of nodes, edges, and properties. See <a
   * href="https://docs.aws.amazon.com/neptune/latest/userguide/neptune-graph-summary.html#neptune-graph-summary-pg-response">Graph
   * summary response for a property graph (PG)</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/PropertygraphSummary">AWS
   * API Reference</a></p>
   */
  class PropertygraphSummary
  {
  public:
    AWS_NEPTUNEDATA_API PropertygraphSummary() = default;
    AWS_NEPTUNEDATA_API PropertygraphSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API PropertygraphSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of nodes in the graph.</p>
     */
    inline long long GetNumNodes() const { return m_numNodes; }
    inline bool NumNodesHasBeenSet() const { return m_numNodesHasBeenSet; }
    inline void SetNumNodes(long long value) { m_numNodesHasBeenSet = true; m_numNodes = value; }
    inline PropertygraphSummary& WithNumNodes(long long value) { SetNumNodes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of edges in the graph.</p>
     */
    inline long long GetNumEdges() const { return m_numEdges; }
    inline bool NumEdgesHasBeenSet() const { return m_numEdgesHasBeenSet; }
    inline void SetNumEdges(long long value) { m_numEdgesHasBeenSet = true; m_numEdges = value; }
    inline PropertygraphSummary& WithNumEdges(long long value) { SetNumEdges(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of distinct node labels in the graph.</p>
     */
    inline long long GetNumNodeLabels() const { return m_numNodeLabels; }
    inline bool NumNodeLabelsHasBeenSet() const { return m_numNodeLabelsHasBeenSet; }
    inline void SetNumNodeLabels(long long value) { m_numNodeLabelsHasBeenSet = true; m_numNodeLabels = value; }
    inline PropertygraphSummary& WithNumNodeLabels(long long value) { SetNumNodeLabels(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of distinct edge labels in the graph.</p>
     */
    inline long long GetNumEdgeLabels() const { return m_numEdgeLabels; }
    inline bool NumEdgeLabelsHasBeenSet() const { return m_numEdgeLabelsHasBeenSet; }
    inline void SetNumEdgeLabels(long long value) { m_numEdgeLabelsHasBeenSet = true; m_numEdgeLabels = value; }
    inline PropertygraphSummary& WithNumEdgeLabels(long long value) { SetNumEdgeLabels(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the distinct node labels in the graph.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNodeLabels() const { return m_nodeLabels; }
    inline bool NodeLabelsHasBeenSet() const { return m_nodeLabelsHasBeenSet; }
    template<typename NodeLabelsT = Aws::Vector<Aws::String>>
    void SetNodeLabels(NodeLabelsT&& value) { m_nodeLabelsHasBeenSet = true; m_nodeLabels = std::forward<NodeLabelsT>(value); }
    template<typename NodeLabelsT = Aws::Vector<Aws::String>>
    PropertygraphSummary& WithNodeLabels(NodeLabelsT&& value) { SetNodeLabels(std::forward<NodeLabelsT>(value)); return *this;}
    template<typename NodeLabelsT = Aws::String>
    PropertygraphSummary& AddNodeLabels(NodeLabelsT&& value) { m_nodeLabelsHasBeenSet = true; m_nodeLabels.emplace_back(std::forward<NodeLabelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the distinct edge labels in the graph.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEdgeLabels() const { return m_edgeLabels; }
    inline bool EdgeLabelsHasBeenSet() const { return m_edgeLabelsHasBeenSet; }
    template<typename EdgeLabelsT = Aws::Vector<Aws::String>>
    void SetEdgeLabels(EdgeLabelsT&& value) { m_edgeLabelsHasBeenSet = true; m_edgeLabels = std::forward<EdgeLabelsT>(value); }
    template<typename EdgeLabelsT = Aws::Vector<Aws::String>>
    PropertygraphSummary& WithEdgeLabels(EdgeLabelsT&& value) { SetEdgeLabels(std::forward<EdgeLabelsT>(value)); return *this;}
    template<typename EdgeLabelsT = Aws::String>
    PropertygraphSummary& AddEdgeLabels(EdgeLabelsT&& value) { m_edgeLabelsHasBeenSet = true; m_edgeLabels.emplace_back(std::forward<EdgeLabelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the distinct node properties in the graph, along with the count of
     * nodes where each property is used.</p>
     */
    inline long long GetNumNodeProperties() const { return m_numNodeProperties; }
    inline bool NumNodePropertiesHasBeenSet() const { return m_numNodePropertiesHasBeenSet; }
    inline void SetNumNodeProperties(long long value) { m_numNodePropertiesHasBeenSet = true; m_numNodeProperties = value; }
    inline PropertygraphSummary& WithNumNodeProperties(long long value) { SetNumNodeProperties(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of distinct edge properties in the graph.</p>
     */
    inline long long GetNumEdgeProperties() const { return m_numEdgeProperties; }
    inline bool NumEdgePropertiesHasBeenSet() const { return m_numEdgePropertiesHasBeenSet; }
    inline void SetNumEdgeProperties(long long value) { m_numEdgePropertiesHasBeenSet = true; m_numEdgeProperties = value; }
    inline PropertygraphSummary& WithNumEdgeProperties(long long value) { SetNumEdgeProperties(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of distinct node properties in the graph.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, long long>>& GetNodeProperties() const { return m_nodeProperties; }
    inline bool NodePropertiesHasBeenSet() const { return m_nodePropertiesHasBeenSet; }
    template<typename NodePropertiesT = Aws::Vector<Aws::Map<Aws::String, long long>>>
    void SetNodeProperties(NodePropertiesT&& value) { m_nodePropertiesHasBeenSet = true; m_nodeProperties = std::forward<NodePropertiesT>(value); }
    template<typename NodePropertiesT = Aws::Vector<Aws::Map<Aws::String, long long>>>
    PropertygraphSummary& WithNodeProperties(NodePropertiesT&& value) { SetNodeProperties(std::forward<NodePropertiesT>(value)); return *this;}
    template<typename NodePropertiesT = Aws::Map<Aws::String, long long>>
    PropertygraphSummary& AddNodeProperties(NodePropertiesT&& value) { m_nodePropertiesHasBeenSet = true; m_nodeProperties.emplace_back(std::forward<NodePropertiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the distinct edge properties in the graph, along with the count of
     * edges where each property is used.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, long long>>& GetEdgeProperties() const { return m_edgeProperties; }
    inline bool EdgePropertiesHasBeenSet() const { return m_edgePropertiesHasBeenSet; }
    template<typename EdgePropertiesT = Aws::Vector<Aws::Map<Aws::String, long long>>>
    void SetEdgeProperties(EdgePropertiesT&& value) { m_edgePropertiesHasBeenSet = true; m_edgeProperties = std::forward<EdgePropertiesT>(value); }
    template<typename EdgePropertiesT = Aws::Vector<Aws::Map<Aws::String, long long>>>
    PropertygraphSummary& WithEdgeProperties(EdgePropertiesT&& value) { SetEdgeProperties(std::forward<EdgePropertiesT>(value)); return *this;}
    template<typename EdgePropertiesT = Aws::Map<Aws::String, long long>>
    PropertygraphSummary& AddEdgeProperties(EdgePropertiesT&& value) { m_edgePropertiesHasBeenSet = true; m_edgeProperties.emplace_back(std::forward<EdgePropertiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The total number of usages of all node properties.</p>
     */
    inline long long GetTotalNodePropertyValues() const { return m_totalNodePropertyValues; }
    inline bool TotalNodePropertyValuesHasBeenSet() const { return m_totalNodePropertyValuesHasBeenSet; }
    inline void SetTotalNodePropertyValues(long long value) { m_totalNodePropertyValuesHasBeenSet = true; m_totalNodePropertyValues = value; }
    inline PropertygraphSummary& WithTotalNodePropertyValues(long long value) { SetTotalNodePropertyValues(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of usages of all edge properties.</p>
     */
    inline long long GetTotalEdgePropertyValues() const { return m_totalEdgePropertyValues; }
    inline bool TotalEdgePropertyValuesHasBeenSet() const { return m_totalEdgePropertyValuesHasBeenSet; }
    inline void SetTotalEdgePropertyValues(long long value) { m_totalEdgePropertyValuesHasBeenSet = true; m_totalEdgePropertyValues = value; }
    inline PropertygraphSummary& WithTotalEdgePropertyValues(long long value) { SetTotalEdgePropertyValues(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This field is only present when the requested mode is <code>DETAILED</code>.
     * It contains a list of node structures.</p>
     */
    inline const Aws::Vector<NodeStructure>& GetNodeStructures() const { return m_nodeStructures; }
    inline bool NodeStructuresHasBeenSet() const { return m_nodeStructuresHasBeenSet; }
    template<typename NodeStructuresT = Aws::Vector<NodeStructure>>
    void SetNodeStructures(NodeStructuresT&& value) { m_nodeStructuresHasBeenSet = true; m_nodeStructures = std::forward<NodeStructuresT>(value); }
    template<typename NodeStructuresT = Aws::Vector<NodeStructure>>
    PropertygraphSummary& WithNodeStructures(NodeStructuresT&& value) { SetNodeStructures(std::forward<NodeStructuresT>(value)); return *this;}
    template<typename NodeStructuresT = NodeStructure>
    PropertygraphSummary& AddNodeStructures(NodeStructuresT&& value) { m_nodeStructuresHasBeenSet = true; m_nodeStructures.emplace_back(std::forward<NodeStructuresT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>This field is only present when the requested mode is <code>DETAILED</code>.
     * It contains a list of edge structures.</p>
     */
    inline const Aws::Vector<EdgeStructure>& GetEdgeStructures() const { return m_edgeStructures; }
    inline bool EdgeStructuresHasBeenSet() const { return m_edgeStructuresHasBeenSet; }
    template<typename EdgeStructuresT = Aws::Vector<EdgeStructure>>
    void SetEdgeStructures(EdgeStructuresT&& value) { m_edgeStructuresHasBeenSet = true; m_edgeStructures = std::forward<EdgeStructuresT>(value); }
    template<typename EdgeStructuresT = Aws::Vector<EdgeStructure>>
    PropertygraphSummary& WithEdgeStructures(EdgeStructuresT&& value) { SetEdgeStructures(std::forward<EdgeStructuresT>(value)); return *this;}
    template<typename EdgeStructuresT = EdgeStructure>
    PropertygraphSummary& AddEdgeStructures(EdgeStructuresT&& value) { m_edgeStructuresHasBeenSet = true; m_edgeStructures.emplace_back(std::forward<EdgeStructuresT>(value)); return *this; }
    ///@}
  private:

    long long m_numNodes{0};
    bool m_numNodesHasBeenSet = false;

    long long m_numEdges{0};
    bool m_numEdgesHasBeenSet = false;

    long long m_numNodeLabels{0};
    bool m_numNodeLabelsHasBeenSet = false;

    long long m_numEdgeLabels{0};
    bool m_numEdgeLabelsHasBeenSet = false;

    Aws::Vector<Aws::String> m_nodeLabels;
    bool m_nodeLabelsHasBeenSet = false;

    Aws::Vector<Aws::String> m_edgeLabels;
    bool m_edgeLabelsHasBeenSet = false;

    long long m_numNodeProperties{0};
    bool m_numNodePropertiesHasBeenSet = false;

    long long m_numEdgeProperties{0};
    bool m_numEdgePropertiesHasBeenSet = false;

    Aws::Vector<Aws::Map<Aws::String, long long>> m_nodeProperties;
    bool m_nodePropertiesHasBeenSet = false;

    Aws::Vector<Aws::Map<Aws::String, long long>> m_edgeProperties;
    bool m_edgePropertiesHasBeenSet = false;

    long long m_totalNodePropertyValues{0};
    bool m_totalNodePropertyValuesHasBeenSet = false;

    long long m_totalEdgePropertyValues{0};
    bool m_totalEdgePropertyValuesHasBeenSet = false;

    Aws::Vector<NodeStructure> m_nodeStructures;
    bool m_nodeStructuresHasBeenSet = false;

    Aws::Vector<EdgeStructure> m_edgeStructures;
    bool m_edgeStructuresHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
