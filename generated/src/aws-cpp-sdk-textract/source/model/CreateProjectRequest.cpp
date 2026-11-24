/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/textract/model/CreateProjectRequest.h>

#include <utility>

using namespace Aws::Textract::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateProjectRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_clientRequestTokenHasBeenSet) {
    mapSize++;
  }
  if (m_projectNameHasBeenSet) {
    mapSize++;
  }
  if (m_projectDescriptionHasBeenSet) {
    mapSize++;
  }
  if (m_extractionConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_generativeConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_customConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_splitterConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_sensitiveDataConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_encryptionConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_clientRequestTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ClientRequestToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_clientRequestToken.c_str()));
  }

  if (m_projectNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProjectName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_projectName.c_str()));
  }

  if (m_projectDescriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProjectDescription"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_projectDescription.c_str()));
  }

  if (m_extractionConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ExtractionConfiguration"));
    m_extractionConfiguration.CborEncode(encoder);
  }

  if (m_generativeConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("GenerativeConfiguration"));
    m_generativeConfiguration.CborEncode(encoder);
  }

  if (m_customConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CustomConfiguration"));
    m_customConfiguration.CborEncode(encoder);
  }

  if (m_splitterConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SplitterConfiguration"));
    m_splitterConfiguration.CborEncode(encoder);
  }

  if (m_sensitiveDataConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SensitiveDataConfiguration"));
    m_sensitiveDataConfiguration.CborEncode(encoder);
  }

  if (m_encryptionConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EncryptionConfiguration"));
    m_encryptionConfiguration.CborEncode(encoder);
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

Aws::Http::HeaderValueCollection CreateProjectRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
