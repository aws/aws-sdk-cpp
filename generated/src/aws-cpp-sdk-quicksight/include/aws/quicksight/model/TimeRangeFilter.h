﻿/**
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
    AWS_QUICKSIGHT_API TimeRangeFilter();
    AWS_QUICKSIGHT_API TimeRangeFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TimeRangeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline TimeRangeFilter& WithFilterId(const Aws::String& value) { SetFilterId(value); return *this;}
    inline TimeRangeFilter& WithFilterId(Aws::String&& value) { SetFilterId(std::move(value)); return *this;}
    inline TimeRangeFilter& WithFilterId(const char* value) { SetFilterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The column that the filter is applied to.</p>
     */
    inline const ColumnIdentifier& GetColumn() const{ return m_column; }
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }
    inline void SetColumn(const ColumnIdentifier& value) { m_columnHasBeenSet = true; m_column = value; }
    inline void SetColumn(ColumnIdentifier&& value) { m_columnHasBeenSet = true; m_column = std::move(value); }
    inline TimeRangeFilter& WithColumn(const ColumnIdentifier& value) { SetColumn(value); return *this;}
    inline TimeRangeFilter& WithColumn(ColumnIdentifier&& value) { SetColumn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether the minimum value in the filter value range should be
     * included in the filtered results.</p>
     */
    inline bool GetIncludeMinimum() const{ return m_includeMinimum; }
    inline bool IncludeMinimumHasBeenSet() const { return m_includeMinimumHasBeenSet; }
    inline void SetIncludeMinimum(bool value) { m_includeMinimumHasBeenSet = true; m_includeMinimum = value; }
    inline TimeRangeFilter& WithIncludeMinimum(bool value) { SetIncludeMinimum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether the maximum value in the filter value range should be
     * included in the filtered results.</p>
     */
    inline bool GetIncludeMaximum() const{ return m_includeMaximum; }
    inline bool IncludeMaximumHasBeenSet() const { return m_includeMaximumHasBeenSet; }
    inline void SetIncludeMaximum(bool value) { m_includeMaximumHasBeenSet = true; m_includeMaximum = value; }
    inline TimeRangeFilter& WithIncludeMaximum(bool value) { SetIncludeMaximum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum value for the filter value range.</p>
     */
    inline const TimeRangeFilterValue& GetRangeMinimumValue() const{ return m_rangeMinimumValue; }
    inline bool RangeMinimumValueHasBeenSet() const { return m_rangeMinimumValueHasBeenSet; }
    inline void SetRangeMinimumValue(const TimeRangeFilterValue& value) { m_rangeMinimumValueHasBeenSet = true; m_rangeMinimumValue = value; }
    inline void SetRangeMinimumValue(TimeRangeFilterValue&& value) { m_rangeMinimumValueHasBeenSet = true; m_rangeMinimumValue = std::move(value); }
    inline TimeRangeFilter& WithRangeMinimumValue(const TimeRangeFilterValue& value) { SetRangeMinimumValue(value); return *this;}
    inline TimeRangeFilter& WithRangeMinimumValue(TimeRangeFilterValue&& value) { SetRangeMinimumValue(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum value for the filter value range.</p>
     */
    inline const TimeRangeFilterValue& GetRangeMaximumValue() const{ return m_rangeMaximumValue; }
    inline bool RangeMaximumValueHasBeenSet() const { return m_rangeMaximumValueHasBeenSet; }
    inline void SetRangeMaximumValue(const TimeRangeFilterValue& value) { m_rangeMaximumValueHasBeenSet = true; m_rangeMaximumValue = value; }
    inline void SetRangeMaximumValue(TimeRangeFilterValue&& value) { m_rangeMaximumValueHasBeenSet = true; m_rangeMaximumValue = std::move(value); }
    inline TimeRangeFilter& WithRangeMaximumValue(const TimeRangeFilterValue& value) { SetRangeMaximumValue(value); return *this;}
    inline TimeRangeFilter& WithRangeMaximumValue(TimeRangeFilterValue&& value) { SetRangeMaximumValue(std::move(value)); return *this;}
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
    inline TimeRangeFilter& WithNullOption(const FilterNullOption& value) { SetNullOption(value); return *this;}
    inline TimeRangeFilter& WithNullOption(FilterNullOption&& value) { SetNullOption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exclude period of the time range filter.</p>
     */
    inline const ExcludePeriodConfiguration& GetExcludePeriodConfiguration() const{ return m_excludePeriodConfiguration; }
    inline bool ExcludePeriodConfigurationHasBeenSet() const { return m_excludePeriodConfigurationHasBeenSet; }
    inline void SetExcludePeriodConfiguration(const ExcludePeriodConfiguration& value) { m_excludePeriodConfigurationHasBeenSet = true; m_excludePeriodConfiguration = value; }
    inline void SetExcludePeriodConfiguration(ExcludePeriodConfiguration&& value) { m_excludePeriodConfigurationHasBeenSet = true; m_excludePeriodConfiguration = std::move(value); }
    inline TimeRangeFilter& WithExcludePeriodConfiguration(const ExcludePeriodConfiguration& value) { SetExcludePeriodConfiguration(value); return *this;}
    inline TimeRangeFilter& WithExcludePeriodConfiguration(ExcludePeriodConfiguration&& value) { SetExcludePeriodConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The level of time precision that is used to aggregate <code>DateTime</code>
     * values.</p>
     */
    inline const TimeGranularity& GetTimeGranularity() const{ return m_timeGranularity; }
    inline bool TimeGranularityHasBeenSet() const { return m_timeGranularityHasBeenSet; }
    inline void SetTimeGranularity(const TimeGranularity& value) { m_timeGranularityHasBeenSet = true; m_timeGranularity = value; }
    inline void SetTimeGranularity(TimeGranularity&& value) { m_timeGranularityHasBeenSet = true; m_timeGranularity = std::move(value); }
    inline TimeRangeFilter& WithTimeGranularity(const TimeGranularity& value) { SetTimeGranularity(value); return *this;}
    inline TimeRangeFilter& WithTimeGranularity(TimeGranularity&& value) { SetTimeGranularity(std::move(value)); return *this;}
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
    inline TimeRangeFilter& WithDefaultFilterControlConfiguration(const DefaultFilterControlConfiguration& value) { SetDefaultFilterControlConfiguration(value); return *this;}
    inline TimeRangeFilter& WithDefaultFilterControlConfiguration(DefaultFilterControlConfiguration&& value) { SetDefaultFilterControlConfiguration(std::move(value)); return *this;}
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

    TimeRangeFilterValue m_rangeMinimumValue;
    bool m_rangeMinimumValueHasBeenSet = false;

    TimeRangeFilterValue m_rangeMaximumValue;
    bool m_rangeMaximumValueHasBeenSet = false;

    FilterNullOption m_nullOption;
    bool m_nullOptionHasBeenSet = false;

    ExcludePeriodConfiguration m_excludePeriodConfiguration;
    bool m_excludePeriodConfigurationHasBeenSet = false;

    TimeGranularity m_timeGranularity;
    bool m_timeGranularityHasBeenSet = false;

    DefaultFilterControlConfiguration m_defaultFilterControlConfiguration;
    bool m_defaultFilterControlConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
