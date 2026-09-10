/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/AlarmStateChangeDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

AlarmStateChangeDetail::AlarmStateChangeDetail(JsonView jsonValue) { *this = jsonValue; }

AlarmStateChangeDetail& AlarmStateChangeDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("state")) {
    m_state = AlarmStateMapper::GetAlarmStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("previousState")) {
    m_previousState = AlarmStateMapper::GetAlarmStateForName(jsonValue.GetString("previousState"));
    m_previousStateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reason")) {
    m_reason = jsonValue.GetString("reason");
    m_reasonHasBeenSet = true;
  }
  return *this;
}

JsonValue AlarmStateChangeDetail::Jsonize() const {
  JsonValue payload;

  if (m_stateHasBeenSet) {
    payload.WithString("state", AlarmStateMapper::GetNameForAlarmState(m_state));
  }

  if (m_previousStateHasBeenSet) {
    payload.WithString("previousState", AlarmStateMapper::GetNameForAlarmState(m_previousState));
  }

  if (m_reasonHasBeenSet) {
    payload.WithString("reason", m_reason);
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
