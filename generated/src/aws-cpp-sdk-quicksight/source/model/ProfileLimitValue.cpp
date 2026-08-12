/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/ProfileLimitValue.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

ProfileLimitValue::ProfileLimitValue(JsonView jsonValue) { *this = jsonValue; }

ProfileLimitValue& ProfileLimitValue::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("maxValue")) {
    m_maxValue = jsonValue.GetInt64("maxValue");
    m_maxValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("unit")) {
    m_unit = LimitUnitMapper::GetLimitUnitForName(jsonValue.GetString("unit"));
    m_unitHasBeenSet = true;
  }
  return *this;
}

JsonValue ProfileLimitValue::Jsonize() const {
  JsonValue payload;

  if (m_maxValueHasBeenSet) {
    payload.WithInt64("maxValue", m_maxValue);
  }

  if (m_unitHasBeenSet) {
    payload.WithString("unit", LimitUnitMapper::GetNameForLimitUnit(m_unit));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
