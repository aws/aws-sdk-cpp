/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/translate/model/TranslateDocumentRequest.h>

#include <utility>

using namespace Aws::Translate::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String TranslateDocumentRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_documentHasBeenSet) {
    mapSize++;
  }
  if (m_terminologyNamesHasBeenSet) {
    mapSize++;
  }
  if (m_sourceLanguageCodeHasBeenSet) {
    mapSize++;
  }
  if (m_targetLanguageCodeHasBeenSet) {
    mapSize++;
  }
  if (m_settingsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_documentHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Document"));
    m_document.CborEncode(encoder);
  }

  if (m_terminologyNamesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TerminologyNames"));
    encoder.WriteArrayStart(m_terminologyNames.size());
    for (const auto& item_0 : m_terminologyNames) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_sourceLanguageCodeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SourceLanguageCode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_sourceLanguageCode.c_str()));
  }

  if (m_targetLanguageCodeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TargetLanguageCode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_targetLanguageCode.c_str()));
  }

  if (m_settingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Settings"));
    m_settings.CborEncode(encoder);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection TranslateDocumentRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
