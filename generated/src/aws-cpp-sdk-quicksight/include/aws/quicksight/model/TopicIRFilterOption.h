/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/TopicIRFilterType.h>
#include <aws/quicksight/model/FilterClass.h>
#include <aws/quicksight/model/Identifier.h>
#include <aws/quicksight/model/TopicIRFilterFunction.h>
#include <aws/quicksight/model/TopicConstantValue.h>
#include <aws/quicksight/model/NullFilterOption.h>
#include <aws/quicksight/model/AggType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/TimeGranularity.h>
#include <aws/quicksight/model/TopicSortDirection.h>
#include <aws/quicksight/model/Anchor.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/AggregationPartitionBy.h>
#include <aws/quicksight/model/FilterAggMetrics.h>
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
   * <p>The definition for a <code>TopicIRFilterOption</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TopicIRFilterOption">AWS
   * API Reference</a></p>
   */
  class TopicIRFilterOption
  {
  public:
    AWS_QUICKSIGHT_API TopicIRFilterOption() = default;
    AWS_QUICKSIGHT_API TopicIRFilterOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicIRFilterOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The filter type for the <code>TopicIRFilterOption</code>.</p>
     */
    inline TopicIRFilterType GetFilterType() const { return m_filterType; }
    inline bool FilterTypeHasBeenSet() const { return m_filterTypeHasBeenSet; }
    inline void SetFilterType(TopicIRFilterType value) { m_filterTypeHasBeenSet = true; m_filterType = value; }
    inline TopicIRFilterOption& WithFilterType(TopicIRFilterType value) { SetFilterType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter class for the <code>TopicIRFilterOption</code>.</p>
     */
    inline FilterClass GetFilterClass() const { return m_filterClass; }
    inline bool FilterClassHasBeenSet() const { return m_filterClassHasBeenSet; }
    inline void SetFilterClass(FilterClass value) { m_filterClassHasBeenSet = true; m_filterClass = value; }
    inline TopicIRFilterOption& WithFilterClass(FilterClass value) { SetFilterClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operand field for the <code>TopicIRFilterOption</code>.</p>
     */
    inline const Identifier& GetOperandField() const { return m_operandField; }
    inline bool OperandFieldHasBeenSet() const { return m_operandFieldHasBeenSet; }
    template<typename OperandFieldT = Identifier>
    void SetOperandField(OperandFieldT&& value) { m_operandFieldHasBeenSet = true; m_operandField = std::forward<OperandFieldT>(value); }
    template<typename OperandFieldT = Identifier>
    TopicIRFilterOption& WithOperandField(OperandFieldT&& value) { SetOperandField(std::forward<OperandFieldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The function for the <code>TopicIRFilterOption</code>.</p>
     */
    inline TopicIRFilterFunction GetFunction() const { return m_function; }
    inline bool FunctionHasBeenSet() const { return m_functionHasBeenSet; }
    inline void SetFunction(TopicIRFilterFunction value) { m_functionHasBeenSet = true; m_function = value; }
    inline TopicIRFilterOption& WithFunction(TopicIRFilterFunction value) { SetFunction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The constant for the <code>TopicIRFilterOption</code>.</p>
     */
    inline const TopicConstantValue& GetConstant() const { return m_constant; }
    inline bool ConstantHasBeenSet() const { return m_constantHasBeenSet; }
    template<typename ConstantT = TopicConstantValue>
    void SetConstant(ConstantT&& value) { m_constantHasBeenSet = true; m_constant = std::forward<ConstantT>(value); }
    template<typename ConstantT = TopicConstantValue>
    TopicIRFilterOption& WithConstant(ConstantT&& value) { SetConstant(std::forward<ConstantT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inverse for the <code>TopicIRFilterOption</code>.</p>
     */
    inline bool GetInverse() const { return m_inverse; }
    inline bool InverseHasBeenSet() const { return m_inverseHasBeenSet; }
    inline void SetInverse(bool value) { m_inverseHasBeenSet = true; m_inverse = value; }
    inline TopicIRFilterOption& WithInverse(bool value) { SetInverse(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The null filter for the <code>TopicIRFilterOption</code>.</p>
     */
    inline NullFilterOption GetNullFilter() const { return m_nullFilter; }
    inline bool NullFilterHasBeenSet() const { return m_nullFilterHasBeenSet; }
    inline void SetNullFilter(NullFilterOption value) { m_nullFilterHasBeenSet = true; m_nullFilter = value; }
    inline TopicIRFilterOption& WithNullFilter(NullFilterOption value) { SetNullFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aggregation for the <code>TopicIRFilterOption</code>.</p>
     */
    inline AggType GetAggregation() const { return m_aggregation; }
    inline bool AggregationHasBeenSet() const { return m_aggregationHasBeenSet; }
    inline void SetAggregation(AggType value) { m_aggregationHasBeenSet = true; m_aggregation = value; }
    inline TopicIRFilterOption& WithAggregation(AggType value) { SetAggregation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aggregation function parameters for the
     * <code>TopicIRFilterOption</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAggregationFunctionParameters() const { return m_aggregationFunctionParameters; }
    inline bool AggregationFunctionParametersHasBeenSet() const { return m_aggregationFunctionParametersHasBeenSet; }
    template<typename AggregationFunctionParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetAggregationFunctionParameters(AggregationFunctionParametersT&& value) { m_aggregationFunctionParametersHasBeenSet = true; m_aggregationFunctionParameters = std::forward<AggregationFunctionParametersT>(value); }
    template<typename AggregationFunctionParametersT = Aws::Map<Aws::String, Aws::String>>
    TopicIRFilterOption& WithAggregationFunctionParameters(AggregationFunctionParametersT&& value) { SetAggregationFunctionParameters(std::forward<AggregationFunctionParametersT>(value)); return *this;}
    template<typename AggregationFunctionParametersKeyT = Aws::String, typename AggregationFunctionParametersValueT = Aws::String>
    TopicIRFilterOption& AddAggregationFunctionParameters(AggregationFunctionParametersKeyT&& key, AggregationFunctionParametersValueT&& value) {
      m_aggregationFunctionParametersHasBeenSet = true; m_aggregationFunctionParameters.emplace(std::forward<AggregationFunctionParametersKeyT>(key), std::forward<AggregationFunctionParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The <code>AggregationPartitionBy</code> for the
     * <code>TopicIRFilterOption</code>.</p>
     */
    inline const Aws::Vector<AggregationPartitionBy>& GetAggregationPartitionBy() const { return m_aggregationPartitionBy; }
    inline bool AggregationPartitionByHasBeenSet() const { return m_aggregationPartitionByHasBeenSet; }
    template<typename AggregationPartitionByT = Aws::Vector<AggregationPartitionBy>>
    void SetAggregationPartitionBy(AggregationPartitionByT&& value) { m_aggregationPartitionByHasBeenSet = true; m_aggregationPartitionBy = std::forward<AggregationPartitionByT>(value); }
    template<typename AggregationPartitionByT = Aws::Vector<AggregationPartitionBy>>
    TopicIRFilterOption& WithAggregationPartitionBy(AggregationPartitionByT&& value) { SetAggregationPartitionBy(std::forward<AggregationPartitionByT>(value)); return *this;}
    template<typename AggregationPartitionByT = AggregationPartitionBy>
    TopicIRFilterOption& AddAggregationPartitionBy(AggregationPartitionByT&& value) { m_aggregationPartitionByHasBeenSet = true; m_aggregationPartitionBy.emplace_back(std::forward<AggregationPartitionByT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The range for the <code>TopicIRFilterOption</code>.</p>
     */
    inline const TopicConstantValue& GetRange() const { return m_range; }
    inline bool RangeHasBeenSet() const { return m_rangeHasBeenSet; }
    template<typename RangeT = TopicConstantValue>
    void SetRange(RangeT&& value) { m_rangeHasBeenSet = true; m_range = std::forward<RangeT>(value); }
    template<typename RangeT = TopicConstantValue>
    TopicIRFilterOption& WithRange(RangeT&& value) { SetRange(std::forward<RangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inclusive for the <code>TopicIRFilterOption</code>.</p>
     */
    inline bool GetInclusive() const { return m_inclusive; }
    inline bool InclusiveHasBeenSet() const { return m_inclusiveHasBeenSet; }
    inline void SetInclusive(bool value) { m_inclusiveHasBeenSet = true; m_inclusive = value; }
    inline TopicIRFilterOption& WithInclusive(bool value) { SetInclusive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time granularity for the <code>TopicIRFilterOption</code>.</p>
     */
    inline TimeGranularity GetTimeGranularity() const { return m_timeGranularity; }
    inline bool TimeGranularityHasBeenSet() const { return m_timeGranularityHasBeenSet; }
    inline void SetTimeGranularity(TimeGranularity value) { m_timeGranularityHasBeenSet = true; m_timeGranularity = value; }
    inline TopicIRFilterOption& WithTimeGranularity(TimeGranularity value) { SetTimeGranularity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last next offset for the <code>TopicIRFilterOption</code>.</p>
     */
    inline const TopicConstantValue& GetLastNextOffset() const { return m_lastNextOffset; }
    inline bool LastNextOffsetHasBeenSet() const { return m_lastNextOffsetHasBeenSet; }
    template<typename LastNextOffsetT = TopicConstantValue>
    void SetLastNextOffset(LastNextOffsetT&& value) { m_lastNextOffsetHasBeenSet = true; m_lastNextOffset = std::forward<LastNextOffsetT>(value); }
    template<typename LastNextOffsetT = TopicConstantValue>
    TopicIRFilterOption& WithLastNextOffset(LastNextOffsetT&& value) { SetLastNextOffset(std::forward<LastNextOffsetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The agg metrics for the <code>TopicIRFilterOption</code>.</p>
     */
    inline const Aws::Vector<FilterAggMetrics>& GetAggMetrics() const { return m_aggMetrics; }
    inline bool AggMetricsHasBeenSet() const { return m_aggMetricsHasBeenSet; }
    template<typename AggMetricsT = Aws::Vector<FilterAggMetrics>>
    void SetAggMetrics(AggMetricsT&& value) { m_aggMetricsHasBeenSet = true; m_aggMetrics = std::forward<AggMetricsT>(value); }
    template<typename AggMetricsT = Aws::Vector<FilterAggMetrics>>
    TopicIRFilterOption& WithAggMetrics(AggMetricsT&& value) { SetAggMetrics(std::forward<AggMetricsT>(value)); return *this;}
    template<typename AggMetricsT = FilterAggMetrics>
    TopicIRFilterOption& AddAggMetrics(AggMetricsT&& value) { m_aggMetricsHasBeenSet = true; m_aggMetrics.emplace_back(std::forward<AggMetricsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>TopBottomLimit</code> for the <code>TopicIRFilterOption</code>.</p>
     */
    inline const TopicConstantValue& GetTopBottomLimit() const { return m_topBottomLimit; }
    inline bool TopBottomLimitHasBeenSet() const { return m_topBottomLimitHasBeenSet; }
    template<typename TopBottomLimitT = TopicConstantValue>
    void SetTopBottomLimit(TopBottomLimitT&& value) { m_topBottomLimitHasBeenSet = true; m_topBottomLimit = std::forward<TopBottomLimitT>(value); }
    template<typename TopBottomLimitT = TopicConstantValue>
    TopicIRFilterOption& WithTopBottomLimit(TopBottomLimitT&& value) { SetTopBottomLimit(std::forward<TopBottomLimitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort direction for the <code>TopicIRFilterOption</code>.</p>
     */
    inline TopicSortDirection GetSortDirection() const { return m_sortDirection; }
    inline bool SortDirectionHasBeenSet() const { return m_sortDirectionHasBeenSet; }
    inline void SetSortDirection(TopicSortDirection value) { m_sortDirectionHasBeenSet = true; m_sortDirection = value; }
    inline TopicIRFilterOption& WithSortDirection(TopicSortDirection value) { SetSortDirection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The anchor for the <code>TopicIRFilterOption</code>.</p>
     */
    inline const Anchor& GetAnchor() const { return m_anchor; }
    inline bool AnchorHasBeenSet() const { return m_anchorHasBeenSet; }
    template<typename AnchorT = Anchor>
    void SetAnchor(AnchorT&& value) { m_anchorHasBeenSet = true; m_anchor = std::forward<AnchorT>(value); }
    template<typename AnchorT = Anchor>
    TopicIRFilterOption& WithAnchor(AnchorT&& value) { SetAnchor(std::forward<AnchorT>(value)); return *this;}
    ///@}
  private:

    TopicIRFilterType m_filterType{TopicIRFilterType::NOT_SET};
    bool m_filterTypeHasBeenSet = false;

    FilterClass m_filterClass{FilterClass::NOT_SET};
    bool m_filterClassHasBeenSet = false;

    Identifier m_operandField;
    bool m_operandFieldHasBeenSet = false;

    TopicIRFilterFunction m_function{TopicIRFilterFunction::NOT_SET};
    bool m_functionHasBeenSet = false;

    TopicConstantValue m_constant;
    bool m_constantHasBeenSet = false;

    bool m_inverse{false};
    bool m_inverseHasBeenSet = false;

    NullFilterOption m_nullFilter{NullFilterOption::NOT_SET};
    bool m_nullFilterHasBeenSet = false;

    AggType m_aggregation{AggType::NOT_SET};
    bool m_aggregationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_aggregationFunctionParameters;
    bool m_aggregationFunctionParametersHasBeenSet = false;

    Aws::Vector<AggregationPartitionBy> m_aggregationPartitionBy;
    bool m_aggregationPartitionByHasBeenSet = false;

    TopicConstantValue m_range;
    bool m_rangeHasBeenSet = false;

    bool m_inclusive{false};
    bool m_inclusiveHasBeenSet = false;

    TimeGranularity m_timeGranularity{TimeGranularity::NOT_SET};
    bool m_timeGranularityHasBeenSet = false;

    TopicConstantValue m_lastNextOffset;
    bool m_lastNextOffsetHasBeenSet = false;

    Aws::Vector<FilterAggMetrics> m_aggMetrics;
    bool m_aggMetricsHasBeenSet = false;

    TopicConstantValue m_topBottomLimit;
    bool m_topBottomLimitHasBeenSet = false;

    TopicSortDirection m_sortDirection{TopicSortDirection::NOT_SET};
    bool m_sortDirectionHasBeenSet = false;

    Anchor m_anchor;
    bool m_anchorHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
