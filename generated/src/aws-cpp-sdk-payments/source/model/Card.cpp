/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/payments/model/Card.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Payments {
namespace Model {

Card::Card(JsonView jsonValue) { *this = jsonValue; }

Card& Card::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("brand")) {
    m_brand = CardBrandMapper::GetCardBrandForName(jsonValue.GetString("brand"));
    m_brandHasBeenSet = true;
  }
  if (jsonValue.ValueExists("last4")) {
    m_last4 = jsonValue.GetString("last4");
    m_last4HasBeenSet = true;
  }
  if (jsonValue.ValueExists("expirationMonth")) {
    m_expirationMonth = jsonValue.GetInteger("expirationMonth");
    m_expirationMonthHasBeenSet = true;
  }
  if (jsonValue.ValueExists("expirationYear")) {
    m_expirationYear = jsonValue.GetInteger("expirationYear");
    m_expirationYearHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cardType")) {
    m_cardType = CardTypeMapper::GetCardTypeForName(jsonValue.GetString("cardType"));
    m_cardTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("issuingBank")) {
    m_issuingBank = jsonValue.GetString("issuingBank");
    m_issuingBankHasBeenSet = true;
  }
  if (jsonValue.ValueExists("issuerCountry")) {
    m_issuerCountry = jsonValue.GetString("issuerCountry");
    m_issuerCountryHasBeenSet = true;
  }
  return *this;
}

JsonValue Card::Jsonize() const {
  JsonValue payload;

  if (m_brandHasBeenSet) {
    payload.WithString("brand", CardBrandMapper::GetNameForCardBrand(m_brand));
  }

  if (m_last4HasBeenSet) {
    payload.WithString("last4", m_last4);
  }

  if (m_expirationMonthHasBeenSet) {
    payload.WithInteger("expirationMonth", m_expirationMonth);
  }

  if (m_expirationYearHasBeenSet) {
    payload.WithInteger("expirationYear", m_expirationYear);
  }

  if (m_cardTypeHasBeenSet) {
    payload.WithString("cardType", CardTypeMapper::GetNameForCardType(m_cardType));
  }

  if (m_issuingBankHasBeenSet) {
    payload.WithString("issuingBank", m_issuingBank);
  }

  if (m_issuerCountryHasBeenSet) {
    payload.WithString("issuerCountry", m_issuerCountry);
  }

  return payload;
}

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
