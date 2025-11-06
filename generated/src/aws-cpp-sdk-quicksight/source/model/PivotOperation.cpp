/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/PivotOperation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

PivotOperation::PivotOperation(JsonView jsonValue) { *this = jsonValue; }

PivotOperation& PivotOperation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Alias")) {
    m_alias = jsonValue.GetString("Alias");
    m_aliasHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Source")) {
    m_source = jsonValue.GetObject("Source");
    m_sourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("GroupByColumnNames")) {
    Aws::Utils::Array<JsonView> groupByColumnNamesJsonList = jsonValue.GetArray("GroupByColumnNames");
    for (unsigned groupByColumnNamesIndex = 0; groupByColumnNamesIndex < groupByColumnNamesJsonList.GetLength();
         ++groupByColumnNamesIndex) {
      m_groupByColumnNames.push_back(groupByColumnNamesJsonList[groupByColumnNamesIndex].AsString());
    }
    m_groupByColumnNamesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ValueColumnConfiguration")) {
    m_valueColumnConfiguration = jsonValue.GetObject("ValueColumnConfiguration");
    m_valueColumnConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PivotConfiguration")) {
    m_pivotConfiguration = jsonValue.GetObject("PivotConfiguration");
    m_pivotConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue PivotOperation::Jsonize() const {
  JsonValue payload;

  if (m_aliasHasBeenSet) {
    payload.WithString("Alias", m_alias);
  }

  if (m_sourceHasBeenSet) {
    payload.WithObject("Source", m_source.Jsonize());
  }

  if (m_groupByColumnNamesHasBeenSet) {
    Aws::Utils::Array<JsonValue> groupByColumnNamesJsonList(m_groupByColumnNames.size());
    for (unsigned groupByColumnNamesIndex = 0; groupByColumnNamesIndex < groupByColumnNamesJsonList.GetLength();
         ++groupByColumnNamesIndex) {
      groupByColumnNamesJsonList[groupByColumnNamesIndex].AsString(m_groupByColumnNames[groupByColumnNamesIndex]);
    }
    payload.WithArray("GroupByColumnNames", std::move(groupByColumnNamesJsonList));
  }

  if (m_valueColumnConfigurationHasBeenSet) {
    payload.WithObject("ValueColumnConfiguration", m_valueColumnConfiguration.Jsonize());
  }

  if (m_pivotConfigurationHasBeenSet) {
    payload.WithObject("PivotConfiguration", m_pivotConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
