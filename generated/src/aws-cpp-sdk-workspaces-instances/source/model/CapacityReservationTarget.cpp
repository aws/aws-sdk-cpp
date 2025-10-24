﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/workspaces-instances/model/CapacityReservationTarget.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WorkspacesInstances {
namespace Model {

CapacityReservationTarget::CapacityReservationTarget(JsonView jsonValue) { *this = jsonValue; }

CapacityReservationTarget& CapacityReservationTarget::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CapacityReservationId")) {
    m_capacityReservationId = jsonValue.GetString("CapacityReservationId");
    m_capacityReservationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CapacityReservationResourceGroupArn")) {
    m_capacityReservationResourceGroupArn = jsonValue.GetString("CapacityReservationResourceGroupArn");
    m_capacityReservationResourceGroupArnHasBeenSet = true;
  }
  return *this;
}

JsonValue CapacityReservationTarget::Jsonize() const {
  JsonValue payload;

  if (m_capacityReservationIdHasBeenSet) {
    payload.WithString("CapacityReservationId", m_capacityReservationId);
  }

  if (m_capacityReservationResourceGroupArnHasBeenSet) {
    payload.WithString("CapacityReservationResourceGroupArn", m_capacityReservationResourceGroupArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace WorkspacesInstances
}  // namespace Aws
