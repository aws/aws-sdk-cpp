/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/textract/model/StartDocumentInsightsRequest.h>

#include <utility>

using namespace Aws::Textract::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String StartDocumentInsightsRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_inputConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_outputConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_projectArnHasBeenSet) {
    mapSize++;
  }
  if (m_blueprintsHasBeenSet) {
    mapSize++;
  }
  if (m_encryptionConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_notificationConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_inputConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("InputConfiguration"));
    m_inputConfiguration.CborEncode(encoder);
  }

  if (m_outputConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OutputConfiguration"));
    m_outputConfiguration.CborEncode(encoder);
  }

  if (m_projectArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProjectArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_projectArn.c_str()));
  }

  if (m_blueprintsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Blueprints"));
    encoder.WriteArrayStart(m_blueprints.size());
    for (const auto& item_0 : m_blueprints) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_encryptionConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EncryptionConfiguration"));
    m_encryptionConfiguration.CborEncode(encoder);
  }

  if (m_notificationConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NotificationConfiguration"));
    m_notificationConfiguration.CborEncode(encoder);
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

Aws::Http::HeaderValueCollection StartDocumentInsightsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
