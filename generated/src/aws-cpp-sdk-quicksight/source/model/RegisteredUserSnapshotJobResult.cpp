/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/RegisteredUserSnapshotJobResult.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

RegisteredUserSnapshotJobResult::RegisteredUserSnapshotJobResult(JsonView jsonValue) { *this = jsonValue; }

RegisteredUserSnapshotJobResult& RegisteredUserSnapshotJobResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FileGroups")) {
    Aws::Utils::Array<JsonView> fileGroupsJsonList = jsonValue.GetArray("FileGroups");
    for (unsigned fileGroupsIndex = 0; fileGroupsIndex < fileGroupsJsonList.GetLength(); ++fileGroupsIndex) {
      m_fileGroups.push_back(fileGroupsJsonList[fileGroupsIndex].AsObject());
    }
    m_fileGroupsHasBeenSet = true;
  }
  return *this;
}

JsonValue RegisteredUserSnapshotJobResult::Jsonize() const {
  JsonValue payload;

  if (m_fileGroupsHasBeenSet) {
    Aws::Utils::Array<JsonValue> fileGroupsJsonList(m_fileGroups.size());
    for (unsigned fileGroupsIndex = 0; fileGroupsIndex < fileGroupsJsonList.GetLength(); ++fileGroupsIndex) {
      fileGroupsJsonList[fileGroupsIndex].AsObject(m_fileGroups[fileGroupsIndex].Jsonize());
    }
    payload.WithArray("FileGroups", std::move(fileGroupsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
