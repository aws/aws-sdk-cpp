/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/servicecatalog/model/TerminateProvisionedProductRequest.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String TerminateProvisionedProductRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_provisionedProductNameHasBeenSet) {
    mapSize++;
  }
  if (m_provisionedProductIdHasBeenSet) {
    mapSize++;
  }
  if (m_terminateTokenHasBeenSet) {
    mapSize++;
  }
  if (m_ignoreErrorsHasBeenSet) {
    mapSize++;
  }
  if (m_acceptLanguageHasBeenSet) {
    mapSize++;
  }
  if (m_retainPhysicalResourcesHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_provisionedProductNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProvisionedProductName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_provisionedProductName.c_str()));
  }

  if (m_provisionedProductIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProvisionedProductId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_provisionedProductId.c_str()));
  }

  if (m_terminateTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TerminateToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_terminateToken.c_str()));
  }

  if (m_ignoreErrorsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IgnoreErrors"));
    encoder.WriteBool(m_ignoreErrors);
  }

  if (m_acceptLanguageHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AcceptLanguage"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_acceptLanguage.c_str()));
  }

  if (m_retainPhysicalResourcesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RetainPhysicalResources"));
    encoder.WriteBool(m_retainPhysicalResources);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection TerminateProvisionedProductRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
