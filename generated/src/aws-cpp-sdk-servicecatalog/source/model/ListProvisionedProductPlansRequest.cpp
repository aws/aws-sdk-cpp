/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/servicecatalog/model/ListProvisionedProductPlansRequest.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String ListProvisionedProductPlansRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_acceptLanguageHasBeenSet) {
    mapSize++;
  }
  if (m_provisionProductIdHasBeenSet) {
    mapSize++;
  }
  if (m_pageSizeHasBeenSet) {
    mapSize++;
  }
  if (m_pageTokenHasBeenSet) {
    mapSize++;
  }
  if (m_accessLevelFilterHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_acceptLanguageHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AcceptLanguage"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_acceptLanguage.c_str()));
  }

  if (m_provisionProductIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProvisionProductId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_provisionProductId.c_str()));
  }

  if (m_pageSizeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PageSize"));
    (m_pageSize >= 0) ? encoder.WriteUInt(m_pageSize) : encoder.WriteNegInt(m_pageSize);
  }

  if (m_pageTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PageToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_pageToken.c_str()));
  }

  if (m_accessLevelFilterHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AccessLevelFilter"));
    m_accessLevelFilter.CborEncode(encoder);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection ListProvisionedProductPlansRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
