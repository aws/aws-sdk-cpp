/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-benefits/model/FulfillmentDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralBenefits {
namespace Model {

FulfillmentDetails::FulfillmentDetails(JsonView jsonValue) { *this = jsonValue; }

FulfillmentDetails& FulfillmentDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DisbursementDetails")) {
    m_disbursementDetails = jsonValue.GetObject("DisbursementDetails");
    m_disbursementDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ConsumableDetails")) {
    m_consumableDetails = jsonValue.GetObject("ConsumableDetails");
    m_consumableDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreditDetails")) {
    m_creditDetails = jsonValue.GetObject("CreditDetails");
    m_creditDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AccessDetails")) {
    m_accessDetails = jsonValue.GetObject("AccessDetails");
    m_accessDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue FulfillmentDetails::Jsonize() const {
  JsonValue payload;

  if (m_disbursementDetailsHasBeenSet) {
    payload.WithObject("DisbursementDetails", m_disbursementDetails.Jsonize());
  }

  if (m_consumableDetailsHasBeenSet) {
    payload.WithObject("ConsumableDetails", m_consumableDetails.Jsonize());
  }

  if (m_creditDetailsHasBeenSet) {
    payload.WithObject("CreditDetails", m_creditDetails.Jsonize());
  }

  if (m_accessDetailsHasBeenSet) {
    payload.WithObject("AccessDetails", m_accessDetails.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
