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
    AWS_QUICKSIGHT_API RelativeDatesFilter() = default;
    AWS_QUICKSIGHT_API RelativeDatesFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RelativeDatesFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    RelativeDatesFilter& WithFilterId(FilterIdT&& value) { SetFilterId(std::forward<FilterIdT>(value)); return *this;}
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
    RelativeDatesFilter& WithColumn(ColumnT&& value) { SetColumn(std::forward<ColumnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date configuration of the filter.</p>
     */
    inline const AnchorDateConfiguration& GetAnchorDateConfiguration() const { return m_anchorDateConfiguration; }
    inline bool AnchorDateConfigurationHasBeenSet() const { return m_anchorDateConfigurationHasBeenSet; }
    template<typename AnchorDateConfigurationT = AnchorDateConfiguration>
    void SetAnchorDateConfiguration(AnchorDateConfigurationT&& value) { m_anchorDateConfigurationHasBeenSet = true; m_anchorDateConfiguration = std::forward<AnchorDateConfigurationT>(value); }
    template<typename AnchorDateConfigurationT = AnchorDateConfiguration>
    RelativeDatesFilter& WithAnchorDateConfiguration(AnchorDateConfigurationT&& value) { SetAnchorDateConfiguration(std::forward<AnchorDateConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum granularity (period granularity) of the relative dates
     * filter.</p>
     */
    inline TimeGranularity GetMinimumGranularity() const { return m_minimumGranularity; }
    inline bool MinimumGranularityHasBeenSet() const { return m_minimumGranularityHasBeenSet; }
    inline void SetMinimumGranularity(TimeGranularity value) { m_minimumGranularityHasBeenSet = true; m_minimumGranularity = value; }
    inline RelativeDatesFilter& WithMinimumGranularity(TimeGranularity value) { SetMinimumGranularity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The level of time precision that is used to aggregate <code>DateTime</code>
     * values.</p>
     */
    inline TimeGranularity GetTimeGranularity() const { return m_timeGranularity; }
    inline bool TimeGranularityHasBeenSet() const { return m_timeGranularityHasBeenSet; }
    inline void SetTimeGranularity(TimeGranularity value) { m_timeGranularityHasBeenSet = true; m_timeGranularity = value; }
    inline RelativeDatesFilter& WithTimeGranularity(TimeGranularity value) { SetTimeGranularity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The range date type of the filter. Choose one of the options below:</p> <ul>
     * <li> <p> <code>PREVIOUS</code> </p> </li> <li> <p> <code>THIS</code> </p> </li>
     * <li> <p> <code>LAST</code> </p> </li> <li> <p> <code>NOW</code> </p> </li> <li>
     * <p> <code>NEXT</code> </p> </li> </ul>
     */
    inline RelativeDateType GetRelativeDateType() const { return m_relativeDateType; }
    inline bool RelativeDateTypeHasBeenSet() const { return m_relativeDateTypeHasBeenSet; }
    inline void SetRelativeDateType(RelativeDateType value) { m_relativeDateTypeHasBeenSet = true; m_relativeDateType = value; }
    inline RelativeDatesFilter& WithRelativeDateType(RelativeDateType value) { SetRelativeDateType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date value of the filter.</p>
     */
    inline int GetRelativeDateValue() const { return m_relativeDateValue; }
    inline bool RelativeDateValueHasBeenSet() const { return m_relativeDateValueHasBeenSet; }
    inline void SetRelativeDateValue(int value) { m_relativeDateValueHasBeenSet = true; m_relativeDateValue = value; }
    inline RelativeDatesFilter& WithRelativeDateValue(int value) { SetRelativeDateValue(value); return *this;}
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
    RelativeDatesFilter& WithParameterName(ParameterNameT&& value) { SetParameterName(std::forward<ParameterNameT>(value)); return *this;}
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
    inline RelativeDatesFilter& WithNullOption(FilterNullOption value) { SetNullOption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the exclude period of the filter.</p>
     */
    inline const ExcludePeriodConfiguration& GetExcludePeriodConfiguration() const { return m_excludePeriodConfiguration; }
    inline bool ExcludePeriodConfigurationHasBeenSet() const { return m_excludePeriodConfigurationHasBeenSet; }
    template<typename ExcludePeriodConfigurationT = ExcludePeriodConfiguration>
    void SetExcludePeriodConfiguration(ExcludePeriodConfigurationT&& value) { m_excludePeriodConfigurationHasBeenSet = true; m_excludePeriodConfiguration = std::forward<ExcludePeriodConfigurationT>(value); }
    template<typename ExcludePeriodConfigurationT = ExcludePeriodConfiguration>
    RelativeDatesFilter& WithExcludePeriodConfiguration(ExcludePeriodConfigurationT&& value) { SetExcludePeriodConfiguration(std::forward<ExcludePeriodConfigurationT>(value)); return *this;}
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
    RelativeDatesFilter& WithDefaultFilterControlConfiguration(DefaultFilterControlConfigurationT&& value) { SetDefaultFilterControlConfiguration(std::forward<DefaultFilterControlConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_filterId;
    bool m_filterIdHasBeenSet = false;

    ColumnIdentifier m_column;
    bool m_columnHasBeenSet = false;

    AnchorDateConfiguration m_anchorDateConfiguration;
    bool m_anchorDateConfigurationHasBeenSet = false;

    TimeGranularity m_minimumGranularity{TimeGranularity::NOT_SET};
    bool m_minimumGranularityHasBeenSet = false;

    TimeGranularity m_timeGranularity{TimeGranularity::NOT_SET};
    bool m_timeGranularityHasBeenSet = false;

    RelativeDateType m_relativeDateType{RelativeDateType::NOT_SET};
    bool m_relativeDateTypeHasBeenSet = false;

    int m_relativeDateValue{0};
    bool m_relativeDateValueHasBeenSet = false;

    Aws::String m_parameterName;
    bool m_parameterNameHasBeenSet = false;

    FilterNullOption m_nullOption{FilterNullOption::NOT_SET};
    bool m_nullOptionHasBeenSet = false;

    ExcludePeriodConfiguration m_excludePeriodConfiguration;
    bool m_excludePeriodConfigurationHasBeenSet = false;

    DefaultFilterControlConfiguration m_defaultFilterControlConfiguration;
    bool m_defaultFilterControlConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
