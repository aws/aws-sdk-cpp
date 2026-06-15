/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wafv2/model/Price.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {

Price::Price(JsonView jsonValue) { *this = jsonValue; }

Price& Price::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Amount")) {
    m_amount = jsonValue.GetString("Amount");
    m_amountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Currency")) {
    m_currency = CryptoCurrencyMapper::GetCryptoCurrencyForName(jsonValue.GetString("Currency"));
    m_currencyHasBeenSet = true;
  }
  return *this;
}

JsonValue Price::Jsonize() const {
  JsonValue payload;

  if (m_amountHasBeenSet) {
    payload.WithString("Amount", m_amount);
  }

  if (m_currencyHasBeenSet) {
    payload.WithString("Currency", CryptoCurrencyMapper::GetNameForCryptoCurrency(m_currency));
  }

  return payload;
}

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
