/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-benefits/model/CreditDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralBenefits {
namespace Model {

CreditDetails::CreditDetails(JsonView jsonValue) { *this = jsonValue; }

CreditDetails& CreditDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AllocatedAmount")) {
    m_allocatedAmount = jsonValue.GetObject("AllocatedAmount");
    m_allocatedAmountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IssuedAmount")) {
    m_issuedAmount = jsonValue.GetObject("IssuedAmount");
    m_issuedAmountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Codes")) {
    Aws::Utils::Array<JsonView> codesJsonList = jsonValue.GetArray("Codes");
    for (unsigned codesIndex = 0; codesIndex < codesJsonList.GetLength(); ++codesIndex) {
      m_codes.push_back(codesJsonList[codesIndex].AsObject());
    }
    m_codesHasBeenSet = true;
  }
  return *this;
}

JsonValue CreditDetails::Jsonize() const {
  JsonValue payload;

  if (m_allocatedAmountHasBeenSet) {
    payload.WithObject("AllocatedAmount", m_allocatedAmount.Jsonize());
  }

  if (m_issuedAmountHasBeenSet) {
    payload.WithObject("IssuedAmount", m_issuedAmount.Jsonize());
  }

  if (m_codesHasBeenSet) {
    Aws::Utils::Array<JsonValue> codesJsonList(m_codes.size());
    for (unsigned codesIndex = 0; codesIndex < codesJsonList.GetLength(); ++codesIndex) {
      codesJsonList[codesIndex].AsObject(m_codes[codesIndex].Jsonize());
    }
    payload.WithArray("Codes", std::move(codesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
