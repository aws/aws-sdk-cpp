/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/PutAdminAccountRequest.h>

#include <utility>

using namespace Aws::NetworkSecurityManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutAdminAccountRequest::SerializePayload() const {
  JsonValue payload;

  if (m_accountIdHasBeenSet) {
    payload.WithString("accountId", m_accountId);
  }

  if (m_priorityHasBeenSet) {
    payload.WithInteger("priority", m_priority);
  }

  if (m_adminScopeHasBeenSet) {
    payload.WithObject("adminScope", m_adminScope.Jsonize());
  }

  return payload.View().WriteReadable();
}
