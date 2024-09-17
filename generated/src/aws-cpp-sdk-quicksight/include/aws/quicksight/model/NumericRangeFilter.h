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
    AWS_QUICKSIGHT_API NumericRangeFilter();
    AWS_QUICKSIGHT_API NumericRangeFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API NumericRangeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An identifier that uniquely identifies a filter within a dashboard, analysis,
     * or template.</p>
     */
    inline const Aws::String& GetFilterId() const{ return m_filterId; }
    inline bool FilterIdHasBeenSet() const { return m_filterIdHasBeenSet; }
    inline void SetFilterId(const Aws::String& value) { m_filterIdHasBeenSet = true; m_filterId = value; }
    inline void SetFilterId(Aws::String&& value) { m_filterIdHasBeenSet = true; m_filterId = std::move(value); }
    inline void SetFilterId(const char* value) { m_filterIdHasBeenSet = true; m_filterId.assign(value); }
    inline NumericRangeFilter& WithFilterId(const Aws::String& value) { SetFilterId(value); return *this;}
    inline NumericRangeFilter& WithFilterId(Aws::String&& value) { SetFilterId(std::move(value)); return *this;}
    inline NumericRangeFilter& WithFilterId(const char* value) { SetFilterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The column that the filter is applied to.</p>
     */
    inline const ColumnIdentifier& GetColumn() const{ return m_column; }
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }
    inline void SetColumn(const ColumnIdentifier& value) { m_columnHasBeenSet = true; m_column = value; }
    inline void SetColumn(ColumnIdentifier&& value) { m_columnHasBeenSet = true; m_column = std::move(value); }
    inline NumericRangeFilter& WithColumn(const ColumnIdentifier& value) { SetColumn(value); return *this;}
    inline NumericRangeFilter& WithColumn(ColumnIdentifier&& value) { SetColumn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether the minimum value in the filter value range should be
     * included in the filtered results.</p>
     */
    inline bool GetIncludeMinimum() const{ return m_includeMinimum; }
    inline bool IncludeMinimumHasBeenSet() const { return m_includeMinimumHasBeenSet; }
    inline void SetIncludeMinimum(bool value) { m_includeMinimumHasBeenSet = true; m_includeMinimum = value; }
    inline NumericRangeFilter& WithIncludeMinimum(bool value) { SetIncludeMinimum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether the maximum value in the filter value range should be
     * included in the filtered results.</p>
     */
    inline bool GetIncludeMaximum() const{ return m_includeMaximum; }
    inline bool IncludeMaximumHasBeenSet() const { return m_includeMaximumHasBeenSet; }
    inline void SetIncludeMaximum(bool value) { m_includeMaximumHasBeenSet = true; m_includeMaximum = value; }
    inline NumericRangeFilter& WithIncludeMaximum(bool value) { SetIncludeMaximum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum value for the filter value range.</p>
     */
    inline const NumericRangeFilterValue& GetRangeMinimum() const{ return m_rangeMinimum; }
    inline bool RangeMinimumHasBeenSet() const { return m_rangeMinimumHasBeenSet; }
    inline void SetRangeMinimum(const NumericRangeFilterValue& value) { m_rangeMinimumHasBeenSet = true; m_rangeMinimum = value; }
    inline void SetRangeMinimum(NumericRangeFilterValue&& value) { m_rangeMinimumHasBeenSet = true; m_rangeMinimum = std::move(value); }
    inline NumericRangeFilter& WithRangeMinimum(const NumericRangeFilterValue& value) { SetRangeMinimum(value); return *this;}
    inline NumericRangeFilter& WithRangeMinimum(NumericRangeFilterValue&& value) { SetRangeMinimum(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum value for the filter value range.</p>
     */
    inline const NumericRangeFilterValue& GetRangeMaximum() const{ return m_rangeMaximum; }
    inline bool RangeMaximumHasBeenSet() const { return m_rangeMaximumHasBeenSet; }
    inline void SetRangeMaximum(const NumericRangeFilterValue& value) { m_rangeMaximumHasBeenSet = true; m_rangeMaximum = value; }
    inline void SetRangeMaximum(NumericRangeFilterValue&& value) { m_rangeMaximumHasBeenSet = true; m_rangeMaximum = std::move(value); }
    inline NumericRangeFilter& WithRangeMaximum(const NumericRangeFilterValue& value) { SetRangeMaximum(value); return *this;}
    inline NumericRangeFilter& WithRangeMaximum(NumericRangeFilterValue&& value) { SetRangeMaximum(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Select all of the values. Null is not the assigned value of select all.</p>
     * <ul> <li> <p> <code>FILTER_ALL_VALUES</code> </p> </li> </ul>
     */
    inline const NumericFilterSelectAllOptions& GetSelectAllOptions() const{ return m_selectAllOptions; }
    inline bool SelectAllOptionsHasBeenSet() const { return m_selectAllOptionsHasBeenSet; }
    inline void SetSelectAllOptions(const NumericFilterSelectAllOptions& value) { m_selectAllOptionsHasBeenSet = true; m_selectAllOptions = value; }
    inline void SetSelectAllOptions(NumericFilterSelectAllOptions&& value) { m_selectAllOptionsHasBeenSet = true; m_selectAllOptions = std::move(value); }
    inline NumericRangeFilter& WithSelectAllOptions(const NumericFilterSelectAllOptions& value) { SetSelectAllOptions(value); return *this;}
    inline NumericRangeFilter& WithSelectAllOptions(NumericFilterSelectAllOptions&& value) { SetSelectAllOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aggregation function of the filter.</p>
     */
    inline const AggregationFunction& GetAggregationFunction() const{ return m_aggregationFunction; }
    inline bool AggregationFunctionHasBeenSet() const { return m_aggregationFunctionHasBeenSet; }
    inline void SetAggregationFunction(const AggregationFunction& value) { m_aggregationFunctionHasBeenSet = true; m_aggregationFunction = value; }
    inline void SetAggregationFunction(AggregationFunction&& value) { m_aggregationFunctionHasBeenSet = true; m_aggregationFunction = std::move(value); }
    inline NumericRangeFilter& WithAggregationFunction(const AggregationFunction& value) { SetAggregationFunction(value); return *this;}
    inline NumericRangeFilter& WithAggregationFunction(AggregationFunction&& value) { SetAggregationFunction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This option determines how null values should be treated when filtering
     * data.</p> <ul> <li> <p> <code>ALL_VALUES</code>: Include null values in filtered
     * results.</p> </li> <li> <p> <code>NULLS_ONLY</code>: Only include null values in
     * filtered results.</p> </li> <li> <p> <code>NON_NULLS_ONLY</code>: Exclude null
     * values from filtered results.</p> </li> </ul>
     */
    inline const FilterNullOption& GetNullOption() const{ return m_nullOption; }
    inline bool NullOptionHasBeenSet() const { return m_nullOptionHasBeenSet; }
    inline void SetNullOption(const FilterNullOption& value) { m_nullOptionHasBeenSet = true; m_nullOption = value; }
    inline void SetNullOption(FilterNullOption&& value) { m_nullOptionHasBeenSet = true; m_nullOption = std::move(value); }
    inline NumericRangeFilter& WithNullOption(const FilterNullOption& value) { SetNullOption(value); return *this;}
    inline NumericRangeFilter& WithNullOption(FilterNullOption&& value) { SetNullOption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default configurations for the associated controls. This applies only for
     * filters that are scoped to multiple sheets.</p>
     */
    inline const DefaultFilterControlConfiguration& GetDefaultFilterControlConfiguration() const{ return m_defaultFilterControlConfiguration; }
    inline bool DefaultFilterControlConfigurationHasBeenSet() const { return m_defaultFilterControlConfigurationHasBeenSet; }
    inline void SetDefaultFilterControlConfiguration(const DefaultFilterControlConfiguration& value) { m_defaultFilterControlConfigurationHasBeenSet = true; m_defaultFilterControlConfiguration = value; }
    inline void SetDefaultFilterControlConfiguration(DefaultFilterControlConfiguration&& value) { m_defaultFilterControlConfigurationHasBeenSet = true; m_defaultFilterControlConfiguration = std::move(value); }
    inline NumericRangeFilter& WithDefaultFilterControlConfiguration(const DefaultFilterControlConfiguration& value) { SetDefaultFilterControlConfiguration(value); return *this;}
    inline NumericRangeFilter& WithDefaultFilterControlConfiguration(DefaultFilterControlConfiguration&& value) { SetDefaultFilterControlConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_filterId;
    bool m_filterIdHasBeenSet = false;

    ColumnIdentifier m_column;
    bool m_columnHasBeenSet = false;

    bool m_includeMinimum;
    bool m_includeMinimumHasBeenSet = false;

    bool m_includeMaximum;
    bool m_includeMaximumHasBeenSet = false;

    NumericRangeFilterValue m_rangeMinimum;
    bool m_rangeMinimumHasBeenSet = false;

    NumericRangeFilterValue m_rangeMaximum;
    bool m_rangeMaximumHasBeenSet = false;

    NumericFilterSelectAllOptions m_selectAllOptions;
    bool m_selectAllOptionsHasBeenSet = false;

    AggregationFunction m_aggregationFunction;
    bool m_aggregationFunctionHasBeenSet = false;

    FilterNullOption m_nullOption;
    bool m_nullOptionHasBeenSet = false;

    DefaultFilterControlConfiguration m_defaultFilterControlConfiguration;
    bool m_defaultFilterControlConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
