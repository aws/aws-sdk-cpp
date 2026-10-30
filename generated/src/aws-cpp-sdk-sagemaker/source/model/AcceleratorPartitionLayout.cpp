/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/AcceleratorPartitionLayout.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

AcceleratorPartitionLayout::AcceleratorPartitionLayout(JsonView jsonValue) { *this = jsonValue; }

AcceleratorPartitionLayout& AcceleratorPartitionLayout::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AcceleratorPartitionTypes")) {
    Aws::Utils::Array<JsonView> acceleratorPartitionTypesJsonList = jsonValue.GetArray("AcceleratorPartitionTypes");
    for (unsigned acceleratorPartitionTypesIndex = 0; acceleratorPartitionTypesIndex < acceleratorPartitionTypesJsonList.GetLength();
         ++acceleratorPartitionTypesIndex) {
      m_acceleratorPartitionTypes.push_back(acceleratorPartitionTypesJsonList[acceleratorPartitionTypesIndex].AsString());
    }
    m_acceleratorPartitionTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue AcceleratorPartitionLayout::Jsonize() const {
  JsonValue payload;

  if (m_acceleratorPartitionTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> acceleratorPartitionTypesJsonList(m_acceleratorPartitionTypes.size());
    for (unsigned acceleratorPartitionTypesIndex = 0; acceleratorPartitionTypesIndex < acceleratorPartitionTypesJsonList.GetLength();
         ++acceleratorPartitionTypesIndex) {
      acceleratorPartitionTypesJsonList[acceleratorPartitionTypesIndex].AsString(
          m_acceleratorPartitionTypes[acceleratorPartitionTypesIndex]);
    }
    payload.WithArray("AcceleratorPartitionTypes", std::move(acceleratorPartitionTypesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
