/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/DataPrepListAggregationFunction.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

DataPrepListAggregationFunction::DataPrepListAggregationFunction(JsonView jsonValue) { *this = jsonValue; }

DataPrepListAggregationFunction& DataPrepListAggregationFunction::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("InputColumnName")) {
    m_inputColumnName = jsonValue.GetString("InputColumnName");
    m_inputColumnNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Separator")) {
    m_separator = jsonValue.GetString("Separator");
    m_separatorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Distinct")) {
    m_distinct = jsonValue.GetBool("Distinct");
    m_distinctHasBeenSet = true;
  }
  return *this;
}

JsonValue DataPrepListAggregationFunction::Jsonize() const {
  JsonValue payload;

  if (m_inputColumnNameHasBeenSet) {
    payload.WithString("InputColumnName", m_inputColumnName);
  }

  if (m_separatorHasBeenSet) {
    payload.WithString("Separator", m_separator);
  }

  if (m_distinctHasBeenSet) {
    payload.WithBool("Distinct", m_distinct);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
