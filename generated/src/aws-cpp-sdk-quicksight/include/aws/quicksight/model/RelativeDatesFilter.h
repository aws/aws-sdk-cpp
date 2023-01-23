/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ColumnIdentifier.h>
#include <aws/quicksight/model/AnchorDateConfiguration.h>
#include <aws/quicksight/model/TimeGranularity.h>
#include <aws/quicksight/model/RelativeDateType.h>
#include <aws/quicksight/model/FilterNullOption.h>
#include <aws/quicksight/model/ExcludePeriodConfiguration.h>
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
   * <p>A <code>RelativeDatesFilter</code> filters relative dates
   * values.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RelativeDatesFilter">AWS
   * API Reference</a></p>
   */
  class RelativeDatesFilter
  {
  public:
    AWS_QUICKSIGHT_API RelativeDatesFilter();
    AWS_QUICKSIGHT_API RelativeDatesFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RelativeDatesFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline RelativeDatesFilter& WithFilterId(const Aws::String& value) { SetFilterId(value); return *this;}

    /**
     * <p>An identifier that uniquely identifies a filter within a dashboard, analysis,
     * or template.</p>
     */
    inline RelativeDatesFilter& WithFilterId(Aws::String&& value) { SetFilterId(std::move(value)); return *this;}

    /**
     * <p>An identifier that uniquely identifies a filter within a dashboard, analysis,
     * or template.</p>
     */
    inline RelativeDatesFilter& WithFilterId(const char* value) { SetFilterId(value); return *this;}


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
    inline RelativeDatesFilter& WithColumn(const ColumnIdentifier& value) { SetColumn(value); return *this;}

    /**
     * <p>The column that the filter is applied to.</p>
     */
    inline RelativeDatesFilter& WithColumn(ColumnIdentifier&& value) { SetColumn(std::move(value)); return *this;}


    /**
     * <p>The date configuration of the filter.</p>
     */
    inline const AnchorDateConfiguration& GetAnchorDateConfiguration() const{ return m_anchorDateConfiguration; }

    /**
     * <p>The date configuration of the filter.</p>
     */
    inline bool AnchorDateConfigurationHasBeenSet() const { return m_anchorDateConfigurationHasBeenSet; }

    /**
     * <p>The date configuration of the filter.</p>
     */
    inline void SetAnchorDateConfiguration(const AnchorDateConfiguration& value) { m_anchorDateConfigurationHasBeenSet = true; m_anchorDateConfiguration = value; }

    /**
     * <p>The date configuration of the filter.</p>
     */
    inline void SetAnchorDateConfiguration(AnchorDateConfiguration&& value) { m_anchorDateConfigurationHasBeenSet = true; m_anchorDateConfiguration = std::move(value); }

    /**
     * <p>The date configuration of the filter.</p>
     */
    inline RelativeDatesFilter& WithAnchorDateConfiguration(const AnchorDateConfiguration& value) { SetAnchorDateConfiguration(value); return *this;}

    /**
     * <p>The date configuration of the filter.</p>
     */
    inline RelativeDatesFilter& WithAnchorDateConfiguration(AnchorDateConfiguration&& value) { SetAnchorDateConfiguration(std::move(value)); return *this;}


    /**
     * <p>The minimum granularity (period granularity) of the relative dates
     * filter.</p>
     */
    inline const TimeGranularity& GetMinimumGranularity() const{ return m_minimumGranularity; }

    /**
     * <p>The minimum granularity (period granularity) of the relative dates
     * filter.</p>
     */
    inline bool MinimumGranularityHasBeenSet() const { return m_minimumGranularityHasBeenSet; }

    /**
     * <p>The minimum granularity (period granularity) of the relative dates
     * filter.</p>
     */
    inline void SetMinimumGranularity(const TimeGranularity& value) { m_minimumGranularityHasBeenSet = true; m_minimumGranularity = value; }

    /**
     * <p>The minimum granularity (period granularity) of the relative dates
     * filter.</p>
     */
    inline void SetMinimumGranularity(TimeGranularity&& value) { m_minimumGranularityHasBeenSet = true; m_minimumGranularity = std::move(value); }

    /**
     * <p>The minimum granularity (period granularity) of the relative dates
     * filter.</p>
     */
    inline RelativeDatesFilter& WithMinimumGranularity(const TimeGranularity& value) { SetMinimumGranularity(value); return *this;}

    /**
     * <p>The minimum granularity (period granularity) of the relative dates
     * filter.</p>
     */
    inline RelativeDatesFilter& WithMinimumGranularity(TimeGranularity&& value) { SetMinimumGranularity(std::move(value)); return *this;}


    /**
     * <p>The level of time precision that is used to aggregate <code>DateTime</code>
     * values.</p>
     */
    inline const TimeGranularity& GetTimeGranularity() const{ return m_timeGranularity; }

    /**
     * <p>The level of time precision that is used to aggregate <code>DateTime</code>
     * values.</p>
     */
    inline bool TimeGranularityHasBeenSet() const { return m_timeGranularityHasBeenSet; }

    /**
     * <p>The level of time precision that is used to aggregate <code>DateTime</code>
     * values.</p>
     */
    inline void SetTimeGranularity(const TimeGranularity& value) { m_timeGranularityHasBeenSet = true; m_timeGranularity = value; }

    /**
     * <p>The level of time precision that is used to aggregate <code>DateTime</code>
     * values.</p>
     */
    inline void SetTimeGranularity(TimeGranularity&& value) { m_timeGranularityHasBeenSet = true; m_timeGranularity = std::move(value); }

    /**
     * <p>The level of time precision that is used to aggregate <code>DateTime</code>
     * values.</p>
     */
    inline RelativeDatesFilter& WithTimeGranularity(const TimeGranularity& value) { SetTimeGranularity(value); return *this;}

    /**
     * <p>The level of time precision that is used to aggregate <code>DateTime</code>
     * values.</p>
     */
    inline RelativeDatesFilter& WithTimeGranularity(TimeGranularity&& value) { SetTimeGranularity(std::move(value)); return *this;}


    /**
     * <p>The range date type of the filter. Choose one of the options below:</p> <ul>
     * <li> <p> <code>PREVIOUS</code> </p> </li> <li> <p> <code>THIS</code> </p> </li>
     * <li> <p> <code>LAST</code> </p> </li> <li> <p> <code>NOW</code> </p> </li> <li>
     * <p> <code>NEXT</code> </p> </li> </ul>
     */
    inline const RelativeDateType& GetRelativeDateType() const{ return m_relativeDateType; }

    /**
     * <p>The range date type of the filter. Choose one of the options below:</p> <ul>
     * <li> <p> <code>PREVIOUS</code> </p> </li> <li> <p> <code>THIS</code> </p> </li>
     * <li> <p> <code>LAST</code> </p> </li> <li> <p> <code>NOW</code> </p> </li> <li>
     * <p> <code>NEXT</code> </p> </li> </ul>
     */
    inline bool RelativeDateTypeHasBeenSet() const { return m_relativeDateTypeHasBeenSet; }

    /**
     * <p>The range date type of the filter. Choose one of the options below:</p> <ul>
     * <li> <p> <code>PREVIOUS</code> </p> </li> <li> <p> <code>THIS</code> </p> </li>
     * <li> <p> <code>LAST</code> </p> </li> <li> <p> <code>NOW</code> </p> </li> <li>
     * <p> <code>NEXT</code> </p> </li> </ul>
     */
    inline void SetRelativeDateType(const RelativeDateType& value) { m_relativeDateTypeHasBeenSet = true; m_relativeDateType = value; }

    /**
     * <p>The range date type of the filter. Choose one of the options below:</p> <ul>
     * <li> <p> <code>PREVIOUS</code> </p> </li> <li> <p> <code>THIS</code> </p> </li>
     * <li> <p> <code>LAST</code> </p> </li> <li> <p> <code>NOW</code> </p> </li> <li>
     * <p> <code>NEXT</code> </p> </li> </ul>
     */
    inline void SetRelativeDateType(RelativeDateType&& value) { m_relativeDateTypeHasBeenSet = true; m_relativeDateType = std::move(value); }

    /**
     * <p>The range date type of the filter. Choose one of the options below:</p> <ul>
     * <li> <p> <code>PREVIOUS</code> </p> </li> <li> <p> <code>THIS</code> </p> </li>
     * <li> <p> <code>LAST</code> </p> </li> <li> <p> <code>NOW</code> </p> </li> <li>
     * <p> <code>NEXT</code> </p> </li> </ul>
     */
    inline RelativeDatesFilter& WithRelativeDateType(const RelativeDateType& value) { SetRelativeDateType(value); return *this;}

    /**
     * <p>The range date type of the filter. Choose one of the options below:</p> <ul>
     * <li> <p> <code>PREVIOUS</code> </p> </li> <li> <p> <code>THIS</code> </p> </li>
     * <li> <p> <code>LAST</code> </p> </li> <li> <p> <code>NOW</code> </p> </li> <li>
     * <p> <code>NEXT</code> </p> </li> </ul>
     */
    inline RelativeDatesFilter& WithRelativeDateType(RelativeDateType&& value) { SetRelativeDateType(std::move(value)); return *this;}


    /**
     * <p>The date value of the filter.</p>
     */
    inline int GetRelativeDateValue() const{ return m_relativeDateValue; }

    /**
     * <p>The date value of the filter.</p>
     */
    inline bool RelativeDateValueHasBeenSet() const { return m_relativeDateValueHasBeenSet; }

    /**
     * <p>The date value of the filter.</p>
     */
    inline void SetRelativeDateValue(int value) { m_relativeDateValueHasBeenSet = true; m_relativeDateValue = value; }

    /**
     * <p>The date value of the filter.</p>
     */
    inline RelativeDatesFilter& WithRelativeDateValue(int value) { SetRelativeDateValue(value); return *this;}


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
    inline RelativeDatesFilter& WithParameterName(const Aws::String& value) { SetParameterName(value); return *this;}

    /**
     * <p>The parameter whose value should be used for the filter value.</p>
     */
    inline RelativeDatesFilter& WithParameterName(Aws::String&& value) { SetParameterName(std::move(value)); return *this;}

    /**
     * <p>The parameter whose value should be used for the filter value.</p>
     */
    inline RelativeDatesFilter& WithParameterName(const char* value) { SetParameterName(value); return *this;}


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
    inline RelativeDatesFilter& WithNullOption(const FilterNullOption& value) { SetNullOption(value); return *this;}

    /**
     * <p>This option determines how null values should be treated when filtering
     * data.</p> <ul> <li> <p> <code>ALL_VALUES</code>: Include null values in filtered
     * results.</p> </li> <li> <p> <code>NULLS_ONLY</code>: Only include null values in
     * filtered results.</p> </li> <li> <p> <code>NON_NULLS_ONLY</code>: Exclude null
     * values from filtered results.</p> </li> </ul>
     */
    inline RelativeDatesFilter& WithNullOption(FilterNullOption&& value) { SetNullOption(std::move(value)); return *this;}


    /**
     * <p>The configuration for the exclude period of the filter.</p>
     */
    inline const ExcludePeriodConfiguration& GetExcludePeriodConfiguration() const{ return m_excludePeriodConfiguration; }

    /**
     * <p>The configuration for the exclude period of the filter.</p>
     */
    inline bool ExcludePeriodConfigurationHasBeenSet() const { return m_excludePeriodConfigurationHasBeenSet; }

    /**
     * <p>The configuration for the exclude period of the filter.</p>
     */
    inline void SetExcludePeriodConfiguration(const ExcludePeriodConfiguration& value) { m_excludePeriodConfigurationHasBeenSet = true; m_excludePeriodConfiguration = value; }

    /**
     * <p>The configuration for the exclude period of the filter.</p>
     */
    inline void SetExcludePeriodConfiguration(ExcludePeriodConfiguration&& value) { m_excludePeriodConfigurationHasBeenSet = true; m_excludePeriodConfiguration = std::move(value); }

    /**
     * <p>The configuration for the exclude period of the filter.</p>
     */
    inline RelativeDatesFilter& WithExcludePeriodConfiguration(const ExcludePeriodConfiguration& value) { SetExcludePeriodConfiguration(value); return *this;}

    /**
     * <p>The configuration for the exclude period of the filter.</p>
     */
    inline RelativeDatesFilter& WithExcludePeriodConfiguration(ExcludePeriodConfiguration&& value) { SetExcludePeriodConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_filterId;
    bool m_filterIdHasBeenSet = false;

    ColumnIdentifier m_column;
    bool m_columnHasBeenSet = false;

    AnchorDateConfiguration m_anchorDateConfiguration;
    bool m_anchorDateConfigurationHasBeenSet = false;

    TimeGranularity m_minimumGranularity;
    bool m_minimumGranularityHasBeenSet = false;

    TimeGranularity m_timeGranularity;
    bool m_timeGranularityHasBeenSet = false;

    RelativeDateType m_relativeDateType;
    bool m_relativeDateTypeHasBeenSet = false;

    int m_relativeDateValue;
    bool m_relativeDateValueHasBeenSet = false;

    Aws::String m_parameterName;
    bool m_parameterNameHasBeenSet = false;

    FilterNullOption m_nullOption;
    bool m_nullOptionHasBeenSet = false;

    ExcludePeriodConfiguration m_excludePeriodConfiguration;
    bool m_excludePeriodConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
