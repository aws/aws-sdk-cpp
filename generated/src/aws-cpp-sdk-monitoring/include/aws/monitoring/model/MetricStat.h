/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/monitoring/model/Metric.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/monitoring/model/StandardUnit.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudWatch
{
namespace Model
{

  /**
   * <p>This structure defines the metric to be returned, along with the statistics,
   * period, and units.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/MetricStat">AWS
   * API Reference</a></p>
   */
  class MetricStat
  {
  public:
    AWS_CLOUDWATCH_API MetricStat() = default;
    AWS_CLOUDWATCH_API MetricStat(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API MetricStat& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The metric to return, including the metric name, namespace, and
     * dimensions.</p>
     */
    inline const Metric& GetMetric() const { return m_metric; }
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }
    template<typename MetricT = Metric>
    void SetMetric(MetricT&& value) { m_metricHasBeenSet = true; m_metric = std::forward<MetricT>(value); }
    template<typename MetricT = Metric>
    MetricStat& WithMetric(MetricT&& value) { SetMetric(std::forward<MetricT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The granularity, in seconds, of the returned data points. For metrics with
     * regular resolution, a period can be as short as one minute (60 seconds) and must
     * be a multiple of 60. For high-resolution metrics that are collected at intervals
     * of less than one minute, the period can be 1, 5, 10, 20, 30, 60, or any multiple
     * of 60. High-resolution metrics are those metrics stored by a
     * <code>PutMetricData</code> call that includes a <code>StorageResolution</code>
     * of 1 second.</p> <p>If the <code>StartTime</code> parameter specifies a time
     * stamp that is greater than 3 hours ago, you must specify the period as follows
     * or no data points in that time range is returned:</p> <ul> <li> <p>Start time
     * between 3 hours and 15 days ago - Use a multiple of 60 seconds (1 minute).</p>
     * </li> <li> <p>Start time between 15 and 63 days ago - Use a multiple of 300
     * seconds (5 minutes).</p> </li> <li> <p>Start time greater than 63 days ago - Use
     * a multiple of 3600 seconds (1 hour).</p> </li> </ul>
     */
    inline int GetPeriod() const { return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }
    inline MetricStat& WithPeriod(int value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The statistic to return. It can include any CloudWatch statistic or extended
     * statistic.</p>
     */
    inline const Aws::String& GetStat() const { return m_stat; }
    inline bool StatHasBeenSet() const { return m_statHasBeenSet; }
    template<typename StatT = Aws::String>
    void SetStat(StatT&& value) { m_statHasBeenSet = true; m_stat = std::forward<StatT>(value); }
    template<typename StatT = Aws::String>
    MetricStat& WithStat(StatT&& value) { SetStat(std::forward<StatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When you are using a <code>Put</code> operation, this defines what unit you
     * want to use when storing the metric.</p> <p>In a <code>Get</code> operation, if
     * you omit <code>Unit</code> then all data that was collected with any unit is
     * returned, along with the corresponding units that were specified when the data
     * was reported to CloudWatch. If you specify a unit, the operation returns only
     * data that was collected with that unit specified. If you specify a unit that
     * does not match the data collected, the results of the operation are null.
     * CloudWatch does not perform unit conversions.</p>
     */
    inline StandardUnit GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(StandardUnit value) { m_unitHasBeenSet = true; m_unit = value; }
    inline MetricStat& WithUnit(StandardUnit value) { SetUnit(value); return *this;}
    ///@}
  private:

    Metric m_metric;
    bool m_metricHasBeenSet = false;

    int m_period{0};
    bool m_periodHasBeenSet = false;

    Aws::String m_stat;
    bool m_statHasBeenSet = false;

    StandardUnit m_unit{StandardUnit::NOT_SET};
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
