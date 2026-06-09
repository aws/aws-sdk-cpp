/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/outposts/model/QuoteCapacity.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Outposts {
namespace Model {

QuoteCapacity::QuoteCapacity(JsonView jsonValue) { *this = jsonValue; }

QuoteCapacity& QuoteCapacity::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("QuoteCapacityType")) {
    m_quoteCapacityType = QuoteCapacityTypeMapper::GetQuoteCapacityTypeForName(jsonValue.GetString("QuoteCapacityType"));
    m_quoteCapacityTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Unit")) {
    m_unit = jsonValue.GetString("Unit");
    m_unitHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Quantity")) {
    m_quantity = jsonValue.GetDouble("Quantity");
    m_quantityHasBeenSet = true;
  }
  return *this;
}

JsonValue QuoteCapacity::Jsonize() const {
  JsonValue payload;

  if (m_quoteCapacityTypeHasBeenSet) {
    payload.WithString("QuoteCapacityType", QuoteCapacityTypeMapper::GetNameForQuoteCapacityType(m_quoteCapacityType));
  }

  if (m_unitHasBeenSet) {
    payload.WithString("Unit", m_unit);
  }

  if (m_quantityHasBeenSet) {
    payload.WithDouble("Quantity", m_quantity);
  }

  return payload;
}

}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
