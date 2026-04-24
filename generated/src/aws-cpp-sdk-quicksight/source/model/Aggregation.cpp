/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/Aggregation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

Aggregation::Aggregation(JsonView jsonValue) { *this = jsonValue; }

Aggregation& Aggregation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AggregationFunction")) {
    m_aggregationFunction = jsonValue.GetObject("AggregationFunction");
    m_aggregationFunctionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NewColumnName")) {
    m_newColumnName = jsonValue.GetString("NewColumnName");
    m_newColumnNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NewColumnId")) {
    m_newColumnId = jsonValue.GetString("NewColumnId");
    m_newColumnIdHasBeenSet = true;
  }
  return *this;
}

JsonValue Aggregation::Jsonize() const {
  JsonValue payload;

  if (m_aggregationFunctionHasBeenSet) {
    payload.WithObject("AggregationFunction", m_aggregationFunction.Jsonize());
  }

  if (m_newColumnNameHasBeenSet) {
    payload.WithString("NewColumnName", m_newColumnName);
  }

  if (m_newColumnIdHasBeenSet) {
    payload.WithString("NewColumnId", m_newColumnId);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
