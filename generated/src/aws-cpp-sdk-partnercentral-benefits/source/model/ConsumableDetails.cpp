/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-benefits/model/ConsumableDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralBenefits {
namespace Model {

ConsumableDetails::ConsumableDetails(JsonView jsonValue) { *this = jsonValue; }

ConsumableDetails& ConsumableDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AllocatedAmount")) {
    m_allocatedAmount = jsonValue.GetObject("AllocatedAmount");
    m_allocatedAmountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RemainingAmount")) {
    m_remainingAmount = jsonValue.GetObject("RemainingAmount");
    m_remainingAmountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UtilizedAmount")) {
    m_utilizedAmount = jsonValue.GetObject("UtilizedAmount");
    m_utilizedAmountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IssuanceDetails")) {
    m_issuanceDetails = jsonValue.GetObject("IssuanceDetails");
    m_issuanceDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue ConsumableDetails::Jsonize() const {
  JsonValue payload;

  if (m_allocatedAmountHasBeenSet) {
    payload.WithObject("AllocatedAmount", m_allocatedAmount.Jsonize());
  }

  if (m_remainingAmountHasBeenSet) {
    payload.WithObject("RemainingAmount", m_remainingAmount.Jsonize());
  }

  if (m_utilizedAmountHasBeenSet) {
    payload.WithObject("UtilizedAmount", m_utilizedAmount.Jsonize());
  }

  if (m_issuanceDetailsHasBeenSet) {
    payload.WithObject("IssuanceDetails", m_issuanceDetails.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
