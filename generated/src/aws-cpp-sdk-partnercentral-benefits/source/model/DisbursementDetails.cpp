/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-benefits/model/DisbursementDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralBenefits {
namespace Model {

DisbursementDetails::DisbursementDetails(JsonView jsonValue) { *this = jsonValue; }

DisbursementDetails& DisbursementDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DisbursedAmount")) {
    m_disbursedAmount = jsonValue.GetObject("DisbursedAmount");
    m_disbursedAmountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IssuanceDetails")) {
    m_issuanceDetails = jsonValue.GetObject("IssuanceDetails");
    m_issuanceDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue DisbursementDetails::Jsonize() const {
  JsonValue payload;

  if (m_disbursedAmountHasBeenSet) {
    payload.WithObject("DisbursedAmount", m_disbursedAmount.Jsonize());
  }

  if (m_issuanceDetailsHasBeenSet) {
    payload.WithObject("IssuanceDetails", m_issuanceDetails.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
