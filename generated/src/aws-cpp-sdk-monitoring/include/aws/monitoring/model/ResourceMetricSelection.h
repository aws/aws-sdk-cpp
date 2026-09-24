/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/CloudWatch_EXPORTS.h>

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
 * <p>Specifies which metrics Amazon CloudWatch collects for a resource metrics
 * configuration. Include this in a <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_CreateResourceMetricsConfiguration.html">CreateResourceMetricsConfiguration</a>
 * or <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_UpdateResourceMetricsConfiguration.html">UpdateResourceMetricsConfiguration</a>
 * request to limit collection to a specific set of metrics. If you omit metric
 * selections, Amazon CloudWatch collects all available detailed metrics for the
 * resource.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/ResourceMetricSelection">AWS
 * API Reference</a></p>
 */
class ResourceMetricSelection {
 public:
  AWS_CLOUDWATCH_API ResourceMetricSelection() = default;
  AWS_CLOUDWATCH_API ResourceMetricSelection(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API ResourceMetricSelection& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The names of the metrics to collect for the resource. Amazon CloudWatch
   * collects only the metrics that you list here.</p>
   */
  inline const Aws::Vector<Aws::String>& GetIncludeMetrics() const { return m_includeMetrics; }
  inline bool IncludeMetricsHasBeenSet() const { return m_includeMetricsHasBeenSet; }
  template <typename IncludeMetricsT = Aws::Vector<Aws::String>>
  void SetIncludeMetrics(IncludeMetricsT&& value) {
    m_includeMetricsHasBeenSet = true;
    m_includeMetrics = std::forward<IncludeMetricsT>(value);
  }
  template <typename IncludeMetricsT = Aws::Vector<Aws::String>>
  ResourceMetricSelection& WithIncludeMetrics(IncludeMetricsT&& value) {
    SetIncludeMetrics(std::forward<IncludeMetricsT>(value));
    return *this;
  }
  template <typename IncludeMetricsT = Aws::String>
  ResourceMetricSelection& AddIncludeMetrics(IncludeMetricsT&& value) {
    m_includeMetricsHasBeenSet = true;
    m_includeMetrics.emplace_back(std::forward<IncludeMetricsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_includeMetrics;
  bool m_includeMetricsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
