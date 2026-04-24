/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/model/PricingCurrencyAmount.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {

PricingCurrencyAmount::PricingCurrencyAmount(JsonView jsonValue) { *this = jsonValue; }

PricingCurrencyAmount& PricingCurrencyAmount::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("amount")) {
    m_amount = jsonValue.GetString("amount");
    m_amountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxAdjustmentAmount")) {
    m_maxAdjustmentAmount = jsonValue.GetString("maxAdjustmentAmount");
    m_maxAdjustmentAmountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("currencyCode")) {
    m_currencyCode = jsonValue.GetString("currencyCode");
    m_currencyCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue PricingCurrencyAmount::Jsonize() const {
  JsonValue payload;

  if (m_amountHasBeenSet) {
    payload.WithString("amount", m_amount);
  }

  if (m_maxAdjustmentAmountHasBeenSet) {
    payload.WithString("maxAdjustmentAmount", m_maxAdjustmentAmount);
  }

  if (m_currencyCodeHasBeenSet) {
    payload.WithString("currencyCode", m_currencyCode);
  }

  return payload;
}

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
