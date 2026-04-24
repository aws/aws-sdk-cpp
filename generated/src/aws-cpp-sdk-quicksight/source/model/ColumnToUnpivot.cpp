/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/ColumnToUnpivot.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

ColumnToUnpivot::ColumnToUnpivot(JsonView jsonValue) { *this = jsonValue; }

ColumnToUnpivot& ColumnToUnpivot::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ColumnName")) {
    m_columnName = jsonValue.GetString("ColumnName");
    m_columnNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NewValue")) {
    m_newValue = jsonValue.GetString("NewValue");
    m_newValueHasBeenSet = true;
  }
  return *this;
}

JsonValue ColumnToUnpivot::Jsonize() const {
  JsonValue payload;

  if (m_columnNameHasBeenSet) {
    payload.WithString("ColumnName", m_columnName);
  }

  if (m_newValueHasBeenSet) {
    payload.WithString("NewValue", m_newValue);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
