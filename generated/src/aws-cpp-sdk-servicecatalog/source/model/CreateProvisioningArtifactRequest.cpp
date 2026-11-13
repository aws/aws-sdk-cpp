/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/servicecatalog/model/CreateProvisioningArtifactRequest.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateProvisioningArtifactRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_acceptLanguageHasBeenSet) {
    mapSize++;
  }
  if (m_productIdHasBeenSet) {
    mapSize++;
  }
  if (m_parametersHasBeenSet) {
    mapSize++;
  }
  if (m_idempotencyTokenHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_acceptLanguageHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AcceptLanguage"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_acceptLanguage.c_str()));
  }

  if (m_productIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProductId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_productId.c_str()));
  }

  if (m_parametersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Parameters"));
    m_parameters.CborEncode(encoder);
  }

  if (m_idempotencyTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IdempotencyToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_idempotencyToken.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateProvisioningArtifactRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
