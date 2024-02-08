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
    AWS_NEPTUNEGRAPH_API NodeStructure();
    AWS_NEPTUNEGRAPH_API NodeStructure(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEGRAPH_API NodeStructure& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEGRAPH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of instances of this node.</p>
     */
    inline long long GetCount() const{ return m_count; }

    /**
     * <p>The number of instances of this node.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The number of instances of this node.</p>
     */
    inline void SetCount(long long value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The number of instances of this node.</p>
     */
    inline NodeStructure& WithCount(long long value) { SetCount(value); return *this;}


    /**
     * <p>Properties associated with this node.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNodeProperties() const{ return m_nodeProperties; }

    /**
     * <p>Properties associated with this node.</p>
     */
    inline bool NodePropertiesHasBeenSet() const { return m_nodePropertiesHasBeenSet; }

    /**
     * <p>Properties associated with this node.</p>
     */
    inline void SetNodeProperties(const Aws::Vector<Aws::String>& value) { m_nodePropertiesHasBeenSet = true; m_nodeProperties = value; }

    /**
     * <p>Properties associated with this node.</p>
     */
    inline void SetNodeProperties(Aws::Vector<Aws::String>&& value) { m_nodePropertiesHasBeenSet = true; m_nodeProperties = std::move(value); }

    /**
     * <p>Properties associated with this node.</p>
     */
    inline NodeStructure& WithNodeProperties(const Aws::Vector<Aws::String>& value) { SetNodeProperties(value); return *this;}

    /**
     * <p>Properties associated with this node.</p>
     */
    inline NodeStructure& WithNodeProperties(Aws::Vector<Aws::String>&& value) { SetNodeProperties(std::move(value)); return *this;}

    /**
     * <p>Properties associated with this node.</p>
     */
    inline NodeStructure& AddNodeProperties(const Aws::String& value) { m_nodePropertiesHasBeenSet = true; m_nodeProperties.push_back(value); return *this; }

    /**
     * <p>Properties associated with this node.</p>
     */
    inline NodeStructure& AddNodeProperties(Aws::String&& value) { m_nodePropertiesHasBeenSet = true; m_nodeProperties.push_back(std::move(value)); return *this; }

    /**
     * <p>Properties associated with this node.</p>
     */
    inline NodeStructure& AddNodeProperties(const char* value) { m_nodePropertiesHasBeenSet = true; m_nodeProperties.push_back(value); return *this; }


    /**
     * <p>The outgoing edge labels associated with this node.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDistinctOutgoingEdgeLabels() const{ return m_distinctOutgoingEdgeLabels; }

    /**
     * <p>The outgoing edge labels associated with this node.</p>
     */
    inline bool DistinctOutgoingEdgeLabelsHasBeenSet() const { return m_distinctOutgoingEdgeLabelsHasBeenSet; }

    /**
     * <p>The outgoing edge labels associated with this node.</p>
     */
    inline void SetDistinctOutgoingEdgeLabels(const Aws::Vector<Aws::String>& value) { m_distinctOutgoingEdgeLabelsHasBeenSet = true; m_distinctOutgoingEdgeLabels = value; }

    /**
     * <p>The outgoing edge labels associated with this node.</p>
     */
    inline void SetDistinctOutgoingEdgeLabels(Aws::Vector<Aws::String>&& value) { m_distinctOutgoingEdgeLabelsHasBeenSet = true; m_distinctOutgoingEdgeLabels = std::move(value); }

    /**
     * <p>The outgoing edge labels associated with this node.</p>
     */
    inline NodeStructure& WithDistinctOutgoingEdgeLabels(const Aws::Vector<Aws::String>& value) { SetDistinctOutgoingEdgeLabels(value); return *this;}

    /**
     * <p>The outgoing edge labels associated with this node.</p>
     */
    inline NodeStructure& WithDistinctOutgoingEdgeLabels(Aws::Vector<Aws::String>&& value) { SetDistinctOutgoingEdgeLabels(std::move(value)); return *this;}

    /**
     * <p>The outgoing edge labels associated with this node.</p>
     */
    inline NodeStructure& AddDistinctOutgoingEdgeLabels(const Aws::String& value) { m_distinctOutgoingEdgeLabelsHasBeenSet = true; m_distinctOutgoingEdgeLabels.push_back(value); return *this; }

    /**
     * <p>The outgoing edge labels associated with this node.</p>
     */
    inline NodeStructure& AddDistinctOutgoingEdgeLabels(Aws::String&& value) { m_distinctOutgoingEdgeLabelsHasBeenSet = true; m_distinctOutgoingEdgeLabels.push_back(std::move(value)); return *this; }

    /**
     * <p>The outgoing edge labels associated with this node.</p>
     */
    inline NodeStructure& AddDistinctOutgoingEdgeLabels(const char* value) { m_distinctOutgoingEdgeLabelsHasBeenSet = true; m_distinctOutgoingEdgeLabels.push_back(value); return *this; }

  private:

    long long m_count;
    bool m_countHasBeenSet = false;

    Aws::Vector<Aws::String> m_nodeProperties;
    bool m_nodePropertiesHasBeenSet = false;

    Aws::Vector<Aws::String> m_distinctOutgoingEdgeLabels;
    bool m_distinctOutgoingEdgeLabelsHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
