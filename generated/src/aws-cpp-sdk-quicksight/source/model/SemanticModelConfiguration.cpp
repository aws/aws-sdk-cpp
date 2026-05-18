/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/SemanticModelConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

SemanticModelConfiguration::SemanticModelConfiguration(JsonView jsonValue) { *this = jsonValue; }

SemanticModelConfiguration& SemanticModelConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TableMap")) {
    Aws::Map<Aws::String, JsonView> tableMapJsonMap = jsonValue.GetObject("TableMap").GetAllObjects();
    for (auto& tableMapItem : tableMapJsonMap) {
      m_tableMap[tableMapItem.first] = tableMapItem.second.AsObject();
    }
    m_tableMapHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SemanticMetadata")) {
    Aws::Utils::Array<JsonView> semanticMetadataJsonList = jsonValue.GetArray("SemanticMetadata");
    for (unsigned semanticMetadataIndex = 0; semanticMetadataIndex < semanticMetadataJsonList.GetLength(); ++semanticMetadataIndex) {
      m_semanticMetadata.push_back(semanticMetadataJsonList[semanticMetadataIndex].AsObject());
    }
    m_semanticMetadataHasBeenSet = true;
  }
  return *this;
}

JsonValue SemanticModelConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_tableMapHasBeenSet) {
    JsonValue tableMapJsonMap;
    for (auto& tableMapItem : m_tableMap) {
      tableMapJsonMap.WithObject(tableMapItem.first, tableMapItem.second.Jsonize());
    }
    payload.WithObject("TableMap", std::move(tableMapJsonMap));
  }

  if (m_semanticMetadataHasBeenSet) {
    Aws::Utils::Array<JsonValue> semanticMetadataJsonList(m_semanticMetadata.size());
    for (unsigned semanticMetadataIndex = 0; semanticMetadataIndex < semanticMetadataJsonList.GetLength(); ++semanticMetadataIndex) {
      semanticMetadataJsonList[semanticMetadataIndex].AsObject(m_semanticMetadata[semanticMetadataIndex].Jsonize());
    }
    payload.WithArray("SemanticMetadata", std::move(semanticMetadataJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
