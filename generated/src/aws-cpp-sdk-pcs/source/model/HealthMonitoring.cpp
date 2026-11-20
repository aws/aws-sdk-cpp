/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pcs/model/HealthMonitoring.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PCS {
namespace Model {

HealthMonitoring::HealthMonitoring(JsonView jsonValue) { *this = jsonValue; }

HealthMonitoring& HealthMonitoring::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("mode")) {
    m_mode = HealthMonitoringModeMapper::GetHealthMonitoringModeForName(jsonValue.GetString("mode"));
    m_modeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("repairAction")) {
    m_repairAction = HealthMonitoringRepairActionMapper::GetHealthMonitoringRepairActionForName(jsonValue.GetString("repairAction"));
    m_repairActionHasBeenSet = true;
  }
  return *this;
}

JsonValue HealthMonitoring::Jsonize() const {
  JsonValue payload;

  if (m_modeHasBeenSet) {
    payload.WithString("mode", HealthMonitoringModeMapper::GetNameForHealthMonitoringMode(m_mode));
  }

  if (m_repairActionHasBeenSet) {
    payload.WithString("repairAction", HealthMonitoringRepairActionMapper::GetNameForHealthMonitoringRepairAction(m_repairAction));
  }

  return payload;
}

}  // namespace Model
}  // namespace PCS
}  // namespace Aws
