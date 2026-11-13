/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/textract/model/CreateAdapterRequest.h>

#include <utility>

using namespace Aws::Textract::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateAdapterRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_adapterNameHasBeenSet) {
    mapSize++;
  }
  if (m_clientRequestTokenHasBeenSet) {
    mapSize++;
  }
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_featureTypesHasBeenSet) {
    mapSize++;
  }
  if (m_autoUpdateHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_adapterNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AdapterName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_adapterName.c_str()));
  }

  if (m_clientRequestTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ClientRequestToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_clientRequestToken.c_str()));
  }

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }

  if (m_featureTypesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FeatureTypes"));
    encoder.WriteArrayStart(m_featureTypes.size());
    for (const auto& item_0 : m_featureTypes) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(FeatureTypeMapper::GetNameForFeatureType(item_0).c_str()));
    }
  }

  if (m_autoUpdateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AutoUpdate"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(AutoUpdateMapper::GetNameForAutoUpdate(m_autoUpdate).c_str()));
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteMapStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.first.c_str()));
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.second.c_str()));
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateAdapterRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
