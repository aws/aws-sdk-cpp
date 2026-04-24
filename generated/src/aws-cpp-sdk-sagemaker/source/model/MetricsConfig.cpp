/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/MetricsConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

MetricsConfig::MetricsConfig(JsonView jsonValue) { *this = jsonValue; }

MetricsConfig& MetricsConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("EnableEnhancedMetrics")) {
    m_enableEnhancedMetrics = jsonValue.GetBool("EnableEnhancedMetrics");
    m_enableEnhancedMetricsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MetricPublishFrequencyInSeconds")) {
    m_metricPublishFrequencyInSeconds = jsonValue.GetInteger("MetricPublishFrequencyInSeconds");
    m_metricPublishFrequencyInSecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue MetricsConfig::Jsonize() const {
  JsonValue payload;

  if (m_enableEnhancedMetricsHasBeenSet) {
    payload.WithBool("EnableEnhancedMetrics", m_enableEnhancedMetrics);
  }

  if (m_metricPublishFrequencyInSecondsHasBeenSet) {
    payload.WithInteger("MetricPublishFrequencyInSeconds", m_metricPublishFrequencyInSeconds);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
