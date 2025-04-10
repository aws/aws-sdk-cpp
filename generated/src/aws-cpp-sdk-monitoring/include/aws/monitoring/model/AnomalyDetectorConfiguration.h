﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/monitoring/model/Range.h>
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
   * <p>The configuration specifies details about how the anomaly detection model is
   * to be trained, including time ranges to exclude from use for training the model
   * and the time zone to use for the metric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/AnomalyDetectorConfiguration">AWS
   * API Reference</a></p>
   */
  class AnomalyDetectorConfiguration
  {
  public:
    AWS_CLOUDWATCH_API AnomalyDetectorConfiguration() = default;
    AWS_CLOUDWATCH_API AnomalyDetectorConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API AnomalyDetectorConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>An array of time ranges to exclude from use when the anomaly detection model
     * is trained. Use this to make sure that events that could cause unusual values
     * for the metric, such as deployments, aren't used when CloudWatch creates the
     * model.</p>
     */
    inline const Aws::Vector<Range>& GetExcludedTimeRanges() const { return m_excludedTimeRanges; }
    inline bool ExcludedTimeRangesHasBeenSet() const { return m_excludedTimeRangesHasBeenSet; }
    template<typename ExcludedTimeRangesT = Aws::Vector<Range>>
    void SetExcludedTimeRanges(ExcludedTimeRangesT&& value) { m_excludedTimeRangesHasBeenSet = true; m_excludedTimeRanges = std::forward<ExcludedTimeRangesT>(value); }
    template<typename ExcludedTimeRangesT = Aws::Vector<Range>>
    AnomalyDetectorConfiguration& WithExcludedTimeRanges(ExcludedTimeRangesT&& value) { SetExcludedTimeRanges(std::forward<ExcludedTimeRangesT>(value)); return *this;}
    template<typename ExcludedTimeRangesT = Range>
    AnomalyDetectorConfiguration& AddExcludedTimeRanges(ExcludedTimeRangesT&& value) { m_excludedTimeRangesHasBeenSet = true; m_excludedTimeRanges.emplace_back(std::forward<ExcludedTimeRangesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time zone to use for the metric. This is useful to enable the model to
     * automatically account for daylight savings time changes if the metric is
     * sensitive to such time changes.</p> <p>To specify a time zone, use the name of
     * the time zone as specified in the standard tz database. For more information,
     * see <a href="https://en.wikipedia.org/wiki/Tz_database">tz database</a>.</p>
     */
    inline const Aws::String& GetMetricTimezone() const { return m_metricTimezone; }
    inline bool MetricTimezoneHasBeenSet() const { return m_metricTimezoneHasBeenSet; }
    template<typename MetricTimezoneT = Aws::String>
    void SetMetricTimezone(MetricTimezoneT&& value) { m_metricTimezoneHasBeenSet = true; m_metricTimezone = std::forward<MetricTimezoneT>(value); }
    template<typename MetricTimezoneT = Aws::String>
    AnomalyDetectorConfiguration& WithMetricTimezone(MetricTimezoneT&& value) { SetMetricTimezone(std::forward<MetricTimezoneT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Range> m_excludedTimeRanges;
    bool m_excludedTimeRangesHasBeenSet = false;

    Aws::String m_metricTimezone;
    bool m_metricTimezoneHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
