/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ColumnIdentifier.h>
#include <aws/core/utils/DateTime.h>
#include <aws/quicksight/model/TimeGranularity.h>
#include <aws/quicksight/model/RollingDateConfiguration.h>
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
   * <p>A <code>TimeEqualityFilter</code> filters values that are equal to a given
   * value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TimeEqualityFilter">AWS
   * API Reference</a></p>
   */
  class TimeEqualityFilter
  {
  public:
    AWS_QUICKSIGHT_API TimeEqualityFilter() = default;
    AWS_QUICKSIGHT_API TimeEqualityFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TimeEqualityFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    TimeEqualityFilter& WithFilterId(FilterIdT&& value) { SetFilterId(std::forward<FilterIdT>(value)); return *this;}
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
    TimeEqualityFilter& WithColumn(ColumnT&& value) { SetColumn(std::forward<ColumnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of a <code>TimeEquality</code> filter.</p> <p>This field is
     * mutually exclusive to <code>RollingDate</code> and
     * <code>ParameterName</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::Utils::DateTime>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::Utils::DateTime>
    TimeEqualityFilter& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter whose value should be used for the filter value.</p> <p>This
     * field is mutually exclusive to <code>Value</code> and
     * <code>RollingDate</code>.</p>
     */
    inline const Aws::String& GetParameterName() const { return m_parameterName; }
    inline bool ParameterNameHasBeenSet() const { return m_parameterNameHasBeenSet; }
    template<typename ParameterNameT = Aws::String>
    void SetParameterName(ParameterNameT&& value) { m_parameterNameHasBeenSet = true; m_parameterName = std::forward<ParameterNameT>(value); }
    template<typename ParameterNameT = Aws::String>
    TimeEqualityFilter& WithParameterName(ParameterNameT&& value) { SetParameterName(std::forward<ParameterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The level of time precision that is used to aggregate <code>DateTime</code>
     * values.</p>
     */
    inline TimeGranularity GetTimeGranularity() const { return m_timeGranularity; }
    inline bool TimeGranularityHasBeenSet() const { return m_timeGranularityHasBeenSet; }
    inline void SetTimeGranularity(TimeGranularity value) { m_timeGranularityHasBeenSet = true; m_timeGranularity = value; }
    inline TimeEqualityFilter& WithTimeGranularity(TimeGranularity value) { SetTimeGranularity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rolling date input for the <code>TimeEquality</code> filter.</p> <p>This
     * field is mutually exclusive to <code>Value</code> and
     * <code>ParameterName</code>.</p>
     */
    inline const RollingDateConfiguration& GetRollingDate() const { return m_rollingDate; }
    inline bool RollingDateHasBeenSet() const { return m_rollingDateHasBeenSet; }
    template<typename RollingDateT = RollingDateConfiguration>
    void SetRollingDate(RollingDateT&& value) { m_rollingDateHasBeenSet = true; m_rollingDate = std::forward<RollingDateT>(value); }
    template<typename RollingDateT = RollingDateConfiguration>
    TimeEqualityFilter& WithRollingDate(RollingDateT&& value) { SetRollingDate(std::forward<RollingDateT>(value)); return *this;}
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
    TimeEqualityFilter& WithDefaultFilterControlConfiguration(DefaultFilterControlConfigurationT&& value) { SetDefaultFilterControlConfiguration(std::forward<DefaultFilterControlConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_filterId;
    bool m_filterIdHasBeenSet = false;

    ColumnIdentifier m_column;
    bool m_columnHasBeenSet = false;

    Aws::Utils::DateTime m_value{};
    bool m_valueHasBeenSet = false;

    Aws::String m_parameterName;
    bool m_parameterNameHasBeenSet = false;

    TimeGranularity m_timeGranularity{TimeGranularity::NOT_SET};
    bool m_timeGranularityHasBeenSet = false;

    RollingDateConfiguration m_rollingDate;
    bool m_rollingDateHasBeenSet = false;

    DefaultFilterControlConfiguration m_defaultFilterControlConfiguration;
    bool m_defaultFilterControlConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
