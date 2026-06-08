/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ObservabilityAdmin {
namespace Model {

/**
 * <p>Configuration for selecting source metrics for centralization.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/SourceMetricsConfiguration">AWS
 * API Reference</a></p>
 */
class SourceMetricsConfiguration {
 public:
  AWS_OBSERVABILITYADMIN_API SourceMetricsConfiguration() = default;
  AWS_OBSERVABILITYADMIN_API SourceMetricsConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API SourceMetricsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The filter expression that selects which source metrics to centralize.
   * Currently, only <code>*</code> (all metrics) is supported. Other values return a
   * validation error.</p>
   */
  inline const Aws::String& GetMetricsSelectionCriteria() const { return m_metricsSelectionCriteria; }
  inline bool MetricsSelectionCriteriaHasBeenSet() const { return m_metricsSelectionCriteriaHasBeenSet; }
  template <typename MetricsSelectionCriteriaT = Aws::String>
  void SetMetricsSelectionCriteria(MetricsSelectionCriteriaT&& value) {
    m_metricsSelectionCriteriaHasBeenSet = true;
    m_metricsSelectionCriteria = std::forward<MetricsSelectionCriteriaT>(value);
  }
  template <typename MetricsSelectionCriteriaT = Aws::String>
  SourceMetricsConfiguration& WithMetricsSelectionCriteria(MetricsSelectionCriteriaT&& value) {
    SetMetricsSelectionCriteria(std::forward<MetricsSelectionCriteriaT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_metricsSelectionCriteria;
  bool m_metricsSelectionCriteriaHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
