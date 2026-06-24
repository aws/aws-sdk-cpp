/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/PointInTimeRestoreConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

PointInTimeRestoreConfiguration::PointInTimeRestoreConfiguration(JsonView jsonValue) { *this = jsonValue; }

PointInTimeRestoreConfiguration& PointInTimeRestoreConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sourceAutonomousDatabaseId")) {
    m_sourceAutonomousDatabaseId = jsonValue.GetString("sourceAutonomousDatabaseId");
    m_sourceAutonomousDatabaseIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloneType")) {
    m_cloneType = CloneTypeMapper::GetCloneTypeForName(jsonValue.GetString("cloneType"));
    m_cloneTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timestamp")) {
    m_timestamp = jsonValue.GetString("timestamp");
    m_timestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("useLatestAvailableBackupTimestamp")) {
    m_useLatestAvailableBackupTimestamp = jsonValue.GetBool("useLatestAvailableBackupTimestamp");
    m_useLatestAvailableBackupTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloneTableSpaceList")) {
    Aws::Utils::Array<JsonView> cloneTableSpaceListJsonList = jsonValue.GetArray("cloneTableSpaceList");
    for (unsigned cloneTableSpaceListIndex = 0; cloneTableSpaceListIndex < cloneTableSpaceListJsonList.GetLength();
         ++cloneTableSpaceListIndex) {
      m_cloneTableSpaceList.push_back(cloneTableSpaceListJsonList[cloneTableSpaceListIndex].AsInteger());
    }
    m_cloneTableSpaceListHasBeenSet = true;
  }
  return *this;
}

JsonValue PointInTimeRestoreConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_sourceAutonomousDatabaseIdHasBeenSet) {
    payload.WithString("sourceAutonomousDatabaseId", m_sourceAutonomousDatabaseId);
  }

  if (m_cloneTypeHasBeenSet) {
    payload.WithString("cloneType", CloneTypeMapper::GetNameForCloneType(m_cloneType));
  }

  if (m_timestampHasBeenSet) {
    payload.WithString("timestamp", m_timestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_useLatestAvailableBackupTimestampHasBeenSet) {
    payload.WithBool("useLatestAvailableBackupTimestamp", m_useLatestAvailableBackupTimestamp);
  }

  if (m_cloneTableSpaceListHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloneTableSpaceListJsonList(m_cloneTableSpaceList.size());
    for (unsigned cloneTableSpaceListIndex = 0; cloneTableSpaceListIndex < cloneTableSpaceListJsonList.GetLength();
         ++cloneTableSpaceListIndex) {
      cloneTableSpaceListJsonList[cloneTableSpaceListIndex].AsInteger(m_cloneTableSpaceList[cloneTableSpaceListIndex]);
    }
    payload.WithArray("cloneTableSpaceList", std::move(cloneTableSpaceListJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
