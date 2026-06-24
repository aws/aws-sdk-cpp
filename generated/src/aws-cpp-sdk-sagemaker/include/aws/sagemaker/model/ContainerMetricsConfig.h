/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/MetricsEndpoint.h>

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
 * <p>The configuration for container-level metrics scraping. Use this
 * configuration to specify a custom metrics endpoint path and publishing frequency
 * for container metrics. When <code>EnableDetailedObservability</code> is set to
 * <code>True</code> in <code>MetricsConfig</code>, metrics are scraped from the
 * container's Prometheus endpoint. If this configuration is not provided, the
 * default path <code>/metrics</code> on port <code>8080</code> is used with a
 * default publishing frequency of <code>60</code> seconds. For first-party and
 * Deep Learning Containers (DLC), the endpoint path is determined automatically
 * and this configuration is optional.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ContainerMetricsConfig">AWS
 * API Reference</a></p>
 */
class ContainerMetricsConfig {
 public:
  AWS_SAGEMAKER_API ContainerMetricsConfig() = default;
  AWS_SAGEMAKER_API ContainerMetricsConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API ContainerMetricsConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of metrics endpoints to scrape from the container. Each endpoint
   * specifies the path where the container exposes Prometheus-formatted metrics and
   * the frequency at which to publish them. You can specify a maximum of 1
   * endpoint.</p>
   */
  inline const Aws::Vector<MetricsEndpoint>& GetMetricsEndpoints() const { return m_metricsEndpoints; }
  inline bool MetricsEndpointsHasBeenSet() const { return m_metricsEndpointsHasBeenSet; }
  template <typename MetricsEndpointsT = Aws::Vector<MetricsEndpoint>>
  void SetMetricsEndpoints(MetricsEndpointsT&& value) {
    m_metricsEndpointsHasBeenSet = true;
    m_metricsEndpoints = std::forward<MetricsEndpointsT>(value);
  }
  template <typename MetricsEndpointsT = Aws::Vector<MetricsEndpoint>>
  ContainerMetricsConfig& WithMetricsEndpoints(MetricsEndpointsT&& value) {
    SetMetricsEndpoints(std::forward<MetricsEndpointsT>(value));
    return *this;
  }
  template <typename MetricsEndpointsT = MetricsEndpoint>
  ContainerMetricsConfig& AddMetricsEndpoints(MetricsEndpointsT&& value) {
    m_metricsEndpointsHasBeenSet = true;
    m_metricsEndpoints.emplace_back(std::forward<MetricsEndpointsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<MetricsEndpoint> m_metricsEndpoints;
  bool m_metricsEndpointsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
