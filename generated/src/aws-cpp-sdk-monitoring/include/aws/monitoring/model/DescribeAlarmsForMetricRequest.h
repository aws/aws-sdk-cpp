/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/monitoring/model/Statistic.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/model/StandardUnit.h>
#include <aws/monitoring/model/Dimension.h>
#include <utility>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   */
  class DescribeAlarmsForMetricRequest : public CloudWatchRequest
  {
  public:
    AWS_CLOUDWATCH_API DescribeAlarmsForMetricRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAlarmsForMetric"; }

    AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDWATCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the metric.</p>
     */
    inline const Aws::String& GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    template<typename MetricNameT = Aws::String>
    void SetMetricName(MetricNameT&& value) { m_metricNameHasBeenSet = true; m_metricName = std::forward<MetricNameT>(value); }
    template<typename MetricNameT = Aws::String>
    DescribeAlarmsForMetricRequest& WithMetricName(MetricNameT&& value) { SetMetricName(std::forward<MetricNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the metric.</p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    DescribeAlarmsForMetricRequest& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The statistic for the metric, other than percentiles. For percentile
     * statistics, use <code>ExtendedStatistics</code>.</p>
     */
    inline Statistic GetStatistic() const { return m_statistic; }
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }
    inline void SetStatistic(Statistic value) { m_statisticHasBeenSet = true; m_statistic = value; }
    inline DescribeAlarmsForMetricRequest& WithStatistic(Statistic value) { SetStatistic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentile statistic for the metric. Specify a value between p0.0 and
     * p100.</p>
     */
    inline const Aws::String& GetExtendedStatistic() const { return m_extendedStatistic; }
    inline bool ExtendedStatisticHasBeenSet() const { return m_extendedStatisticHasBeenSet; }
    template<typename ExtendedStatisticT = Aws::String>
    void SetExtendedStatistic(ExtendedStatisticT&& value) { m_extendedStatisticHasBeenSet = true; m_extendedStatistic = std::forward<ExtendedStatisticT>(value); }
    template<typename ExtendedStatisticT = Aws::String>
    DescribeAlarmsForMetricRequest& WithExtendedStatistic(ExtendedStatisticT&& value) { SetExtendedStatistic(std::forward<ExtendedStatisticT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dimensions associated with the metric. If the metric has any associated
     * dimensions, you must specify them in order for the call to succeed.</p>
     */
    inline const Aws::Vector<Dimension>& GetDimensions() const { return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    template<typename DimensionsT = Aws::Vector<Dimension>>
    void SetDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::forward<DimensionsT>(value); }
    template<typename DimensionsT = Aws::Vector<Dimension>>
    DescribeAlarmsForMetricRequest& WithDimensions(DimensionsT&& value) { SetDimensions(std::forward<DimensionsT>(value)); return *this;}
    template<typename DimensionsT = Dimension>
    DescribeAlarmsForMetricRequest& AddDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace_back(std::forward<DimensionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The period, in seconds, over which the statistic is applied.</p>
     */
    inline int GetPeriod() const { return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }
    inline DescribeAlarmsForMetricRequest& WithPeriod(int value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit for the metric.</p>
     */
    inline StandardUnit GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(StandardUnit value) { m_unitHasBeenSet = true; m_unit = value; }
    inline DescribeAlarmsForMetricRequest& WithUnit(StandardUnit value) { SetUnit(value); return *this;}
    ///@}
  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Statistic m_statistic{Statistic::NOT_SET};
    bool m_statisticHasBeenSet = false;

    Aws::String m_extendedStatistic;
    bool m_extendedStatisticHasBeenSet = false;

    Aws::Vector<Dimension> m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    int m_period{0};
    bool m_periodHasBeenSet = false;

    StandardUnit m_unit{StandardUnit::NOT_SET};
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
