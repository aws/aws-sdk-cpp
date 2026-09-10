/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/InstancePreference.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

InstancePreference::InstancePreference(JsonView jsonValue) { *this = jsonValue; }

InstancePreference& InstancePreference::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("InstanceType")) {
    m_instanceType = TrainingInstanceTypeMapper::GetTrainingInstanceTypeForName(jsonValue.GetString("InstanceType"));
    m_instanceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InstanceCount")) {
    m_instanceCount = jsonValue.GetInteger("InstanceCount");
    m_instanceCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TrainingPlanArns")) {
    Aws::Utils::Array<JsonView> trainingPlanArnsJsonList = jsonValue.GetArray("TrainingPlanArns");
    for (unsigned trainingPlanArnsIndex = 0; trainingPlanArnsIndex < trainingPlanArnsJsonList.GetLength(); ++trainingPlanArnsIndex) {
      m_trainingPlanArns.push_back(trainingPlanArnsJsonList[trainingPlanArnsIndex].AsString());
    }
    m_trainingPlanArnsHasBeenSet = true;
  }
  return *this;
}

JsonValue InstancePreference::Jsonize() const {
  JsonValue payload;

  if (m_instanceTypeHasBeenSet) {
    payload.WithString("InstanceType", TrainingInstanceTypeMapper::GetNameForTrainingInstanceType(m_instanceType));
  }

  if (m_instanceCountHasBeenSet) {
    payload.WithInteger("InstanceCount", m_instanceCount);
  }

  if (m_trainingPlanArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> trainingPlanArnsJsonList(m_trainingPlanArns.size());
    for (unsigned trainingPlanArnsIndex = 0; trainingPlanArnsIndex < trainingPlanArnsJsonList.GetLength(); ++trainingPlanArnsIndex) {
      trainingPlanArnsJsonList[trainingPlanArnsIndex].AsString(m_trainingPlanArns[trainingPlanArnsIndex]);
    }
    payload.WithArray("TrainingPlanArns", std::move(trainingPlanArnsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
