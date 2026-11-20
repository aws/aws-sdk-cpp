/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/transcribe/model/TranscribeAudioRequest.h>

#include <utility>

using namespace Aws::TranscribeService::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String TranscribeAudioRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_mediaHasBeenSet) {
    mapSize++;
  }
  if (m_languageHasBeenSet) {
    mapSize++;
  }
  if (m_languageDetectionModeHasBeenSet) {
    mapSize++;
  }
  if (m_languageOptionsHasBeenSet) {
    mapSize++;
  }
  if (m_channelIdentificationHasBeenSet) {
    mapSize++;
  }
  if (m_showSpeakerLabelsHasBeenSet) {
    mapSize++;
  }
  if (m_maxSpeakerLabelsHasBeenSet) {
    mapSize++;
  }
  if (m_vocabularySettingsHasBeenSet) {
    mapSize++;
  }
  if (m_vocabularyFilterSettingsHasBeenSet) {
    mapSize++;
  }
  if (m_contentRedactionHasBeenSet) {
    mapSize++;
  }
  if (m_outputConfigurationHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_mediaHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Media"));
    m_media.CborEncode(encoder);
  }

  if (m_languageHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Language"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(SyncLanguageMapper::GetNameForSyncLanguage(m_language).c_str()));
  }

  if (m_languageDetectionModeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LanguageDetectionMode"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(LanguageDetectionModeMapper::GetNameForLanguageDetectionMode(m_languageDetectionMode).c_str()));
  }

  if (m_languageOptionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LanguageOptions"));
    encoder.WriteArrayStart(m_languageOptions.size());
    for (const auto& item_0 : m_languageOptions) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(SyncLanguageMapper::GetNameForSyncLanguage(item_0).c_str()));
    }
  }

  if (m_channelIdentificationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ChannelIdentification"));
    encoder.WriteBool(m_channelIdentification);
  }

  if (m_showSpeakerLabelsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ShowSpeakerLabels"));
    encoder.WriteBool(m_showSpeakerLabels);
  }

  if (m_maxSpeakerLabelsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaxSpeakerLabels"));
    (m_maxSpeakerLabels >= 0) ? encoder.WriteUInt(m_maxSpeakerLabels) : encoder.WriteNegInt(m_maxSpeakerLabels);
  }

  if (m_vocabularySettingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("VocabularySettings"));
    encoder.WriteArrayStart(m_vocabularySettings.size());
    for (const auto& item_0 : m_vocabularySettings) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_vocabularyFilterSettingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("VocabularyFilterSettings"));
    m_vocabularyFilterSettings.CborEncode(encoder);
  }

  if (m_contentRedactionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ContentRedaction"));
    m_contentRedaction.CborEncode(encoder);
  }

  if (m_outputConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OutputConfiguration"));
    m_outputConfiguration.CborEncode(encoder);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection TranscribeAudioRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
