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
    AWS_QUICKSIGHT_API TopicIRFilterOption();
    AWS_QUICKSIGHT_API TopicIRFilterOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicIRFilterOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The filter type for the <code>TopicIRFilterOption</code>.</p>
     */
    inline const TopicIRFilterType& GetFilterType() const{ return m_filterType; }
    inline bool FilterTypeHasBeenSet() const { return m_filterTypeHasBeenSet; }
    inline void SetFilterType(const TopicIRFilterType& value) { m_filterTypeHasBeenSet = true; m_filterType = value; }
    inline void SetFilterType(TopicIRFilterType&& value) { m_filterTypeHasBeenSet = true; m_filterType = std::move(value); }
    inline TopicIRFilterOption& WithFilterType(const TopicIRFilterType& value) { SetFilterType(value); return *this;}
    inline TopicIRFilterOption& WithFilterType(TopicIRFilterType&& value) { SetFilterType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter class for the <code>TopicIRFilterOption</code>.</p>
     */
    inline const FilterClass& GetFilterClass() const{ return m_filterClass; }
    inline bool FilterClassHasBeenSet() const { return m_filterClassHasBeenSet; }
    inline void SetFilterClass(const FilterClass& value) { m_filterClassHasBeenSet = true; m_filterClass = value; }
    inline void SetFilterClass(FilterClass&& value) { m_filterClassHasBeenSet = true; m_filterClass = std::move(value); }
    inline TopicIRFilterOption& WithFilterClass(const FilterClass& value) { SetFilterClass(value); return *this;}
    inline TopicIRFilterOption& WithFilterClass(FilterClass&& value) { SetFilterClass(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operand field for the <code>TopicIRFilterOption</code>.</p>
     */
    inline const Identifier& GetOperandField() const{ return m_operandField; }
    inline bool OperandFieldHasBeenSet() const { return m_operandFieldHasBeenSet; }
    inline void SetOperandField(const Identifier& value) { m_operandFieldHasBeenSet = true; m_operandField = value; }
    inline void SetOperandField(Identifier&& value) { m_operandFieldHasBeenSet = true; m_operandField = std::move(value); }
    inline TopicIRFilterOption& WithOperandField(const Identifier& value) { SetOperandField(value); return *this;}
    inline TopicIRFilterOption& WithOperandField(Identifier&& value) { SetOperandField(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The function for the <code>TopicIRFilterOption</code>.</p>
     */
    inline const TopicIRFilterFunction& GetFunction() const{ return m_function; }
    inline bool FunctionHasBeenSet() const { return m_functionHasBeenSet; }
    inline void SetFunction(const TopicIRFilterFunction& value) { m_functionHasBeenSet = true; m_function = value; }
    inline void SetFunction(TopicIRFilterFunction&& value) { m_functionHasBeenSet = true; m_function = std::move(value); }
    inline TopicIRFilterOption& WithFunction(const TopicIRFilterFunction& value) { SetFunction(value); return *this;}
    inline TopicIRFilterOption& WithFunction(TopicIRFilterFunction&& value) { SetFunction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The constant for the <code>TopicIRFilterOption</code>.</p>
     */
    inline const TopicConstantValue& GetConstant() const{ return m_constant; }
    inline bool ConstantHasBeenSet() const { return m_constantHasBeenSet; }
    inline void SetConstant(const TopicConstantValue& value) { m_constantHasBeenSet = true; m_constant = value; }
    inline void SetConstant(TopicConstantValue&& value) { m_constantHasBeenSet = true; m_constant = std::move(value); }
    inline TopicIRFilterOption& WithConstant(const TopicConstantValue& value) { SetConstant(value); return *this;}
    inline TopicIRFilterOption& WithConstant(TopicConstantValue&& value) { SetConstant(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inverse for the <code>TopicIRFilterOption</code>.</p>
     */
    inline bool GetInverse() const{ return m_inverse; }
    inline bool InverseHasBeenSet() const { return m_inverseHasBeenSet; }
    inline void SetInverse(bool value) { m_inverseHasBeenSet = true; m_inverse = value; }
    inline TopicIRFilterOption& WithInverse(bool value) { SetInverse(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The null filter for the <code>TopicIRFilterOption</code>.</p>
     */
    inline const NullFilterOption& GetNullFilter() const{ return m_nullFilter; }
    inline bool NullFilterHasBeenSet() const { return m_nullFilterHasBeenSet; }
    inline void SetNullFilter(const NullFilterOption& value) { m_nullFilterHasBeenSet = true; m_nullFilter = value; }
    inline void SetNullFilter(NullFilterOption&& value) { m_nullFilterHasBeenSet = true; m_nullFilter = std::move(value); }
    inline TopicIRFilterOption& WithNullFilter(const NullFilterOption& value) { SetNullFilter(value); return *this;}
    inline TopicIRFilterOption& WithNullFilter(NullFilterOption&& value) { SetNullFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aggregation for the <code>TopicIRFilterOption</code>.</p>
     */
    inline const AggType& GetAggregation() const{ return m_aggregation; }
    inline bool AggregationHasBeenSet() const { return m_aggregationHasBeenSet; }
    inline void SetAggregation(const AggType& value) { m_aggregationHasBeenSet = true; m_aggregation = value; }
    inline void SetAggregation(AggType&& value) { m_aggregationHasBeenSet = true; m_aggregation = std::move(value); }
    inline TopicIRFilterOption& WithAggregation(const AggType& value) { SetAggregation(value); return *this;}
    inline TopicIRFilterOption& WithAggregation(AggType&& value) { SetAggregation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aggregation function parameters for the
     * <code>TopicIRFilterOption</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAggregationFunctionParameters() const{ return m_aggregationFunctionParameters; }
    inline bool AggregationFunctionParametersHasBeenSet() const { return m_aggregationFunctionParametersHasBeenSet; }
    inline void SetAggregationFunctionParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_aggregationFunctionParametersHasBeenSet = true; m_aggregationFunctionParameters = value; }
    inline void SetAggregationFunctionParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_aggregationFunctionParametersHasBeenSet = true; m_aggregationFunctionParameters = std::move(value); }
    inline TopicIRFilterOption& WithAggregationFunctionParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetAggregationFunctionParameters(value); return *this;}
    inline TopicIRFilterOption& WithAggregationFunctionParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetAggregationFunctionParameters(std::move(value)); return *this;}
    inline TopicIRFilterOption& AddAggregationFunctionParameters(const Aws::String& key, const Aws::String& value) { m_aggregationFunctionParametersHasBeenSet = true; m_aggregationFunctionParameters.emplace(key, value); return *this; }
    inline TopicIRFilterOption& AddAggregationFunctionParameters(Aws::String&& key, const Aws::String& value) { m_aggregationFunctionParametersHasBeenSet = true; m_aggregationFunctionParameters.emplace(std::move(key), value); return *this; }
    inline TopicIRFilterOption& AddAggregationFunctionParameters(const Aws::String& key, Aws::String&& value) { m_aggregationFunctionParametersHasBeenSet = true; m_aggregationFunctionParameters.emplace(key, std::move(value)); return *this; }
    inline TopicIRFilterOption& AddAggregationFunctionParameters(Aws::String&& key, Aws::String&& value) { m_aggregationFunctionParametersHasBeenSet = true; m_aggregationFunctionParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline TopicIRFilterOption& AddAggregationFunctionParameters(const char* key, Aws::String&& value) { m_aggregationFunctionParametersHasBeenSet = true; m_aggregationFunctionParameters.emplace(key, std::move(value)); return *this; }
    inline TopicIRFilterOption& AddAggregationFunctionParameters(Aws::String&& key, const char* value) { m_aggregationFunctionParametersHasBeenSet = true; m_aggregationFunctionParameters.emplace(std::move(key), value); return *this; }
    inline TopicIRFilterOption& AddAggregationFunctionParameters(const char* key, const char* value) { m_aggregationFunctionParametersHasBeenSet = true; m_aggregationFunctionParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>AggregationPartitionBy</code> for the
     * <code>TopicIRFilterOption</code>.</p>
     */
    inline const Aws::Vector<AggregationPartitionBy>& GetAggregationPartitionBy() const{ return m_aggregationPartitionBy; }
    inline bool AggregationPartitionByHasBeenSet() const { return m_aggregationPartitionByHasBeenSet; }
    inline void SetAggregationPartitionBy(const Aws::Vector<AggregationPartitionBy>& value) { m_aggregationPartitionByHasBeenSet = true; m_aggregationPartitionBy = value; }
    inline void SetAggregationPartitionBy(Aws::Vector<AggregationPartitionBy>&& value) { m_aggregationPartitionByHasBeenSet = true; m_aggregationPartitionBy = std::move(value); }
    inline TopicIRFilterOption& WithAggregationPartitionBy(const Aws::Vector<AggregationPartitionBy>& value) { SetAggregationPartitionBy(value); return *this;}
    inline TopicIRFilterOption& WithAggregationPartitionBy(Aws::Vector<AggregationPartitionBy>&& value) { SetAggregationPartitionBy(std::move(value)); return *this;}
    inline TopicIRFilterOption& AddAggregationPartitionBy(const AggregationPartitionBy& value) { m_aggregationPartitionByHasBeenSet = true; m_aggregationPartitionBy.push_back(value); return *this; }
    inline TopicIRFilterOption& AddAggregationPartitionBy(AggregationPartitionBy&& value) { m_aggregationPartitionByHasBeenSet = true; m_aggregationPartitionBy.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The range for the <code>TopicIRFilterOption</code>.</p>
     */
    inline const TopicConstantValue& GetRange() const{ return m_range; }
    inline bool RangeHasBeenSet() const { return m_rangeHasBeenSet; }
    inline void SetRange(const TopicConstantValue& value) { m_rangeHasBeenSet = true; m_range = value; }
    inline void SetRange(TopicConstantValue&& value) { m_rangeHasBeenSet = true; m_range = std::move(value); }
    inline TopicIRFilterOption& WithRange(const TopicConstantValue& value) { SetRange(value); return *this;}
    inline TopicIRFilterOption& WithRange(TopicConstantValue&& value) { SetRange(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inclusive for the <code>TopicIRFilterOption</code>.</p>
     */
    inline bool GetInclusive() const{ return m_inclusive; }
    inline bool InclusiveHasBeenSet() const { return m_inclusiveHasBeenSet; }
    inline void SetInclusive(bool value) { m_inclusiveHasBeenSet = true; m_inclusive = value; }
    inline TopicIRFilterOption& WithInclusive(bool value) { SetInclusive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time granularity for the <code>TopicIRFilterOption</code>.</p>
     */
    inline const TimeGranularity& GetTimeGranularity() const{ return m_timeGranularity; }
    inline bool TimeGranularityHasBeenSet() const { return m_timeGranularityHasBeenSet; }
    inline void SetTimeGranularity(const TimeGranularity& value) { m_timeGranularityHasBeenSet = true; m_timeGranularity = value; }
    inline void SetTimeGranularity(TimeGranularity&& value) { m_timeGranularityHasBeenSet = true; m_timeGranularity = std::move(value); }
    inline TopicIRFilterOption& WithTimeGranularity(const TimeGranularity& value) { SetTimeGranularity(value); return *this;}
    inline TopicIRFilterOption& WithTimeGranularity(TimeGranularity&& value) { SetTimeGranularity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last next offset for the <code>TopicIRFilterOption</code>.</p>
     */
    inline const TopicConstantValue& GetLastNextOffset() const{ return m_lastNextOffset; }
    inline bool LastNextOffsetHasBeenSet() const { return m_lastNextOffsetHasBeenSet; }
    inline void SetLastNextOffset(const TopicConstantValue& value) { m_lastNextOffsetHasBeenSet = true; m_lastNextOffset = value; }
    inline void SetLastNextOffset(TopicConstantValue&& value) { m_lastNextOffsetHasBeenSet = true; m_lastNextOffset = std::move(value); }
    inline TopicIRFilterOption& WithLastNextOffset(const TopicConstantValue& value) { SetLastNextOffset(value); return *this;}
    inline TopicIRFilterOption& WithLastNextOffset(TopicConstantValue&& value) { SetLastNextOffset(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The agg metrics for the <code>TopicIRFilterOption</code>.</p>
     */
    inline const Aws::Vector<FilterAggMetrics>& GetAggMetrics() const{ return m_aggMetrics; }
    inline bool AggMetricsHasBeenSet() const { return m_aggMetricsHasBeenSet; }
    inline void SetAggMetrics(const Aws::Vector<FilterAggMetrics>& value) { m_aggMetricsHasBeenSet = true; m_aggMetrics = value; }
    inline void SetAggMetrics(Aws::Vector<FilterAggMetrics>&& value) { m_aggMetricsHasBeenSet = true; m_aggMetrics = std::move(value); }
    inline TopicIRFilterOption& WithAggMetrics(const Aws::Vector<FilterAggMetrics>& value) { SetAggMetrics(value); return *this;}
    inline TopicIRFilterOption& WithAggMetrics(Aws::Vector<FilterAggMetrics>&& value) { SetAggMetrics(std::move(value)); return *this;}
    inline TopicIRFilterOption& AddAggMetrics(const FilterAggMetrics& value) { m_aggMetricsHasBeenSet = true; m_aggMetrics.push_back(value); return *this; }
    inline TopicIRFilterOption& AddAggMetrics(FilterAggMetrics&& value) { m_aggMetricsHasBeenSet = true; m_aggMetrics.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>TopBottomLimit</code> for the <code>TopicIRFilterOption</code>.</p>
     */
    inline const TopicConstantValue& GetTopBottomLimit() const{ return m_topBottomLimit; }
    inline bool TopBottomLimitHasBeenSet() const { return m_topBottomLimitHasBeenSet; }
    inline void SetTopBottomLimit(const TopicConstantValue& value) { m_topBottomLimitHasBeenSet = true; m_topBottomLimit = value; }
    inline void SetTopBottomLimit(TopicConstantValue&& value) { m_topBottomLimitHasBeenSet = true; m_topBottomLimit = std::move(value); }
    inline TopicIRFilterOption& WithTopBottomLimit(const TopicConstantValue& value) { SetTopBottomLimit(value); return *this;}
    inline TopicIRFilterOption& WithTopBottomLimit(TopicConstantValue&& value) { SetTopBottomLimit(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort direction for the <code>TopicIRFilterOption</code>.</p>
     */
    inline const TopicSortDirection& GetSortDirection() const{ return m_sortDirection; }
    inline bool SortDirectionHasBeenSet() const { return m_sortDirectionHasBeenSet; }
    inline void SetSortDirection(const TopicSortDirection& value) { m_sortDirectionHasBeenSet = true; m_sortDirection = value; }
    inline void SetSortDirection(TopicSortDirection&& value) { m_sortDirectionHasBeenSet = true; m_sortDirection = std::move(value); }
    inline TopicIRFilterOption& WithSortDirection(const TopicSortDirection& value) { SetSortDirection(value); return *this;}
    inline TopicIRFilterOption& WithSortDirection(TopicSortDirection&& value) { SetSortDirection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The anchor for the <code>TopicIRFilterOption</code>.</p>
     */
    inline const Anchor& GetAnchor() const{ return m_anchor; }
    inline bool AnchorHasBeenSet() const { return m_anchorHasBeenSet; }
    inline void SetAnchor(const Anchor& value) { m_anchorHasBeenSet = true; m_anchor = value; }
    inline void SetAnchor(Anchor&& value) { m_anchorHasBeenSet = true; m_anchor = std::move(value); }
    inline TopicIRFilterOption& WithAnchor(const Anchor& value) { SetAnchor(value); return *this;}
    inline TopicIRFilterOption& WithAnchor(Anchor&& value) { SetAnchor(std::move(value)); return *this;}
    ///@}
  private:

    TopicIRFilterType m_filterType;
    bool m_filterTypeHasBeenSet = false;

    FilterClass m_filterClass;
    bool m_filterClassHasBeenSet = false;

    Identifier m_operandField;
    bool m_operandFieldHasBeenSet = false;

    TopicIRFilterFunction m_function;
    bool m_functionHasBeenSet = false;

    TopicConstantValue m_constant;
    bool m_constantHasBeenSet = false;

    bool m_inverse;
    bool m_inverseHasBeenSet = false;

    NullFilterOption m_nullFilter;
    bool m_nullFilterHasBeenSet = false;

    AggType m_aggregation;
    bool m_aggregationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_aggregationFunctionParameters;
    bool m_aggregationFunctionParametersHasBeenSet = false;

    Aws::Vector<AggregationPartitionBy> m_aggregationPartitionBy;
    bool m_aggregationPartitionByHasBeenSet = false;

    TopicConstantValue m_range;
    bool m_rangeHasBeenSet = false;

    bool m_inclusive;
    bool m_inclusiveHasBeenSet = false;

    TimeGranularity m_timeGranularity;
    bool m_timeGranularityHasBeenSet = false;

    TopicConstantValue m_lastNextOffset;
    bool m_lastNextOffsetHasBeenSet = false;

    Aws::Vector<FilterAggMetrics> m_aggMetrics;
    bool m_aggMetricsHasBeenSet = false;

    TopicConstantValue m_topBottomLimit;
    bool m_topBottomLimitHasBeenSet = false;

    TopicSortDirection m_sortDirection;
    bool m_sortDirectionHasBeenSet = false;

    Anchor m_anchor;
    bool m_anchorHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
