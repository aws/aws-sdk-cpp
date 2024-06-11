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
    AWS_CLOUDWATCH_API DescribeAlarmsForMetricRequest();

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
    inline const Aws::String& GetMetricName() const{ return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }
    inline DescribeAlarmsForMetricRequest& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}
    inline DescribeAlarmsForMetricRequest& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}
    inline DescribeAlarmsForMetricRequest& WithMetricName(const char* value) { SetMetricName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the metric.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }
    inline DescribeAlarmsForMetricRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}
    inline DescribeAlarmsForMetricRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}
    inline DescribeAlarmsForMetricRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The statistic for the metric, other than percentiles. For percentile
     * statistics, use <code>ExtendedStatistics</code>.</p>
     */
    inline const Statistic& GetStatistic() const{ return m_statistic; }
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }
    inline void SetStatistic(const Statistic& value) { m_statisticHasBeenSet = true; m_statistic = value; }
    inline void SetStatistic(Statistic&& value) { m_statisticHasBeenSet = true; m_statistic = std::move(value); }
    inline DescribeAlarmsForMetricRequest& WithStatistic(const Statistic& value) { SetStatistic(value); return *this;}
    inline DescribeAlarmsForMetricRequest& WithStatistic(Statistic&& value) { SetStatistic(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentile statistic for the metric. Specify a value between p0.0 and
     * p100.</p>
     */
    inline const Aws::String& GetExtendedStatistic() const{ return m_extendedStatistic; }
    inline bool ExtendedStatisticHasBeenSet() const { return m_extendedStatisticHasBeenSet; }
    inline void SetExtendedStatistic(const Aws::String& value) { m_extendedStatisticHasBeenSet = true; m_extendedStatistic = value; }
    inline void SetExtendedStatistic(Aws::String&& value) { m_extendedStatisticHasBeenSet = true; m_extendedStatistic = std::move(value); }
    inline void SetExtendedStatistic(const char* value) { m_extendedStatisticHasBeenSet = true; m_extendedStatistic.assign(value); }
    inline DescribeAlarmsForMetricRequest& WithExtendedStatistic(const Aws::String& value) { SetExtendedStatistic(value); return *this;}
    inline DescribeAlarmsForMetricRequest& WithExtendedStatistic(Aws::String&& value) { SetExtendedStatistic(std::move(value)); return *this;}
    inline DescribeAlarmsForMetricRequest& WithExtendedStatistic(const char* value) { SetExtendedStatistic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dimensions associated with the metric. If the metric has any associated
     * dimensions, you must specify them in order for the call to succeed.</p>
     */
    inline const Aws::Vector<Dimension>& GetDimensions() const{ return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    inline void SetDimensions(const Aws::Vector<Dimension>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }
    inline void SetDimensions(Aws::Vector<Dimension>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }
    inline DescribeAlarmsForMetricRequest& WithDimensions(const Aws::Vector<Dimension>& value) { SetDimensions(value); return *this;}
    inline DescribeAlarmsForMetricRequest& WithDimensions(Aws::Vector<Dimension>&& value) { SetDimensions(std::move(value)); return *this;}
    inline DescribeAlarmsForMetricRequest& AddDimensions(const Dimension& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }
    inline DescribeAlarmsForMetricRequest& AddDimensions(Dimension&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The period, in seconds, over which the statistic is applied.</p>
     */
    inline int GetPeriod() const{ return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }
    inline DescribeAlarmsForMetricRequest& WithPeriod(int value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit for the metric.</p>
     */
    inline const StandardUnit& GetUnit() const{ return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(const StandardUnit& value) { m_unitHasBeenSet = true; m_unit = value; }
    inline void SetUnit(StandardUnit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }
    inline DescribeAlarmsForMetricRequest& WithUnit(const StandardUnit& value) { SetUnit(value); return *this;}
    inline DescribeAlarmsForMetricRequest& WithUnit(StandardUnit&& value) { SetUnit(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Statistic m_statistic;
    bool m_statisticHasBeenSet = false;

    Aws::String m_extendedStatistic;
    bool m_extendedStatisticHasBeenSet = false;

    Aws::Vector<Dimension> m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    int m_period;
    bool m_periodHasBeenSet = false;

    StandardUnit m_unit;
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
