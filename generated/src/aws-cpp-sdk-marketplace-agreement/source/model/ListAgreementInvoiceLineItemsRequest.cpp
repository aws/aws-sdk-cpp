/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/model/ListAgreementInvoiceLineItemsRequest.h>

#include <utility>

using namespace Aws::AgreementService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListAgreementInvoiceLineItemsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_agreementIdHasBeenSet) {
    payload.WithString("agreementId", m_agreementId);
  }

  if (m_groupByHasBeenSet) {
    payload.WithString("groupBy", LineItemGroupByMapper::GetNameForLineItemGroupBy(m_groupBy));
  }

  if (m_invoiceIdHasBeenSet) {
    payload.WithString("invoiceId", m_invoiceId);
  }

  if (m_invoiceTypeHasBeenSet) {
    payload.WithString("invoiceType", InvoiceTypeMapper::GetNameForInvoiceType(m_invoiceType));
  }

  if (m_invoiceBillingPeriodHasBeenSet) {
    payload.WithObject("invoiceBillingPeriod", m_invoiceBillingPeriod.Jsonize());
  }

  if (m_beforeIssuedTimeHasBeenSet) {
    payload.WithDouble("beforeIssuedTime", m_beforeIssuedTime.SecondsWithMSPrecision());
  }

  if (m_afterIssuedTimeHasBeenSet) {
    payload.WithDouble("afterIssuedTime", m_afterIssuedTime.SecondsWithMSPrecision());
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListAgreementInvoiceLineItemsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSMPCommerceService_v20200301.ListAgreementInvoiceLineItems"));
  return headers;
}
