/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/DataSetDateFilterValue.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

DataSetDateFilterValue::DataSetDateFilterValue(JsonView jsonValue) { *this = jsonValue; }

DataSetDateFilterValue& DataSetDateFilterValue::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("StaticValue")) {
    m_staticValue = jsonValue.GetDouble("StaticValue");
    m_staticValueHasBeenSet = true;
  }
  return *this;
}

JsonValue DataSetDateFilterValue::Jsonize() const {
  JsonValue payload;

  if (m_staticValueHasBeenSet) {
    payload.WithDouble("StaticValue", m_staticValue.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
