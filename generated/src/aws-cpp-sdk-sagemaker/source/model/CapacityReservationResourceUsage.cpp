/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/CapacityReservationResourceUsage.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

CapacityReservationResourceUsage::CapacityReservationResourceUsage(JsonView jsonValue) { *this = jsonValue; }

CapacityReservationResourceUsage& CapacityReservationResourceUsage::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ResourceType")) {
    m_resourceType = CapacityReservationResourceTypeMapper::GetCapacityReservationResourceTypeForName(jsonValue.GetString("ResourceType"));
    m_resourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InUseInstanceCount")) {
    m_inUseInstanceCount = jsonValue.GetInteger("InUseInstanceCount");
    m_inUseInstanceCountHasBeenSet = true;
  }
  return *this;
}

JsonValue CapacityReservationResourceUsage::Jsonize() const {
  JsonValue payload;

  if (m_resourceTypeHasBeenSet) {
    payload.WithString("ResourceType", CapacityReservationResourceTypeMapper::GetNameForCapacityReservationResourceType(m_resourceType));
  }

  if (m_inUseInstanceCountHasBeenSet) {
    payload.WithInteger("InUseInstanceCount", m_inUseInstanceCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
