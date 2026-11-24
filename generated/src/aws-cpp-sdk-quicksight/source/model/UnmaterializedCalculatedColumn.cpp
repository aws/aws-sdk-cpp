/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/UnmaterializedCalculatedColumn.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

UnmaterializedCalculatedColumn::UnmaterializedCalculatedColumn(JsonView jsonValue) { *this = jsonValue; }

UnmaterializedCalculatedColumn& UnmaterializedCalculatedColumn::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ColumnId")) {
    m_columnId = jsonValue.GetString("ColumnId");
    m_columnIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ColumnName")) {
    m_columnName = jsonValue.GetString("ColumnName");
    m_columnNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Expression")) {
    m_expression = jsonValue.GetString("Expression");
    m_expressionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Type")) {
    m_type = ColumnDataTypeMapper::GetColumnDataTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SubType")) {
    m_subType = ColumnDataSubTypeMapper::GetColumnDataSubTypeForName(jsonValue.GetString("SubType"));
    m_subTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue UnmaterializedCalculatedColumn::Jsonize() const {
  JsonValue payload;

  if (m_columnIdHasBeenSet) {
    payload.WithString("ColumnId", m_columnId);
  }

  if (m_columnNameHasBeenSet) {
    payload.WithString("ColumnName", m_columnName);
  }

  if (m_expressionHasBeenSet) {
    payload.WithString("Expression", m_expression);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("Type", ColumnDataTypeMapper::GetNameForColumnDataType(m_type));
  }

  if (m_subTypeHasBeenSet) {
    payload.WithString("SubType", ColumnDataSubTypeMapper::GetNameForColumnDataSubType(m_subType));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
