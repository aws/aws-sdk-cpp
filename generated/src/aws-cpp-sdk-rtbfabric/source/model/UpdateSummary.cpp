/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rtbfabric/model/UpdateSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {

UpdateSummary::UpdateSummary(JsonView jsonValue) { *this = jsonValue; }

UpdateSummary& UpdateSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("updateId")) {
    m_updateId = jsonValue.GetString("updateId");
    m_updateIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = UpdateTypeMapper::GetUpdateTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = UpdateStatusMapper::GetUpdateStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateSummary::Jsonize() const {
  JsonValue payload;

  if (m_updateIdHasBeenSet) {
    payload.WithString("updateId", m_updateId);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", UpdateTypeMapper::GetNameForUpdateType(m_type));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", UpdateStatusMapper::GetNameForUpdateStatus(m_status));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
