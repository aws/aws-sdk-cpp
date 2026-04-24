/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/model/BatchCreateBillingAdjustmentRequestEntry.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {

BatchCreateBillingAdjustmentRequestEntry::BatchCreateBillingAdjustmentRequestEntry(JsonView jsonValue) { *this = jsonValue; }

BatchCreateBillingAdjustmentRequestEntry& BatchCreateBillingAdjustmentRequestEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("agreementId")) {
    m_agreementId = jsonValue.GetString("agreementId");
    m_agreementIdHasBeenSet = true;
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
  if (jsonValue.ValueExists("adjustmentReasonCode")) {
    m_adjustmentReasonCode =
        BillingAdjustmentReasonCodeMapper::GetBillingAdjustmentReasonCodeForName(jsonValue.GetString("adjustmentReasonCode"));
    m_adjustmentReasonCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clientToken")) {
    m_clientToken = jsonValue.GetString("clientToken");
    m_clientTokenHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchCreateBillingAdjustmentRequestEntry::Jsonize() const {
  JsonValue payload;

  if (m_agreementIdHasBeenSet) {
    payload.WithString("agreementId", m_agreementId);
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

  if (m_adjustmentReasonCodeHasBeenSet) {
    payload.WithString("adjustmentReasonCode",
                       BillingAdjustmentReasonCodeMapper::GetNameForBillingAdjustmentReasonCode(m_adjustmentReasonCode));
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload;
}

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
