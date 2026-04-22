/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/AIRecommendationPerformanceMetric.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

AIRecommendationPerformanceMetric::AIRecommendationPerformanceMetric(JsonView jsonValue) { *this = jsonValue; }

AIRecommendationPerformanceMetric& AIRecommendationPerformanceMetric::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Metric")) {
    m_metric = jsonValue.GetString("Metric");
    m_metricHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Stat")) {
    m_stat = jsonValue.GetString("Stat");
    m_statHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Value")) {
    m_value = jsonValue.GetString("Value");
    m_valueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Unit")) {
    m_unit = jsonValue.GetString("Unit");
    m_unitHasBeenSet = true;
  }
  return *this;
}

JsonValue AIRecommendationPerformanceMetric::Jsonize() const {
  JsonValue payload;

  if (m_metricHasBeenSet) {
    payload.WithString("Metric", m_metric);
  }

  if (m_statHasBeenSet) {
    payload.WithString("Stat", m_stat);
  }

  if (m_valueHasBeenSet) {
    payload.WithString("Value", m_value);
  }

  if (m_unitHasBeenSet) {
    payload.WithString("Unit", m_unit);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
