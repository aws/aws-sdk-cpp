/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/networkflowmonitor/model/FilterParameter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFlowMonitor {
namespace Model {

FilterParameter::FilterParameter(JsonView jsonValue) { *this = jsonValue; }

FilterParameter& FilterParameter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("field")) {
    m_field = jsonValue.GetString("field");
    m_fieldHasBeenSet = true;
  }
  if (jsonValue.ValueExists("operator")) {
    m_operator = FilterOperatorMapper::GetFilterOperatorForName(jsonValue.GetString("operator"));
    m_operatorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("values")) {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("values");
    for (unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex) {
      m_values.push_back(valuesJsonList[valuesIndex].AsString());
    }
    m_valuesHasBeenSet = true;
  }
  return *this;
}

JsonValue FilterParameter::Jsonize() const {
  JsonValue payload;

  if (m_fieldHasBeenSet) {
    payload.WithString("field", m_field);
  }

  if (m_operatorHasBeenSet) {
    payload.WithString("operator", FilterOperatorMapper::GetNameForFilterOperator(m_operator));
  }

  if (m_valuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
    for (unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex) {
      valuesJsonList[valuesIndex].AsString(m_values[valuesIndex]);
    }
    payload.WithArray("values", std::move(valuesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkFlowMonitor
}  // namespace Aws
