/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/AIRecommendationConstraint.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

AIRecommendationConstraint::AIRecommendationConstraint(JsonView jsonValue) { *this = jsonValue; }

AIRecommendationConstraint& AIRecommendationConstraint::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Metric")) {
    m_metric = AIRecommendationMetricMapper::GetAIRecommendationMetricForName(jsonValue.GetString("Metric"));
    m_metricHasBeenSet = true;
  }
  return *this;
}

JsonValue AIRecommendationConstraint::Jsonize() const {
  JsonValue payload;

  if (m_metricHasBeenSet) {
    payload.WithString("Metric", AIRecommendationMetricMapper::GetNameForAIRecommendationMetric(m_metric));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
