/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/textract/model/AnalyzeDocumentRequest.h>

#include <utility>

using namespace Aws::Textract::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String AnalyzeDocumentRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_documentHasBeenSet) {
    mapSize++;
  }
  if (m_featureTypesHasBeenSet) {
    mapSize++;
  }
  if (m_humanLoopConfigHasBeenSet) {
    mapSize++;
  }
  if (m_queriesConfigHasBeenSet) {
    mapSize++;
  }
  if (m_adaptersConfigHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_documentHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Document"));
    m_document.CborEncode(encoder);
  }

  if (m_featureTypesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FeatureTypes"));
    encoder.WriteArrayStart(m_featureTypes.size());
    for (const auto& item_0 : m_featureTypes) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(FeatureTypeMapper::GetNameForFeatureType(item_0).c_str()));
    }
  }

  if (m_humanLoopConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("HumanLoopConfig"));
    m_humanLoopConfig.CborEncode(encoder);
  }

  if (m_queriesConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("QueriesConfig"));
    m_queriesConfig.CborEncode(encoder);
  }

  if (m_adaptersConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AdaptersConfig"));
    m_adaptersConfig.CborEncode(encoder);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection AnalyzeDocumentRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
