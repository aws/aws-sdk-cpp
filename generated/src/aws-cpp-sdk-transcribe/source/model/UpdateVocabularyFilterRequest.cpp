/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/transcribe/model/UpdateVocabularyFilterRequest.h>

#include <utility>

using namespace Aws::TranscribeService::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateVocabularyFilterRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_vocabularyFilterNameHasBeenSet) {
    mapSize++;
  }
  if (m_wordsHasBeenSet) {
    mapSize++;
  }
  if (m_vocabularyFilterFileUriHasBeenSet) {
    mapSize++;
  }
  if (m_dataAccessRoleArnHasBeenSet) {
    mapSize++;
  }
  if (m_encryptionConfigurationHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_vocabularyFilterNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("VocabularyFilterName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_vocabularyFilterName.c_str()));
  }

  if (m_wordsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Words"));
    encoder.WriteArrayStart(m_words.size());
    for (const auto& item_0 : m_words) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_vocabularyFilterFileUriHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("VocabularyFilterFileUri"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_vocabularyFilterFileUri.c_str()));
  }

  if (m_dataAccessRoleArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DataAccessRoleArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_dataAccessRoleArn.c_str()));
  }

  if (m_encryptionConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EncryptionConfiguration"));
    m_encryptionConfiguration.CborEncode(encoder);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateVocabularyFilterRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
