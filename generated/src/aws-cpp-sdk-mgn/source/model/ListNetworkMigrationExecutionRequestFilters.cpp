/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/ListNetworkMigrationExecutionRequestFilters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

ListNetworkMigrationExecutionRequestFilters::ListNetworkMigrationExecutionRequestFilters(JsonView jsonValue) { *this = jsonValue; }

ListNetworkMigrationExecutionRequestFilters& ListNetworkMigrationExecutionRequestFilters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("networkMigrationExecutionIDs")) {
    Aws::Utils::Array<JsonView> networkMigrationExecutionIDsJsonList = jsonValue.GetArray("networkMigrationExecutionIDs");
    for (unsigned networkMigrationExecutionIDsIndex = 0;
         networkMigrationExecutionIDsIndex < networkMigrationExecutionIDsJsonList.GetLength(); ++networkMigrationExecutionIDsIndex) {
      m_networkMigrationExecutionIDs.push_back(networkMigrationExecutionIDsJsonList[networkMigrationExecutionIDsIndex].AsString());
    }
    m_networkMigrationExecutionIDsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("networkMigrationExecutionStatuses")) {
    Aws::Utils::Array<JsonView> networkMigrationExecutionStatusesJsonList = jsonValue.GetArray("networkMigrationExecutionStatuses");
    for (unsigned networkMigrationExecutionStatusesIndex = 0;
         networkMigrationExecutionStatusesIndex < networkMigrationExecutionStatusesJsonList.GetLength();
         ++networkMigrationExecutionStatusesIndex) {
      m_networkMigrationExecutionStatuses.push_back(ExecutionStatusMapper::GetExecutionStatusForName(
          networkMigrationExecutionStatusesJsonList[networkMigrationExecutionStatusesIndex].AsString()));
    }
    m_networkMigrationExecutionStatusesHasBeenSet = true;
  }
  return *this;
}

JsonValue ListNetworkMigrationExecutionRequestFilters::Jsonize() const {
  JsonValue payload;

  if (m_networkMigrationExecutionIDsHasBeenSet) {
    Aws::Utils::Array<JsonValue> networkMigrationExecutionIDsJsonList(m_networkMigrationExecutionIDs.size());
    for (unsigned networkMigrationExecutionIDsIndex = 0;
         networkMigrationExecutionIDsIndex < networkMigrationExecutionIDsJsonList.GetLength(); ++networkMigrationExecutionIDsIndex) {
      networkMigrationExecutionIDsJsonList[networkMigrationExecutionIDsIndex].AsString(
          m_networkMigrationExecutionIDs[networkMigrationExecutionIDsIndex]);
    }
    payload.WithArray("networkMigrationExecutionIDs", std::move(networkMigrationExecutionIDsJsonList));
  }

  if (m_networkMigrationExecutionStatusesHasBeenSet) {
    Aws::Utils::Array<JsonValue> networkMigrationExecutionStatusesJsonList(m_networkMigrationExecutionStatuses.size());
    for (unsigned networkMigrationExecutionStatusesIndex = 0;
         networkMigrationExecutionStatusesIndex < networkMigrationExecutionStatusesJsonList.GetLength();
         ++networkMigrationExecutionStatusesIndex) {
      networkMigrationExecutionStatusesJsonList[networkMigrationExecutionStatusesIndex].AsString(
          ExecutionStatusMapper::GetNameForExecutionStatus(m_networkMigrationExecutionStatuses[networkMigrationExecutionStatusesIndex]));
    }
    payload.WithArray("networkMigrationExecutionStatuses", std::move(networkMigrationExecutionStatusesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
