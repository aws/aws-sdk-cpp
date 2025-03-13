/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Identifier.h>
#include <aws/quicksight/model/AggType.h>
#include <aws/quicksight/model/TopicSortDirection.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The definition for the <code>FilterAggMetrics</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FilterAggMetrics">AWS
   * API Reference</a></p>
   */
  class FilterAggMetrics
  {
  public:
    AWS_QUICKSIGHT_API FilterAggMetrics() = default;
    AWS_QUICKSIGHT_API FilterAggMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FilterAggMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The metric operand of the <code>FilterAggMetrics</code>.</p>
     */
    inline const Identifier& GetMetricOperand() const { return m_metricOperand; }
    inline bool MetricOperandHasBeenSet() const { return m_metricOperandHasBeenSet; }
    template<typename MetricOperandT = Identifier>
    void SetMetricOperand(MetricOperandT&& value) { m_metricOperandHasBeenSet = true; m_metricOperand = std::forward<MetricOperandT>(value); }
    template<typename MetricOperandT = Identifier>
    FilterAggMetrics& WithMetricOperand(MetricOperandT&& value) { SetMetricOperand(std::forward<MetricOperandT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The function for the <code>FilterAggMetrics</code>.</p>
     */
    inline AggType GetFunction() const { return m_function; }
    inline bool FunctionHasBeenSet() const { return m_functionHasBeenSet; }
    inline void SetFunction(AggType value) { m_functionHasBeenSet = true; m_function = value; }
    inline FilterAggMetrics& WithFunction(AggType value) { SetFunction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort direction for <code>FilterAggMetrics</code>.</p>
     */
    inline TopicSortDirection GetSortDirection() const { return m_sortDirection; }
    inline bool SortDirectionHasBeenSet() const { return m_sortDirectionHasBeenSet; }
    inline void SetSortDirection(TopicSortDirection value) { m_sortDirectionHasBeenSet = true; m_sortDirection = value; }
    inline FilterAggMetrics& WithSortDirection(TopicSortDirection value) { SetSortDirection(value); return *this;}
    ///@}
  private:

    Identifier m_metricOperand;
    bool m_metricOperandHasBeenSet = false;

    AggType m_function{AggType::NOT_SET};
    bool m_functionHasBeenSet = false;

    TopicSortDirection m_sortDirection{TopicSortDirection::NOT_SET};
    bool m_sortDirectionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
