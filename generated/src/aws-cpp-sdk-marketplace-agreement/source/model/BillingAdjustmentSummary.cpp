/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/model/BillingAdjustmentSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {

BillingAdjustmentSummary::BillingAdjustmentSummary(JsonView jsonValue) { *this = jsonValue; }

BillingAdjustmentSummary& BillingAdjustmentSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("billingAdjustmentRequestId")) {
    m_billingAdjustmentRequestId = jsonValue.GetString("billingAdjustmentRequestId");
    m_billingAdjustmentRequestIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("originalInvoiceId")) {
    m_originalInvoiceId = jsonValue.GetString("originalInvoiceId");
    m_originalInvoiceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("adjustmentAmount")) {
    m_adjustmentAmount = jsonValue.GetString("adjustmentAmount");
    m_adjustmentAmountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("currencyCode")) {
    m_currencyCode = jsonValue.GetString("currencyCode");
    m_currencyCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = BillingAdjustmentStatusMapper::GetBillingAdjustmentStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agreementId")) {
    m_agreementId = jsonValue.GetString("agreementId");
    m_agreementIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agreementType")) {
    m_agreementType = jsonValue.GetString("agreementType");
    m_agreementTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("catalog")) {
    m_catalog = jsonValue.GetString("catalog");
    m_catalogHasBeenSet = true;
  }
  return *this;
}

JsonValue BillingAdjustmentSummary::Jsonize() const {
  JsonValue payload;

  if (m_billingAdjustmentRequestIdHasBeenSet) {
    payload.WithString("billingAdjustmentRequestId", m_billingAdjustmentRequestId);
  }

  if (m_originalInvoiceIdHasBeenSet) {
    payload.WithString("originalInvoiceId", m_originalInvoiceId);
  }

  if (m_adjustmentAmountHasBeenSet) {
    payload.WithString("adjustmentAmount", m_adjustmentAmount);
  }

  if (m_currencyCodeHasBeenSet) {
    payload.WithString("currencyCode", m_currencyCode);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", BillingAdjustmentStatusMapper::GetNameForBillingAdjustmentStatus(m_status));
  }

  if (m_agreementIdHasBeenSet) {
    payload.WithString("agreementId", m_agreementId);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if (m_agreementTypeHasBeenSet) {
    payload.WithString("agreementType", m_agreementType);
  }

  if (m_catalogHasBeenSet) {
    payload.WithString("catalog", m_catalog);
  }

  return payload;
}

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
