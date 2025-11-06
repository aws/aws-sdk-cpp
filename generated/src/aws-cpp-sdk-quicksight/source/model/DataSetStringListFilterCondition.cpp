/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/DataSetStringListFilterCondition.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

DataSetStringListFilterCondition::DataSetStringListFilterCondition(JsonView jsonValue) { *this = jsonValue; }

DataSetStringListFilterCondition& DataSetStringListFilterCondition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Operator")) {
    m_operator = DataSetStringListFilterOperatorMapper::GetDataSetStringListFilterOperatorForName(jsonValue.GetString("Operator"));
    m_operatorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Values")) {
    m_values = jsonValue.GetObject("Values");
    m_valuesHasBeenSet = true;
  }
  return *this;
}

JsonValue DataSetStringListFilterCondition::Jsonize() const {
  JsonValue payload;

  if (m_operatorHasBeenSet) {
    payload.WithString("Operator", DataSetStringListFilterOperatorMapper::GetNameForDataSetStringListFilterOperator(m_operator));
  }

  if (m_valuesHasBeenSet) {
    payload.WithObject("Values", m_values.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
