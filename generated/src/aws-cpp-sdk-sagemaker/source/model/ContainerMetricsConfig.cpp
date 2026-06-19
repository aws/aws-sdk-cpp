/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/ContainerMetricsConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

ContainerMetricsConfig::ContainerMetricsConfig(JsonView jsonValue) { *this = jsonValue; }

ContainerMetricsConfig& ContainerMetricsConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("MetricsEndpoints")) {
    Aws::Utils::Array<JsonView> metricsEndpointsJsonList = jsonValue.GetArray("MetricsEndpoints");
    for (unsigned metricsEndpointsIndex = 0; metricsEndpointsIndex < metricsEndpointsJsonList.GetLength(); ++metricsEndpointsIndex) {
      m_metricsEndpoints.push_back(metricsEndpointsJsonList[metricsEndpointsIndex].AsObject());
    }
    m_metricsEndpointsHasBeenSet = true;
  }
  return *this;
}

JsonValue ContainerMetricsConfig::Jsonize() const {
  JsonValue payload;

  if (m_metricsEndpointsHasBeenSet) {
    Aws::Utils::Array<JsonValue> metricsEndpointsJsonList(m_metricsEndpoints.size());
    for (unsigned metricsEndpointsIndex = 0; metricsEndpointsIndex < metricsEndpointsJsonList.GetLength(); ++metricsEndpointsIndex) {
      metricsEndpointsJsonList[metricsEndpointsIndex].AsObject(m_metricsEndpoints[metricsEndpointsIndex].Jsonize());
    }
    payload.WithArray("MetricsEndpoints", std::move(metricsEndpointsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
