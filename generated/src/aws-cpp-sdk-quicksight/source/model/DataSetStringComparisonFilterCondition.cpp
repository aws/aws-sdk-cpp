/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/DataSetStringComparisonFilterCondition.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

DataSetStringComparisonFilterCondition::DataSetStringComparisonFilterCondition(JsonView jsonValue) { *this = jsonValue; }

DataSetStringComparisonFilterCondition& DataSetStringComparisonFilterCondition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Operator")) {
    m_operator =
        DataSetStringComparisonFilterOperatorMapper::GetDataSetStringComparisonFilterOperatorForName(jsonValue.GetString("Operator"));
    m_operatorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Value")) {
    m_value = jsonValue.GetObject("Value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue DataSetStringComparisonFilterCondition::Jsonize() const {
  JsonValue payload;

  if (m_operatorHasBeenSet) {
    payload.WithString("Operator",
                       DataSetStringComparisonFilterOperatorMapper::GetNameForDataSetStringComparisonFilterOperator(m_operator));
  }

  if (m_valueHasBeenSet) {
    payload.WithObject("Value", m_value.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
