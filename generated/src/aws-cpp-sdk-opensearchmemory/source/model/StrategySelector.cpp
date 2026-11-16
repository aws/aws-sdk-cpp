/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchmemory/model/StrategySelector.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchMemory {
namespace Model {

StrategySelector::StrategySelector(JsonView jsonValue) { *this = jsonValue; }

StrategySelector& StrategySelector::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("memoryType")) {
    m_memoryType = MemoryTypeMapper::GetMemoryTypeForName(jsonValue.GetString("memoryType"));
    m_memoryTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("memoryStrategyNames")) {
    Aws::Utils::Array<JsonView> memoryStrategyNamesJsonList = jsonValue.GetArray("memoryStrategyNames");
    for (unsigned memoryStrategyNamesIndex = 0; memoryStrategyNamesIndex < memoryStrategyNamesJsonList.GetLength();
         ++memoryStrategyNamesIndex) {
      m_memoryStrategyNames.push_back(memoryStrategyNamesJsonList[memoryStrategyNamesIndex].AsString());
    }
    m_memoryStrategyNamesHasBeenSet = true;
  }
  return *this;
}

JsonValue StrategySelector::Jsonize() const {
  JsonValue payload;

  if (m_memoryTypeHasBeenSet) {
    payload.WithString("memoryType", MemoryTypeMapper::GetNameForMemoryType(m_memoryType));
  }

  if (m_memoryStrategyNamesHasBeenSet) {
    Aws::Utils::Array<JsonValue> memoryStrategyNamesJsonList(m_memoryStrategyNames.size());
    for (unsigned memoryStrategyNamesIndex = 0; memoryStrategyNamesIndex < memoryStrategyNamesJsonList.GetLength();
         ++memoryStrategyNamesIndex) {
      memoryStrategyNamesJsonList[memoryStrategyNamesIndex].AsString(m_memoryStrategyNames[memoryStrategyNamesIndex]);
    }
    payload.WithArray("memoryStrategyNames", std::move(memoryStrategyNamesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
