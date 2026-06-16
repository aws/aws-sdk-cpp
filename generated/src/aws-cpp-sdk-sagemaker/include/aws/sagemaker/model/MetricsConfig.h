/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {

/**
 * <p>The configuration for Utilization metrics.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MetricsConfig">AWS
 * API Reference</a></p>
 */
class MetricsConfig {
 public:
  AWS_SAGEMAKER_API MetricsConfig() = default;
  AWS_SAGEMAKER_API MetricsConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API MetricsConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether to enable enhanced metrics for the endpoint. Enhanced
   * metrics provide utilization and invocation data at instance and container
   * granularity. Container granularity is supported for Inference Components. The
   * default is <code>False</code>.</p>
   */
  inline bool GetEnableEnhancedMetrics() const { return m_enableEnhancedMetrics; }
  inline bool EnableEnhancedMetricsHasBeenSet() const { return m_enableEnhancedMetricsHasBeenSet; }
  inline void SetEnableEnhancedMetrics(bool value) {
    m_enableEnhancedMetricsHasBeenSet = true;
    m_enableEnhancedMetrics = value;
  }
  inline MetricsConfig& WithEnableEnhancedMetrics(bool value) {
    SetEnableEnhancedMetrics(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether detailed observability is enabled for the endpoint. When
   * set to <code>True</code>, the following metrics are published at the configured
   * frequency:</p> <ul> <li> <p>Container-level inference metrics scraped from the
   * container's Prometheus endpoint (such as request latency, error counts, and
   * throughput). Available metrics vary by framework.</p> </li> <li> <p>Per-GPU
   * metrics (utilization, memory, and temperature) attributed to individual
   * inference components.</p> </li> <li> <p>Per-instance host metrics (CPU, memory,
   * and disk utilization).</p> </li> <li> <p>Inference component placement metrics
   * (copy count per Availability Zone).</p> </li> </ul> <p>For first-party and Deep
   * Learning Containers (DLC), the Prometheus endpoint path is determined
   * automatically. For Bring-Your-Own-Container (BYOC) cases, you can optionally set
   * <code>ContainerMetricsConfig</code> to specify a custom endpoint path. If not
   * specified, the default path <code>/metrics</code> on port <code>8080</code> is
   * used.</p> <p>When set to <code>False</code>, these additional metrics are not
   * published. Standard invocation and utilization metrics controlled by
   * <code>EnableEnhancedMetrics</code> are unaffected.</p> <p>The default value for
   * new endpoint configurations is <code>True</code>. For existing endpoint
   * configurations created before this feature, the value is <code>False</code>
   * unless explicitly set.</p>
   */
  inline bool GetEnableDetailedObservability() const { return m_enableDetailedObservability; }
  inline bool EnableDetailedObservabilityHasBeenSet() const { return m_enableDetailedObservabilityHasBeenSet; }
  inline void SetEnableDetailedObservability(bool value) {
    m_enableDetailedObservabilityHasBeenSet = true;
    m_enableDetailedObservability = value;
  }
  inline MetricsConfig& WithEnableDetailedObservability(bool value) {
    SetEnableDetailedObservability(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The interval, in seconds, at which metrics are published to Amazon
   * CloudWatch. Defaults to <code>60</code>. Valid values: <code>10</code>,
   * <code>30</code>, <code>60</code>, <code>120</code>, <code>180</code>,
   * <code>240</code>, <code>300</code>.</p> <p>When
   * <code>EnableEnhancedMetrics</code> is set to <code>False</code>, this interval
   * applies to utilization metrics only. Invocation metrics continue to be published
   * at the default 60-second interval. When <code>EnableEnhancedMetrics</code> is
   * set to <code>True</code>, this interval applies to both utilization and
   * invocation metrics.</p> <p>When <code>EnableDetailedObservability</code> is set
   * to <code>True</code>, this interval applies to per-GPU metrics, per-instance
   * host metrics, container metrics, and fleet-level inference component lifecycle
   * and placement metrics.</p>
   */
  inline int GetMetricPublishFrequencyInSeconds() const { return m_metricPublishFrequencyInSeconds; }
  inline bool MetricPublishFrequencyInSecondsHasBeenSet() const { return m_metricPublishFrequencyInSecondsHasBeenSet; }
  inline void SetMetricPublishFrequencyInSeconds(int value) {
    m_metricPublishFrequencyInSecondsHasBeenSet = true;
    m_metricPublishFrequencyInSeconds = value;
  }
  inline MetricsConfig& WithMetricPublishFrequencyInSeconds(int value) {
    SetMetricPublishFrequencyInSeconds(value);
    return *this;
  }
  ///@}
 private:
  bool m_enableEnhancedMetrics{false};

  bool m_enableDetailedObservability{false};

  int m_metricPublishFrequencyInSeconds{0};
  bool m_enableEnhancedMetricsHasBeenSet = false;
  bool m_enableDetailedObservabilityHasBeenSet = false;
  bool m_metricPublishFrequencyInSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
