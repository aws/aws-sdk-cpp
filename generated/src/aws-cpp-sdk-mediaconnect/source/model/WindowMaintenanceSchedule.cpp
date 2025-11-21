/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/WindowMaintenanceSchedule.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

WindowMaintenanceSchedule::WindowMaintenanceSchedule(JsonView jsonValue) { *this = jsonValue; }

WindowMaintenanceSchedule& WindowMaintenanceSchedule::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("start")) {
    m_start = jsonValue.GetString("start");
    m_startHasBeenSet = true;
  }
  if (jsonValue.ValueExists("end")) {
    m_end = jsonValue.GetString("end");
    m_endHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scheduledTime")) {
    m_scheduledTime = jsonValue.GetString("scheduledTime");
    m_scheduledTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue WindowMaintenanceSchedule::Jsonize() const {
  JsonValue payload;

  if (m_startHasBeenSet) {
    payload.WithString("start", m_start.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_endHasBeenSet) {
    payload.WithString("end", m_end.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_scheduledTimeHasBeenSet) {
    payload.WithString("scheduledTime", m_scheduledTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
