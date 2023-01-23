/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ColumnIdentifier.h>
#include <aws/quicksight/model/NumericFilterSelectAllOptions.h>
#include <aws/quicksight/model/NumericEqualityMatchOperator.h>
#include <aws/quicksight/model/AggregationFunction.h>
#include <aws/quicksight/model/FilterNullOption.h>
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
   * <p>A <code>NumericEqualityFilter</code> filters values that are equal to the
   * specified value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/NumericEqualityFilter">AWS
   * API Reference</a></p>
   */
  class NumericEqualityFilter
  {
  public:
    AWS_QUICKSIGHT_API NumericEqualityFilter();
    AWS_QUICKSIGHT_API NumericEqualityFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API NumericEqualityFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An identifier that uniquely identifies a filter within a dashboard, analysis,
     * or template.</p>
     */
    inline const Aws::String& GetFilterId() const{ return m_filterId; }

    /**
     * <p>An identifier that uniquely identifies a filter within a dashboard, analysis,
     * or template.</p>
     */
    inline bool FilterIdHasBeenSet() const { return m_filterIdHasBeenSet; }

    /**
     * <p>An identifier that uniquely identifies a filter within a dashboard, analysis,
     * or template.</p>
     */
    inline void SetFilterId(const Aws::String& value) { m_filterIdHasBeenSet = true; m_filterId = value; }

    /**
     * <p>An identifier that uniquely identifies a filter within a dashboard, analysis,
     * or template.</p>
     */
    inline void SetFilterId(Aws::String&& value) { m_filterIdHasBeenSet = true; m_filterId = std::move(value); }

    /**
     * <p>An identifier that uniquely identifies a filter within a dashboard, analysis,
     * or template.</p>
     */
    inline void SetFilterId(const char* value) { m_filterIdHasBeenSet = true; m_filterId.assign(value); }

    /**
     * <p>An identifier that uniquely identifies a filter within a dashboard, analysis,
     * or template.</p>
     */
    inline NumericEqualityFilter& WithFilterId(const Aws::String& value) { SetFilterId(value); return *this;}

    /**
     * <p>An identifier that uniquely identifies a filter within a dashboard, analysis,
     * or template.</p>
     */
    inline NumericEqualityFilter& WithFilterId(Aws::String&& value) { SetFilterId(std::move(value)); return *this;}

    /**
     * <p>An identifier that uniquely identifies a filter within a dashboard, analysis,
     * or template.</p>
     */
    inline NumericEqualityFilter& WithFilterId(const char* value) { SetFilterId(value); return *this;}


    /**
     * <p>The column that the filter is applied to.</p>
     */
    inline const ColumnIdentifier& GetColumn() const{ return m_column; }

    /**
     * <p>The column that the filter is applied to.</p>
     */
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }

    /**
     * <p>The column that the filter is applied to.</p>
     */
    inline void SetColumn(const ColumnIdentifier& value) { m_columnHasBeenSet = true; m_column = value; }

    /**
     * <p>The column that the filter is applied to.</p>
     */
    inline void SetColumn(ColumnIdentifier&& value) { m_columnHasBeenSet = true; m_column = std::move(value); }

    /**
     * <p>The column that the filter is applied to.</p>
     */
    inline NumericEqualityFilter& WithColumn(const ColumnIdentifier& value) { SetColumn(value); return *this;}

    /**
     * <p>The column that the filter is applied to.</p>
     */
    inline NumericEqualityFilter& WithColumn(ColumnIdentifier&& value) { SetColumn(std::move(value)); return *this;}


    /**
     * <p>The input value.</p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>The input value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The input value.</p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The input value.</p>
     */
    inline NumericEqualityFilter& WithValue(double value) { SetValue(value); return *this;}


    /**
     * <p>Select all of the values. Null is not the assigned value of select all.</p>
     * <ul> <li> <p> <code>FILTER_ALL_VALUES</code> </p> </li> </ul>
     */
    inline const NumericFilterSelectAllOptions& GetSelectAllOptions() const{ return m_selectAllOptions; }

    /**
     * <p>Select all of the values. Null is not the assigned value of select all.</p>
     * <ul> <li> <p> <code>FILTER_ALL_VALUES</code> </p> </li> </ul>
     */
    inline bool SelectAllOptionsHasBeenSet() const { return m_selectAllOptionsHasBeenSet; }

    /**
     * <p>Select all of the values. Null is not the assigned value of select all.</p>
     * <ul> <li> <p> <code>FILTER_ALL_VALUES</code> </p> </li> </ul>
     */
    inline void SetSelectAllOptions(const NumericFilterSelectAllOptions& value) { m_selectAllOptionsHasBeenSet = true; m_selectAllOptions = value; }

    /**
     * <p>Select all of the values. Null is not the assigned value of select all.</p>
     * <ul> <li> <p> <code>FILTER_ALL_VALUES</code> </p> </li> </ul>
     */
    inline void SetSelectAllOptions(NumericFilterSelectAllOptions&& value) { m_selectAllOptionsHasBeenSet = true; m_selectAllOptions = std::move(value); }

    /**
     * <p>Select all of the values. Null is not the assigned value of select all.</p>
     * <ul> <li> <p> <code>FILTER_ALL_VALUES</code> </p> </li> </ul>
     */
    inline NumericEqualityFilter& WithSelectAllOptions(const NumericFilterSelectAllOptions& value) { SetSelectAllOptions(value); return *this;}

    /**
     * <p>Select all of the values. Null is not the assigned value of select all.</p>
     * <ul> <li> <p> <code>FILTER_ALL_VALUES</code> </p> </li> </ul>
     */
    inline NumericEqualityFilter& WithSelectAllOptions(NumericFilterSelectAllOptions&& value) { SetSelectAllOptions(std::move(value)); return *this;}


    /**
     * <p>The match operator that is used to determine if a filter should be
     * applied.</p>
     */
    inline const NumericEqualityMatchOperator& GetMatchOperator() const{ return m_matchOperator; }

    /**
     * <p>The match operator that is used to determine if a filter should be
     * applied.</p>
     */
    inline bool MatchOperatorHasBeenSet() const { return m_matchOperatorHasBeenSet; }

    /**
     * <p>The match operator that is used to determine if a filter should be
     * applied.</p>
     */
    inline void SetMatchOperator(const NumericEqualityMatchOperator& value) { m_matchOperatorHasBeenSet = true; m_matchOperator = value; }

    /**
     * <p>The match operator that is used to determine if a filter should be
     * applied.</p>
     */
    inline void SetMatchOperator(NumericEqualityMatchOperator&& value) { m_matchOperatorHasBeenSet = true; m_matchOperator = std::move(value); }

    /**
     * <p>The match operator that is used to determine if a filter should be
     * applied.</p>
     */
    inline NumericEqualityFilter& WithMatchOperator(const NumericEqualityMatchOperator& value) { SetMatchOperator(value); return *this;}

    /**
     * <p>The match operator that is used to determine if a filter should be
     * applied.</p>
     */
    inline NumericEqualityFilter& WithMatchOperator(NumericEqualityMatchOperator&& value) { SetMatchOperator(std::move(value)); return *this;}


    /**
     * <p>The aggregation function of the filter.</p>
     */
    inline const AggregationFunction& GetAggregationFunction() const{ return m_aggregationFunction; }

    /**
     * <p>The aggregation function of the filter.</p>
     */
    inline bool AggregationFunctionHasBeenSet() const { return m_aggregationFunctionHasBeenSet; }

    /**
     * <p>The aggregation function of the filter.</p>
     */
    inline void SetAggregationFunction(const AggregationFunction& value) { m_aggregationFunctionHasBeenSet = true; m_aggregationFunction = value; }

    /**
     * <p>The aggregation function of the filter.</p>
     */
    inline void SetAggregationFunction(AggregationFunction&& value) { m_aggregationFunctionHasBeenSet = true; m_aggregationFunction = std::move(value); }

    /**
     * <p>The aggregation function of the filter.</p>
     */
    inline NumericEqualityFilter& WithAggregationFunction(const AggregationFunction& value) { SetAggregationFunction(value); return *this;}

    /**
     * <p>The aggregation function of the filter.</p>
     */
    inline NumericEqualityFilter& WithAggregationFunction(AggregationFunction&& value) { SetAggregationFunction(std::move(value)); return *this;}


    /**
     * <p>The parameter whose value should be used for the filter value.</p>
     */
    inline const Aws::String& GetParameterName() const{ return m_parameterName; }

    /**
     * <p>The parameter whose value should be used for the filter value.</p>
     */
    inline bool ParameterNameHasBeenSet() const { return m_parameterNameHasBeenSet; }

    /**
     * <p>The parameter whose value should be used for the filter value.</p>
     */
    inline void SetParameterName(const Aws::String& value) { m_parameterNameHasBeenSet = true; m_parameterName = value; }

    /**
     * <p>The parameter whose value should be used for the filter value.</p>
     */
    inline void SetParameterName(Aws::String&& value) { m_parameterNameHasBeenSet = true; m_parameterName = std::move(value); }

    /**
     * <p>The parameter whose value should be used for the filter value.</p>
     */
    inline void SetParameterName(const char* value) { m_parameterNameHasBeenSet = true; m_parameterName.assign(value); }

    /**
     * <p>The parameter whose value should be used for the filter value.</p>
     */
    inline NumericEqualityFilter& WithParameterName(const Aws::String& value) { SetParameterName(value); return *this;}

    /**
     * <p>The parameter whose value should be used for the filter value.</p>
     */
    inline NumericEqualityFilter& WithParameterName(Aws::String&& value) { SetParameterName(std::move(value)); return *this;}

    /**
     * <p>The parameter whose value should be used for the filter value.</p>
     */
    inline NumericEqualityFilter& WithParameterName(const char* value) { SetParameterName(value); return *this;}


    /**
     * <p>This option determines how null values should be treated when filtering
     * data.</p> <ul> <li> <p> <code>ALL_VALUES</code>: Include null values in filtered
     * results.</p> </li> <li> <p> <code>NULLS_ONLY</code>: Only include null values in
     * filtered results.</p> </li> <li> <p> <code>NON_NULLS_ONLY</code>: Exclude null
     * values from filtered results.</p> </li> </ul>
     */
    inline const FilterNullOption& GetNullOption() const{ return m_nullOption; }

    /**
     * <p>This option determines how null values should be treated when filtering
     * data.</p> <ul> <li> <p> <code>ALL_VALUES</code>: Include null values in filtered
     * results.</p> </li> <li> <p> <code>NULLS_ONLY</code>: Only include null values in
     * filtered results.</p> </li> <li> <p> <code>NON_NULLS_ONLY</code>: Exclude null
     * values from filtered results.</p> </li> </ul>
     */
    inline bool NullOptionHasBeenSet() const { return m_nullOptionHasBeenSet; }

    /**
     * <p>This option determines how null values should be treated when filtering
     * data.</p> <ul> <li> <p> <code>ALL_VALUES</code>: Include null values in filtered
     * results.</p> </li> <li> <p> <code>NULLS_ONLY</code>: Only include null values in
     * filtered results.</p> </li> <li> <p> <code>NON_NULLS_ONLY</code>: Exclude null
     * values from filtered results.</p> </li> </ul>
     */
    inline void SetNullOption(const FilterNullOption& value) { m_nullOptionHasBeenSet = true; m_nullOption = value; }

    /**
     * <p>This option determines how null values should be treated when filtering
     * data.</p> <ul> <li> <p> <code>ALL_VALUES</code>: Include null values in filtered
     * results.</p> </li> <li> <p> <code>NULLS_ONLY</code>: Only include null values in
     * filtered results.</p> </li> <li> <p> <code>NON_NULLS_ONLY</code>: Exclude null
     * values from filtered results.</p> </li> </ul>
     */
    inline void SetNullOption(FilterNullOption&& value) { m_nullOptionHasBeenSet = true; m_nullOption = std::move(value); }

    /**
     * <p>This option determines how null values should be treated when filtering
     * data.</p> <ul> <li> <p> <code>ALL_VALUES</code>: Include null values in filtered
     * results.</p> </li> <li> <p> <code>NULLS_ONLY</code>: Only include null values in
     * filtered results.</p> </li> <li> <p> <code>NON_NULLS_ONLY</code>: Exclude null
     * values from filtered results.</p> </li> </ul>
     */
    inline NumericEqualityFilter& WithNullOption(const FilterNullOption& value) { SetNullOption(value); return *this;}

    /**
     * <p>This option determines how null values should be treated when filtering
     * data.</p> <ul> <li> <p> <code>ALL_VALUES</code>: Include null values in filtered
     * results.</p> </li> <li> <p> <code>NULLS_ONLY</code>: Only include null values in
     * filtered results.</p> </li> <li> <p> <code>NON_NULLS_ONLY</code>: Exclude null
     * values from filtered results.</p> </li> </ul>
     */
    inline NumericEqualityFilter& WithNullOption(FilterNullOption&& value) { SetNullOption(std::move(value)); return *this;}

  private:

    Aws::String m_filterId;
    bool m_filterIdHasBeenSet = false;

    ColumnIdentifier m_column;
    bool m_columnHasBeenSet = false;

    double m_value;
    bool m_valueHasBeenSet = false;

    NumericFilterSelectAllOptions m_selectAllOptions;
    bool m_selectAllOptionsHasBeenSet = false;

    NumericEqualityMatchOperator m_matchOperator;
    bool m_matchOperatorHasBeenSet = false;

    AggregationFunction m_aggregationFunction;
    bool m_aggregationFunctionHasBeenSet = false;

    Aws::String m_parameterName;
    bool m_parameterNameHasBeenSet = false;

    FilterNullOption m_nullOption;
    bool m_nullOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
