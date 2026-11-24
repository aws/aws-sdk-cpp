/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/KnowledgeBaseRefreshScheduleSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

KnowledgeBaseRefreshScheduleSummary::KnowledgeBaseRefreshScheduleSummary(JsonView jsonValue) { *this = jsonValue; }

KnowledgeBaseRefreshScheduleSummary& KnowledgeBaseRefreshScheduleSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ScheduleId")) {
    m_scheduleId = jsonValue.GetString("ScheduleId");
    m_scheduleIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ScheduleFrequency")) {
    m_scheduleFrequency = jsonValue.GetObject("ScheduleFrequency");
    m_scheduleFrequencyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StartTime")) {
    m_startTime = jsonValue.GetDouble("StartTime");
    m_startTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("State")) {
    m_state = ScheduleStateMapper::GetScheduleStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  return *this;
}

JsonValue KnowledgeBaseRefreshScheduleSummary::Jsonize() const {
  JsonValue payload;

  if (m_scheduleIdHasBeenSet) {
    payload.WithString("ScheduleId", m_scheduleId);
  }

  if (m_scheduleFrequencyHasBeenSet) {
    payload.WithObject("ScheduleFrequency", m_scheduleFrequency.Jsonize());
  }

  if (m_startTimeHasBeenSet) {
    payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if (m_stateHasBeenSet) {
    payload.WithString("State", ScheduleStateMapper::GetNameForScheduleState(m_state));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
