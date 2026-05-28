/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/ServiceReferenceChanges.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

ServiceReferenceChanges::ServiceReferenceChanges(JsonView jsonValue) { *this = jsonValue; }

ServiceReferenceChanges& ServiceReferenceChanges::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("added")) {
    Aws::Utils::Array<JsonView> addedJsonList = jsonValue.GetArray("added");
    for (unsigned addedIndex = 0; addedIndex < addedJsonList.GetLength(); ++addedIndex) {
      m_added.push_back(addedJsonList[addedIndex].AsObject());
    }
    m_addedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("removed")) {
    Aws::Utils::Array<JsonView> removedJsonList = jsonValue.GetArray("removed");
    for (unsigned removedIndex = 0; removedIndex < removedJsonList.GetLength(); ++removedIndex) {
      m_removed.push_back(removedJsonList[removedIndex].AsObject());
    }
    m_removedHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceReferenceChanges::Jsonize() const {
  JsonValue payload;

  if (m_addedHasBeenSet) {
    Aws::Utils::Array<JsonValue> addedJsonList(m_added.size());
    for (unsigned addedIndex = 0; addedIndex < addedJsonList.GetLength(); ++addedIndex) {
      addedJsonList[addedIndex].AsObject(m_added[addedIndex].Jsonize());
    }
    payload.WithArray("added", std::move(addedJsonList));
  }

  if (m_removedHasBeenSet) {
    Aws::Utils::Array<JsonValue> removedJsonList(m_removed.size());
    for (unsigned removedIndex = 0; removedIndex < removedJsonList.GetLength(); ++removedIndex) {
      removedJsonList[removedIndex].AsObject(m_removed[removedIndex].Jsonize());
    }
    payload.WithArray("removed", std::move(removedJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
