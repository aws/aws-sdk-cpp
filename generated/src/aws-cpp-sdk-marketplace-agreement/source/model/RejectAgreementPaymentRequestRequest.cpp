/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/model/RejectAgreementPaymentRequestRequest.h>

#include <utility>

using namespace Aws::AgreementService::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String RejectAgreementPaymentRequestRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_paymentRequestIdHasBeenSet) {
    mapSize++;
  }
  if (m_agreementIdHasBeenSet) {
    mapSize++;
  }
  if (m_rejectionReasonHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_paymentRequestIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("paymentRequestId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_paymentRequestId.c_str()));
  }

  if (m_agreementIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("agreementId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_agreementId.c_str()));
  }

  if (m_rejectionReasonHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("rejectionReason"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_rejectionReason.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection RejectAgreementPaymentRequestRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
