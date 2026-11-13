/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/textract/model/CreateAdapterVersionRequest.h>

#include <utility>

using namespace Aws::Textract::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateAdapterVersionRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_adapterIdHasBeenSet) {
    mapSize++;
  }
  if (m_clientRequestTokenHasBeenSet) {
    mapSize++;
  }
  if (m_datasetConfigHasBeenSet) {
    mapSize++;
  }
  if (m_kMSKeyIdHasBeenSet) {
    mapSize++;
  }
  if (m_outputConfigHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_adapterIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AdapterId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_adapterId.c_str()));
  }

  if (m_clientRequestTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ClientRequestToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_clientRequestToken.c_str()));
  }

  if (m_datasetConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DatasetConfig"));
    m_datasetConfig.CborEncode(encoder);
  }

  if (m_kMSKeyIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("KMSKeyId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_kMSKeyId.c_str()));
  }

  if (m_outputConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OutputConfig"));
    m_outputConfig.CborEncode(encoder);
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

Aws::Http::HeaderValueCollection CreateAdapterVersionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
