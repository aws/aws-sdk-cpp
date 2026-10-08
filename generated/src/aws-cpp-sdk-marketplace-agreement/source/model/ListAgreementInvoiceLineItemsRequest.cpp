/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/model/ListAgreementInvoiceLineItemsRequest.h>

#include <utility>

using namespace Aws::AgreementService::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String ListAgreementInvoiceLineItemsRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_agreementIdHasBeenSet) {
    mapSize++;
  }
  if (m_groupByHasBeenSet) {
    mapSize++;
  }
  if (m_invoiceIdHasBeenSet) {
    mapSize++;
  }
  if (m_invoiceTypeHasBeenSet) {
    mapSize++;
  }
  if (m_invoiceBillingPeriodHasBeenSet) {
    mapSize++;
  }
  if (m_beforeIssuedTimeHasBeenSet) {
    mapSize++;
  }
  if (m_afterIssuedTimeHasBeenSet) {
    mapSize++;
  }
  if (m_maxResultsHasBeenSet) {
    mapSize++;
  }
  if (m_nextTokenHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_agreementIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("agreementId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_agreementId.c_str()));
  }

  if (m_groupByHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("groupBy"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(LineItemGroupByMapper::GetNameForLineItemGroupBy(m_groupBy).c_str()));
  }

  if (m_invoiceIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("invoiceId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_invoiceId.c_str()));
  }

  if (m_invoiceTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("invoiceType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(InvoiceTypeMapper::GetNameForInvoiceType(m_invoiceType).c_str()));
  }

  if (m_invoiceBillingPeriodHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("invoiceBillingPeriod"));
    m_invoiceBillingPeriod.CborEncode(encoder);
  }

  if (m_beforeIssuedTimeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("beforeIssuedTime"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_beforeIssuedTime.Seconds());
  }

  if (m_afterIssuedTimeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("afterIssuedTime"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_afterIssuedTime.Seconds());
  }

  if (m_maxResultsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("maxResults"));
    (m_maxResults >= 0) ? encoder.WriteUInt(m_maxResults) : encoder.WriteNegInt(m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("nextToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_nextToken.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection ListAgreementInvoiceLineItemsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
