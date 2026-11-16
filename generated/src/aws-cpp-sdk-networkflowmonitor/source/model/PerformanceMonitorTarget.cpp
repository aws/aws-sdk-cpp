/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/networkflowmonitor/model/PerformanceMonitorTarget.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFlowMonitor {
namespace Model {

PerformanceMonitorTarget::PerformanceMonitorTarget(JsonView jsonValue) { *this = jsonValue; }

PerformanceMonitorTarget& PerformanceMonitorTarget::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("type")) {
    m_type = PerformanceMonitorTargetTypeMapper::GetPerformanceMonitorTargetTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("identifier")) {
    m_identifier = jsonValue.GetString("identifier");
    m_identifierHasBeenSet = true;
  }
  return *this;
}

JsonValue PerformanceMonitorTarget::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("type", PerformanceMonitorTargetTypeMapper::GetNameForPerformanceMonitorTargetType(m_type));
  }

  if (m_identifierHasBeenSet) {
    payload.WithString("identifier", m_identifier);
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkFlowMonitor
}  // namespace Aws
