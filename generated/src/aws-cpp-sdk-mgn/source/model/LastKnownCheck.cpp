/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/LastKnownCheck.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

LastKnownCheck::LastKnownCheck(JsonView jsonValue) { *this = jsonValue; }

LastKnownCheck& LastKnownCheck::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("type")) {
    m_type = LastKnownCheckTypeMapper::GetLastKnownCheckTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = LastKnownCheckStatusMapper::GetLastKnownCheckStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("error")) {
    m_error = jsonValue.GetString("error");
    m_errorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("checkedAt")) {
    m_checkedAt = jsonValue.GetDouble("checkedAt");
    m_checkedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue LastKnownCheck::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("type", LastKnownCheckTypeMapper::GetNameForLastKnownCheckType(m_type));
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", LastKnownCheckStatusMapper::GetNameForLastKnownCheckStatus(m_status));
  }

  if (m_errorHasBeenSet) {
    payload.WithString("error", m_error);
  }

  if (m_checkedAtHasBeenSet) {
    payload.WithDouble("checkedAt", m_checkedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
