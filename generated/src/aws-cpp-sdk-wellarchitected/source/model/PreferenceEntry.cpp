/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wellarchitected/model/PreferenceEntry.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {

PreferenceEntry::PreferenceEntry(JsonView jsonValue) { *this = jsonValue; }

PreferenceEntry& PreferenceEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("key")) {
    m_key = PreferenceKeyMapper::GetPreferenceKeyForName(jsonValue.GetString("key"));
    m_keyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = PreferenceStatusMapper::GetPreferenceStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("detail")) {
    m_detail = jsonValue.GetString("detail");
    m_detailHasBeenSet = true;
  }
  return *this;
}

JsonValue PreferenceEntry::Jsonize() const {
  JsonValue payload;

  if (m_keyHasBeenSet) {
    payload.WithString("key", PreferenceKeyMapper::GetNameForPreferenceKey(m_key));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", PreferenceStatusMapper::GetNameForPreferenceStatus(m_status));
  }

  if (m_detailHasBeenSet) {
    payload.WithString("detail", m_detail);
  }

  return payload;
}

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
