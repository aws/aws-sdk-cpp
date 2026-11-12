/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mwaa/model/UpdateTeamsInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MWAA {
namespace Model {

UpdateTeamsInput::UpdateTeamsInput(JsonView jsonValue) { *this = jsonValue; }

UpdateTeamsInput& UpdateTeamsInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AddOrUpdate")) {
    Aws::Map<Aws::String, JsonView> addOrUpdateJsonMap = jsonValue.GetObject("AddOrUpdate").GetAllObjects();
    for (auto& addOrUpdateItem : addOrUpdateJsonMap) {
      m_addOrUpdate[addOrUpdateItem.first] = addOrUpdateItem.second.AsObject();
    }
    m_addOrUpdateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Remove")) {
    Aws::Utils::Array<JsonView> removeJsonList = jsonValue.GetArray("Remove");
    for (unsigned removeIndex = 0; removeIndex < removeJsonList.GetLength(); ++removeIndex) {
      m_remove.push_back(removeJsonList[removeIndex].AsString());
    }
    m_removeHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateTeamsInput::Jsonize() const {
  JsonValue payload;

  if (m_addOrUpdateHasBeenSet) {
    JsonValue addOrUpdateJsonMap;
    for (auto& addOrUpdateItem : m_addOrUpdate) {
      addOrUpdateJsonMap.WithObject(addOrUpdateItem.first, addOrUpdateItem.second.Jsonize());
    }
    payload.WithObject("AddOrUpdate", std::move(addOrUpdateJsonMap));
  }

  if (m_removeHasBeenSet) {
    Aws::Utils::Array<JsonValue> removeJsonList(m_remove.size());
    for (unsigned removeIndex = 0; removeIndex < removeJsonList.GetLength(); ++removeIndex) {
      removeJsonList[removeIndex].AsString(m_remove[removeIndex]);
    }
    payload.WithArray("Remove", std::move(removeJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace MWAA
}  // namespace Aws
