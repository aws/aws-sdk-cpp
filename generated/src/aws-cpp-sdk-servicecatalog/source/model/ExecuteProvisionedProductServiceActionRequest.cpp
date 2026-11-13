/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/servicecatalog/model/ExecuteProvisionedProductServiceActionRequest.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String ExecuteProvisionedProductServiceActionRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_provisionedProductIdHasBeenSet) {
    mapSize++;
  }
  if (m_serviceActionIdHasBeenSet) {
    mapSize++;
  }
  if (m_executeTokenHasBeenSet) {
    mapSize++;
  }
  if (m_acceptLanguageHasBeenSet) {
    mapSize++;
  }
  if (m_parametersHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_provisionedProductIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProvisionedProductId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_provisionedProductId.c_str()));
  }

  if (m_serviceActionIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ServiceActionId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_serviceActionId.c_str()));
  }

  if (m_executeTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ExecuteToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_executeToken.c_str()));
  }

  if (m_acceptLanguageHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AcceptLanguage"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_acceptLanguage.c_str()));
  }

  if (m_parametersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Parameters"));
    encoder.WriteMapStart(m_parameters.size());
    for (const auto& item_0 : m_parameters) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.first.c_str()));
      encoder.WriteArrayStart(item_0.second.size());
      for (const auto& item_1 : item_0.second) {
        encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_1.c_str()));
      }
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection ExecuteProvisionedProductServiceActionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
