/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/networkflowmonitor/model/PerformanceMonitorSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFlowMonitor {
namespace Model {

PerformanceMonitorSummary::PerformanceMonitorSummary(JsonView jsonValue) { *this = jsonValue; }

PerformanceMonitorSummary& PerformanceMonitorSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("monitorArn")) {
    m_monitorArn = jsonValue.GetString("monitorArn");
    m_monitorArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("monitorName")) {
    m_monitorName = jsonValue.GetString("monitorName");
    m_monitorNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("monitorStatus")) {
    m_monitorStatus = MonitorStatusMapper::GetMonitorStatusForName(jsonValue.GetString("monitorStatus"));
    m_monitorStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("monitorType")) {
    m_monitorType = PerformanceMonitorTypeMapper::GetPerformanceMonitorTypeForName(jsonValue.GetString("monitorType"));
    m_monitorTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targets")) {
    Aws::Utils::Array<JsonView> targetsJsonList = jsonValue.GetArray("targets");
    for (unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex) {
      m_targets.push_back(targetsJsonList[targetsIndex].AsObject());
    }
    m_targetsHasBeenSet = true;
  }
  return *this;
}

JsonValue PerformanceMonitorSummary::Jsonize() const {
  JsonValue payload;

  if (m_monitorArnHasBeenSet) {
    payload.WithString("monitorArn", m_monitorArn);
  }

  if (m_monitorNameHasBeenSet) {
    payload.WithString("monitorName", m_monitorName);
  }

  if (m_monitorStatusHasBeenSet) {
    payload.WithString("monitorStatus", MonitorStatusMapper::GetNameForMonitorStatus(m_monitorStatus));
  }

  if (m_monitorTypeHasBeenSet) {
    payload.WithString("monitorType", PerformanceMonitorTypeMapper::GetNameForPerformanceMonitorType(m_monitorType));
  }

  if (m_targetsHasBeenSet) {
    Aws::Utils::Array<JsonValue> targetsJsonList(m_targets.size());
    for (unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex) {
      targetsJsonList[targetsIndex].AsObject(m_targets[targetsIndex].Jsonize());
    }
    payload.WithArray("targets", std::move(targetsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkFlowMonitor
}  // namespace Aws
