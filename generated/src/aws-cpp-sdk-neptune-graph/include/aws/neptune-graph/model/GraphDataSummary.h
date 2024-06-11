/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/neptune-graph/model/NodeStructure.h>
#include <aws/neptune-graph/model/EdgeStructure.h>
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
namespace NeptuneGraph
{
namespace Model
{

  /**
   * <p>Summary information about the graph.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/GraphDataSummary">AWS
   * API Reference</a></p>
   */
  class GraphDataSummary
  {
  public:
    AWS_NEPTUNEGRAPH_API GraphDataSummary();
    AWS_NEPTUNEGRAPH_API GraphDataSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEGRAPH_API GraphDataSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEGRAPH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of nodes in the graph.</p>
     */
    inline long long GetNumNodes() const{ return m_numNodes; }
    inline bool NumNodesHasBeenSet() const { return m_numNodesHasBeenSet; }
    inline void SetNumNodes(long long value) { m_numNodesHasBeenSet = true; m_numNodes = value; }
    inline GraphDataSummary& WithNumNodes(long long value) { SetNumNodes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of edges in the graph.</p>
     */
    inline long long GetNumEdges() const{ return m_numEdges; }
    inline bool NumEdgesHasBeenSet() const { return m_numEdgesHasBeenSet; }
    inline void SetNumEdges(long long value) { m_numEdgesHasBeenSet = true; m_numEdges = value; }
    inline GraphDataSummary& WithNumEdges(long long value) { SetNumEdges(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of distinct node labels in the graph.</p>
     */
    inline long long GetNumNodeLabels() const{ return m_numNodeLabels; }
    inline bool NumNodeLabelsHasBeenSet() const { return m_numNodeLabelsHasBeenSet; }
    inline void SetNumNodeLabels(long long value) { m_numNodeLabelsHasBeenSet = true; m_numNodeLabels = value; }
    inline GraphDataSummary& WithNumNodeLabels(long long value) { SetNumNodeLabels(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of unique edge labels in the graph.</p>
     */
    inline long long GetNumEdgeLabels() const{ return m_numEdgeLabels; }
    inline bool NumEdgeLabelsHasBeenSet() const { return m_numEdgeLabelsHasBeenSet; }
    inline void SetNumEdgeLabels(long long value) { m_numEdgeLabelsHasBeenSet = true; m_numEdgeLabels = value; }
    inline GraphDataSummary& WithNumEdgeLabels(long long value) { SetNumEdgeLabels(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of distinct node labels in the graph.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNodeLabels() const{ return m_nodeLabels; }
    inline bool NodeLabelsHasBeenSet() const { return m_nodeLabelsHasBeenSet; }
    inline void SetNodeLabels(const Aws::Vector<Aws::String>& value) { m_nodeLabelsHasBeenSet = true; m_nodeLabels = value; }
    inline void SetNodeLabels(Aws::Vector<Aws::String>&& value) { m_nodeLabelsHasBeenSet = true; m_nodeLabels = std::move(value); }
    inline GraphDataSummary& WithNodeLabels(const Aws::Vector<Aws::String>& value) { SetNodeLabels(value); return *this;}
    inline GraphDataSummary& WithNodeLabels(Aws::Vector<Aws::String>&& value) { SetNodeLabels(std::move(value)); return *this;}
    inline GraphDataSummary& AddNodeLabels(const Aws::String& value) { m_nodeLabelsHasBeenSet = true; m_nodeLabels.push_back(value); return *this; }
    inline GraphDataSummary& AddNodeLabels(Aws::String&& value) { m_nodeLabelsHasBeenSet = true; m_nodeLabels.push_back(std::move(value)); return *this; }
    inline GraphDataSummary& AddNodeLabels(const char* value) { m_nodeLabelsHasBeenSet = true; m_nodeLabels.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the edge labels in the graph.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEdgeLabels() const{ return m_edgeLabels; }
    inline bool EdgeLabelsHasBeenSet() const { return m_edgeLabelsHasBeenSet; }
    inline void SetEdgeLabels(const Aws::Vector<Aws::String>& value) { m_edgeLabelsHasBeenSet = true; m_edgeLabels = value; }
    inline void SetEdgeLabels(Aws::Vector<Aws::String>&& value) { m_edgeLabelsHasBeenSet = true; m_edgeLabels = std::move(value); }
    inline GraphDataSummary& WithEdgeLabels(const Aws::Vector<Aws::String>& value) { SetEdgeLabels(value); return *this;}
    inline GraphDataSummary& WithEdgeLabels(Aws::Vector<Aws::String>&& value) { SetEdgeLabels(std::move(value)); return *this;}
    inline GraphDataSummary& AddEdgeLabels(const Aws::String& value) { m_edgeLabelsHasBeenSet = true; m_edgeLabels.push_back(value); return *this; }
    inline GraphDataSummary& AddEdgeLabels(Aws::String&& value) { m_edgeLabelsHasBeenSet = true; m_edgeLabels.push_back(std::move(value)); return *this; }
    inline GraphDataSummary& AddEdgeLabels(const char* value) { m_edgeLabelsHasBeenSet = true; m_edgeLabels.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of distinct node properties in the graph.</p>
     */
    inline long long GetNumNodeProperties() const{ return m_numNodeProperties; }
    inline bool NumNodePropertiesHasBeenSet() const { return m_numNodePropertiesHasBeenSet; }
    inline void SetNumNodeProperties(long long value) { m_numNodePropertiesHasBeenSet = true; m_numNodeProperties = value; }
    inline GraphDataSummary& WithNumNodeProperties(long long value) { SetNumNodeProperties(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of edge properties in the graph.</p>
     */
    inline long long GetNumEdgeProperties() const{ return m_numEdgeProperties; }
    inline bool NumEdgePropertiesHasBeenSet() const { return m_numEdgePropertiesHasBeenSet; }
    inline void SetNumEdgeProperties(long long value) { m_numEdgePropertiesHasBeenSet = true; m_numEdgeProperties = value; }
    inline GraphDataSummary& WithNumEdgeProperties(long long value) { SetNumEdgeProperties(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the distinct node properties in the graph, along with the count of
     * nodes where each property is used.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, long long>>& GetNodeProperties() const{ return m_nodeProperties; }
    inline bool NodePropertiesHasBeenSet() const { return m_nodePropertiesHasBeenSet; }
    inline void SetNodeProperties(const Aws::Vector<Aws::Map<Aws::String, long long>>& value) { m_nodePropertiesHasBeenSet = true; m_nodeProperties = value; }
    inline void SetNodeProperties(Aws::Vector<Aws::Map<Aws::String, long long>>&& value) { m_nodePropertiesHasBeenSet = true; m_nodeProperties = std::move(value); }
    inline GraphDataSummary& WithNodeProperties(const Aws::Vector<Aws::Map<Aws::String, long long>>& value) { SetNodeProperties(value); return *this;}
    inline GraphDataSummary& WithNodeProperties(Aws::Vector<Aws::Map<Aws::String, long long>>&& value) { SetNodeProperties(std::move(value)); return *this;}
    inline GraphDataSummary& AddNodeProperties(const Aws::Map<Aws::String, long long>& value) { m_nodePropertiesHasBeenSet = true; m_nodeProperties.push_back(value); return *this; }
    inline GraphDataSummary& AddNodeProperties(Aws::Map<Aws::String, long long>&& value) { m_nodePropertiesHasBeenSet = true; m_nodeProperties.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the distinct edge properties in the graph, along with the count of
     * edges where each property is used.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, long long>>& GetEdgeProperties() const{ return m_edgeProperties; }
    inline bool EdgePropertiesHasBeenSet() const { return m_edgePropertiesHasBeenSet; }
    inline void SetEdgeProperties(const Aws::Vector<Aws::Map<Aws::String, long long>>& value) { m_edgePropertiesHasBeenSet = true; m_edgeProperties = value; }
    inline void SetEdgeProperties(Aws::Vector<Aws::Map<Aws::String, long long>>&& value) { m_edgePropertiesHasBeenSet = true; m_edgeProperties = std::move(value); }
    inline GraphDataSummary& WithEdgeProperties(const Aws::Vector<Aws::Map<Aws::String, long long>>& value) { SetEdgeProperties(value); return *this;}
    inline GraphDataSummary& WithEdgeProperties(Aws::Vector<Aws::Map<Aws::String, long long>>&& value) { SetEdgeProperties(std::move(value)); return *this;}
    inline GraphDataSummary& AddEdgeProperties(const Aws::Map<Aws::String, long long>& value) { m_edgePropertiesHasBeenSet = true; m_edgeProperties.push_back(value); return *this; }
    inline GraphDataSummary& AddEdgeProperties(Aws::Map<Aws::String, long long>&& value) { m_edgePropertiesHasBeenSet = true; m_edgeProperties.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The total number of usages of all node properties.</p>
     */
    inline long long GetTotalNodePropertyValues() const{ return m_totalNodePropertyValues; }
    inline bool TotalNodePropertyValuesHasBeenSet() const { return m_totalNodePropertyValuesHasBeenSet; }
    inline void SetTotalNodePropertyValues(long long value) { m_totalNodePropertyValuesHasBeenSet = true; m_totalNodePropertyValues = value; }
    inline GraphDataSummary& WithTotalNodePropertyValues(long long value) { SetTotalNodePropertyValues(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of usages of all edge properties.</p>
     */
    inline long long GetTotalEdgePropertyValues() const{ return m_totalEdgePropertyValues; }
    inline bool TotalEdgePropertyValuesHasBeenSet() const { return m_totalEdgePropertyValuesHasBeenSet; }
    inline void SetTotalEdgePropertyValues(long long value) { m_totalEdgePropertyValuesHasBeenSet = true; m_totalEdgePropertyValues = value; }
    inline GraphDataSummary& WithTotalEdgePropertyValues(long long value) { SetTotalEdgePropertyValues(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This field is only present when the requested mode is DETAILED. It contains a
     * list of node structures.</p>
     */
    inline const Aws::Vector<NodeStructure>& GetNodeStructures() const{ return m_nodeStructures; }
    inline bool NodeStructuresHasBeenSet() const { return m_nodeStructuresHasBeenSet; }
    inline void SetNodeStructures(const Aws::Vector<NodeStructure>& value) { m_nodeStructuresHasBeenSet = true; m_nodeStructures = value; }
    inline void SetNodeStructures(Aws::Vector<NodeStructure>&& value) { m_nodeStructuresHasBeenSet = true; m_nodeStructures = std::move(value); }
    inline GraphDataSummary& WithNodeStructures(const Aws::Vector<NodeStructure>& value) { SetNodeStructures(value); return *this;}
    inline GraphDataSummary& WithNodeStructures(Aws::Vector<NodeStructure>&& value) { SetNodeStructures(std::move(value)); return *this;}
    inline GraphDataSummary& AddNodeStructures(const NodeStructure& value) { m_nodeStructuresHasBeenSet = true; m_nodeStructures.push_back(value); return *this; }
    inline GraphDataSummary& AddNodeStructures(NodeStructure&& value) { m_nodeStructuresHasBeenSet = true; m_nodeStructures.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>This field is only present when the requested mode is DETAILED. It contains a
     * list of edge structures.</p>
     */
    inline const Aws::Vector<EdgeStructure>& GetEdgeStructures() const{ return m_edgeStructures; }
    inline bool EdgeStructuresHasBeenSet() const { return m_edgeStructuresHasBeenSet; }
    inline void SetEdgeStructures(const Aws::Vector<EdgeStructure>& value) { m_edgeStructuresHasBeenSet = true; m_edgeStructures = value; }
    inline void SetEdgeStructures(Aws::Vector<EdgeStructure>&& value) { m_edgeStructuresHasBeenSet = true; m_edgeStructures = std::move(value); }
    inline GraphDataSummary& WithEdgeStructures(const Aws::Vector<EdgeStructure>& value) { SetEdgeStructures(value); return *this;}
    inline GraphDataSummary& WithEdgeStructures(Aws::Vector<EdgeStructure>&& value) { SetEdgeStructures(std::move(value)); return *this;}
    inline GraphDataSummary& AddEdgeStructures(const EdgeStructure& value) { m_edgeStructuresHasBeenSet = true; m_edgeStructures.push_back(value); return *this; }
    inline GraphDataSummary& AddEdgeStructures(EdgeStructure&& value) { m_edgeStructuresHasBeenSet = true; m_edgeStructures.push_back(std::move(value)); return *this; }
    ///@}
  private:

    long long m_numNodes;
    bool m_numNodesHasBeenSet = false;

    long long m_numEdges;
    bool m_numEdgesHasBeenSet = false;

    long long m_numNodeLabels;
    bool m_numNodeLabelsHasBeenSet = false;

    long long m_numEdgeLabels;
    bool m_numEdgeLabelsHasBeenSet = false;

    Aws::Vector<Aws::String> m_nodeLabels;
    bool m_nodeLabelsHasBeenSet = false;

    Aws::Vector<Aws::String> m_edgeLabels;
    bool m_edgeLabelsHasBeenSet = false;

    long long m_numNodeProperties;
    bool m_numNodePropertiesHasBeenSet = false;

    long long m_numEdgeProperties;
    bool m_numEdgePropertiesHasBeenSet = false;

    Aws::Vector<Aws::Map<Aws::String, long long>> m_nodeProperties;
    bool m_nodePropertiesHasBeenSet = false;

    Aws::Vector<Aws::Map<Aws::String, long long>> m_edgeProperties;
    bool m_edgePropertiesHasBeenSet = false;

    long long m_totalNodePropertyValues;
    bool m_totalNodePropertyValuesHasBeenSet = false;

    long long m_totalEdgePropertyValues;
    bool m_totalEdgePropertyValuesHasBeenSet = false;

    Aws::Vector<NodeStructure> m_nodeStructures;
    bool m_nodeStructuresHasBeenSet = false;

    Aws::Vector<EdgeStructure> m_edgeStructures;
    bool m_edgeStructuresHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
