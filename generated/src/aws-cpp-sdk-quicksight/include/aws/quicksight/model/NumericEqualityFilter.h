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
    inline NumericEqualityFilter& WithFilterId(const Aws::String& value) { SetFilterId(value); return *this;}
    inline NumericEqualityFilter& WithFilterId(Aws::String&& value) { SetFilterId(std::move(value)); return *this;}
    inline NumericEqualityFilter& WithFilterId(const char* value) { SetFilterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The column that the filter is applied to.</p>
     */
    inline const ColumnIdentifier& GetColumn() const{ return m_column; }
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }
    inline void SetColumn(const ColumnIdentifier& value) { m_columnHasBeenSet = true; m_column = value; }
    inline void SetColumn(ColumnIdentifier&& value) { m_columnHasBeenSet = true; m_column = std::move(value); }
    inline NumericEqualityFilter& WithColumn(const ColumnIdentifier& value) { SetColumn(value); return *this;}
    inline NumericEqualityFilter& WithColumn(ColumnIdentifier&& value) { SetColumn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input value.</p>
     */
    inline double GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }
    inline NumericEqualityFilter& WithValue(double value) { SetValue(value); return *this;}
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
    inline NumericEqualityFilter& WithSelectAllOptions(const NumericFilterSelectAllOptions& value) { SetSelectAllOptions(value); return *this;}
    inline NumericEqualityFilter& WithSelectAllOptions(NumericFilterSelectAllOptions&& value) { SetSelectAllOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The match operator that is used to determine if a filter should be
     * applied.</p>
     */
    inline const NumericEqualityMatchOperator& GetMatchOperator() const{ return m_matchOperator; }
    inline bool MatchOperatorHasBeenSet() const { return m_matchOperatorHasBeenSet; }
    inline void SetMatchOperator(const NumericEqualityMatchOperator& value) { m_matchOperatorHasBeenSet = true; m_matchOperator = value; }
    inline void SetMatchOperator(NumericEqualityMatchOperator&& value) { m_matchOperatorHasBeenSet = true; m_matchOperator = std::move(value); }
    inline NumericEqualityFilter& WithMatchOperator(const NumericEqualityMatchOperator& value) { SetMatchOperator(value); return *this;}
    inline NumericEqualityFilter& WithMatchOperator(NumericEqualityMatchOperator&& value) { SetMatchOperator(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aggregation function of the filter.</p>
     */
    inline const AggregationFunction& GetAggregationFunction() const{ return m_aggregationFunction; }
    inline bool AggregationFunctionHasBeenSet() const { return m_aggregationFunctionHasBeenSet; }
    inline void SetAggregationFunction(const AggregationFunction& value) { m_aggregationFunctionHasBeenSet = true; m_aggregationFunction = value; }
    inline void SetAggregationFunction(AggregationFunction&& value) { m_aggregationFunctionHasBeenSet = true; m_aggregationFunction = std::move(value); }
    inline NumericEqualityFilter& WithAggregationFunction(const AggregationFunction& value) { SetAggregationFunction(value); return *this;}
    inline NumericEqualityFilter& WithAggregationFunction(AggregationFunction&& value) { SetAggregationFunction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter whose value should be used for the filter value.</p>
     */
    inline const Aws::String& GetParameterName() const{ return m_parameterName; }
    inline bool ParameterNameHasBeenSet() const { return m_parameterNameHasBeenSet; }
    inline void SetParameterName(const Aws::String& value) { m_parameterNameHasBeenSet = true; m_parameterName = value; }
    inline void SetParameterName(Aws::String&& value) { m_parameterNameHasBeenSet = true; m_parameterName = std::move(value); }
    inline void SetParameterName(const char* value) { m_parameterNameHasBeenSet = true; m_parameterName.assign(value); }
    inline NumericEqualityFilter& WithParameterName(const Aws::String& value) { SetParameterName(value); return *this;}
    inline NumericEqualityFilter& WithParameterName(Aws::String&& value) { SetParameterName(std::move(value)); return *this;}
    inline NumericEqualityFilter& WithParameterName(const char* value) { SetParameterName(value); return *this;}
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
    inline NumericEqualityFilter& WithNullOption(const FilterNullOption& value) { SetNullOption(value); return *this;}
    inline NumericEqualityFilter& WithNullOption(FilterNullOption&& value) { SetNullOption(std::move(value)); return *this;}
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
    inline NumericEqualityFilter& WithDefaultFilterControlConfiguration(const DefaultFilterControlConfiguration& value) { SetDefaultFilterControlConfiguration(value); return *this;}
    inline NumericEqualityFilter& WithDefaultFilterControlConfiguration(DefaultFilterControlConfiguration&& value) { SetDefaultFilterControlConfiguration(std::move(value)); return *this;}
    ///@}
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

    DefaultFilterControlConfiguration m_defaultFilterControlConfiguration;
    bool m_defaultFilterControlConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
