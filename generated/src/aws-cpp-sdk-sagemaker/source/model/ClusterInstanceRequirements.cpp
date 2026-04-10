/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/ClusterInstanceRequirements.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

ClusterInstanceRequirements::ClusterInstanceRequirements(JsonView jsonValue) { *this = jsonValue; }

ClusterInstanceRequirements& ClusterInstanceRequirements::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("InstanceTypes")) {
    Aws::Utils::Array<JsonView> instanceTypesJsonList = jsonValue.GetArray("InstanceTypes");
    for (unsigned instanceTypesIndex = 0; instanceTypesIndex < instanceTypesJsonList.GetLength(); ++instanceTypesIndex) {
      m_instanceTypes.push_back(
          ClusterInstanceTypeMapper::GetClusterInstanceTypeForName(instanceTypesJsonList[instanceTypesIndex].AsString()));
    }
    m_instanceTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterInstanceRequirements::Jsonize() const {
  JsonValue payload;

  if (m_instanceTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> instanceTypesJsonList(m_instanceTypes.size());
    for (unsigned instanceTypesIndex = 0; instanceTypesIndex < instanceTypesJsonList.GetLength(); ++instanceTypesIndex) {
      instanceTypesJsonList[instanceTypesIndex].AsString(
          ClusterInstanceTypeMapper::GetNameForClusterInstanceType(m_instanceTypes[instanceTypesIndex]));
    }
    payload.WithArray("InstanceTypes", std::move(instanceTypesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
