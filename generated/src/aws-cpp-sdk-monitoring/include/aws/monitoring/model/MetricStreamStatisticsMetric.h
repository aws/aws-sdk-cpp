/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
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
 * <p>This object contains the information for one metric that is to be streamed
 * with additional statistics.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/MetricStreamStatisticsMetric">AWS
 * API Reference</a></p>
 */
class MetricStreamStatisticsMetric {
 public:
  AWS_CLOUDWATCH_API MetricStreamStatisticsMetric() = default;
  AWS_CLOUDWATCH_API MetricStreamStatisticsMetric(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API MetricStreamStatisticsMetric& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The namespace of the metric.</p>
   */
  inline const Aws::String& GetNamespace() const { return m_namespace; }
  inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
  template <typename NamespaceT = Aws::String>
  void SetNamespace(NamespaceT&& value) {
    m_namespaceHasBeenSet = true;
    m_namespace = std::forward<NamespaceT>(value);
  }
  template <typename NamespaceT = Aws::String>
  MetricStreamStatisticsMetric& WithNamespace(NamespaceT&& value) {
    SetNamespace(std::forward<NamespaceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the metric.</p>
   */
  inline const Aws::String& GetMetricName() const { return m_metricName; }
  inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
  template <typename MetricNameT = Aws::String>
  void SetMetricName(MetricNameT&& value) {
    m_metricNameHasBeenSet = true;
    m_metricName = std::forward<MetricNameT>(value);
  }
  template <typename MetricNameT = Aws::String>
  MetricStreamStatisticsMetric& WithMetricName(MetricNameT&& value) {
    SetMetricName(std::forward<MetricNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_namespace;

  Aws::String m_metricName;
  bool m_namespaceHasBeenSet = false;
  bool m_metricNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
