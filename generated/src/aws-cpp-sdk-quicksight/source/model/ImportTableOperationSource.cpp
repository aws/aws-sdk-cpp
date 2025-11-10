/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/ImportTableOperationSource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

ImportTableOperationSource::ImportTableOperationSource(JsonView jsonValue) { *this = jsonValue; }

ImportTableOperationSource& ImportTableOperationSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SourceTableId")) {
    m_sourceTableId = jsonValue.GetString("SourceTableId");
    m_sourceTableIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ColumnIdMappings")) {
    Aws::Utils::Array<JsonView> columnIdMappingsJsonList = jsonValue.GetArray("ColumnIdMappings");
    for (unsigned columnIdMappingsIndex = 0; columnIdMappingsIndex < columnIdMappingsJsonList.GetLength(); ++columnIdMappingsIndex) {
      m_columnIdMappings.push_back(columnIdMappingsJsonList[columnIdMappingsIndex].AsObject());
    }
    m_columnIdMappingsHasBeenSet = true;
  }
  return *this;
}

JsonValue ImportTableOperationSource::Jsonize() const {
  JsonValue payload;

  if (m_sourceTableIdHasBeenSet) {
    payload.WithString("SourceTableId", m_sourceTableId);
  }

  if (m_columnIdMappingsHasBeenSet) {
    Aws::Utils::Array<JsonValue> columnIdMappingsJsonList(m_columnIdMappings.size());
    for (unsigned columnIdMappingsIndex = 0; columnIdMappingsIndex < columnIdMappingsJsonList.GetLength(); ++columnIdMappingsIndex) {
      columnIdMappingsJsonList[columnIdMappingsIndex].AsObject(m_columnIdMappings[columnIdMappingsIndex].Jsonize());
    }
    payload.WithArray("ColumnIdMappings", std::move(columnIdMappingsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
