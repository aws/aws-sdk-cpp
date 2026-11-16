/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wellarchitected/model/PreferenceUpdate.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {

PreferenceUpdate::PreferenceUpdate(JsonView jsonValue) { *this = jsonValue; }

PreferenceUpdate& PreferenceUpdate::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("key")) {
    m_key = PreferenceKeyMapper::GetPreferenceKeyForName(jsonValue.GetString("key"));
    m_keyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = PreferenceStateMapper::GetPreferenceStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  return *this;
}

JsonValue PreferenceUpdate::Jsonize() const {
  JsonValue payload;

  if (m_keyHasBeenSet) {
    payload.WithString("key", PreferenceKeyMapper::GetNameForPreferenceKey(m_key));
  }

  if (m_stateHasBeenSet) {
    payload.WithString("state", PreferenceStateMapper::GetNameForPreferenceState(m_state));
  }

  return payload;
}

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
