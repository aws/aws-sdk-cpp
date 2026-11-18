/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/signin/model/Session.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Signin {
namespace Model {

Session::Session(JsonView jsonValue) { *this = jsonValue; }

Session& Session::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sessionArn")) {
    m_sessionArn = jsonValue.GetString("sessionArn");
    m_sessionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("principalArn")) {
    m_principalArn = jsonValue.GetString("principalArn");
    m_principalArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("role")) {
    m_role = jsonValue.GetString("role");
    m_roleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = SessionStatusMapper::GetSessionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("issuedAt")) {
    m_issuedAt = jsonValue.GetInt64("issuedAt");
    m_issuedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("expiresAt")) {
    m_expiresAt = jsonValue.GetInt64("expiresAt");
    m_expiresAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clientId")) {
    m_clientId = jsonValue.GetString("clientId");
    m_clientIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clientType")) {
    m_clientType = ClientTypeMapper::GetClientTypeForName(jsonValue.GetString("clientType"));
    m_clientTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resource")) {
    m_resource = jsonValue.GetString("resource");
    m_resourceHasBeenSet = true;
  }
  return *this;
}

JsonValue Session::Jsonize() const {
  JsonValue payload;

  if (m_sessionArnHasBeenSet) {
    payload.WithString("sessionArn", m_sessionArn);
  }

  if (m_principalArnHasBeenSet) {
    payload.WithString("principalArn", m_principalArn);
  }

  if (m_roleHasBeenSet) {
    payload.WithString("role", m_role);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", SessionStatusMapper::GetNameForSessionStatus(m_status));
  }

  if (m_issuedAtHasBeenSet) {
    payload.WithInt64("issuedAt", m_issuedAt);
  }

  if (m_expiresAtHasBeenSet) {
    payload.WithInt64("expiresAt", m_expiresAt);
  }

  if (m_clientIdHasBeenSet) {
    payload.WithString("clientId", m_clientId);
  }

  if (m_clientTypeHasBeenSet) {
    payload.WithString("clientType", ClientTypeMapper::GetNameForClientType(m_clientType));
  }

  if (m_resourceHasBeenSet) {
    payload.WithString("resource", m_resource);
  }

  return payload;
}

}  // namespace Model
}  // namespace Signin
}  // namespace Aws
