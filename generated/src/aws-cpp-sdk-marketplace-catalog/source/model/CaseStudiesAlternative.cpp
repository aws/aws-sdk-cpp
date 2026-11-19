/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-catalog/model/CaseStudiesAlternative.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {

CaseStudiesAlternative::CaseStudiesAlternative(JsonView jsonValue) { *this = jsonValue; }

CaseStudiesAlternative& CaseStudiesAlternative::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Value")) {
    Aws::Utils::Array<JsonView> valueJsonList = jsonValue.GetArray("Value");
    for (unsigned valueIndex = 0; valueIndex < valueJsonList.GetLength(); ++valueIndex) {
      m_value.push_back(valueJsonList[valueIndex].AsObject());
    }
    m_valueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Rationale")) {
    m_rationale = jsonValue.GetString("Rationale");
    m_rationaleHasBeenSet = true;
  }
  return *this;
}

JsonValue CaseStudiesAlternative::Jsonize() const {
  JsonValue payload;

  if (m_valueHasBeenSet) {
    Aws::Utils::Array<JsonValue> valueJsonList(m_value.size());
    for (unsigned valueIndex = 0; valueIndex < valueJsonList.GetLength(); ++valueIndex) {
      valueJsonList[valueIndex].AsObject(m_value[valueIndex].Jsonize());
    }
    payload.WithArray("Value", std::move(valueJsonList));
  }

  if (m_rationaleHasBeenSet) {
    payload.WithString("Rationale", m_rationale);
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
