/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/model/PaymentRequestSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {

PaymentRequestSummary::PaymentRequestSummary(JsonView jsonValue) { *this = jsonValue; }

PaymentRequestSummary& PaymentRequestSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("paymentRequestId")) {
    m_paymentRequestId = jsonValue.GetString("paymentRequestId");
    m_paymentRequestIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agreementId")) {
    m_agreementId = jsonValue.GetString("agreementId");
    m_agreementIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = PaymentRequestStatusMapper::GetPaymentRequestStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("chargeId")) {
    m_chargeId = jsonValue.GetString("chargeId");
    m_chargeIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("chargeAmount")) {
    m_chargeAmount = jsonValue.GetString("chargeAmount");
    m_chargeAmountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("currencyCode")) {
    m_currencyCode = jsonValue.GetString("currencyCode");
    m_currencyCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue PaymentRequestSummary::Jsonize() const {
  JsonValue payload;

  if (m_paymentRequestIdHasBeenSet) {
    payload.WithString("paymentRequestId", m_paymentRequestId);
  }

  if (m_agreementIdHasBeenSet) {
    payload.WithString("agreementId", m_agreementId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", PaymentRequestStatusMapper::GetNameForPaymentRequestStatus(m_status));
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_chargeIdHasBeenSet) {
    payload.WithString("chargeId", m_chargeId);
  }

  if (m_chargeAmountHasBeenSet) {
    payload.WithString("chargeAmount", m_chargeAmount);
  }

  if (m_currencyCodeHasBeenSet) {
    payload.WithString("currencyCode", m_currencyCode);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
