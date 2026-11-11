/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/route53domains/model/RegisterDomainRequest.h>

#include <utility>

using namespace Aws::Route53Domains::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String RegisterDomainRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_domainNameHasBeenSet) {
    mapSize++;
  }
  if (m_idnLangCodeHasBeenSet) {
    mapSize++;
  }
  if (m_durationInYearsHasBeenSet) {
    mapSize++;
  }
  if (m_autoRenewHasBeenSet) {
    mapSize++;
  }
  if (m_adminContactHasBeenSet) {
    mapSize++;
  }
  if (m_registrantContactHasBeenSet) {
    mapSize++;
  }
  if (m_techContactHasBeenSet) {
    mapSize++;
  }
  if (m_privacyProtectAdminContactHasBeenSet) {
    mapSize++;
  }
  if (m_privacyProtectRegistrantContactHasBeenSet) {
    mapSize++;
  }
  if (m_privacyProtectTechContactHasBeenSet) {
    mapSize++;
  }
  if (m_billingContactHasBeenSet) {
    mapSize++;
  }
  if (m_privacyProtectBillingContactHasBeenSet) {
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

  if (m_idnLangCodeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IdnLangCode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_idnLangCode.c_str()));
  }

  if (m_durationInYearsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DurationInYears"));
    (m_durationInYears >= 0) ? encoder.WriteUInt(m_durationInYears) : encoder.WriteNegInt(m_durationInYears);
  }

  if (m_autoRenewHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AutoRenew"));
    encoder.WriteBool(m_autoRenew);
  }

  if (m_adminContactHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AdminContact"));
    m_adminContact.CborEncode(encoder);
  }

  if (m_registrantContactHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RegistrantContact"));
    m_registrantContact.CborEncode(encoder);
  }

  if (m_techContactHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TechContact"));
    m_techContact.CborEncode(encoder);
  }

  if (m_privacyProtectAdminContactHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PrivacyProtectAdminContact"));
    encoder.WriteBool(m_privacyProtectAdminContact);
  }

  if (m_privacyProtectRegistrantContactHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PrivacyProtectRegistrantContact"));
    encoder.WriteBool(m_privacyProtectRegistrantContact);
  }

  if (m_privacyProtectTechContactHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PrivacyProtectTechContact"));
    encoder.WriteBool(m_privacyProtectTechContact);
  }

  if (m_billingContactHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("BillingContact"));
    m_billingContact.CborEncode(encoder);
  }

  if (m_privacyProtectBillingContactHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PrivacyProtectBillingContact"));
    encoder.WriteBool(m_privacyProtectBillingContact);
  }

  if (m_consentHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Consent"));
    m_consent.CborEncode(encoder);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection RegisterDomainRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
