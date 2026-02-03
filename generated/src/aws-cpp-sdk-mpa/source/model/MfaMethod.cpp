/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mpa/model/MfaMethod.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MPA {
namespace Model {

MfaMethod::MfaMethod(JsonView jsonValue) { *this = jsonValue; }

MfaMethod& MfaMethod::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Type")) {
    m_type = MfaTypeMapper::GetMfaTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SyncStatus")) {
    m_syncStatus = MfaSyncStatusMapper::GetMfaSyncStatusForName(jsonValue.GetString("SyncStatus"));
    m_syncStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue MfaMethod::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("Type", MfaTypeMapper::GetNameForMfaType(m_type));
  }

  if (m_syncStatusHasBeenSet) {
    payload.WithString("SyncStatus", MfaSyncStatusMapper::GetNameForMfaSyncStatus(m_syncStatus));
  }

  return payload;
}

}  // namespace Model
}  // namespace MPA
}  // namespace Aws
