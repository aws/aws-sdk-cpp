/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/synthetics/model/ReplicationStatus.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Synthetics {
namespace Model {

ReplicationStatus::ReplicationStatus(JsonView jsonValue) { *this = jsonValue; }

ReplicationStatus& ReplicationStatus::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("State")) {
    m_state = ReplicationStateMapper::GetReplicationStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StateReason")) {
    m_stateReason = jsonValue.GetString("StateReason");
    m_stateReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StateReasonCode")) {
    m_stateReasonCode = jsonValue.GetString("StateReasonCode");
    m_stateReasonCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue ReplicationStatus::Jsonize() const {
  JsonValue payload;

  if (m_stateHasBeenSet) {
    payload.WithString("State", ReplicationStateMapper::GetNameForReplicationState(m_state));
  }

  if (m_stateReasonHasBeenSet) {
    payload.WithString("StateReason", m_stateReason);
  }

  if (m_stateReasonCodeHasBeenSet) {
    payload.WithString("StateReasonCode", m_stateReasonCode);
  }

  return payload;
}

}  // namespace Model
}  // namespace Synthetics
}  // namespace Aws
