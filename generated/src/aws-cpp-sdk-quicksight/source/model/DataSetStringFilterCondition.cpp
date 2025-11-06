/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/DataSetStringFilterCondition.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

DataSetStringFilterCondition::DataSetStringFilterCondition(JsonView jsonValue) { *this = jsonValue; }

DataSetStringFilterCondition& DataSetStringFilterCondition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ColumnName")) {
    m_columnName = jsonValue.GetString("ColumnName");
    m_columnNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ComparisonFilterCondition")) {
    m_comparisonFilterCondition = jsonValue.GetObject("ComparisonFilterCondition");
    m_comparisonFilterConditionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ListFilterCondition")) {
    m_listFilterCondition = jsonValue.GetObject("ListFilterCondition");
    m_listFilterConditionHasBeenSet = true;
  }
  return *this;
}

JsonValue DataSetStringFilterCondition::Jsonize() const {
  JsonValue payload;

  if (m_columnNameHasBeenSet) {
    payload.WithString("ColumnName", m_columnName);
  }

  if (m_comparisonFilterConditionHasBeenSet) {
    payload.WithObject("ComparisonFilterCondition", m_comparisonFilterCondition.Jsonize());
  }

  if (m_listFilterConditionHasBeenSet) {
    payload.WithObject("ListFilterCondition", m_listFilterCondition.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
