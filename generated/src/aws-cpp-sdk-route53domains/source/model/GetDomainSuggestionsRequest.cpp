/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/route53domains/model/GetDomainSuggestionsRequest.h>

#include <utility>

using namespace Aws::Route53Domains::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String GetDomainSuggestionsRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_domainNameHasBeenSet) {
    mapSize++;
  }
  if (m_suggestionCountHasBeenSet) {
    mapSize++;
  }
  if (m_onlyAvailableHasBeenSet) {
    mapSize++;
  }
  if (m_onlyStandardPricesHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_domainNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DomainName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_domainName.c_str()));
  }

  if (m_suggestionCountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SuggestionCount"));
    (m_suggestionCount >= 0) ? encoder.WriteUInt(m_suggestionCount) : encoder.WriteNegInt(m_suggestionCount);
  }

  if (m_onlyAvailableHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OnlyAvailable"));
    encoder.WriteBool(m_onlyAvailable);
  }

  if (m_onlyStandardPricesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OnlyStandardPrices"));
    encoder.WriteBool(m_onlyStandardPrices);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection GetDomainSuggestionsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
