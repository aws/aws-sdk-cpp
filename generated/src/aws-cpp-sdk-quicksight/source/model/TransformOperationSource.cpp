/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/TransformOperationSource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

TransformOperationSource::TransformOperationSource(JsonView jsonValue) { *this = jsonValue; }

TransformOperationSource& TransformOperationSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TransformOperationId")) {
    m_transformOperationId = jsonValue.GetString("TransformOperationId");
    m_transformOperationIdHasBeenSet = true;
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

JsonValue TransformOperationSource::Jsonize() const {
  JsonValue payload;

  if (m_transformOperationIdHasBeenSet) {
    payload.WithString("TransformOperationId", m_transformOperationId);
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
