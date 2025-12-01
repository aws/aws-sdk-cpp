/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-benefits/model/CreditCode.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralBenefits {
namespace Model {

CreditCode::CreditCode(JsonView jsonValue) { *this = jsonValue; }

CreditCode& CreditCode::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AwsAccountId")) {
    m_awsAccountId = jsonValue.GetString("AwsAccountId");
    m_awsAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Value")) {
    m_value = jsonValue.GetObject("Value");
    m_valueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AwsCreditCode")) {
    m_awsCreditCode = jsonValue.GetString("AwsCreditCode");
    m_awsCreditCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = BenefitAllocationStatusMapper::GetBenefitAllocationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IssuedAt")) {
    m_issuedAt = jsonValue.GetString("IssuedAt");
    m_issuedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExpiresAt")) {
    m_expiresAt = jsonValue.GetString("ExpiresAt");
    m_expiresAtHasBeenSet = true;
  }
  return *this;
}

JsonValue CreditCode::Jsonize() const {
  JsonValue payload;

  if (m_awsAccountIdHasBeenSet) {
    payload.WithString("AwsAccountId", m_awsAccountId);
  }

  if (m_valueHasBeenSet) {
    payload.WithObject("Value", m_value.Jsonize());
  }

  if (m_awsCreditCodeHasBeenSet) {
    payload.WithString("AwsCreditCode", m_awsCreditCode);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", BenefitAllocationStatusMapper::GetNameForBenefitAllocationStatus(m_status));
  }

  if (m_issuedAtHasBeenSet) {
    payload.WithString("IssuedAt", m_issuedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_expiresAtHasBeenSet) {
    payload.WithString("ExpiresAt", m_expiresAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
