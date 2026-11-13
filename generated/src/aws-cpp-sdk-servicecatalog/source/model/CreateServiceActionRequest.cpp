/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/servicecatalog/model/CreateServiceActionRequest.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateServiceActionRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_nameHasBeenSet) {
    mapSize++;
  }
  if (m_definitionTypeHasBeenSet) {
    mapSize++;
  }
  if (m_definitionHasBeenSet) {
    mapSize++;
  }
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_acceptLanguageHasBeenSet) {
    mapSize++;
  }
  if (m_idempotencyTokenHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_nameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_name.c_str()));
  }

  if (m_definitionTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DefinitionType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        ServiceActionDefinitionTypeMapper::GetNameForServiceActionDefinitionType(m_definitionType).c_str()));
  }

  if (m_definitionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Definition"));
    encoder.WriteMapStart(m_definition.size());
    for (const auto& item_0 : m_definition) {
      encoder.WriteText(
          Aws::Crt::ByteCursorFromCString(ServiceActionDefinitionKeyMapper::GetNameForServiceActionDefinitionKey(item_0.first).c_str()));
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.second.c_str()));
    }
  }

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }

  if (m_acceptLanguageHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AcceptLanguage"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_acceptLanguage.c_str()));
  }

  if (m_idempotencyTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IdempotencyToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_idempotencyToken.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateServiceActionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
