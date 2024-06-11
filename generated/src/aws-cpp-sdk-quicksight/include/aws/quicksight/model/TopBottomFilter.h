/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ColumnIdentifier.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/TimeGranularity.h>
#include <aws/quicksight/model/DefaultFilterControlConfiguration.h>
#include <aws/quicksight/model/AggregationSortConfiguration.h>
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
   * <p>A <code>TopBottomFilter</code> filters values that are at the top or the
   * bottom.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TopBottomFilter">AWS
   * API Reference</a></p>
   */
  class TopBottomFilter
  {
  public:
    AWS_QUICKSIGHT_API TopBottomFilter();
    AWS_QUICKSIGHT_API TopBottomFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopBottomFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline TopBottomFilter& WithFilterId(const Aws::String& value) { SetFilterId(value); return *this;}
    inline TopBottomFilter& WithFilterId(Aws::String&& value) { SetFilterId(std::move(value)); return *this;}
    inline TopBottomFilter& WithFilterId(const char* value) { SetFilterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The column that the filter is applied to.</p>
     */
    inline const ColumnIdentifier& GetColumn() const{ return m_column; }
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }
    inline void SetColumn(const ColumnIdentifier& value) { m_columnHasBeenSet = true; m_column = value; }
    inline void SetColumn(ColumnIdentifier&& value) { m_columnHasBeenSet = true; m_column = std::move(value); }
    inline TopBottomFilter& WithColumn(const ColumnIdentifier& value) { SetColumn(value); return *this;}
    inline TopBottomFilter& WithColumn(ColumnIdentifier&& value) { SetColumn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of items to include in the top bottom filter results.</p>
     */
    inline int GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline TopBottomFilter& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aggregation and sort configuration of the top bottom filter.</p>
     */
    inline const Aws::Vector<AggregationSortConfiguration>& GetAggregationSortConfigurations() const{ return m_aggregationSortConfigurations; }
    inline bool AggregationSortConfigurationsHasBeenSet() const { return m_aggregationSortConfigurationsHasBeenSet; }
    inline void SetAggregationSortConfigurations(const Aws::Vector<AggregationSortConfiguration>& value) { m_aggregationSortConfigurationsHasBeenSet = true; m_aggregationSortConfigurations = value; }
    inline void SetAggregationSortConfigurations(Aws::Vector<AggregationSortConfiguration>&& value) { m_aggregationSortConfigurationsHasBeenSet = true; m_aggregationSortConfigurations = std::move(value); }
    inline TopBottomFilter& WithAggregationSortConfigurations(const Aws::Vector<AggregationSortConfiguration>& value) { SetAggregationSortConfigurations(value); return *this;}
    inline TopBottomFilter& WithAggregationSortConfigurations(Aws::Vector<AggregationSortConfiguration>&& value) { SetAggregationSortConfigurations(std::move(value)); return *this;}
    inline TopBottomFilter& AddAggregationSortConfigurations(const AggregationSortConfiguration& value) { m_aggregationSortConfigurationsHasBeenSet = true; m_aggregationSortConfigurations.push_back(value); return *this; }
    inline TopBottomFilter& AddAggregationSortConfigurations(AggregationSortConfiguration&& value) { m_aggregationSortConfigurationsHasBeenSet = true; m_aggregationSortConfigurations.push_back(std::move(value)); return *this; }
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
    inline TopBottomFilter& WithTimeGranularity(const TimeGranularity& value) { SetTimeGranularity(value); return *this;}
    inline TopBottomFilter& WithTimeGranularity(TimeGranularity&& value) { SetTimeGranularity(std::move(value)); return *this;}
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
    inline TopBottomFilter& WithParameterName(const Aws::String& value) { SetParameterName(value); return *this;}
    inline TopBottomFilter& WithParameterName(Aws::String&& value) { SetParameterName(std::move(value)); return *this;}
    inline TopBottomFilter& WithParameterName(const char* value) { SetParameterName(value); return *this;}
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
    inline TopBottomFilter& WithDefaultFilterControlConfiguration(const DefaultFilterControlConfiguration& value) { SetDefaultFilterControlConfiguration(value); return *this;}
    inline TopBottomFilter& WithDefaultFilterControlConfiguration(DefaultFilterControlConfiguration&& value) { SetDefaultFilterControlConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_filterId;
    bool m_filterIdHasBeenSet = false;

    ColumnIdentifier m_column;
    bool m_columnHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::Vector<AggregationSortConfiguration> m_aggregationSortConfigurations;
    bool m_aggregationSortConfigurationsHasBeenSet = false;

    TimeGranularity m_timeGranularity;
    bool m_timeGranularityHasBeenSet = false;

    Aws::String m_parameterName;
    bool m_parameterNameHasBeenSet = false;

    DefaultFilterControlConfiguration m_defaultFilterControlConfiguration;
    bool m_defaultFilterControlConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
