/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/AIRecommendationPerformanceTarget.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

AIRecommendationPerformanceTarget::AIRecommendationPerformanceTarget(JsonView jsonValue) { *this = jsonValue; }

AIRecommendationPerformanceTarget& AIRecommendationPerformanceTarget::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Constraints")) {
    Aws::Utils::Array<JsonView> constraintsJsonList = jsonValue.GetArray("Constraints");
    for (unsigned constraintsIndex = 0; constraintsIndex < constraintsJsonList.GetLength(); ++constraintsIndex) {
      m_constraints.push_back(constraintsJsonList[constraintsIndex].AsObject());
    }
    m_constraintsHasBeenSet = true;
  }
  return *this;
}

JsonValue AIRecommendationPerformanceTarget::Jsonize() const {
  JsonValue payload;

  if (m_constraintsHasBeenSet) {
    Aws::Utils::Array<JsonValue> constraintsJsonList(m_constraints.size());
    for (unsigned constraintsIndex = 0; constraintsIndex < constraintsJsonList.GetLength(); ++constraintsIndex) {
      constraintsJsonList[constraintsIndex].AsObject(m_constraints[constraintsIndex].Jsonize());
    }
    payload.WithArray("Constraints", std::move(constraintsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
