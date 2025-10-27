/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/MultiplexAlert.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {

MultiplexAlert::MultiplexAlert(JsonView jsonValue) { *this = jsonValue; }

MultiplexAlert& MultiplexAlert::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("alertType")) {
    m_alertType = jsonValue.GetString("alertType");
    m_alertTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clearedTimestamp")) {
    m_clearedTimestamp = jsonValue.GetString("clearedTimestamp");
    m_clearedTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pipelineId")) {
    m_pipelineId = jsonValue.GetString("pipelineId");
    m_pipelineIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("setTimestamp")) {
    m_setTimestamp = jsonValue.GetString("setTimestamp");
    m_setTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = MultiplexAlertStateMapper::GetMultiplexAlertStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  return *this;
}

JsonValue MultiplexAlert::Jsonize() const {
  JsonValue payload;

  if (m_alertTypeHasBeenSet) {
    payload.WithString("alertType", m_alertType);
  }

  if (m_clearedTimestampHasBeenSet) {
    payload.WithString("clearedTimestamp", m_clearedTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  if (m_pipelineIdHasBeenSet) {
    payload.WithString("pipelineId", m_pipelineId);
  }

  if (m_setTimestampHasBeenSet) {
    payload.WithString("setTimestamp", m_setTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_stateHasBeenSet) {
    payload.WithString("state", MultiplexAlertStateMapper::GetNameForMultiplexAlertState(m_state));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
