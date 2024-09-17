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
    inline RelativeDatesFilter& WithFilterId(const Aws::String& value) { SetFilterId(value); return *this;}
    inline RelativeDatesFilter& WithFilterId(Aws::String&& value) { SetFilterId(std::move(value)); return *this;}
    inline RelativeDatesFilter& WithFilterId(const char* value) { SetFilterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The column that the filter is applied to.</p>
     */
    inline const ColumnIdentifier& GetColumn() const{ return m_column; }
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }
    inline void SetColumn(const ColumnIdentifier& value) { m_columnHasBeenSet = true; m_column = value; }
    inline void SetColumn(ColumnIdentifier&& value) { m_columnHasBeenSet = true; m_column = std::move(value); }
    inline RelativeDatesFilter& WithColumn(const ColumnIdentifier& value) { SetColumn(value); return *this;}
    inline RelativeDatesFilter& WithColumn(ColumnIdentifier&& value) { SetColumn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date configuration of the filter.</p>
     */
    inline const AnchorDateConfiguration& GetAnchorDateConfiguration() const{ return m_anchorDateConfiguration; }
    inline bool AnchorDateConfigurationHasBeenSet() const { return m_anchorDateConfigurationHasBeenSet; }
    inline void SetAnchorDateConfiguration(const AnchorDateConfiguration& value) { m_anchorDateConfigurationHasBeenSet = true; m_anchorDateConfiguration = value; }
    inline void SetAnchorDateConfiguration(AnchorDateConfiguration&& value) { m_anchorDateConfigurationHasBeenSet = true; m_anchorDateConfiguration = std::move(value); }
    inline RelativeDatesFilter& WithAnchorDateConfiguration(const AnchorDateConfiguration& value) { SetAnchorDateConfiguration(value); return *this;}
    inline RelativeDatesFilter& WithAnchorDateConfiguration(AnchorDateConfiguration&& value) { SetAnchorDateConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum granularity (period granularity) of the relative dates
     * filter.</p>
     */
    inline const TimeGranularity& GetMinimumGranularity() const{ return m_minimumGranularity; }
    inline bool MinimumGranularityHasBeenSet() const { return m_minimumGranularityHasBeenSet; }
    inline void SetMinimumGranularity(const TimeGranularity& value) { m_minimumGranularityHasBeenSet = true; m_minimumGranularity = value; }
    inline void SetMinimumGranularity(TimeGranularity&& value) { m_minimumGranularityHasBeenSet = true; m_minimumGranularity = std::move(value); }
    inline RelativeDatesFilter& WithMinimumGranularity(const TimeGranularity& value) { SetMinimumGranularity(value); return *this;}
    inline RelativeDatesFilter& WithMinimumGranularity(TimeGranularity&& value) { SetMinimumGranularity(std::move(value)); return *this;}
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
    inline RelativeDatesFilter& WithTimeGranularity(const TimeGranularity& value) { SetTimeGranularity(value); return *this;}
    inline RelativeDatesFilter& WithTimeGranularity(TimeGranularity&& value) { SetTimeGranularity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The range date type of the filter. Choose one of the options below:</p> <ul>
     * <li> <p> <code>PREVIOUS</code> </p> </li> <li> <p> <code>THIS</code> </p> </li>
     * <li> <p> <code>LAST</code> </p> </li> <li> <p> <code>NOW</code> </p> </li> <li>
     * <p> <code>NEXT</code> </p> </li> </ul>
     */
    inline const RelativeDateType& GetRelativeDateType() const{ return m_relativeDateType; }
    inline bool RelativeDateTypeHasBeenSet() const { return m_relativeDateTypeHasBeenSet; }
    inline void SetRelativeDateType(const RelativeDateType& value) { m_relativeDateTypeHasBeenSet = true; m_relativeDateType = value; }
    inline void SetRelativeDateType(RelativeDateType&& value) { m_relativeDateTypeHasBeenSet = true; m_relativeDateType = std::move(value); }
    inline RelativeDatesFilter& WithRelativeDateType(const RelativeDateType& value) { SetRelativeDateType(value); return *this;}
    inline RelativeDatesFilter& WithRelativeDateType(RelativeDateType&& value) { SetRelativeDateType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date value of the filter.</p>
     */
    inline int GetRelativeDateValue() const{ return m_relativeDateValue; }
    inline bool RelativeDateValueHasBeenSet() const { return m_relativeDateValueHasBeenSet; }
    inline void SetRelativeDateValue(int value) { m_relativeDateValueHasBeenSet = true; m_relativeDateValue = value; }
    inline RelativeDatesFilter& WithRelativeDateValue(int value) { SetRelativeDateValue(value); return *this;}
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
    inline RelativeDatesFilter& WithParameterName(const Aws::String& value) { SetParameterName(value); return *this;}
    inline RelativeDatesFilter& WithParameterName(Aws::String&& value) { SetParameterName(std::move(value)); return *this;}
    inline RelativeDatesFilter& WithParameterName(const char* value) { SetParameterName(value); return *this;}
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
    inline RelativeDatesFilter& WithNullOption(const FilterNullOption& value) { SetNullOption(value); return *this;}
    inline RelativeDatesFilter& WithNullOption(FilterNullOption&& value) { SetNullOption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the exclude period of the filter.</p>
     */
    inline const ExcludePeriodConfiguration& GetExcludePeriodConfiguration() const{ return m_excludePeriodConfiguration; }
    inline bool ExcludePeriodConfigurationHasBeenSet() const { return m_excludePeriodConfigurationHasBeenSet; }
    inline void SetExcludePeriodConfiguration(const ExcludePeriodConfiguration& value) { m_excludePeriodConfigurationHasBeenSet = true; m_excludePeriodConfiguration = value; }
    inline void SetExcludePeriodConfiguration(ExcludePeriodConfiguration&& value) { m_excludePeriodConfigurationHasBeenSet = true; m_excludePeriodConfiguration = std::move(value); }
    inline RelativeDatesFilter& WithExcludePeriodConfiguration(const ExcludePeriodConfiguration& value) { SetExcludePeriodConfiguration(value); return *this;}
    inline RelativeDatesFilter& WithExcludePeriodConfiguration(ExcludePeriodConfiguration&& value) { SetExcludePeriodConfiguration(std::move(value)); return *this;}
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
    inline RelativeDatesFilter& WithDefaultFilterControlConfiguration(const DefaultFilterControlConfiguration& value) { SetDefaultFilterControlConfiguration(value); return *this;}
    inline RelativeDatesFilter& WithDefaultFilterControlConfiguration(DefaultFilterControlConfiguration&& value) { SetDefaultFilterControlConfiguration(std::move(value)); return *this;}
    ///@}
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

    DefaultFilterControlConfiguration m_defaultFilterControlConfiguration;
    bool m_defaultFilterControlConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
