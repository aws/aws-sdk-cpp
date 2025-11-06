/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/AppendedColumn.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

AppendedColumn::AppendedColumn(JsonView jsonValue) { *this = jsonValue; }

AppendedColumn& AppendedColumn::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ColumnName")) {
    m_columnName = jsonValue.GetString("ColumnName");
    m_columnNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NewColumnId")) {
    m_newColumnId = jsonValue.GetString("NewColumnId");
    m_newColumnIdHasBeenSet = true;
  }
  return *this;
}

JsonValue AppendedColumn::Jsonize() const {
  JsonValue payload;

  if (m_columnNameHasBeenSet) {
    payload.WithString("ColumnName", m_columnName);
  }

  if (m_newColumnIdHasBeenSet) {
    payload.WithString("NewColumnId", m_newColumnId);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
