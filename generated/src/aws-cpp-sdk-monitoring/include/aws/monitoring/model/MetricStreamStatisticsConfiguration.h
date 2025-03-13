/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/model/MetricStreamStatisticsMetric.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>By default, a metric stream always sends the <code>MAX</code>,
   * <code>MIN</code>, <code>SUM</code>, and <code>SAMPLECOUNT</code> statistics for
   * each metric that is streamed. This structure contains information for one metric
   * that includes additional statistics in the stream. For more information about
   * statistics, see CloudWatch, listed in <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/Statistics-definitions.html.html">
   * CloudWatch statistics definitions</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/MetricStreamStatisticsConfiguration">AWS
   * API Reference</a></p>
   */
  class MetricStreamStatisticsConfiguration
  {
  public:
    AWS_CLOUDWATCH_API MetricStreamStatisticsConfiguration() = default;
    AWS_CLOUDWATCH_API MetricStreamStatisticsConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API MetricStreamStatisticsConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>An array of metric name and namespace pairs that stream the additional
     * statistics listed in the value of the <code>AdditionalStatistics</code>
     * parameter. There can be as many as 100 pairs in the array.</p> <p>All metrics
     * that match the combination of metric name and namespace will be streamed with
     * the additional statistics, no matter their dimensions.</p>
     */
    inline const Aws::Vector<MetricStreamStatisticsMetric>& GetIncludeMetrics() const { return m_includeMetrics; }
    inline bool IncludeMetricsHasBeenSet() const { return m_includeMetricsHasBeenSet; }
    template<typename IncludeMetricsT = Aws::Vector<MetricStreamStatisticsMetric>>
    void SetIncludeMetrics(IncludeMetricsT&& value) { m_includeMetricsHasBeenSet = true; m_includeMetrics = std::forward<IncludeMetricsT>(value); }
    template<typename IncludeMetricsT = Aws::Vector<MetricStreamStatisticsMetric>>
    MetricStreamStatisticsConfiguration& WithIncludeMetrics(IncludeMetricsT&& value) { SetIncludeMetrics(std::forward<IncludeMetricsT>(value)); return *this;}
    template<typename IncludeMetricsT = MetricStreamStatisticsMetric>
    MetricStreamStatisticsConfiguration& AddIncludeMetrics(IncludeMetricsT&& value) { m_includeMetricsHasBeenSet = true; m_includeMetrics.emplace_back(std::forward<IncludeMetricsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of additional statistics that are to be streamed for the metrics
     * listed in the <code>IncludeMetrics</code> array in this structure. This list can
     * include as many as 20 statistics.</p> <p>If the <code>OutputFormat</code> for
     * the stream is <code>opentelemetry1.0</code> or <code>opentelemetry0.7</code>,
     * the only valid values are <code>p<i>??</i> </code> percentile statistics such as
     * <code>p90</code>, <code>p99</code> and so on.</p> <p>If the
     * <code>OutputFormat</code> for the stream is <code>json</code>, the valid values
     * include the abbreviations for all of the statistics listed in <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/Statistics-definitions.html.html">
     * CloudWatch statistics definitions</a>. For example, this includes <code>tm98,
     * </code> <code>wm90</code>, <code>PR(:300)</code>, and so on.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalStatistics() const { return m_additionalStatistics; }
    inline bool AdditionalStatisticsHasBeenSet() const { return m_additionalStatisticsHasBeenSet; }
    template<typename AdditionalStatisticsT = Aws::Vector<Aws::String>>
    void SetAdditionalStatistics(AdditionalStatisticsT&& value) { m_additionalStatisticsHasBeenSet = true; m_additionalStatistics = std::forward<AdditionalStatisticsT>(value); }
    template<typename AdditionalStatisticsT = Aws::Vector<Aws::String>>
    MetricStreamStatisticsConfiguration& WithAdditionalStatistics(AdditionalStatisticsT&& value) { SetAdditionalStatistics(std::forward<AdditionalStatisticsT>(value)); return *this;}
    template<typename AdditionalStatisticsT = Aws::String>
    MetricStreamStatisticsConfiguration& AddAdditionalStatistics(AdditionalStatisticsT&& value) { m_additionalStatisticsHasBeenSet = true; m_additionalStatistics.emplace_back(std::forward<AdditionalStatisticsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<MetricStreamStatisticsMetric> m_includeMetrics;
    bool m_includeMetricsHasBeenSet = false;

    Aws::Vector<Aws::String> m_additionalStatistics;
    bool m_additionalStatisticsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
