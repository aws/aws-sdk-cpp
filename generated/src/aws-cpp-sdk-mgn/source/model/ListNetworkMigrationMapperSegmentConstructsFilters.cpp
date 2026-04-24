/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/ListNetworkMigrationMapperSegmentConstructsFilters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

ListNetworkMigrationMapperSegmentConstructsFilters::ListNetworkMigrationMapperSegmentConstructsFilters(JsonView jsonValue) {
  *this = jsonValue;
}

ListNetworkMigrationMapperSegmentConstructsFilters& ListNetworkMigrationMapperSegmentConstructsFilters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("constructIDs")) {
    Aws::Utils::Array<JsonView> constructIDsJsonList = jsonValue.GetArray("constructIDs");
    for (unsigned constructIDsIndex = 0; constructIDsIndex < constructIDsJsonList.GetLength(); ++constructIDsIndex) {
      m_constructIDs.push_back(constructIDsJsonList[constructIDsIndex].AsString());
    }
    m_constructIDsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("constructTypes")) {
    Aws::Utils::Array<JsonView> constructTypesJsonList = jsonValue.GetArray("constructTypes");
    for (unsigned constructTypesIndex = 0; constructTypesIndex < constructTypesJsonList.GetLength(); ++constructTypesIndex) {
      m_constructTypes.push_back(constructTypesJsonList[constructTypesIndex].AsString());
    }
    m_constructTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue ListNetworkMigrationMapperSegmentConstructsFilters::Jsonize() const {
  JsonValue payload;

  if (m_constructIDsHasBeenSet) {
    Aws::Utils::Array<JsonValue> constructIDsJsonList(m_constructIDs.size());
    for (unsigned constructIDsIndex = 0; constructIDsIndex < constructIDsJsonList.GetLength(); ++constructIDsIndex) {
      constructIDsJsonList[constructIDsIndex].AsString(m_constructIDs[constructIDsIndex]);
    }
    payload.WithArray("constructIDs", std::move(constructIDsJsonList));
  }

  if (m_constructTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> constructTypesJsonList(m_constructTypes.size());
    for (unsigned constructTypesIndex = 0; constructTypesIndex < constructTypesJsonList.GetLength(); ++constructTypesIndex) {
      constructTypesJsonList[constructTypesIndex].AsString(m_constructTypes[constructTypesIndex]);
    }
    payload.WithArray("constructTypes", std::move(constructTypesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
