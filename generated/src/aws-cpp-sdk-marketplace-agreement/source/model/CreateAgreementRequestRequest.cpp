/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/model/CreateAgreementRequestRequest.h>

#include <utility>

using namespace Aws::AgreementService::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateAgreementRequestRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_clientTokenHasBeenSet) {
    mapSize++;
  }
  if (m_intentHasBeenSet) {
    mapSize++;
  }
  if (m_requestedTermsHasBeenSet) {
    mapSize++;
  }
  if (m_sourceAgreementIdentifierHasBeenSet) {
    mapSize++;
  }
  if (m_agreementProposalIdentifierHasBeenSet) {
    mapSize++;
  }
  if (m_taxConfigurationHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_clientTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("clientToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_clientToken.c_str()));
  }

  if (m_intentHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("intent"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(IntentMapper::GetNameForIntent(m_intent).c_str()));
  }

  if (m_requestedTermsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("requestedTerms"));
    encoder.WriteArrayStart(m_requestedTerms.size());
    for (const auto& item_0 : m_requestedTerms) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_sourceAgreementIdentifierHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("sourceAgreementIdentifier"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_sourceAgreementIdentifier.c_str()));
  }

  if (m_agreementProposalIdentifierHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("agreementProposalIdentifier"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_agreementProposalIdentifier.c_str()));
  }

  if (m_taxConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("taxConfiguration"));
    m_taxConfiguration.CborEncode(encoder);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateAgreementRequestRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
