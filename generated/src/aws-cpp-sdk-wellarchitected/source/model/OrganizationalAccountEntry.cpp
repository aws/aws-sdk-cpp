/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wellarchitected/model/OrganizationalAccountEntry.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {

OrganizationalAccountEntry::OrganizationalAccountEntry(JsonView jsonValue) { *this = jsonValue; }

OrganizationalAccountEntry& OrganizationalAccountEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("accountId")) {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("regions")) {
    Aws::Utils::Array<JsonView> regionsJsonList = jsonValue.GetArray("regions");
    for (unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex) {
      m_regions.push_back(regionsJsonList[regionsIndex].AsString());
    }
    m_regionsHasBeenSet = true;
  }
  return *this;
}

JsonValue OrganizationalAccountEntry::Jsonize() const {
  JsonValue payload;

  if (m_accountIdHasBeenSet) {
    payload.WithString("accountId", m_accountId);
  }

  if (m_regionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> regionsJsonList(m_regions.size());
    for (unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex) {
      regionsJsonList[regionsIndex].AsString(m_regions[regionsIndex]);
    }
    payload.WithArray("regions", std::move(regionsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
