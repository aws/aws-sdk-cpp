/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/AIRecommendationComputeSpec.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

AIRecommendationComputeSpec::AIRecommendationComputeSpec(JsonView jsonValue) { *this = jsonValue; }

AIRecommendationComputeSpec& AIRecommendationComputeSpec::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("InstanceTypes")) {
    Aws::Utils::Array<JsonView> instanceTypesJsonList = jsonValue.GetArray("InstanceTypes");
    for (unsigned instanceTypesIndex = 0; instanceTypesIndex < instanceTypesJsonList.GetLength(); ++instanceTypesIndex) {
      m_instanceTypes.push_back(
          AIRecommendationInstanceTypeMapper::GetAIRecommendationInstanceTypeForName(instanceTypesJsonList[instanceTypesIndex].AsString()));
    }
    m_instanceTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CapacityReservationConfig")) {
    m_capacityReservationConfig = jsonValue.GetObject("CapacityReservationConfig");
    m_capacityReservationConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue AIRecommendationComputeSpec::Jsonize() const {
  JsonValue payload;

  if (m_instanceTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> instanceTypesJsonList(m_instanceTypes.size());
    for (unsigned instanceTypesIndex = 0; instanceTypesIndex < instanceTypesJsonList.GetLength(); ++instanceTypesIndex) {
      instanceTypesJsonList[instanceTypesIndex].AsString(
          AIRecommendationInstanceTypeMapper::GetNameForAIRecommendationInstanceType(m_instanceTypes[instanceTypesIndex]));
    }
    payload.WithArray("InstanceTypes", std::move(instanceTypesJsonList));
  }

  if (m_capacityReservationConfigHasBeenSet) {
    payload.WithObject("CapacityReservationConfig", m_capacityReservationConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
