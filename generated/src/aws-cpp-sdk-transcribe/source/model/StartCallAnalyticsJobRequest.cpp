/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/transcribe/model/StartCallAnalyticsJobRequest.h>

#include <utility>

using namespace Aws::TranscribeService::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String StartCallAnalyticsJobRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_callAnalyticsJobNameHasBeenSet) {
    mapSize++;
  }
  if (m_mediaHasBeenSet) {
    mapSize++;
  }
  if (m_outputLocationHasBeenSet) {
    mapSize++;
  }
  if (m_outputEncryptionKMSKeyIdHasBeenSet) {
    mapSize++;
  }
  if (m_dataAccessRoleArnHasBeenSet) {
    mapSize++;
  }
  if (m_settingsHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_channelDefinitionsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_callAnalyticsJobNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CallAnalyticsJobName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_callAnalyticsJobName.c_str()));
  }

  if (m_mediaHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Media"));
    m_media.CborEncode(encoder);
  }

  if (m_outputLocationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OutputLocation"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_outputLocation.c_str()));
  }

  if (m_outputEncryptionKMSKeyIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OutputEncryptionKMSKeyId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_outputEncryptionKMSKeyId.c_str()));
  }

  if (m_dataAccessRoleArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DataAccessRoleArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_dataAccessRoleArn.c_str()));
  }

  if (m_settingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Settings"));
    m_settings.CborEncode(encoder);
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_channelDefinitionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ChannelDefinitions"));
    encoder.WriteArrayStart(m_channelDefinitions.size());
    for (const auto& item_0 : m_channelDefinitions) {
      item_0.CborEncode(encoder);
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection StartCallAnalyticsJobRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
