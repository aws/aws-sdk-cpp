/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/servicecatalog/model/UpdatePortfolioRequest.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdatePortfolioRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_acceptLanguageHasBeenSet) {
    mapSize++;
  }
  if (m_idHasBeenSet) {
    mapSize++;
  }
  if (m_displayNameHasBeenSet) {
    mapSize++;
  }
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_providerNameHasBeenSet) {
    mapSize++;
  }
  if (m_addTagsHasBeenSet) {
    mapSize++;
  }
  if (m_removeTagsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_acceptLanguageHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AcceptLanguage"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_acceptLanguage.c_str()));
  }

  if (m_idHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Id"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_id.c_str()));
  }

  if (m_displayNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DisplayName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_displayName.c_str()));
  }

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }

  if (m_providerNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProviderName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_providerName.c_str()));
  }

  if (m_addTagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AddTags"));
    encoder.WriteArrayStart(m_addTags.size());
    for (const auto& item_0 : m_addTags) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_removeTagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RemoveTags"));
    encoder.WriteArrayStart(m_removeTags.size());
    for (const auto& item_0 : m_removeTags) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdatePortfolioRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
