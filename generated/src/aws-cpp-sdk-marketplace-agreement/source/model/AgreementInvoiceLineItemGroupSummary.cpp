/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/model/AgreementInvoiceLineItemGroupSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {

AgreementInvoiceLineItemGroupSummary::AgreementInvoiceLineItemGroupSummary(JsonView jsonValue) { *this = jsonValue; }

AgreementInvoiceLineItemGroupSummary& AgreementInvoiceLineItemGroupSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("agreementId")) {
    m_agreementId = jsonValue.GetString("agreementId");
    m_agreementIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("invoiceId")) {
    m_invoiceId = jsonValue.GetString("invoiceId");
    m_invoiceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pricingCurrencyAmount")) {
    m_pricingCurrencyAmount = jsonValue.GetObject("pricingCurrencyAmount");
    m_pricingCurrencyAmountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("invoiceBillingPeriod")) {
    m_invoiceBillingPeriod = jsonValue.GetObject("invoiceBillingPeriod");
    m_invoiceBillingPeriodHasBeenSet = true;
  }
  if (jsonValue.ValueExists("issuedTime")) {
    m_issuedTime = jsonValue.GetDouble("issuedTime");
    m_issuedTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("invoiceType")) {
    m_invoiceType = InvoiceTypeMapper::GetInvoiceTypeForName(jsonValue.GetString("invoiceType"));
    m_invoiceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("invoicingEntity")) {
    m_invoicingEntity = jsonValue.GetObject("invoicingEntity");
    m_invoicingEntityHasBeenSet = true;
  }
  return *this;
}

JsonValue AgreementInvoiceLineItemGroupSummary::Jsonize() const {
  JsonValue payload;

  if (m_agreementIdHasBeenSet) {
    payload.WithString("agreementId", m_agreementId);
  }

  if (m_invoiceIdHasBeenSet) {
    payload.WithString("invoiceId", m_invoiceId);
  }

  if (m_pricingCurrencyAmountHasBeenSet) {
    payload.WithObject("pricingCurrencyAmount", m_pricingCurrencyAmount.Jsonize());
  }

  if (m_invoiceBillingPeriodHasBeenSet) {
    payload.WithObject("invoiceBillingPeriod", m_invoiceBillingPeriod.Jsonize());
  }

  if (m_issuedTimeHasBeenSet) {
    payload.WithDouble("issuedTime", m_issuedTime.SecondsWithMSPrecision());
  }

  if (m_invoiceTypeHasBeenSet) {
    payload.WithString("invoiceType", InvoiceTypeMapper::GetNameForInvoiceType(m_invoiceType));
  }

  if (m_invoicingEntityHasBeenSet) {
    payload.WithObject("invoicingEntity", m_invoicingEntity.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
