/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/route53domains/model/RenewDomainRequest.h>

#include <utility>

using namespace Aws::Route53Domains::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String RenewDomainRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_domainNameHasBeenSet) {
    mapSize++;
  }
  if (m_durationInYearsHasBeenSet) {
    mapSize++;
  }
  if (m_currentExpiryYearHasBeenSet) {
    mapSize++;
  }
  if (m_consentHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_domainNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DomainName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_domainName.c_str()));
  }

  if (m_durationInYearsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DurationInYears"));
    (m_durationInYears >= 0) ? encoder.WriteUInt(m_durationInYears) : encoder.WriteNegInt(m_durationInYears);
  }

  if (m_currentExpiryYearHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CurrentExpiryYear"));
    (m_currentExpiryYear >= 0) ? encoder.WriteUInt(m_currentExpiryYear) : encoder.WriteNegInt(m_currentExpiryYear);
  }

  if (m_consentHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Consent"));
    m_consent.CborEncode(encoder);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection RenewDomainRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
