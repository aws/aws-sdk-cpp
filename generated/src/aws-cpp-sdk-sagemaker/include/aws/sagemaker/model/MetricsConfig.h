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
   * metrics provide utilization data at instance and container granularity.
   * Container granularity is supported for Inference Components. The default is
   * <code>False</code>.</p>
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
   * <p>The frequency, in seconds, at which utilization metrics are published to
   * Amazon CloudWatch. The default is <code>60</code> seconds.</p>
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

  int m_metricPublishFrequencyInSeconds{0};
  bool m_enableEnhancedMetricsHasBeenSet = false;
  bool m_metricPublishFrequencyInSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
