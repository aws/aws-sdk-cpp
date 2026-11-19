/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/OpportunitySearchExpectedCustomerSpend.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

OpportunitySearchExpectedCustomerSpend::OpportunitySearchExpectedCustomerSpend(JsonView jsonValue) { *this = jsonValue; }

OpportunitySearchExpectedCustomerSpend& OpportunitySearchExpectedCustomerSpend::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Amount")) {
    m_amount = jsonValue.GetString("Amount");
    m_amountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CurrencyCode")) {
    m_currencyCode = CurrencyCodeMapper::GetCurrencyCodeForName(jsonValue.GetString("CurrencyCode"));
    m_currencyCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue OpportunitySearchExpectedCustomerSpend::Jsonize() const {
  JsonValue payload;

  if (m_amountHasBeenSet) {
    payload.WithString("Amount", m_amount);
  }

  if (m_currencyCodeHasBeenSet) {
    payload.WithString("CurrencyCode", CurrencyCodeMapper::GetNameForCurrencyCode(m_currencyCode));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
