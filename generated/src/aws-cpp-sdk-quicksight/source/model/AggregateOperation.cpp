/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/AggregateOperation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

AggregateOperation::AggregateOperation(JsonView jsonValue) { *this = jsonValue; }

AggregateOperation& AggregateOperation::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("Aggregations")) {
    Aws::Utils::Array<JsonView> aggregationsJsonList = jsonValue.GetArray("Aggregations");
    for (unsigned aggregationsIndex = 0; aggregationsIndex < aggregationsJsonList.GetLength(); ++aggregationsIndex) {
      m_aggregations.push_back(aggregationsJsonList[aggregationsIndex].AsObject());
    }
    m_aggregationsHasBeenSet = true;
  }
  return *this;
}

JsonValue AggregateOperation::Jsonize() const {
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

  if (m_aggregationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> aggregationsJsonList(m_aggregations.size());
    for (unsigned aggregationsIndex = 0; aggregationsIndex < aggregationsJsonList.GetLength(); ++aggregationsIndex) {
      aggregationsJsonList[aggregationsIndex].AsObject(m_aggregations[aggregationsIndex].Jsonize());
    }
    payload.WithArray("Aggregations", std::move(aggregationsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
