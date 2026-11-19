/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rtbfabric/model/Update.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {

Update::Update(JsonView jsonValue) { *this = jsonValue; }

Update& Update::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("target")) {
    m_target = jsonValue.GetObject("target");
    m_targetHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("parameters")) {
    m_parameters = jsonValue.GetObject("parameters");
    m_parametersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorDetails")) {
    Aws::Utils::Array<JsonView> errorDetailsJsonList = jsonValue.GetArray("errorDetails");
    for (unsigned errorDetailsIndex = 0; errorDetailsIndex < errorDetailsJsonList.GetLength(); ++errorDetailsIndex) {
      m_errorDetails.push_back(errorDetailsJsonList[errorDetailsIndex].AsObject());
    }
    m_errorDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue Update::Jsonize() const {
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

  if (m_targetHasBeenSet) {
    payload.WithObject("target", m_target.Jsonize());
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_parametersHasBeenSet) {
    payload.WithObject("parameters", m_parameters.Jsonize());
  }

  if (m_errorDetailsHasBeenSet) {
    Aws::Utils::Array<JsonValue> errorDetailsJsonList(m_errorDetails.size());
    for (unsigned errorDetailsIndex = 0; errorDetailsIndex < errorDetailsJsonList.GetLength(); ++errorDetailsIndex) {
      errorDetailsJsonList[errorDetailsIndex].AsObject(m_errorDetails[errorDetailsIndex].Jsonize());
    }
    payload.WithArray("errorDetails", std::move(errorDetailsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
