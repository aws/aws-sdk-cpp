/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ColumnIdentifier.h>
#include <aws/quicksight/model/NumericRangeFilterValue.h>
#include <aws/quicksight/model/NumericFilterSelectAllOptions.h>
#include <aws/quicksight/model/AggregationFunction.h>
#include <aws/quicksight/model/FilterNullOption.h>
#include <aws/quicksight/model/DefaultFilterControlConfiguration.h>
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
   * <p>A <code>NumericRangeFilter</code> filters values that are within the value
   * range.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/NumericRangeFilter">AWS
   * API Reference</a></p>
   */
  class NumericRangeFilter
  {
  public:
    AWS_QUICKSIGHT_API NumericRangeFilter() = default;
    AWS_QUICKSIGHT_API NumericRangeFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API NumericRangeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An identifier that uniquely identifies a filter within a dashboard, analysis,
     * or template.</p>
     */
    inline const Aws::String& GetFilterId() const { return m_filterId; }
    inline bool FilterIdHasBeenSet() const { return m_filterIdHasBeenSet; }
    template<typename FilterIdT = Aws::String>
    void SetFilterId(FilterIdT&& value) { m_filterIdHasBeenSet = true; m_filterId = std::forward<FilterIdT>(value); }
    template<typename FilterIdT = Aws::String>
    NumericRangeFilter& WithFilterId(FilterIdT&& value) { SetFilterId(std::forward<FilterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The column that the filter is applied to.</p>
     */
    inline const ColumnIdentifier& GetColumn() const { return m_column; }
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }
    template<typename ColumnT = ColumnIdentifier>
    void SetColumn(ColumnT&& value) { m_columnHasBeenSet = true; m_column = std::forward<ColumnT>(value); }
    template<typename ColumnT = ColumnIdentifier>
    NumericRangeFilter& WithColumn(ColumnT&& value) { SetColumn(std::forward<ColumnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether the minimum value in the filter value range should be
     * included in the filtered results.</p>
     */
    inline bool GetIncludeMinimum() const { return m_includeMinimum; }
    inline bool IncludeMinimumHasBeenSet() const { return m_includeMinimumHasBeenSet; }
    inline void SetIncludeMinimum(bool value) { m_includeMinimumHasBeenSet = true; m_includeMinimum = value; }
    inline NumericRangeFilter& WithIncludeMinimum(bool value) { SetIncludeMinimum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether the maximum value in the filter value range should be
     * included in the filtered results.</p>
     */
    inline bool GetIncludeMaximum() const { return m_includeMaximum; }
    inline bool IncludeMaximumHasBeenSet() const { return m_includeMaximumHasBeenSet; }
    inline void SetIncludeMaximum(bool value) { m_includeMaximumHasBeenSet = true; m_includeMaximum = value; }
    inline NumericRangeFilter& WithIncludeMaximum(bool value) { SetIncludeMaximum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum value for the filter value range.</p>
     */
    inline const NumericRangeFilterValue& GetRangeMinimum() const { return m_rangeMinimum; }
    inline bool RangeMinimumHasBeenSet() const { return m_rangeMinimumHasBeenSet; }
    template<typename RangeMinimumT = NumericRangeFilterValue>
    void SetRangeMinimum(RangeMinimumT&& value) { m_rangeMinimumHasBeenSet = true; m_rangeMinimum = std::forward<RangeMinimumT>(value); }
    template<typename RangeMinimumT = NumericRangeFilterValue>
    NumericRangeFilter& WithRangeMinimum(RangeMinimumT&& value) { SetRangeMinimum(std::forward<RangeMinimumT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum value for the filter value range.</p>
     */
    inline const NumericRangeFilterValue& GetRangeMaximum() const { return m_rangeMaximum; }
    inline bool RangeMaximumHasBeenSet() const { return m_rangeMaximumHasBeenSet; }
    template<typename RangeMaximumT = NumericRangeFilterValue>
    void SetRangeMaximum(RangeMaximumT&& value) { m_rangeMaximumHasBeenSet = true; m_rangeMaximum = std::forward<RangeMaximumT>(value); }
    template<typename RangeMaximumT = NumericRangeFilterValue>
    NumericRangeFilter& WithRangeMaximum(RangeMaximumT&& value) { SetRangeMaximum(std::forward<RangeMaximumT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Select all of the values. Null is not the assigned value of select all.</p>
     * <ul> <li> <p> <code>FILTER_ALL_VALUES</code> </p> </li> </ul>
     */
    inline NumericFilterSelectAllOptions GetSelectAllOptions() const { return m_selectAllOptions; }
    inline bool SelectAllOptionsHasBeenSet() const { return m_selectAllOptionsHasBeenSet; }
    inline void SetSelectAllOptions(NumericFilterSelectAllOptions value) { m_selectAllOptionsHasBeenSet = true; m_selectAllOptions = value; }
    inline NumericRangeFilter& WithSelectAllOptions(NumericFilterSelectAllOptions value) { SetSelectAllOptions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aggregation function of the filter.</p>
     */
    inline const AggregationFunction& GetAggregationFunction() const { return m_aggregationFunction; }
    inline bool AggregationFunctionHasBeenSet() const { return m_aggregationFunctionHasBeenSet; }
    template<typename AggregationFunctionT = AggregationFunction>
    void SetAggregationFunction(AggregationFunctionT&& value) { m_aggregationFunctionHasBeenSet = true; m_aggregationFunction = std::forward<AggregationFunctionT>(value); }
    template<typename AggregationFunctionT = AggregationFunction>
    NumericRangeFilter& WithAggregationFunction(AggregationFunctionT&& value) { SetAggregationFunction(std::forward<AggregationFunctionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This option determines how null values should be treated when filtering
     * data.</p> <ul> <li> <p> <code>ALL_VALUES</code>: Include null values in filtered
     * results.</p> </li> <li> <p> <code>NULLS_ONLY</code>: Only include null values in
     * filtered results.</p> </li> <li> <p> <code>NON_NULLS_ONLY</code>: Exclude null
     * values from filtered results.</p> </li> </ul>
     */
    inline FilterNullOption GetNullOption() const { return m_nullOption; }
    inline bool NullOptionHasBeenSet() const { return m_nullOptionHasBeenSet; }
    inline void SetNullOption(FilterNullOption value) { m_nullOptionHasBeenSet = true; m_nullOption = value; }
    inline NumericRangeFilter& WithNullOption(FilterNullOption value) { SetNullOption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default configurations for the associated controls. This applies only for
     * filters that are scoped to multiple sheets.</p>
     */
    inline const DefaultFilterControlConfiguration& GetDefaultFilterControlConfiguration() const { return m_defaultFilterControlConfiguration; }
    inline bool DefaultFilterControlConfigurationHasBeenSet() const { return m_defaultFilterControlConfigurationHasBeenSet; }
    template<typename DefaultFilterControlConfigurationT = DefaultFilterControlConfiguration>
    void SetDefaultFilterControlConfiguration(DefaultFilterControlConfigurationT&& value) { m_defaultFilterControlConfigurationHasBeenSet = true; m_defaultFilterControlConfiguration = std::forward<DefaultFilterControlConfigurationT>(value); }
    template<typename DefaultFilterControlConfigurationT = DefaultFilterControlConfiguration>
    NumericRangeFilter& WithDefaultFilterControlConfiguration(DefaultFilterControlConfigurationT&& value) { SetDefaultFilterControlConfiguration(std::forward<DefaultFilterControlConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_filterId;
    bool m_filterIdHasBeenSet = false;

    ColumnIdentifier m_column;
    bool m_columnHasBeenSet = false;

    bool m_includeMinimum{false};
    bool m_includeMinimumHasBeenSet = false;

    bool m_includeMaximum{false};
    bool m_includeMaximumHasBeenSet = false;

    NumericRangeFilterValue m_rangeMinimum;
    bool m_rangeMinimumHasBeenSet = false;

    NumericRangeFilterValue m_rangeMaximum;
    bool m_rangeMaximumHasBeenSet = false;

    NumericFilterSelectAllOptions m_selectAllOptions{NumericFilterSelectAllOptions::NOT_SET};
    bool m_selectAllOptionsHasBeenSet = false;

    AggregationFunction m_aggregationFunction;
    bool m_aggregationFunctionHasBeenSet = false;

    FilterNullOption m_nullOption{FilterNullOption::NOT_SET};
    bool m_nullOptionHasBeenSet = false;

    DefaultFilterControlConfiguration m_defaultFilterControlConfiguration;
    bool m_defaultFilterControlConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
