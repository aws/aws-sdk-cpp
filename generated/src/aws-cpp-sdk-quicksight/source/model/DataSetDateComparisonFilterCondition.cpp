/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/DataSetDateComparisonFilterCondition.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

DataSetDateComparisonFilterCondition::DataSetDateComparisonFilterCondition(JsonView jsonValue) { *this = jsonValue; }

DataSetDateComparisonFilterCondition& DataSetDateComparisonFilterCondition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Operator")) {
    m_operator = DataSetDateComparisonFilterOperatorMapper::GetDataSetDateComparisonFilterOperatorForName(jsonValue.GetString("Operator"));
    m_operatorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Value")) {
    m_value = jsonValue.GetObject("Value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue DataSetDateComparisonFilterCondition::Jsonize() const {
  JsonValue payload;

  if (m_operatorHasBeenSet) {
    payload.WithString("Operator", DataSetDateComparisonFilterOperatorMapper::GetNameForDataSetDateComparisonFilterOperator(m_operator));
  }

  if (m_valueHasBeenSet) {
    payload.WithObject("Value", m_value.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
