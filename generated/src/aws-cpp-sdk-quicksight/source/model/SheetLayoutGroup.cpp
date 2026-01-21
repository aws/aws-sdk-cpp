/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/SheetLayoutGroup.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

SheetLayoutGroup::SheetLayoutGroup(JsonView jsonValue) { *this = jsonValue; }

SheetLayoutGroup& SheetLayoutGroup::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Members")) {
    Aws::Utils::Array<JsonView> membersJsonList = jsonValue.GetArray("Members");
    for (unsigned membersIndex = 0; membersIndex < membersJsonList.GetLength(); ++membersIndex) {
      m_members.push_back(membersJsonList[membersIndex].AsObject());
    }
    m_membersHasBeenSet = true;
  }
  return *this;
}

JsonValue SheetLayoutGroup::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("Id", m_id);
  }

  if (m_membersHasBeenSet) {
    Aws::Utils::Array<JsonValue> membersJsonList(m_members.size());
    for (unsigned membersIndex = 0; membersIndex < membersJsonList.GetLength(); ++membersIndex) {
      membersJsonList[membersIndex].AsObject(m_members[membersIndex].Jsonize());
    }
    payload.WithArray("Members", std::move(membersJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
