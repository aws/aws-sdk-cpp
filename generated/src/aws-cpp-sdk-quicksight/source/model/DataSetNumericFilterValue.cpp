/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/DataSetNumericFilterValue.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

DataSetNumericFilterValue::DataSetNumericFilterValue(JsonView jsonValue) { *this = jsonValue; }

DataSetNumericFilterValue& DataSetNumericFilterValue::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("StaticValue")) {
    m_staticValue = jsonValue.GetDouble("StaticValue");
    m_staticValueHasBeenSet = true;
  }
  return *this;
}

JsonValue DataSetNumericFilterValue::Jsonize() const {
  JsonValue payload;

  if (m_staticValueHasBeenSet) {
    payload.WithDouble("StaticValue", m_staticValue);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
