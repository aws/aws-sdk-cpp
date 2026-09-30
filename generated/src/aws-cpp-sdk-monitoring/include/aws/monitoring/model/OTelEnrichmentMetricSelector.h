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
 * <p>Selects the metrics in one namespace, for use in the
 * <code>IncludeFilters</code> or <code>ExcludeFilters</code> parameter of <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_StartOTelEnrichment.html">StartOTelEnrichment</a>
 * or <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_UpdateOTelEnrichment.html">UpdateOTelEnrichment</a>.</p>
 * <p>A maximum of 100 selectors is allowed across <code>IncludeFilters</code> and
 * <code>ExcludeFilters</code> combined.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/OTelEnrichmentMetricSelector">AWS
 * API Reference</a></p>
 */
class OTelEnrichmentMetricSelector {
 public:
  AWS_CLOUDWATCH_API OTelEnrichmentMetricSelector() = default;
  AWS_CLOUDWATCH_API OTelEnrichmentMetricSelector(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API OTelEnrichmentMetricSelector& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The namespace of the metrics to select. Namespaces are matched exactly and
   * are case-sensitive.</p>
   */
  inline const Aws::String& GetNamespace() const { return m_namespace; }
  inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
  template <typename NamespaceT = Aws::String>
  void SetNamespace(NamespaceT&& value) {
    m_namespaceHasBeenSet = true;
    m_namespace = std::forward<NamespaceT>(value);
  }
  template <typename NamespaceT = Aws::String>
  OTelEnrichmentMetricSelector& WithNamespace(NamespaceT&& value) {
    SetNamespace(std::forward<NamespaceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The names of the metrics to select within the namespace. Metric names are
   * matched exactly and are case-sensitive. If this parameter is omitted, every
   * metric in the namespace is selected.</p> <p>A maximum of 100 metric names is
   * allowed for each selector.</p>
   */
  inline const Aws::Vector<Aws::String>& GetMetricNames() const { return m_metricNames; }
  inline bool MetricNamesHasBeenSet() const { return m_metricNamesHasBeenSet; }
  template <typename MetricNamesT = Aws::Vector<Aws::String>>
  void SetMetricNames(MetricNamesT&& value) {
    m_metricNamesHasBeenSet = true;
    m_metricNames = std::forward<MetricNamesT>(value);
  }
  template <typename MetricNamesT = Aws::Vector<Aws::String>>
  OTelEnrichmentMetricSelector& WithMetricNames(MetricNamesT&& value) {
    SetMetricNames(std::forward<MetricNamesT>(value));
    return *this;
  }
  template <typename MetricNamesT = Aws::String>
  OTelEnrichmentMetricSelector& AddMetricNames(MetricNamesT&& value) {
    m_metricNamesHasBeenSet = true;
    m_metricNames.emplace_back(std::forward<MetricNamesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_namespace;

  Aws::Vector<Aws::String> m_metricNames;
  bool m_namespaceHasBeenSet = false;
  bool m_metricNamesHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
