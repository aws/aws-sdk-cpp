/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/RestoreFromBackupConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

RestoreFromBackupConfiguration::RestoreFromBackupConfiguration(JsonView jsonValue) { *this = jsonValue; }

RestoreFromBackupConfiguration& RestoreFromBackupConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("autonomousDatabaseBackupId")) {
    m_autonomousDatabaseBackupId = jsonValue.GetString("autonomousDatabaseBackupId");
    m_autonomousDatabaseBackupIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloneType")) {
    m_cloneType = CloneTypeMapper::GetCloneTypeForName(jsonValue.GetString("cloneType"));
    m_cloneTypeHasBeenSet = true;
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

JsonValue RestoreFromBackupConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_autonomousDatabaseBackupIdHasBeenSet) {
    payload.WithString("autonomousDatabaseBackupId", m_autonomousDatabaseBackupId);
  }

  if (m_cloneTypeHasBeenSet) {
    payload.WithString("cloneType", CloneTypeMapper::GetNameForCloneType(m_cloneType));
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
