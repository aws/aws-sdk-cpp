/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/UpdateKnowledgeBaseRefreshScheduleRequest.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateKnowledgeBaseRefreshScheduleRequest::SerializePayload() const {
  JsonValue payload;

  if (m_scheduleFrequencyHasBeenSet) {
    payload.WithObject("ScheduleFrequency", m_scheduleFrequency.Jsonize());
  }

  if (m_startTimeHasBeenSet) {
    payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if (m_stateHasBeenSet) {
    payload.WithString("State", ScheduleStateMapper::GetNameForScheduleState(m_state));
  }

  return payload.View().WriteReadable();
}
