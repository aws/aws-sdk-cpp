/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/BatchAddClusterNodesError.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

BatchAddClusterNodesError::BatchAddClusterNodesError(JsonView jsonValue) { *this = jsonValue; }

BatchAddClusterNodesError& BatchAddClusterNodesError::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("InstanceGroupName")) {
    m_instanceGroupName = jsonValue.GetString("InstanceGroupName");
    m_instanceGroupNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ErrorCode")) {
    m_errorCode = BatchAddClusterNodesErrorCodeMapper::GetBatchAddClusterNodesErrorCodeForName(jsonValue.GetString("ErrorCode"));
    m_errorCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FailedCount")) {
    m_failedCount = jsonValue.GetInteger("FailedCount");
    m_failedCountHasBeenSet = true;
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
  if (jsonValue.ValueExists("Message")) {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchAddClusterNodesError::Jsonize() const {
  JsonValue payload;

  if (m_instanceGroupNameHasBeenSet) {
    payload.WithString("InstanceGroupName", m_instanceGroupName);
  }

  if (m_errorCodeHasBeenSet) {
    payload.WithString("ErrorCode", BatchAddClusterNodesErrorCodeMapper::GetNameForBatchAddClusterNodesErrorCode(m_errorCode));
  }

  if (m_failedCountHasBeenSet) {
    payload.WithInteger("FailedCount", m_failedCount);
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

  if (m_messageHasBeenSet) {
    payload.WithString("Message", m_message);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
