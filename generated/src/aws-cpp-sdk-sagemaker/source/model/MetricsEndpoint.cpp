/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/MetricsEndpoint.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

MetricsEndpoint::MetricsEndpoint(JsonView jsonValue) { *this = jsonValue; }

MetricsEndpoint& MetricsEndpoint::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("MetricsEndpointPath")) {
    m_metricsEndpointPath = jsonValue.GetString("MetricsEndpointPath");
    m_metricsEndpointPathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MetricPublishFrequencyInSeconds")) {
    m_metricPublishFrequencyInSeconds = jsonValue.GetInteger("MetricPublishFrequencyInSeconds");
    m_metricPublishFrequencyInSecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue MetricsEndpoint::Jsonize() const {
  JsonValue payload;

  if (m_metricsEndpointPathHasBeenSet) {
    payload.WithString("MetricsEndpointPath", m_metricsEndpointPath);
  }

  if (m_metricPublishFrequencyInSecondsHasBeenSet) {
    payload.WithInteger("MetricPublishFrequencyInSeconds", m_metricPublishFrequencyInSeconds);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
