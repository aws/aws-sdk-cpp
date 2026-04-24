/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wickr/model/BasicDeviceObject.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Wickr {
namespace Model {

BasicDeviceObject::BasicDeviceObject(JsonView jsonValue) { *this = jsonValue; }

BasicDeviceObject& BasicDeviceObject::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("appId")) {
    m_appId = jsonValue.GetString("appId");
    m_appIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("created")) {
    m_created = jsonValue.GetString("created");
    m_createdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastLogin")) {
    m_lastLogin = jsonValue.GetString("lastLogin");
    m_lastLoginHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusText")) {
    m_statusText = jsonValue.GetString("statusText");
    m_statusTextHasBeenSet = true;
  }
  if (jsonValue.ValueExists("suspend")) {
    m_suspend = jsonValue.GetBool("suspend");
    m_suspendHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = jsonValue.GetString("type");
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue BasicDeviceObject::Jsonize() const {
  JsonValue payload;

  if (m_appIdHasBeenSet) {
    payload.WithString("appId", m_appId);
  }

  if (m_createdHasBeenSet) {
    payload.WithString("created", m_created);
  }

  if (m_lastLoginHasBeenSet) {
    payload.WithString("lastLogin", m_lastLogin);
  }

  if (m_statusTextHasBeenSet) {
    payload.WithString("statusText", m_statusText);
  }

  if (m_suspendHasBeenSet) {
    payload.WithBool("suspend", m_suspend);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", m_type);
  }

  return payload;
}

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
