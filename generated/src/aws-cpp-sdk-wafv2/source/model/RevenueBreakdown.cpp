/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wafv2/model/RevenueBreakdown.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {

RevenueBreakdown::RevenueBreakdown(JsonView jsonValue) { *this = jsonValue; }

RevenueBreakdown& RevenueBreakdown::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TotalAmount")) {
    m_totalAmount = jsonValue.GetString("TotalAmount");
    m_totalAmountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VerifiedAmount")) {
    m_verifiedAmount = jsonValue.GetString("VerifiedAmount");
    m_verifiedAmountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UnverifiedAmount")) {
    m_unverifiedAmount = jsonValue.GetString("UnverifiedAmount");
    m_unverifiedAmountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Currency")) {
    m_currency = CurrencyMapper::GetCurrencyForName(jsonValue.GetString("Currency"));
    m_currencyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TotalSettled")) {
    m_totalSettled = jsonValue.GetInt64("TotalSettled");
    m_totalSettledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TotalMonetizeServed")) {
    m_totalMonetizeServed = jsonValue.GetInt64("TotalMonetizeServed");
    m_totalMonetizeServedHasBeenSet = true;
  }
  return *this;
}

JsonValue RevenueBreakdown::Jsonize() const {
  JsonValue payload;

  if (m_totalAmountHasBeenSet) {
    payload.WithString("TotalAmount", m_totalAmount);
  }

  if (m_verifiedAmountHasBeenSet) {
    payload.WithString("VerifiedAmount", m_verifiedAmount);
  }

  if (m_unverifiedAmountHasBeenSet) {
    payload.WithString("UnverifiedAmount", m_unverifiedAmount);
  }

  if (m_currencyHasBeenSet) {
    payload.WithString("Currency", CurrencyMapper::GetNameForCurrency(m_currency));
  }

  if (m_totalSettledHasBeenSet) {
    payload.WithInt64("TotalSettled", m_totalSettled);
  }

  if (m_totalMonetizeServedHasBeenSet) {
    payload.WithInt64("TotalMonetizeServed", m_totalMonetizeServed);
  }

  return payload;
}

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
