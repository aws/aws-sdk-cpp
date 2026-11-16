/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wellarchitected/model/OrganizationalAggregationConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {

OrganizationalAggregationConfiguration::OrganizationalAggregationConfiguration(JsonView jsonValue) { *this = jsonValue; }

OrganizationalAggregationConfiguration& OrganizationalAggregationConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("organizationalUnits")) {
    Aws::Utils::Array<JsonView> organizationalUnitsJsonList = jsonValue.GetArray("organizationalUnits");
    for (unsigned organizationalUnitsIndex = 0; organizationalUnitsIndex < organizationalUnitsJsonList.GetLength();
         ++organizationalUnitsIndex) {
      m_organizationalUnits.push_back(organizationalUnitsJsonList[organizationalUnitsIndex].AsObject());
    }
    m_organizationalUnitsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accounts")) {
    Aws::Utils::Array<JsonView> accountsJsonList = jsonValue.GetArray("accounts");
    for (unsigned accountsIndex = 0; accountsIndex < accountsJsonList.GetLength(); ++accountsIndex) {
      m_accounts.push_back(accountsJsonList[accountsIndex].AsObject());
    }
    m_accountsHasBeenSet = true;
  }
  return *this;
}

JsonValue OrganizationalAggregationConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_organizationalUnitsHasBeenSet) {
    Aws::Utils::Array<JsonValue> organizationalUnitsJsonList(m_organizationalUnits.size());
    for (unsigned organizationalUnitsIndex = 0; organizationalUnitsIndex < organizationalUnitsJsonList.GetLength();
         ++organizationalUnitsIndex) {
      organizationalUnitsJsonList[organizationalUnitsIndex].AsObject(m_organizationalUnits[organizationalUnitsIndex].Jsonize());
    }
    payload.WithArray("organizationalUnits", std::move(organizationalUnitsJsonList));
  }

  if (m_accountsHasBeenSet) {
    Aws::Utils::Array<JsonValue> accountsJsonList(m_accounts.size());
    for (unsigned accountsIndex = 0; accountsIndex < accountsJsonList.GetLength(); ++accountsIndex) {
      accountsJsonList[accountsIndex].AsObject(m_accounts[accountsIndex].Jsonize());
    }
    payload.WithArray("accounts", std::move(accountsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
