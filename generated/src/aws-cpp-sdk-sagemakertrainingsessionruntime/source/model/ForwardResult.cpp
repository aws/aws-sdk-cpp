/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemakertrainingsessionruntime/model/ForwardResult.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMakerTrainingSessionRuntime {
namespace Model {

ForwardResult::ForwardResult(JsonView jsonValue) { *this = jsonValue; }

ForwardResult& ForwardResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("lossFnOutputType")) {
    m_lossFnOutputType = jsonValue.GetString("lossFnOutputType");
    m_lossFnOutputTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lossFnOutputs")) {
    Aws::Utils::Array<JsonView> lossFnOutputsJsonList = jsonValue.GetArray("lossFnOutputs");
    for (unsigned lossFnOutputsIndex = 0; lossFnOutputsIndex < lossFnOutputsJsonList.GetLength(); ++lossFnOutputsIndex) {
      Aws::Map<Aws::String, JsonView> tensorDataMap2JsonMap = lossFnOutputsJsonList[lossFnOutputsIndex].GetAllObjects();
      Aws::Map<Aws::String, TensorData> tensorDataMap2Map;
      for (auto& tensorDataMap2Item : tensorDataMap2JsonMap) {
        tensorDataMap2Map[tensorDataMap2Item.first] = tensorDataMap2Item.second.AsObject();
      }
      m_lossFnOutputs.push_back(std::move(tensorDataMap2Map));
    }
    m_lossFnOutputsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("metrics")) {
    Aws::Map<Aws::String, JsonView> metricsJsonMap = jsonValue.GetObject("metrics").GetAllObjects();
    for (auto& metricsItem : metricsJsonMap) {
      m_metrics[metricsItem.first] = metricsItem.second.AsDouble();
    }
    m_metricsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tokenUsage")) {
    m_tokenUsage = jsonValue.GetObject("tokenUsage");
    m_tokenUsageHasBeenSet = true;
  }
  return *this;
}

JsonValue ForwardResult::Jsonize() const {
  JsonValue payload;

  if (m_lossFnOutputTypeHasBeenSet) {
    payload.WithString("lossFnOutputType", m_lossFnOutputType);
  }

  if (m_lossFnOutputsHasBeenSet) {
    Aws::Utils::Array<JsonValue> lossFnOutputsJsonList(m_lossFnOutputs.size());
    for (unsigned lossFnOutputsIndex = 0; lossFnOutputsIndex < lossFnOutputsJsonList.GetLength(); ++lossFnOutputsIndex) {
      JsonValue tensorDataMapJsonMap;
      for (auto& tensorDataMapItem : m_lossFnOutputs[lossFnOutputsIndex]) {
        tensorDataMapJsonMap.WithObject(tensorDataMapItem.first, tensorDataMapItem.second.Jsonize());
      }
      lossFnOutputsJsonList[lossFnOutputsIndex].AsObject(std::move(tensorDataMapJsonMap));
    }
    payload.WithArray("lossFnOutputs", std::move(lossFnOutputsJsonList));
  }

  if (m_metricsHasBeenSet) {
    JsonValue metricsJsonMap;
    for (auto& metricsItem : m_metrics) {
      metricsJsonMap.WithDouble(metricsItem.first, metricsItem.second);
    }
    payload.WithObject("metrics", std::move(metricsJsonMap));
  }

  if (m_tokenUsageHasBeenSet) {
    payload.WithObject("tokenUsage", m_tokenUsage.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
