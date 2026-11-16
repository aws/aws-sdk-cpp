/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchmemory/model/Memory.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchMemory {
namespace Model {

Memory::Memory(JsonView jsonValue) { *this = jsonValue; }

Memory& Memory::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("memoryId")) {
    m_memoryId = jsonValue.GetString("memoryId");
    m_memoryIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("memoryType")) {
    m_memoryType = MemoryTypeMapper::GetMemoryTypeForName(jsonValue.GetString("memoryType"));
    m_memoryTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("strategyName")) {
    m_strategyName = jsonValue.GetString("strategyName");
    m_strategyNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("content")) {
    m_content = jsonValue.GetString("content");
    m_contentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("systemMetadata")) {
    m_systemMetadata = jsonValue.GetObject("systemMetadata");
    m_systemMetadataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("metadata")) {
    Aws::Map<Aws::String, JsonView> metadataJsonMap = jsonValue.GetObject("metadata").GetAllObjects();
    for (auto& metadataItem : metadataJsonMap) {
      m_metadata[metadataItem.first] = metadataItem.second.AsString();
    }
    m_metadataHasBeenSet = true;
  }
  return *this;
}

JsonValue Memory::Jsonize() const {
  JsonValue payload;

  if (m_memoryIdHasBeenSet) {
    payload.WithString("memoryId", m_memoryId);
  }

  if (m_memoryTypeHasBeenSet) {
    payload.WithString("memoryType", MemoryTypeMapper::GetNameForMemoryType(m_memoryType));
  }

  if (m_strategyNameHasBeenSet) {
    payload.WithString("strategyName", m_strategyName);
  }

  if (m_contentHasBeenSet) {
    payload.WithString("content", m_content);
  }

  if (m_systemMetadataHasBeenSet) {
    payload.WithObject("systemMetadata", m_systemMetadata.Jsonize());
  }

  if (m_metadataHasBeenSet) {
    JsonValue metadataJsonMap;
    for (auto& metadataItem : m_metadata) {
      metadataJsonMap.WithString(metadataItem.first, metadataItem.second);
    }
    payload.WithObject("metadata", std::move(metadataJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
