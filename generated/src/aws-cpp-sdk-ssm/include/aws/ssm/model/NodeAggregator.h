/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/NodeAggregatorType.h>
#include <aws/ssm/model/NodeTypeName.h>
#include <aws/ssm/model/NodeAttributeName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>One or more aggregators for viewing counts of nodes using different
   * dimensions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/NodeAggregator">AWS
   * API Reference</a></p>
   */
  class NodeAggregator
  {
  public:
    AWS_SSM_API NodeAggregator() = default;
    AWS_SSM_API NodeAggregator(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API NodeAggregator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The aggregator type for limiting a node summary. Currently, only
     * <code>Count</code> is supported.</p>
     */
    inline NodeAggregatorType GetAggregatorType() const { return m_aggregatorType; }
    inline bool AggregatorTypeHasBeenSet() const { return m_aggregatorTypeHasBeenSet; }
    inline void SetAggregatorType(NodeAggregatorType value) { m_aggregatorTypeHasBeenSet = true; m_aggregatorType = value; }
    inline NodeAggregator& WithAggregatorType(NodeAggregatorType value) { SetAggregatorType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type name to use for viewing counts of nodes. Currently, only
     * <code>Instance</code> is supported.</p>
     */
    inline NodeTypeName GetTypeName() const { return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    inline void SetTypeName(NodeTypeName value) { m_typeNameHasBeenSet = true; m_typeName = value; }
    inline NodeAggregator& WithTypeName(NodeTypeName value) { SetTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a node attribute on which to limit the count of nodes.</p>
     */
    inline NodeAttributeName GetAttributeName() const { return m_attributeName; }
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
    inline void SetAttributeName(NodeAttributeName value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }
    inline NodeAggregator& WithAttributeName(NodeAttributeName value) { SetAttributeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about aggregators used to refine a node summary.</p>
     */
    inline const Aws::Vector<NodeAggregator>& GetAggregators() const { return m_aggregators; }
    inline bool AggregatorsHasBeenSet() const { return m_aggregatorsHasBeenSet; }
    template<typename AggregatorsT = Aws::Vector<NodeAggregator>>
    void SetAggregators(AggregatorsT&& value) { m_aggregatorsHasBeenSet = true; m_aggregators = std::forward<AggregatorsT>(value); }
    template<typename AggregatorsT = Aws::Vector<NodeAggregator>>
    NodeAggregator& WithAggregators(AggregatorsT&& value) { SetAggregators(std::forward<AggregatorsT>(value)); return *this;}
    template<typename AggregatorsT = NodeAggregator>
    NodeAggregator& AddAggregators(AggregatorsT&& value) { m_aggregatorsHasBeenSet = true; m_aggregators.emplace_back(std::forward<AggregatorsT>(value)); return *this; }
    ///@}
  private:

    NodeAggregatorType m_aggregatorType{NodeAggregatorType::NOT_SET};
    bool m_aggregatorTypeHasBeenSet = false;

    NodeTypeName m_typeName{NodeTypeName::NOT_SET};
    bool m_typeNameHasBeenSet = false;

    NodeAttributeName m_attributeName{NodeAttributeName::NOT_SET};
    bool m_attributeNameHasBeenSet = false;

    Aws::Vector<NodeAggregator> m_aggregators;
    bool m_aggregatorsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
