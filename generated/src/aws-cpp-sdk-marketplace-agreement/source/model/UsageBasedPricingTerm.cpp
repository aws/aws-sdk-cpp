/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/model/UsageBasedPricingTerm.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {

UsageBasedPricingTerm::UsageBasedPricingTerm(JsonView jsonValue) { *this = jsonValue; }

UsageBasedPricingTerm& UsageBasedPricingTerm::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("type")) {
    m_type = jsonValue.GetString("type");
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("currencyCode")) {
    m_currencyCode = jsonValue.GetString("currencyCode");
    m_currencyCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rateCards")) {
    Aws::Utils::Array<JsonView> rateCardsJsonList = jsonValue.GetArray("rateCards");
    for (unsigned rateCardsIndex = 0; rateCardsIndex < rateCardsJsonList.GetLength(); ++rateCardsIndex) {
      m_rateCards.push_back(rateCardsJsonList[rateCardsIndex].AsObject());
    }
    m_rateCardsHasBeenSet = true;
  }
  return *this;
}

JsonValue UsageBasedPricingTerm::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("type", m_type);
  }

  if (m_currencyCodeHasBeenSet) {
    payload.WithString("currencyCode", m_currencyCode);
  }

  if (m_rateCardsHasBeenSet) {
    Aws::Utils::Array<JsonValue> rateCardsJsonList(m_rateCards.size());
    for (unsigned rateCardsIndex = 0; rateCardsIndex < rateCardsJsonList.GetLength(); ++rateCardsIndex) {
      rateCardsJsonList[rateCardsIndex].AsObject(m_rateCards[rateCardsIndex].Jsonize());
    }
    payload.WithArray("rateCards", std::move(rateCardsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
