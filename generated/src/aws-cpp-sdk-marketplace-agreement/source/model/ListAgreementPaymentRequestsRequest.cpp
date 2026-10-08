/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/model/ListAgreementPaymentRequestsRequest.h>

#include <utility>

using namespace Aws::AgreementService::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String ListAgreementPaymentRequestsRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_partyTypeHasBeenSet) {
    mapSize++;
  }
  if (m_agreementTypeHasBeenSet) {
    mapSize++;
  }
  if (m_catalogHasBeenSet) {
    mapSize++;
  }
  if (m_agreementIdHasBeenSet) {
    mapSize++;
  }
  if (m_statusHasBeenSet) {
    mapSize++;
  }
  if (m_maxResultsHasBeenSet) {
    mapSize++;
  }
  if (m_nextTokenHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_partyTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("partyType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_partyType.c_str()));
  }

  if (m_agreementTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("agreementType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_agreementType.c_str()));
  }

  if (m_catalogHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("catalog"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_catalog.c_str()));
  }

  if (m_agreementIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("agreementId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_agreementId.c_str()));
  }

  if (m_statusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("status"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(PaymentRequestStatusMapper::GetNameForPaymentRequestStatus(m_status).c_str()));
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

Aws::Http::HeaderValueCollection ListAgreementPaymentRequestsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
