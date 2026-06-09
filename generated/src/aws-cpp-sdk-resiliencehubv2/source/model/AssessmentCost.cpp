/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/AssessmentCost.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

AssessmentCost::AssessmentCost(JsonView jsonValue) { *this = jsonValue; }

AssessmentCost& AssessmentCost::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("amount")) {
    m_amount = jsonValue.GetDouble("amount");
    m_amountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("currency")) {
    m_currency = CostCurrencyMapper::GetCostCurrencyForName(jsonValue.GetString("currency"));
    m_currencyHasBeenSet = true;
  }
  return *this;
}

JsonValue AssessmentCost::Jsonize() const {
  JsonValue payload;

  if (m_amountHasBeenSet) {
    payload.WithDouble("amount", m_amount);
  }

  if (m_currencyHasBeenSet) {
    payload.WithString("currency", CostCurrencyMapper::GetNameForCostCurrency(m_currency));
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
