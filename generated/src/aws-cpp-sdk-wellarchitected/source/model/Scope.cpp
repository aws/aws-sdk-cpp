/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wellarchitected/model/Scope.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {

Scope::Scope(JsonView jsonValue) { *this = jsonValue; }

Scope& Scope::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("pillars")) {
    Aws::Utils::Array<JsonView> pillarsJsonList = jsonValue.GetArray("pillars");
    for (unsigned pillarsIndex = 0; pillarsIndex < pillarsJsonList.GetLength(); ++pillarsIndex) {
      m_pillars.push_back(PillarMapper::GetPillarForName(pillarsJsonList[pillarsIndex].AsString()));
    }
    m_pillarsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("goalIds")) {
    Aws::Utils::Array<JsonView> goalIdsJsonList = jsonValue.GetArray("goalIds");
    for (unsigned goalIdsIndex = 0; goalIdsIndex < goalIdsJsonList.GetLength(); ++goalIdsIndex) {
      m_goalIds.push_back(goalIdsJsonList[goalIdsIndex].AsString());
    }
    m_goalIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("items")) {
    Aws::Utils::Array<JsonView> itemsJsonList = jsonValue.GetArray("items");
    for (unsigned itemsIndex = 0; itemsIndex < itemsJsonList.GetLength(); ++itemsIndex) {
      m_items.push_back(itemsJsonList[itemsIndex].AsObject());
    }
    m_itemsHasBeenSet = true;
  }
  return *this;
}

JsonValue Scope::Jsonize() const {
  JsonValue payload;

  if (m_pillarsHasBeenSet) {
    Aws::Utils::Array<JsonValue> pillarsJsonList(m_pillars.size());
    for (unsigned pillarsIndex = 0; pillarsIndex < pillarsJsonList.GetLength(); ++pillarsIndex) {
      pillarsJsonList[pillarsIndex].AsString(PillarMapper::GetNameForPillar(m_pillars[pillarsIndex]));
    }
    payload.WithArray("pillars", std::move(pillarsJsonList));
  }

  if (m_goalIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> goalIdsJsonList(m_goalIds.size());
    for (unsigned goalIdsIndex = 0; goalIdsIndex < goalIdsJsonList.GetLength(); ++goalIdsIndex) {
      goalIdsJsonList[goalIdsIndex].AsString(m_goalIds[goalIdsIndex]);
    }
    payload.WithArray("goalIds", std::move(goalIdsJsonList));
  }

  if (m_itemsHasBeenSet) {
    Aws::Utils::Array<JsonValue> itemsJsonList(m_items.size());
    for (unsigned itemsIndex = 0; itemsIndex < itemsJsonList.GetLength(); ++itemsIndex) {
      itemsJsonList[itemsIndex].AsObject(m_items[itemsIndex].Jsonize());
    }
    payload.WithArray("items", std::move(itemsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
