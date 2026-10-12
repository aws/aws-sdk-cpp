/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemakertrainingsessionruntime/model/OptimizerStepResult.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMakerTrainingSessionRuntime {
namespace Model {

OptimizerStepResult::OptimizerStepResult(JsonView jsonValue) { *this = jsonValue; }

OptimizerStepResult& OptimizerStepResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("metrics")) {
    Aws::Map<Aws::String, JsonView> metricsJsonMap = jsonValue.GetObject("metrics").GetAllObjects();
    for (auto& metricsItem : metricsJsonMap) {
      m_metrics[metricsItem.first] = metricsItem.second.AsDouble();
    }
    m_metricsHasBeenSet = true;
  }
  return *this;
}

JsonValue OptimizerStepResult::Jsonize() const {
  JsonValue payload;

  if (m_metricsHasBeenSet) {
    JsonValue metricsJsonMap;
    for (auto& metricsItem : m_metrics) {
      metricsJsonMap.WithDouble(metricsItem.first, metricsItem.second);
    }
    payload.WithObject("metrics", std::move(metricsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
