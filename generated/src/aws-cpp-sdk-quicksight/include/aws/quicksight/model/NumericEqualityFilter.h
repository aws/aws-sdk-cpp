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
    AWS_QUICKSIGHT_API NumericEqualityFilter() = default;
    AWS_QUICKSIGHT_API NumericEqualityFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API NumericEqualityFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    NumericEqualityFilter& WithFilterId(FilterIdT&& value) { SetFilterId(std::forward<FilterIdT>(value)); return *this;}
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
    NumericEqualityFilter& WithColumn(ColumnT&& value) { SetColumn(std::forward<ColumnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input value.</p>
     */
    inline double GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }
    inline NumericEqualityFilter& WithValue(double value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Select all of the values. Null is not the assigned value of select all.</p>
     * <ul> <li> <p> <code>FILTER_ALL_VALUES</code> </p> </li> </ul>
     */
    inline NumericFilterSelectAllOptions GetSelectAllOptions() const { return m_selectAllOptions; }
    inline bool SelectAllOptionsHasBeenSet() const { return m_selectAllOptionsHasBeenSet; }
    inline void SetSelectAllOptions(NumericFilterSelectAllOptions value) { m_selectAllOptionsHasBeenSet = true; m_selectAllOptions = value; }
    inline NumericEqualityFilter& WithSelectAllOptions(NumericFilterSelectAllOptions value) { SetSelectAllOptions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The match operator that is used to determine if a filter should be
     * applied.</p>
     */
    inline NumericEqualityMatchOperator GetMatchOperator() const { return m_matchOperator; }
    inline bool MatchOperatorHasBeenSet() const { return m_matchOperatorHasBeenSet; }
    inline void SetMatchOperator(NumericEqualityMatchOperator value) { m_matchOperatorHasBeenSet = true; m_matchOperator = value; }
    inline NumericEqualityFilter& WithMatchOperator(NumericEqualityMatchOperator value) { SetMatchOperator(value); return *this;}
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
    NumericEqualityFilter& WithAggregationFunction(AggregationFunctionT&& value) { SetAggregationFunction(std::forward<AggregationFunctionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter whose value should be used for the filter value.</p>
     */
    inline const Aws::String& GetParameterName() const { return m_parameterName; }
    inline bool ParameterNameHasBeenSet() const { return m_parameterNameHasBeenSet; }
    template<typename ParameterNameT = Aws::String>
    void SetParameterName(ParameterNameT&& value) { m_parameterNameHasBeenSet = true; m_parameterName = std::forward<ParameterNameT>(value); }
    template<typename ParameterNameT = Aws::String>
    NumericEqualityFilter& WithParameterName(ParameterNameT&& value) { SetParameterName(std::forward<ParameterNameT>(value)); return *this;}
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
    inline NumericEqualityFilter& WithNullOption(FilterNullOption value) { SetNullOption(value); return *this;}
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
    NumericEqualityFilter& WithDefaultFilterControlConfiguration(DefaultFilterControlConfigurationT&& value) { SetDefaultFilterControlConfiguration(std::forward<DefaultFilterControlConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_filterId;
    bool m_filterIdHasBeenSet = false;

    ColumnIdentifier m_column;
    bool m_columnHasBeenSet = false;

    double m_value{0.0};
    bool m_valueHasBeenSet = false;

    NumericFilterSelectAllOptions m_selectAllOptions{NumericFilterSelectAllOptions::NOT_SET};
    bool m_selectAllOptionsHasBeenSet = false;

    NumericEqualityMatchOperator m_matchOperator{NumericEqualityMatchOperator::NOT_SET};
    bool m_matchOperatorHasBeenSet = false;

    AggregationFunction m_aggregationFunction;
    bool m_aggregationFunctionHasBeenSet = false;

    Aws::String m_parameterName;
    bool m_parameterNameHasBeenSet = false;

    FilterNullOption m_nullOption{FilterNullOption::NOT_SET};
    bool m_nullOptionHasBeenSet = false;

    DefaultFilterControlConfiguration m_defaultFilterControlConfiguration;
    bool m_defaultFilterControlConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
