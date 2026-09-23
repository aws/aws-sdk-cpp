/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/AccountSet.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

AccountSet::AccountSet(JsonView jsonValue) { *this = jsonValue; }

AccountSet& AccountSet::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("accountIds")) {
    Aws::Utils::Array<JsonView> accountIdsJsonList = jsonValue.GetArray("accountIds");
    for (unsigned accountIdsIndex = 0; accountIdsIndex < accountIdsJsonList.GetLength(); ++accountIdsIndex) {
      m_accountIds.push_back(accountIdsJsonList[accountIdsIndex].AsString());
    }
    m_accountIdsHasBeenSet = true;
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

JsonValue AccountSet::Jsonize() const {
  JsonValue payload;

  if (m_accountIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> accountIdsJsonList(m_accountIds.size());
    for (unsigned accountIdsIndex = 0; accountIdsIndex < accountIdsJsonList.GetLength(); ++accountIdsIndex) {
      accountIdsJsonList[accountIdsIndex].AsString(m_accountIds[accountIdsIndex]);
    }
    payload.WithArray("accountIds", std::move(accountIdsJsonList));
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
