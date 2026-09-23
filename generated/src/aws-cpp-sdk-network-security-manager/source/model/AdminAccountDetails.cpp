/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/AdminAccountDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

AdminAccountDetails::AdminAccountDetails(JsonView jsonValue) { *this = jsonValue; }

AdminAccountDetails& AdminAccountDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("adminAccount")) {
    m_adminAccount = jsonValue.GetString("adminAccount");
    m_adminAccountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("priority")) {
    m_priority = jsonValue.GetInteger("priority");
    m_priorityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("adminScope")) {
    m_adminScope = jsonValue.GetObject("adminScope");
    m_adminScopeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = AdminAccountStatusMapper::GetAdminAccountStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue AdminAccountDetails::Jsonize() const {
  JsonValue payload;

  if (m_adminAccountHasBeenSet) {
    payload.WithString("adminAccount", m_adminAccount);
  }

  if (m_priorityHasBeenSet) {
    payload.WithInteger("priority", m_priority);
  }

  if (m_adminScopeHasBeenSet) {
    payload.WithObject("adminScope", m_adminScope.Jsonize());
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", AdminAccountStatusMapper::GetNameForAdminAccountStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
