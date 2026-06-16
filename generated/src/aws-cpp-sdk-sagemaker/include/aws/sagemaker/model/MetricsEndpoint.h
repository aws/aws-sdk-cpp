/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

#include <utility>

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
 * <p>Specifies a metrics endpoint for a container, including the path where the
 * container exposes Prometheus-formatted metrics and the frequency at which to
 * publish them to Amazon CloudWatch.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MetricsEndpoint">AWS
 * API Reference</a></p>
 */
class MetricsEndpoint {
 public:
  AWS_SAGEMAKER_API MetricsEndpoint() = default;
  AWS_SAGEMAKER_API MetricsEndpoint(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API MetricsEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The path to the metrics endpoint exposed by the container. For example,
   * <code>/metrics</code> or <code>/server/metrics</code>. The path must start with
   * <code>/</code> and can contain alphanumeric characters, forward slashes,
   * underscores, hyphens, and periods. Maximum length is 256 characters. If not
   * specified, defaults to <code>/metrics</code>.</p>
   */
  inline const Aws::String& GetMetricsEndpointPath() const { return m_metricsEndpointPath; }
  inline bool MetricsEndpointPathHasBeenSet() const { return m_metricsEndpointPathHasBeenSet; }
  template <typename MetricsEndpointPathT = Aws::String>
  void SetMetricsEndpointPath(MetricsEndpointPathT&& value) {
    m_metricsEndpointPathHasBeenSet = true;
    m_metricsEndpointPath = std::forward<MetricsEndpointPathT>(value);
  }
  template <typename MetricsEndpointPathT = Aws::String>
  MetricsEndpoint& WithMetricsEndpointPath(MetricsEndpointPathT&& value) {
    SetMetricsEndpointPath(std::forward<MetricsEndpointPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The interval, in seconds, at which container metrics scraped from the
   * endpoint are published to Amazon CloudWatch. Valid values: <code>10</code>,
   * <code>30</code>, <code>60</code>, <code>120</code>, <code>180</code>,
   * <code>240</code>, <code>300</code>. Defaults to <code>60</code>.</p>
   */
  inline int GetMetricPublishFrequencyInSeconds() const { return m_metricPublishFrequencyInSeconds; }
  inline bool MetricPublishFrequencyInSecondsHasBeenSet() const { return m_metricPublishFrequencyInSecondsHasBeenSet; }
  inline void SetMetricPublishFrequencyInSeconds(int value) {
    m_metricPublishFrequencyInSecondsHasBeenSet = true;
    m_metricPublishFrequencyInSeconds = value;
  }
  inline MetricsEndpoint& WithMetricPublishFrequencyInSeconds(int value) {
    SetMetricPublishFrequencyInSeconds(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_metricsEndpointPath;

  int m_metricPublishFrequencyInSeconds{0};
  bool m_metricsEndpointPathHasBeenSet = false;
  bool m_metricPublishFrequencyInSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
