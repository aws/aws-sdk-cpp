/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/model/AnomalyDetectorAdaptationSpeed.h>
#include <aws/monitoring/model/AnomalyDetectorOutlierFilteringStrength.h>
#include <aws/monitoring/model/Range.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatch {
namespace Model {

/**
 * <p>The configuration specifies details about how the anomaly detection model is
 * to be trained, including time ranges to exclude from use for training the model
 * and the time zone to use for the metric.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/AnomalyDetectorConfiguration">AWS
 * API Reference</a></p>
 */
class AnomalyDetectorConfiguration {
 public:
  AWS_CLOUDWATCH_API AnomalyDetectorConfiguration() = default;
  AWS_CLOUDWATCH_API AnomalyDetectorConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API AnomalyDetectorConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>An array of time ranges to exclude from use when the anomaly detection model
   * is trained. Use this to make sure that events that could cause unusual values
   * for the metric, such as deployments, aren't used when CloudWatch creates the
   * model.</p>
   */
  inline const Aws::Vector<Range>& GetExcludedTimeRanges() const { return m_excludedTimeRanges; }
  inline bool ExcludedTimeRangesHasBeenSet() const { return m_excludedTimeRangesHasBeenSet; }
  template <typename ExcludedTimeRangesT = Aws::Vector<Range>>
  void SetExcludedTimeRanges(ExcludedTimeRangesT&& value) {
    m_excludedTimeRangesHasBeenSet = true;
    m_excludedTimeRanges = std::forward<ExcludedTimeRangesT>(value);
  }
  template <typename ExcludedTimeRangesT = Aws::Vector<Range>>
  AnomalyDetectorConfiguration& WithExcludedTimeRanges(ExcludedTimeRangesT&& value) {
    SetExcludedTimeRanges(std::forward<ExcludedTimeRangesT>(value));
    return *this;
  }
  template <typename ExcludedTimeRangesT = Range>
  AnomalyDetectorConfiguration& AddExcludedTimeRanges(ExcludedTimeRangesT&& value) {
    m_excludedTimeRangesHasBeenSet = true;
    m_excludedTimeRanges.emplace_back(std::forward<ExcludedTimeRangesT>(value));
    return *this;
  }
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
  template <typename MetricTimezoneT = Aws::String>
  void SetMetricTimezone(MetricTimezoneT&& value) {
    m_metricTimezoneHasBeenSet = true;
    m_metricTimezone = std::forward<MetricTimezoneT>(value);
  }
  template <typename MetricTimezoneT = Aws::String>
  AnomalyDetectorConfiguration& WithMetricTimezone(MetricTimezoneT&& value) {
    SetMetricTimezone(std::forward<MetricTimezoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The speed at which the anomaly detection model adapts to sustained changes in
   * the metric's baseline. Faster adaptation lets the model track shifting workloads
   * sooner, but increases the chance that the model treats a real, lasting change as
   * normal.</p> <p>Valid values:</p> <ul> <li> <p> <code>FAST</code> - The model
   * adapts quickly to sustained changes in the baseline.</p> </li> <li> <p>
   * <code>NORMAL</code> - The model adapts at a moderate pace. This is the default
   * value.</p> </li> <li> <p> <code>SLOW</code> - The model adapts slowly, reducing
   * the risk of treating a real change as normal.</p> </li> </ul>
   */
  inline AnomalyDetectorAdaptationSpeed GetAdaptationSpeed() const { return m_adaptationSpeed; }
  inline bool AdaptationSpeedHasBeenSet() const { return m_adaptationSpeedHasBeenSet; }
  inline void SetAdaptationSpeed(AnomalyDetectorAdaptationSpeed value) {
    m_adaptationSpeedHasBeenSet = true;
    m_adaptationSpeed = value;
  }
  inline AnomalyDetectorConfiguration& WithAdaptationSpeed(AnomalyDetectorAdaptationSpeed value) {
    SetAdaptationSpeed(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The aggressiveness with which CloudWatch filters outliers from the metric
   * data that the anomaly detection model uses. Stronger filtering excludes more
   * extreme values, which can produce a tighter band of expected values but may also
   * suppress legitimate spikes.</p> <p>Valid values:</p> <ul> <li> <p>
   * <code>MINIMAL</code> - Excludes only the most extreme outliers.</p> </li> <li>
   * <p> <code>MODERATE</code> - Excludes a moderate range of outliers. This is the
   * default value.</p> </li> <li> <p> <code>STRICT</code> - Excludes a wider range
   * of outliers, which can suppress legitimate spikes.</p> </li> </ul>
   */
  inline AnomalyDetectorOutlierFilteringStrength GetOutlierFilteringStrength() const { return m_outlierFilteringStrength; }
  inline bool OutlierFilteringStrengthHasBeenSet() const { return m_outlierFilteringStrengthHasBeenSet; }
  inline void SetOutlierFilteringStrength(AnomalyDetectorOutlierFilteringStrength value) {
    m_outlierFilteringStrengthHasBeenSet = true;
    m_outlierFilteringStrength = value;
  }
  inline AnomalyDetectorConfiguration& WithOutlierFilteringStrength(AnomalyDetectorOutlierFilteringStrength value) {
    SetOutlierFilteringStrength(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Range> m_excludedTimeRanges;

  Aws::String m_metricTimezone;

  AnomalyDetectorAdaptationSpeed m_adaptationSpeed{AnomalyDetectorAdaptationSpeed::NOT_SET};

  AnomalyDetectorOutlierFilteringStrength m_outlierFilteringStrength{AnomalyDetectorOutlierFilteringStrength::NOT_SET};
  bool m_excludedTimeRangesHasBeenSet = false;
  bool m_metricTimezoneHasBeenSet = false;
  bool m_adaptationSpeedHasBeenSet = false;
  bool m_outlierFilteringStrengthHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
