/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/UnpivotOperation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

UnpivotOperation::UnpivotOperation(JsonView jsonValue) { *this = jsonValue; }

UnpivotOperation& UnpivotOperation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Alias")) {
    m_alias = jsonValue.GetString("Alias");
    m_aliasHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Source")) {
    m_source = jsonValue.GetObject("Source");
    m_sourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ColumnsToUnpivot")) {
    Aws::Utils::Array<JsonView> columnsToUnpivotJsonList = jsonValue.GetArray("ColumnsToUnpivot");
    for (unsigned columnsToUnpivotIndex = 0; columnsToUnpivotIndex < columnsToUnpivotJsonList.GetLength(); ++columnsToUnpivotIndex) {
      m_columnsToUnpivot.push_back(columnsToUnpivotJsonList[columnsToUnpivotIndex].AsObject());
    }
    m_columnsToUnpivotHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UnpivotedLabelColumnName")) {
    m_unpivotedLabelColumnName = jsonValue.GetString("UnpivotedLabelColumnName");
    m_unpivotedLabelColumnNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UnpivotedLabelColumnId")) {
    m_unpivotedLabelColumnId = jsonValue.GetString("UnpivotedLabelColumnId");
    m_unpivotedLabelColumnIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UnpivotedValueColumnName")) {
    m_unpivotedValueColumnName = jsonValue.GetString("UnpivotedValueColumnName");
    m_unpivotedValueColumnNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UnpivotedValueColumnId")) {
    m_unpivotedValueColumnId = jsonValue.GetString("UnpivotedValueColumnId");
    m_unpivotedValueColumnIdHasBeenSet = true;
  }
  return *this;
}

JsonValue UnpivotOperation::Jsonize() const {
  JsonValue payload;

  if (m_aliasHasBeenSet) {
    payload.WithString("Alias", m_alias);
  }

  if (m_sourceHasBeenSet) {
    payload.WithObject("Source", m_source.Jsonize());
  }

  if (m_columnsToUnpivotHasBeenSet) {
    Aws::Utils::Array<JsonValue> columnsToUnpivotJsonList(m_columnsToUnpivot.size());
    for (unsigned columnsToUnpivotIndex = 0; columnsToUnpivotIndex < columnsToUnpivotJsonList.GetLength(); ++columnsToUnpivotIndex) {
      columnsToUnpivotJsonList[columnsToUnpivotIndex].AsObject(m_columnsToUnpivot[columnsToUnpivotIndex].Jsonize());
    }
    payload.WithArray("ColumnsToUnpivot", std::move(columnsToUnpivotJsonList));
  }

  if (m_unpivotedLabelColumnNameHasBeenSet) {
    payload.WithString("UnpivotedLabelColumnName", m_unpivotedLabelColumnName);
  }

  if (m_unpivotedLabelColumnIdHasBeenSet) {
    payload.WithString("UnpivotedLabelColumnId", m_unpivotedLabelColumnId);
  }

  if (m_unpivotedValueColumnNameHasBeenSet) {
    payload.WithString("UnpivotedValueColumnName", m_unpivotedValueColumnName);
  }

  if (m_unpivotedValueColumnIdHasBeenSet) {
    payload.WithString("UnpivotedValueColumnId", m_unpivotedValueColumnId);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
