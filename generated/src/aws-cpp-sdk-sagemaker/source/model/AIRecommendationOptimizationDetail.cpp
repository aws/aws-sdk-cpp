/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/AIRecommendationOptimizationDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

AIRecommendationOptimizationDetail::AIRecommendationOptimizationDetail(JsonView jsonValue) { *this = jsonValue; }

AIRecommendationOptimizationDetail& AIRecommendationOptimizationDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("OptimizationType")) {
    m_optimizationType =
        AIRecommendationOptimizationTypeMapper::GetAIRecommendationOptimizationTypeForName(jsonValue.GetString("OptimizationType"));
    m_optimizationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OptimizationConfig")) {
    Aws::Map<Aws::String, JsonView> optimizationConfigJsonMap = jsonValue.GetObject("OptimizationConfig").GetAllObjects();
    for (auto& optimizationConfigItem : optimizationConfigJsonMap) {
      m_optimizationConfig[optimizationConfigItem.first] = optimizationConfigItem.second.AsString();
    }
    m_optimizationConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue AIRecommendationOptimizationDetail::Jsonize() const {
  JsonValue payload;

  if (m_optimizationTypeHasBeenSet) {
    payload.WithString("OptimizationType",
                       AIRecommendationOptimizationTypeMapper::GetNameForAIRecommendationOptimizationType(m_optimizationType));
  }

  if (m_optimizationConfigHasBeenSet) {
    JsonValue optimizationConfigJsonMap;
    for (auto& optimizationConfigItem : m_optimizationConfig) {
      optimizationConfigJsonMap.WithString(optimizationConfigItem.first, optimizationConfigItem.second);
    }
    payload.WithObject("OptimizationConfig", std::move(optimizationConfigJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
