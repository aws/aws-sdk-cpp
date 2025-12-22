/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/SnapshotJobResult.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

SnapshotJobResult::SnapshotJobResult(JsonView jsonValue) { *this = jsonValue; }

SnapshotJobResult& SnapshotJobResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AnonymousUsers")) {
    Aws::Utils::Array<JsonView> anonymousUsersJsonList = jsonValue.GetArray("AnonymousUsers");
    for (unsigned anonymousUsersIndex = 0; anonymousUsersIndex < anonymousUsersJsonList.GetLength(); ++anonymousUsersIndex) {
      m_anonymousUsers.push_back(anonymousUsersJsonList[anonymousUsersIndex].AsObject());
    }
    m_anonymousUsersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RegisteredUsers")) {
    Aws::Utils::Array<JsonView> registeredUsersJsonList = jsonValue.GetArray("RegisteredUsers");
    for (unsigned registeredUsersIndex = 0; registeredUsersIndex < registeredUsersJsonList.GetLength(); ++registeredUsersIndex) {
      m_registeredUsers.push_back(registeredUsersJsonList[registeredUsersIndex].AsObject());
    }
    m_registeredUsersHasBeenSet = true;
  }
  return *this;
}

JsonValue SnapshotJobResult::Jsonize() const {
  JsonValue payload;

  if (m_anonymousUsersHasBeenSet) {
    Aws::Utils::Array<JsonValue> anonymousUsersJsonList(m_anonymousUsers.size());
    for (unsigned anonymousUsersIndex = 0; anonymousUsersIndex < anonymousUsersJsonList.GetLength(); ++anonymousUsersIndex) {
      anonymousUsersJsonList[anonymousUsersIndex].AsObject(m_anonymousUsers[anonymousUsersIndex].Jsonize());
    }
    payload.WithArray("AnonymousUsers", std::move(anonymousUsersJsonList));
  }

  if (m_registeredUsersHasBeenSet) {
    Aws::Utils::Array<JsonValue> registeredUsersJsonList(m_registeredUsers.size());
    for (unsigned registeredUsersIndex = 0; registeredUsersIndex < registeredUsersJsonList.GetLength(); ++registeredUsersIndex) {
      registeredUsersJsonList[registeredUsersIndex].AsObject(m_registeredUsers[registeredUsersIndex].Jsonize());
    }
    payload.WithArray("RegisteredUsers", std::move(registeredUsersJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
