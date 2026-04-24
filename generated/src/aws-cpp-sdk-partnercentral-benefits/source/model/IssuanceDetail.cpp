/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-benefits/model/IssuanceDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralBenefits {
namespace Model {

IssuanceDetail::IssuanceDetail(JsonView jsonValue) { *this = jsonValue; }

IssuanceDetail& IssuanceDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("IssuanceId")) {
    m_issuanceId = jsonValue.GetString("IssuanceId");
    m_issuanceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IssuanceAmount")) {
    m_issuanceAmount = jsonValue.GetObject("IssuanceAmount");
    m_issuanceAmountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IssuedAt")) {
    m_issuedAt = jsonValue.GetString("IssuedAt");
    m_issuedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue IssuanceDetail::Jsonize() const {
  JsonValue payload;

  if (m_issuanceIdHasBeenSet) {
    payload.WithString("IssuanceId", m_issuanceId);
  }

  if (m_issuanceAmountHasBeenSet) {
    payload.WithObject("IssuanceAmount", m_issuanceAmount.Jsonize());
  }

  if (m_issuedAtHasBeenSet) {
    payload.WithString("IssuedAt", m_issuedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
