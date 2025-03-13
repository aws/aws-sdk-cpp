/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ColumnIdentifier.h>
#include <aws/quicksight/model/TimeRangeFilterValue.h>
#include <aws/quicksight/model/FilterNullOption.h>
#include <aws/quicksight/model/ExcludePeriodConfiguration.h>
#include <aws/quicksight/model/TimeGranularity.h>
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
   * <p>A <code>TimeRangeFilter</code> filters values that are between two specified
   * values.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TimeRangeFilter">AWS
   * API Reference</a></p>
   */
  class TimeRangeFilter
  {
  public:
    AWS_QUICKSIGHT_API TimeRangeFilter() = default;
    AWS_QUICKSIGHT_API TimeRangeFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TimeRangeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    TimeRangeFilter& WithFilterId(FilterIdT&& value) { SetFilterId(std::forward<FilterIdT>(value)); return *this;}
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
    TimeRangeFilter& WithColumn(ColumnT&& value) { SetColumn(std::forward<ColumnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether the minimum value in the filter value range should be
     * included in the filtered results.</p>
     */
    inline bool GetIncludeMinimum() const { return m_includeMinimum; }
    inline bool IncludeMinimumHasBeenSet() const { return m_includeMinimumHasBeenSet; }
    inline void SetIncludeMinimum(bool value) { m_includeMinimumHasBeenSet = true; m_includeMinimum = value; }
    inline TimeRangeFilter& WithIncludeMinimum(bool value) { SetIncludeMinimum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether the maximum value in the filter value range should be
     * included in the filtered results.</p>
     */
    inline bool GetIncludeMaximum() const { return m_includeMaximum; }
    inline bool IncludeMaximumHasBeenSet() const { return m_includeMaximumHasBeenSet; }
    inline void SetIncludeMaximum(bool value) { m_includeMaximumHasBeenSet = true; m_includeMaximum = value; }
    inline TimeRangeFilter& WithIncludeMaximum(bool value) { SetIncludeMaximum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum value for the filter value range.</p>
     */
    inline const TimeRangeFilterValue& GetRangeMinimumValue() const { return m_rangeMinimumValue; }
    inline bool RangeMinimumValueHasBeenSet() const { return m_rangeMinimumValueHasBeenSet; }
    template<typename RangeMinimumValueT = TimeRangeFilterValue>
    void SetRangeMinimumValue(RangeMinimumValueT&& value) { m_rangeMinimumValueHasBeenSet = true; m_rangeMinimumValue = std::forward<RangeMinimumValueT>(value); }
    template<typename RangeMinimumValueT = TimeRangeFilterValue>
    TimeRangeFilter& WithRangeMinimumValue(RangeMinimumValueT&& value) { SetRangeMinimumValue(std::forward<RangeMinimumValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum value for the filter value range.</p>
     */
    inline const TimeRangeFilterValue& GetRangeMaximumValue() const { return m_rangeMaximumValue; }
    inline bool RangeMaximumValueHasBeenSet() const { return m_rangeMaximumValueHasBeenSet; }
    template<typename RangeMaximumValueT = TimeRangeFilterValue>
    void SetRangeMaximumValue(RangeMaximumValueT&& value) { m_rangeMaximumValueHasBeenSet = true; m_rangeMaximumValue = std::forward<RangeMaximumValueT>(value); }
    template<typename RangeMaximumValueT = TimeRangeFilterValue>
    TimeRangeFilter& WithRangeMaximumValue(RangeMaximumValueT&& value) { SetRangeMaximumValue(std::forward<RangeMaximumValueT>(value)); return *this;}
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
    inline TimeRangeFilter& WithNullOption(FilterNullOption value) { SetNullOption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exclude period of the time range filter.</p>
     */
    inline const ExcludePeriodConfiguration& GetExcludePeriodConfiguration() const { return m_excludePeriodConfiguration; }
    inline bool ExcludePeriodConfigurationHasBeenSet() const { return m_excludePeriodConfigurationHasBeenSet; }
    template<typename ExcludePeriodConfigurationT = ExcludePeriodConfiguration>
    void SetExcludePeriodConfiguration(ExcludePeriodConfigurationT&& value) { m_excludePeriodConfigurationHasBeenSet = true; m_excludePeriodConfiguration = std::forward<ExcludePeriodConfigurationT>(value); }
    template<typename ExcludePeriodConfigurationT = ExcludePeriodConfiguration>
    TimeRangeFilter& WithExcludePeriodConfiguration(ExcludePeriodConfigurationT&& value) { SetExcludePeriodConfiguration(std::forward<ExcludePeriodConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The level of time precision that is used to aggregate <code>DateTime</code>
     * values.</p>
     */
    inline TimeGranularity GetTimeGranularity() const { return m_timeGranularity; }
    inline bool TimeGranularityHasBeenSet() const { return m_timeGranularityHasBeenSet; }
    inline void SetTimeGranularity(TimeGranularity value) { m_timeGranularityHasBeenSet = true; m_timeGranularity = value; }
    inline TimeRangeFilter& WithTimeGranularity(TimeGranularity value) { SetTimeGranularity(value); return *this;}
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
    TimeRangeFilter& WithDefaultFilterControlConfiguration(DefaultFilterControlConfigurationT&& value) { SetDefaultFilterControlConfiguration(std::forward<DefaultFilterControlConfigurationT>(value)); return *this;}
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

    TimeRangeFilterValue m_rangeMinimumValue;
    bool m_rangeMinimumValueHasBeenSet = false;

    TimeRangeFilterValue m_rangeMaximumValue;
    bool m_rangeMaximumValueHasBeenSet = false;

    FilterNullOption m_nullOption{FilterNullOption::NOT_SET};
    bool m_nullOptionHasBeenSet = false;

    ExcludePeriodConfiguration m_excludePeriodConfiguration;
    bool m_excludePeriodConfigurationHasBeenSet = false;

    TimeGranularity m_timeGranularity{TimeGranularity::NOT_SET};
    bool m_timeGranularityHasBeenSet = false;

    DefaultFilterControlConfiguration m_defaultFilterControlConfiguration;
    bool m_defaultFilterControlConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
