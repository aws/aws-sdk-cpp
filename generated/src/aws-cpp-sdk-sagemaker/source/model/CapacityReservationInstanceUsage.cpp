/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/CapacityReservationInstanceUsage.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

CapacityReservationInstanceUsage::CapacityReservationInstanceUsage(JsonView jsonValue) { *this = jsonValue; }

CapacityReservationInstanceUsage& CapacityReservationInstanceUsage::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AccountId")) {
    m_accountId = jsonValue.GetString("AccountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InUseInstanceCount")) {
    m_inUseInstanceCount = jsonValue.GetInteger("InUseInstanceCount");
    m_inUseInstanceCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourcesUsage")) {
    Aws::Utils::Array<JsonView> resourcesUsageJsonList = jsonValue.GetArray("ResourcesUsage");
    for (unsigned resourcesUsageIndex = 0; resourcesUsageIndex < resourcesUsageJsonList.GetLength(); ++resourcesUsageIndex) {
      m_resourcesUsage.push_back(resourcesUsageJsonList[resourcesUsageIndex].AsObject());
    }
    m_resourcesUsageHasBeenSet = true;
  }
  return *this;
}

JsonValue CapacityReservationInstanceUsage::Jsonize() const {
  JsonValue payload;

  if (m_accountIdHasBeenSet) {
    payload.WithString("AccountId", m_accountId);
  }

  if (m_inUseInstanceCountHasBeenSet) {
    payload.WithInteger("InUseInstanceCount", m_inUseInstanceCount);
  }

  if (m_resourcesUsageHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourcesUsageJsonList(m_resourcesUsage.size());
    for (unsigned resourcesUsageIndex = 0; resourcesUsageIndex < resourcesUsageJsonList.GetLength(); ++resourcesUsageIndex) {
      resourcesUsageJsonList[resourcesUsageIndex].AsObject(m_resourcesUsage[resourcesUsageIndex].Jsonize());
    }
    payload.WithArray("ResourcesUsage", std::move(resourcesUsageJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
