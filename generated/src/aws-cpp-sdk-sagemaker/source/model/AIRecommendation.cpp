/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/AIRecommendation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

AIRecommendation::AIRecommendation(JsonView jsonValue) { *this = jsonValue; }

AIRecommendation& AIRecommendation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RecommendationDescription")) {
    m_recommendationDescription = jsonValue.GetString("RecommendationDescription");
    m_recommendationDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OptimizationDetails")) {
    Aws::Utils::Array<JsonView> optimizationDetailsJsonList = jsonValue.GetArray("OptimizationDetails");
    for (unsigned optimizationDetailsIndex = 0; optimizationDetailsIndex < optimizationDetailsJsonList.GetLength();
         ++optimizationDetailsIndex) {
      m_optimizationDetails.push_back(optimizationDetailsJsonList[optimizationDetailsIndex].AsObject());
    }
    m_optimizationDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ModelDetails")) {
    m_modelDetails = jsonValue.GetObject("ModelDetails");
    m_modelDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DeploymentConfiguration")) {
    m_deploymentConfiguration = jsonValue.GetObject("DeploymentConfiguration");
    m_deploymentConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AIBenchmarkJobArn")) {
    m_aIBenchmarkJobArn = jsonValue.GetString("AIBenchmarkJobArn");
    m_aIBenchmarkJobArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExpectedPerformance")) {
    Aws::Utils::Array<JsonView> expectedPerformanceJsonList = jsonValue.GetArray("ExpectedPerformance");
    for (unsigned expectedPerformanceIndex = 0; expectedPerformanceIndex < expectedPerformanceJsonList.GetLength();
         ++expectedPerformanceIndex) {
      m_expectedPerformance.push_back(expectedPerformanceJsonList[expectedPerformanceIndex].AsObject());
    }
    m_expectedPerformanceHasBeenSet = true;
  }
  return *this;
}

JsonValue AIRecommendation::Jsonize() const {
  JsonValue payload;

  if (m_recommendationDescriptionHasBeenSet) {
    payload.WithString("RecommendationDescription", m_recommendationDescription);
  }

  if (m_optimizationDetailsHasBeenSet) {
    Aws::Utils::Array<JsonValue> optimizationDetailsJsonList(m_optimizationDetails.size());
    for (unsigned optimizationDetailsIndex = 0; optimizationDetailsIndex < optimizationDetailsJsonList.GetLength();
         ++optimizationDetailsIndex) {
      optimizationDetailsJsonList[optimizationDetailsIndex].AsObject(m_optimizationDetails[optimizationDetailsIndex].Jsonize());
    }
    payload.WithArray("OptimizationDetails", std::move(optimizationDetailsJsonList));
  }

  if (m_modelDetailsHasBeenSet) {
    payload.WithObject("ModelDetails", m_modelDetails.Jsonize());
  }

  if (m_deploymentConfigurationHasBeenSet) {
    payload.WithObject("DeploymentConfiguration", m_deploymentConfiguration.Jsonize());
  }

  if (m_aIBenchmarkJobArnHasBeenSet) {
    payload.WithString("AIBenchmarkJobArn", m_aIBenchmarkJobArn);
  }

  if (m_expectedPerformanceHasBeenSet) {
    Aws::Utils::Array<JsonValue> expectedPerformanceJsonList(m_expectedPerformance.size());
    for (unsigned expectedPerformanceIndex = 0; expectedPerformanceIndex < expectedPerformanceJsonList.GetLength();
         ++expectedPerformanceIndex) {
      expectedPerformanceJsonList[expectedPerformanceIndex].AsObject(m_expectedPerformance[expectedPerformanceIndex].Jsonize());
    }
    payload.WithArray("ExpectedPerformance", std::move(expectedPerformanceJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
