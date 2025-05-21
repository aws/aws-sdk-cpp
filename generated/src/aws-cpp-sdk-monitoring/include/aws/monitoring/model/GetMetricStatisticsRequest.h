/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/monitoring/model/StandardUnit.h>
#include <aws/monitoring/model/Dimension.h>
#include <aws/monitoring/model/Statistic.h>
#include <utility>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   */
  class GetMetricStatisticsRequest : public CloudWatchRequest
  {
  public:
    AWS_CLOUDWATCH_API GetMetricStatisticsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMetricStatistics"; }

    AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDWATCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The namespace of the metric, with or without spaces.</p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    GetMetricStatisticsRequest& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the metric, with or without spaces.</p>
     */
    inline const Aws::String& GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    template<typename MetricNameT = Aws::String>
    void SetMetricName(MetricNameT&& value) { m_metricNameHasBeenSet = true; m_metricName = std::forward<MetricNameT>(value); }
    template<typename MetricNameT = Aws::String>
    GetMetricStatisticsRequest& WithMetricName(MetricNameT&& value) { SetMetricName(std::forward<MetricNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dimensions. If the metric contains multiple dimensions, you must include
     * a value for each dimension. CloudWatch treats each unique combination of
     * dimensions as a separate metric. If a specific combination of dimensions was not
     * published, you can't retrieve statistics for it. You must specify the same
     * dimensions that were used when the metrics were created. For an example, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch_concepts.html#dimension-combinations">Dimension
     * Combinations</a> in the <i>Amazon CloudWatch User Guide</i>. For more
     * information about specifying dimensions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/publishingMetrics.html">Publishing
     * Metrics</a> in the <i>Amazon CloudWatch User Guide</i>.</p>
     */
    inline const Aws::Vector<Dimension>& GetDimensions() const { return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    template<typename DimensionsT = Aws::Vector<Dimension>>
    void SetDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::forward<DimensionsT>(value); }
    template<typename DimensionsT = Aws::Vector<Dimension>>
    GetMetricStatisticsRequest& WithDimensions(DimensionsT&& value) { SetDimensions(std::forward<DimensionsT>(value)); return *this;}
    template<typename DimensionsT = Dimension>
    GetMetricStatisticsRequest& AddDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace_back(std::forward<DimensionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time stamp that determines the first data point to return. Start times
     * are evaluated relative to the time that CloudWatch receives the request.</p>
     * <p>The value specified is inclusive; results include data points with the
     * specified time stamp. In a raw HTTP query, the time stamp must be in ISO 8601
     * UTC format (for example, 2016-10-03T23:00:00Z).</p> <p>CloudWatch rounds the
     * specified time stamp as follows:</p> <ul> <li> <p>Start time less than 15 days
     * ago - Round down to the nearest whole minute. For example, 12:32:34 is rounded
     * down to 12:32:00.</p> </li> <li> <p>Start time between 15 and 63 days ago -
     * Round down to the nearest 5-minute clock interval. For example, 12:32:34 is
     * rounded down to 12:30:00.</p> </li> <li> <p>Start time greater than 63 days ago
     * - Round down to the nearest 1-hour clock interval. For example, 12:32:34 is
     * rounded down to 12:00:00.</p> </li> </ul> <p>If you set <code>Period</code> to
     * 5, 10, 20, or 30, the start time of your request is rounded down to the nearest
     * time that corresponds to even 5-, 10-, 20-, or 30-second divisions of a minute.
     * For example, if you make a query at (HH:mm:ss) 01:05:23 for the previous
     * 10-second period, the start time of your request is rounded down and you receive
     * data from 01:05:10 to 01:05:20. If you make a query at 15:07:17 for the previous
     * 5 minutes of data, using a period of 5 seconds, you receive data timestamped
     * between 15:02:15 and 15:07:15. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    GetMetricStatisticsRequest& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp that determines the last data point to return.</p> <p>The
     * value specified is exclusive; results include data points up to the specified
     * time stamp. In a raw HTTP query, the time stamp must be in ISO 8601 UTC format
     * (for example, 2016-10-10T23:00:00Z).</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    GetMetricStatisticsRequest& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
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
    inline GetMetricStatisticsRequest& WithPeriod(int value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metric statistics, other than percentile. For percentile statistics, use
     * <code>ExtendedStatistics</code>. When calling <code>GetMetricStatistics</code>,
     * you must specify either <code>Statistics</code> or
     * <code>ExtendedStatistics</code>, but not both.</p>
     */
    inline const Aws::Vector<Statistic>& GetStatistics() const { return m_statistics; }
    inline bool StatisticsHasBeenSet() const { return m_statisticsHasBeenSet; }
    template<typename StatisticsT = Aws::Vector<Statistic>>
    void SetStatistics(StatisticsT&& value) { m_statisticsHasBeenSet = true; m_statistics = std::forward<StatisticsT>(value); }
    template<typename StatisticsT = Aws::Vector<Statistic>>
    GetMetricStatisticsRequest& WithStatistics(StatisticsT&& value) { SetStatistics(std::forward<StatisticsT>(value)); return *this;}
    inline GetMetricStatisticsRequest& AddStatistics(Statistic value) { m_statisticsHasBeenSet = true; m_statistics.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The percentile statistics. Specify values between p0.0 and p100. When calling
     * <code>GetMetricStatistics</code>, you must specify either
     * <code>Statistics</code> or <code>ExtendedStatistics</code>, but not both.
     * Percentile statistics are not available for metrics when any of the metric
     * values are negative numbers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExtendedStatistics() const { return m_extendedStatistics; }
    inline bool ExtendedStatisticsHasBeenSet() const { return m_extendedStatisticsHasBeenSet; }
    template<typename ExtendedStatisticsT = Aws::Vector<Aws::String>>
    void SetExtendedStatistics(ExtendedStatisticsT&& value) { m_extendedStatisticsHasBeenSet = true; m_extendedStatistics = std::forward<ExtendedStatisticsT>(value); }
    template<typename ExtendedStatisticsT = Aws::Vector<Aws::String>>
    GetMetricStatisticsRequest& WithExtendedStatistics(ExtendedStatisticsT&& value) { SetExtendedStatistics(std::forward<ExtendedStatisticsT>(value)); return *this;}
    template<typename ExtendedStatisticsT = Aws::String>
    GetMetricStatisticsRequest& AddExtendedStatistics(ExtendedStatisticsT&& value) { m_extendedStatisticsHasBeenSet = true; m_extendedStatistics.emplace_back(std::forward<ExtendedStatisticsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unit for a given metric. If you omit <code>Unit</code>, all data that was
     * collected with any unit is returned, along with the corresponding units that
     * were specified when the data was reported to CloudWatch. If you specify a unit,
     * the operation returns only data that was collected with that unit specified. If
     * you specify a unit that does not match the data collected, the results of the
     * operation are null. CloudWatch does not perform unit conversions.</p>
     */
    inline StandardUnit GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(StandardUnit value) { m_unitHasBeenSet = true; m_unit = value; }
    inline GetMetricStatisticsRequest& WithUnit(StandardUnit value) { SetUnit(value); return *this;}
    ///@}
  private:

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::Vector<Dimension> m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    int m_period{0};
    bool m_periodHasBeenSet = false;

    Aws::Vector<Statistic> m_statistics;
    bool m_statisticsHasBeenSet = false;

    Aws::Vector<Aws::String> m_extendedStatistics;
    bool m_extendedStatisticsHasBeenSet = false;

    StandardUnit m_unit{StandardUnit::NOT_SET};
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
