/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/AIRecommendationInferenceSpecification.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

AIRecommendationInferenceSpecification::AIRecommendationInferenceSpecification(JsonView jsonValue) { *this = jsonValue; }

AIRecommendationInferenceSpecification& AIRecommendationInferenceSpecification::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Framework")) {
    m_framework = AIRecommendationInferenceFrameworkMapper::GetAIRecommendationInferenceFrameworkForName(jsonValue.GetString("Framework"));
    m_frameworkHasBeenSet = true;
  }
  return *this;
}

JsonValue AIRecommendationInferenceSpecification::Jsonize() const {
  JsonValue payload;

  if (m_frameworkHasBeenSet) {
    payload.WithString("Framework", AIRecommendationInferenceFrameworkMapper::GetNameForAIRecommendationInferenceFramework(m_framework));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
