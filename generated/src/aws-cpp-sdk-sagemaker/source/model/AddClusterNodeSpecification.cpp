/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/AddClusterNodeSpecification.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

AddClusterNodeSpecification::AddClusterNodeSpecification(JsonView jsonValue) { *this = jsonValue; }

AddClusterNodeSpecification& AddClusterNodeSpecification::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("InstanceGroupName")) {
    m_instanceGroupName = jsonValue.GetString("InstanceGroupName");
    m_instanceGroupNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IncrementTargetCountBy")) {
    m_incrementTargetCountBy = jsonValue.GetInteger("IncrementTargetCountBy");
    m_incrementTargetCountByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AvailabilityZones")) {
    Aws::Utils::Array<JsonView> availabilityZonesJsonList = jsonValue.GetArray("AvailabilityZones");
    for (unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex) {
      m_availabilityZones.push_back(availabilityZonesJsonList[availabilityZonesIndex].AsString());
    }
    m_availabilityZonesHasBeenSet = true;
  }
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

JsonValue AddClusterNodeSpecification::Jsonize() const {
  JsonValue payload;

  if (m_instanceGroupNameHasBeenSet) {
    payload.WithString("InstanceGroupName", m_instanceGroupName);
  }

  if (m_incrementTargetCountByHasBeenSet) {
    payload.WithInteger("IncrementTargetCountBy", m_incrementTargetCountBy);
  }

  if (m_availabilityZonesHasBeenSet) {
    Aws::Utils::Array<JsonValue> availabilityZonesJsonList(m_availabilityZones.size());
    for (unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex) {
      availabilityZonesJsonList[availabilityZonesIndex].AsString(m_availabilityZones[availabilityZonesIndex]);
    }
    payload.WithArray("AvailabilityZones", std::move(availabilityZonesJsonList));
  }

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
