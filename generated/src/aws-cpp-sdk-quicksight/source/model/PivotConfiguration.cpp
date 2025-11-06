/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/PivotConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

PivotConfiguration::PivotConfiguration(JsonView jsonValue) { *this = jsonValue; }

PivotConfiguration& PivotConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("LabelColumnName")) {
    m_labelColumnName = jsonValue.GetString("LabelColumnName");
    m_labelColumnNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PivotedLabels")) {
    Aws::Utils::Array<JsonView> pivotedLabelsJsonList = jsonValue.GetArray("PivotedLabels");
    for (unsigned pivotedLabelsIndex = 0; pivotedLabelsIndex < pivotedLabelsJsonList.GetLength(); ++pivotedLabelsIndex) {
      m_pivotedLabels.push_back(pivotedLabelsJsonList[pivotedLabelsIndex].AsObject());
    }
    m_pivotedLabelsHasBeenSet = true;
  }
  return *this;
}

JsonValue PivotConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_labelColumnNameHasBeenSet) {
    payload.WithString("LabelColumnName", m_labelColumnName);
  }

  if (m_pivotedLabelsHasBeenSet) {
    Aws::Utils::Array<JsonValue> pivotedLabelsJsonList(m_pivotedLabels.size());
    for (unsigned pivotedLabelsIndex = 0; pivotedLabelsIndex < pivotedLabelsJsonList.GetLength(); ++pivotedLabelsIndex) {
      pivotedLabelsJsonList[pivotedLabelsIndex].AsObject(m_pivotedLabels[pivotedLabelsIndex].Jsonize());
    }
    payload.WithArray("PivotedLabels", std::move(pivotedLabelsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
