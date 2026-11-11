/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/route53domains/model/UpdateDomainContactPrivacyRequest.h>

#include <utility>

using namespace Aws::Route53Domains::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateDomainContactPrivacyRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_domainNameHasBeenSet) {
    mapSize++;
  }
  if (m_adminPrivacyHasBeenSet) {
    mapSize++;
  }
  if (m_registrantPrivacyHasBeenSet) {
    mapSize++;
  }
  if (m_techPrivacyHasBeenSet) {
    mapSize++;
  }
  if (m_billingPrivacyHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_domainNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DomainName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_domainName.c_str()));
  }

  if (m_adminPrivacyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AdminPrivacy"));
    encoder.WriteBool(m_adminPrivacy);
  }

  if (m_registrantPrivacyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RegistrantPrivacy"));
    encoder.WriteBool(m_registrantPrivacy);
  }

  if (m_techPrivacyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TechPrivacy"));
    encoder.WriteBool(m_techPrivacy);
  }

  if (m_billingPrivacyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("BillingPrivacy"));
    encoder.WriteBool(m_billingPrivacy);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateDomainContactPrivacyRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
