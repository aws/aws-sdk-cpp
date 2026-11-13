/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/servicecatalog/model/UpdatePortfolioShareRequest.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdatePortfolioShareRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_acceptLanguageHasBeenSet) {
    mapSize++;
  }
  if (m_portfolioIdHasBeenSet) {
    mapSize++;
  }
  if (m_accountIdHasBeenSet) {
    mapSize++;
  }
  if (m_organizationNodeHasBeenSet) {
    mapSize++;
  }
  if (m_shareTagOptionsHasBeenSet) {
    mapSize++;
  }
  if (m_sharePrincipalsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_acceptLanguageHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AcceptLanguage"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_acceptLanguage.c_str()));
  }

  if (m_portfolioIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PortfolioId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_portfolioId.c_str()));
  }

  if (m_accountIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AccountId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_accountId.c_str()));
  }

  if (m_organizationNodeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OrganizationNode"));
    m_organizationNode.CborEncode(encoder);
  }

  if (m_shareTagOptionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ShareTagOptions"));
    encoder.WriteBool(m_shareTagOptions);
  }

  if (m_sharePrincipalsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SharePrincipals"));
    encoder.WriteBool(m_sharePrincipals);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdatePortfolioShareRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
