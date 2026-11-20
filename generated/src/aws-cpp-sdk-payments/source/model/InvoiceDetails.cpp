/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/payments/model/InvoiceDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Payments {
namespace Model {

InvoiceDetails::InvoiceDetails(JsonView jsonValue) { *this = jsonValue; }

InvoiceDetails& InvoiceDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("invoiceId")) {
    m_invoiceId = jsonValue.GetString("invoiceId");
    m_invoiceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dueStatus")) {
    m_dueStatus = DueStatusMapper::GetDueStatusForName(jsonValue.GetString("dueStatus"));
    m_dueStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("billingPeriod")) {
    m_billingPeriod = jsonValue.GetObject("billingPeriod");
    m_billingPeriodHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dueDate")) {
    m_dueDate = jsonValue.GetDouble("dueDate");
    m_dueDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("paymentTerms")) {
    m_paymentTerms = jsonValue.GetString("paymentTerms");
    m_paymentTermsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("invoiceFrequency")) {
    m_invoiceFrequency = InvoiceFrequencyMapper::GetInvoiceFrequencyForName(jsonValue.GetString("invoiceFrequency"));
    m_invoiceFrequencyHasBeenSet = true;
  }
  return *this;
}

JsonValue InvoiceDetails::Jsonize() const {
  JsonValue payload;

  if (m_invoiceIdHasBeenSet) {
    payload.WithString("invoiceId", m_invoiceId);
  }

  if (m_dueStatusHasBeenSet) {
    payload.WithString("dueStatus", DueStatusMapper::GetNameForDueStatus(m_dueStatus));
  }

  if (m_billingPeriodHasBeenSet) {
    payload.WithObject("billingPeriod", m_billingPeriod.Jsonize());
  }

  if (m_dueDateHasBeenSet) {
    payload.WithDouble("dueDate", m_dueDate.SecondsWithMSPrecision());
  }

  if (m_paymentTermsHasBeenSet) {
    payload.WithString("paymentTerms", m_paymentTerms);
  }

  if (m_invoiceFrequencyHasBeenSet) {
    payload.WithString("invoiceFrequency", InvoiceFrequencyMapper::GetNameForInvoiceFrequency(m_invoiceFrequency));
  }

  return payload;
}

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
