/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/InventoryGroup.h>
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
   * <p>Specifies the inventory type and attribute for the aggregation
   * execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InventoryAggregator">AWS
   * API Reference</a></p>
   */
  class InventoryAggregator
  {
  public:
    AWS_SSM_API InventoryAggregator() = default;
    AWS_SSM_API InventoryAggregator(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API InventoryAggregator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The inventory type and attribute name for aggregation.</p>
     */
    inline const Aws::String& GetExpression() const { return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    template<typename ExpressionT = Aws::String>
    void SetExpression(ExpressionT&& value) { m_expressionHasBeenSet = true; m_expression = std::forward<ExpressionT>(value); }
    template<typename ExpressionT = Aws::String>
    InventoryAggregator& WithExpression(ExpressionT&& value) { SetExpression(std::forward<ExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Nested aggregators to further refine aggregation for an inventory type.</p>
     */
    inline const Aws::Vector<InventoryAggregator>& GetAggregators() const { return m_aggregators; }
    inline bool AggregatorsHasBeenSet() const { return m_aggregatorsHasBeenSet; }
    template<typename AggregatorsT = Aws::Vector<InventoryAggregator>>
    void SetAggregators(AggregatorsT&& value) { m_aggregatorsHasBeenSet = true; m_aggregators = std::forward<AggregatorsT>(value); }
    template<typename AggregatorsT = Aws::Vector<InventoryAggregator>>
    InventoryAggregator& WithAggregators(AggregatorsT&& value) { SetAggregators(std::forward<AggregatorsT>(value)); return *this;}
    template<typename AggregatorsT = InventoryAggregator>
    InventoryAggregator& AddAggregators(AggregatorsT&& value) { m_aggregatorsHasBeenSet = true; m_aggregators.emplace_back(std::forward<AggregatorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A user-defined set of one or more filters on which to aggregate inventory
     * data. Groups return a count of resources that match and don't match the
     * specified criteria.</p>
     */
    inline const Aws::Vector<InventoryGroup>& GetGroups() const { return m_groups; }
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
    template<typename GroupsT = Aws::Vector<InventoryGroup>>
    void SetGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups = std::forward<GroupsT>(value); }
    template<typename GroupsT = Aws::Vector<InventoryGroup>>
    InventoryAggregator& WithGroups(GroupsT&& value) { SetGroups(std::forward<GroupsT>(value)); return *this;}
    template<typename GroupsT = InventoryGroup>
    InventoryAggregator& AddGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups.emplace_back(std::forward<GroupsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;

    Aws::Vector<InventoryAggregator> m_aggregators;
    bool m_aggregatorsHasBeenSet = false;

    Aws::Vector<InventoryGroup> m_groups;
    bool m_groupsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
