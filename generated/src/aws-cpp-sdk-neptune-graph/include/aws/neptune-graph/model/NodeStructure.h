/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Information about a node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/NodeStructure">AWS
   * API Reference</a></p>
   */
  class NodeStructure
  {
  public:
    AWS_NEPTUNEGRAPH_API NodeStructure() = default;
    AWS_NEPTUNEGRAPH_API NodeStructure(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEGRAPH_API NodeStructure& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEGRAPH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of instances of this node.</p>
     */
    inline long long GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(long long value) { m_countHasBeenSet = true; m_count = value; }
    inline NodeStructure& WithCount(long long value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Properties associated with this node.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNodeProperties() const { return m_nodeProperties; }
    inline bool NodePropertiesHasBeenSet() const { return m_nodePropertiesHasBeenSet; }
    template<typename NodePropertiesT = Aws::Vector<Aws::String>>
    void SetNodeProperties(NodePropertiesT&& value) { m_nodePropertiesHasBeenSet = true; m_nodeProperties = std::forward<NodePropertiesT>(value); }
    template<typename NodePropertiesT = Aws::Vector<Aws::String>>
    NodeStructure& WithNodeProperties(NodePropertiesT&& value) { SetNodeProperties(std::forward<NodePropertiesT>(value)); return *this;}
    template<typename NodePropertiesT = Aws::String>
    NodeStructure& AddNodeProperties(NodePropertiesT&& value) { m_nodePropertiesHasBeenSet = true; m_nodeProperties.emplace_back(std::forward<NodePropertiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The outgoing edge labels associated with this node.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDistinctOutgoingEdgeLabels() const { return m_distinctOutgoingEdgeLabels; }
    inline bool DistinctOutgoingEdgeLabelsHasBeenSet() const { return m_distinctOutgoingEdgeLabelsHasBeenSet; }
    template<typename DistinctOutgoingEdgeLabelsT = Aws::Vector<Aws::String>>
    void SetDistinctOutgoingEdgeLabels(DistinctOutgoingEdgeLabelsT&& value) { m_distinctOutgoingEdgeLabelsHasBeenSet = true; m_distinctOutgoingEdgeLabels = std::forward<DistinctOutgoingEdgeLabelsT>(value); }
    template<typename DistinctOutgoingEdgeLabelsT = Aws::Vector<Aws::String>>
    NodeStructure& WithDistinctOutgoingEdgeLabels(DistinctOutgoingEdgeLabelsT&& value) { SetDistinctOutgoingEdgeLabels(std::forward<DistinctOutgoingEdgeLabelsT>(value)); return *this;}
    template<typename DistinctOutgoingEdgeLabelsT = Aws::String>
    NodeStructure& AddDistinctOutgoingEdgeLabels(DistinctOutgoingEdgeLabelsT&& value) { m_distinctOutgoingEdgeLabelsHasBeenSet = true; m_distinctOutgoingEdgeLabels.emplace_back(std::forward<DistinctOutgoingEdgeLabelsT>(value)); return *this; }
    ///@}
  private:

    long long m_count{0};
    bool m_countHasBeenSet = false;

    Aws::Vector<Aws::String> m_nodeProperties;
    bool m_nodePropertiesHasBeenSet = false;

    Aws::Vector<Aws::String> m_distinctOutgoingEdgeLabels;
    bool m_distinctOutgoingEdgeLabelsHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
