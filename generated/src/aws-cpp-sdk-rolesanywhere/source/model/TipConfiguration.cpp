/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rolesanywhere/model/TipConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RolesAnywhere {
namespace Model {

TipConfiguration::TipConfiguration(JsonView jsonValue) { *this = jsonValue; }

TipConfiguration& TipConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("status")) {
    m_status = TipStatusMapper::GetTipStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("subjectType")) {
    m_subjectType = TipSubjectTypeMapper::GetTipSubjectTypeForName(jsonValue.GetString("subjectType"));
    m_subjectTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("subjectSource")) {
    m_subjectSource = TipSubjectSourceMapper::GetTipSubjectSourceForName(jsonValue.GetString("subjectSource"));
    m_subjectSourceHasBeenSet = true;
  }
  return *this;
}

JsonValue TipConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("status", TipStatusMapper::GetNameForTipStatus(m_status));
  }

  if (m_subjectTypeHasBeenSet) {
    payload.WithString("subjectType", TipSubjectTypeMapper::GetNameForTipSubjectType(m_subjectType));
  }

  if (m_subjectSourceHasBeenSet) {
    payload.WithString("subjectSource", TipSubjectSourceMapper::GetNameForTipSubjectSource(m_subjectSource));
  }

  return payload;
}

}  // namespace Model
}  // namespace RolesAnywhere
}  // namespace Aws
