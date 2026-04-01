/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sustainability/model/DimensionEntry.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Sustainability {
namespace Model {

DimensionEntry::DimensionEntry(JsonView jsonValue) { *this = jsonValue; }

DimensionEntry& DimensionEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Dimension")) {
    m_dimension = DimensionMapper::GetDimensionForName(jsonValue.GetString("Dimension"));
    m_dimensionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Value")) {
    m_value = jsonValue.GetString("Value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue DimensionEntry::Jsonize() const {
  JsonValue payload;

  if (m_dimensionHasBeenSet) {
    payload.WithString("Dimension", DimensionMapper::GetNameForDimension(m_dimension));
  }

  if (m_valueHasBeenSet) {
    payload.WithString("Value", m_value);
  }

  return payload;
}

}  // namespace Model
}  // namespace Sustainability
}  // namespace Aws
