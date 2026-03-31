/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/ListNetworkMigrationDefinitionsRequestFilters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

ListNetworkMigrationDefinitionsRequestFilters::ListNetworkMigrationDefinitionsRequestFilters(JsonView jsonValue) { *this = jsonValue; }

ListNetworkMigrationDefinitionsRequestFilters& ListNetworkMigrationDefinitionsRequestFilters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("networkMigrationDefinitionIDs")) {
    Aws::Utils::Array<JsonView> networkMigrationDefinitionIDsJsonList = jsonValue.GetArray("networkMigrationDefinitionIDs");
    for (unsigned networkMigrationDefinitionIDsIndex = 0;
         networkMigrationDefinitionIDsIndex < networkMigrationDefinitionIDsJsonList.GetLength(); ++networkMigrationDefinitionIDsIndex) {
      m_networkMigrationDefinitionIDs.push_back(networkMigrationDefinitionIDsJsonList[networkMigrationDefinitionIDsIndex].AsString());
    }
    m_networkMigrationDefinitionIDsHasBeenSet = true;
  }
  return *this;
}

JsonValue ListNetworkMigrationDefinitionsRequestFilters::Jsonize() const {
  JsonValue payload;

  if (m_networkMigrationDefinitionIDsHasBeenSet) {
    Aws::Utils::Array<JsonValue> networkMigrationDefinitionIDsJsonList(m_networkMigrationDefinitionIDs.size());
    for (unsigned networkMigrationDefinitionIDsIndex = 0;
         networkMigrationDefinitionIDsIndex < networkMigrationDefinitionIDsJsonList.GetLength(); ++networkMigrationDefinitionIDsIndex) {
      networkMigrationDefinitionIDsJsonList[networkMigrationDefinitionIDsIndex].AsString(
          m_networkMigrationDefinitionIDs[networkMigrationDefinitionIDsIndex]);
    }
    payload.WithArray("networkMigrationDefinitionIDs", std::move(networkMigrationDefinitionIDsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
