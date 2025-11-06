/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/DataSetStringFilterValue.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

DataSetStringFilterValue::DataSetStringFilterValue(JsonView jsonValue) { *this = jsonValue; }

DataSetStringFilterValue& DataSetStringFilterValue::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("StaticValue")) {
    m_staticValue = jsonValue.GetString("StaticValue");
    m_staticValueHasBeenSet = true;
  }
  return *this;
}

JsonValue DataSetStringFilterValue::Jsonize() const {
  JsonValue payload;

  if (m_staticValueHasBeenSet) {
    payload.WithString("StaticValue", m_staticValue);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
