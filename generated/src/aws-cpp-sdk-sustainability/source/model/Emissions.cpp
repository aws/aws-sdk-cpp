/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sustainability/model/Emissions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Sustainability {
namespace Model {

Emissions::Emissions(JsonView jsonValue) { *this = jsonValue; }

Emissions& Emissions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Value")) {
    m_value = jsonValue.GetDouble("Value");
    m_valueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Unit")) {
    m_unit = EmissionsUnitMapper::GetEmissionsUnitForName(jsonValue.GetString("Unit"));
    m_unitHasBeenSet = true;
  }
  return *this;
}

JsonValue Emissions::Jsonize() const {
  JsonValue payload;

  if (m_valueHasBeenSet) {
    payload.WithDouble("Value", m_value);
  }

  if (m_unitHasBeenSet) {
    payload.WithString("Unit", EmissionsUnitMapper::GetNameForEmissionsUnit(m_unit));
  }

  return payload;
}

}  // namespace Model
}  // namespace Sustainability
}  // namespace Aws
