/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/payments/model/CurrencyAmount.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Payments {
namespace Model {

CurrencyAmount::CurrencyAmount(JsonView jsonValue) { *this = jsonValue; }

CurrencyAmount& CurrencyAmount::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("value")) {
    m_value = jsonValue.GetString("value");
    m_valueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("currency")) {
    m_currency = jsonValue.GetString("currency");
    m_currencyHasBeenSet = true;
  }
  return *this;
}

JsonValue CurrencyAmount::Jsonize() const {
  JsonValue payload;

  if (m_valueHasBeenSet) {
    payload.WithString("value", m_value);
  }

  if (m_currencyHasBeenSet) {
    payload.WithString("currency", m_currency);
  }

  return payload;
}

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
