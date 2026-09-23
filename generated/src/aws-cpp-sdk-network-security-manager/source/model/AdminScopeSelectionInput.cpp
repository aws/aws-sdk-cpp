/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/AdminScopeSelectionInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

AdminScopeSelectionInput::AdminScopeSelectionInput(JsonView jsonValue) { *this = jsonValue; }

AdminScopeSelectionInput& AdminScopeSelectionInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("accounts")) {
    Aws::Utils::Array<JsonView> accountsJsonList = jsonValue.GetArray("accounts");
    for (unsigned accountsIndex = 0; accountsIndex < accountsJsonList.GetLength(); ++accountsIndex) {
      m_accounts.push_back(accountsJsonList[accountsIndex].AsString());
    }
    m_accountsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("organizationalUnits")) {
    Aws::Utils::Array<JsonView> organizationalUnitsJsonList = jsonValue.GetArray("organizationalUnits");
    for (unsigned organizationalUnitsIndex = 0; organizationalUnitsIndex < organizationalUnitsJsonList.GetLength();
         ++organizationalUnitsIndex) {
      m_organizationalUnits.push_back(organizationalUnitsJsonList[organizationalUnitsIndex].AsString());
    }
    m_organizationalUnitsHasBeenSet = true;
  }
  return *this;
}

JsonValue AdminScopeSelectionInput::Jsonize() const {
  JsonValue payload;

  if (m_accountsHasBeenSet) {
    Aws::Utils::Array<JsonValue> accountsJsonList(m_accounts.size());
    for (unsigned accountsIndex = 0; accountsIndex < accountsJsonList.GetLength(); ++accountsIndex) {
      accountsJsonList[accountsIndex].AsString(m_accounts[accountsIndex]);
    }
    payload.WithArray("accounts", std::move(accountsJsonList));
  }

  if (m_organizationalUnitsHasBeenSet) {
    Aws::Utils::Array<JsonValue> organizationalUnitsJsonList(m_organizationalUnits.size());
    for (unsigned organizationalUnitsIndex = 0; organizationalUnitsIndex < organizationalUnitsJsonList.GetLength();
         ++organizationalUnitsIndex) {
      organizationalUnitsJsonList[organizationalUnitsIndex].AsString(m_organizationalUnits[organizationalUnitsIndex]);
    }
    payload.WithArray("organizationalUnits", std::move(organizationalUnitsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
