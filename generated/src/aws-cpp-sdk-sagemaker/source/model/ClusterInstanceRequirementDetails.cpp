/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/ClusterInstanceRequirementDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

ClusterInstanceRequirementDetails::ClusterInstanceRequirementDetails(JsonView jsonValue) { *this = jsonValue; }

ClusterInstanceRequirementDetails& ClusterInstanceRequirementDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CurrentInstanceTypes")) {
    Aws::Utils::Array<JsonView> currentInstanceTypesJsonList = jsonValue.GetArray("CurrentInstanceTypes");
    for (unsigned currentInstanceTypesIndex = 0; currentInstanceTypesIndex < currentInstanceTypesJsonList.GetLength();
         ++currentInstanceTypesIndex) {
      m_currentInstanceTypes.push_back(
          ClusterInstanceTypeMapper::GetClusterInstanceTypeForName(currentInstanceTypesJsonList[currentInstanceTypesIndex].AsString()));
    }
    m_currentInstanceTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DesiredInstanceTypes")) {
    Aws::Utils::Array<JsonView> desiredInstanceTypesJsonList = jsonValue.GetArray("DesiredInstanceTypes");
    for (unsigned desiredInstanceTypesIndex = 0; desiredInstanceTypesIndex < desiredInstanceTypesJsonList.GetLength();
         ++desiredInstanceTypesIndex) {
      m_desiredInstanceTypes.push_back(
          ClusterInstanceTypeMapper::GetClusterInstanceTypeForName(desiredInstanceTypesJsonList[desiredInstanceTypesIndex].AsString()));
    }
    m_desiredInstanceTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterInstanceRequirementDetails::Jsonize() const {
  JsonValue payload;

  if (m_currentInstanceTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> currentInstanceTypesJsonList(m_currentInstanceTypes.size());
    for (unsigned currentInstanceTypesIndex = 0; currentInstanceTypesIndex < currentInstanceTypesJsonList.GetLength();
         ++currentInstanceTypesIndex) {
      currentInstanceTypesJsonList[currentInstanceTypesIndex].AsString(
          ClusterInstanceTypeMapper::GetNameForClusterInstanceType(m_currentInstanceTypes[currentInstanceTypesIndex]));
    }
    payload.WithArray("CurrentInstanceTypes", std::move(currentInstanceTypesJsonList));
  }

  if (m_desiredInstanceTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> desiredInstanceTypesJsonList(m_desiredInstanceTypes.size());
    for (unsigned desiredInstanceTypesIndex = 0; desiredInstanceTypesIndex < desiredInstanceTypesJsonList.GetLength();
         ++desiredInstanceTypesIndex) {
      desiredInstanceTypesJsonList[desiredInstanceTypesIndex].AsString(
          ClusterInstanceTypeMapper::GetNameForClusterInstanceType(m_desiredInstanceTypes[desiredInstanceTypesIndex]));
    }
    payload.WithArray("DesiredInstanceTypes", std::move(desiredInstanceTypesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
