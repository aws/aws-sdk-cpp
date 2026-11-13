/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/transcribe/model/StartTranscriptionJobRequest.h>

#include <utility>

using namespace Aws::TranscribeService::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String StartTranscriptionJobRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_transcriptionJobNameHasBeenSet) {
    mapSize++;
  }
  if (m_languageCodeHasBeenSet) {
    mapSize++;
  }
  if (m_mediaSampleRateHertzHasBeenSet) {
    mapSize++;
  }
  if (m_mediaFormatHasBeenSet) {
    mapSize++;
  }
  if (m_mediaHasBeenSet) {
    mapSize++;
  }
  if (m_outputBucketNameHasBeenSet) {
    mapSize++;
  }
  if (m_outputKeyHasBeenSet) {
    mapSize++;
  }
  if (m_outputEncryptionKMSKeyIdHasBeenSet) {
    mapSize++;
  }
  if (m_kMSEncryptionContextHasBeenSet) {
    mapSize++;
  }
  if (m_settingsHasBeenSet) {
    mapSize++;
  }
  if (m_modelSettingsHasBeenSet) {
    mapSize++;
  }
  if (m_jobExecutionSettingsHasBeenSet) {
    mapSize++;
  }
  if (m_contentRedactionHasBeenSet) {
    mapSize++;
  }
  if (m_identifyLanguageHasBeenSet) {
    mapSize++;
  }
  if (m_identifyMultipleLanguagesHasBeenSet) {
    mapSize++;
  }
  if (m_languageOptionsHasBeenSet) {
    mapSize++;
  }
  if (m_subtitlesHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_languageIdSettingsHasBeenSet) {
    mapSize++;
  }
  if (m_toxicityDetectionHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_transcriptionJobNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TranscriptionJobName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_transcriptionJobName.c_str()));
  }

  if (m_languageCodeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LanguageCode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(LanguageCodeMapper::GetNameForLanguageCode(m_languageCode).c_str()));
  }

  if (m_mediaSampleRateHertzHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MediaSampleRateHertz"));
    (m_mediaSampleRateHertz >= 0) ? encoder.WriteUInt(m_mediaSampleRateHertz) : encoder.WriteNegInt(m_mediaSampleRateHertz);
  }

  if (m_mediaFormatHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MediaFormat"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(MediaFormatMapper::GetNameForMediaFormat(m_mediaFormat).c_str()));
  }

  if (m_mediaHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Media"));
    m_media.CborEncode(encoder);
  }

  if (m_outputBucketNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OutputBucketName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_outputBucketName.c_str()));
  }

  if (m_outputKeyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OutputKey"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_outputKey.c_str()));
  }

  if (m_outputEncryptionKMSKeyIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OutputEncryptionKMSKeyId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_outputEncryptionKMSKeyId.c_str()));
  }

  if (m_kMSEncryptionContextHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("KMSEncryptionContext"));
    encoder.WriteMapStart(m_kMSEncryptionContext.size());
    for (const auto& item_0 : m_kMSEncryptionContext) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.first.c_str()));
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.second.c_str()));
    }
  }

  if (m_settingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Settings"));
    m_settings.CborEncode(encoder);
  }

  if (m_modelSettingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ModelSettings"));
    m_modelSettings.CborEncode(encoder);
  }

  if (m_jobExecutionSettingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("JobExecutionSettings"));
    m_jobExecutionSettings.CborEncode(encoder);
  }

  if (m_contentRedactionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ContentRedaction"));
    m_contentRedaction.CborEncode(encoder);
  }

  if (m_identifyLanguageHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IdentifyLanguage"));
    encoder.WriteBool(m_identifyLanguage);
  }

  if (m_identifyMultipleLanguagesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IdentifyMultipleLanguages"));
    encoder.WriteBool(m_identifyMultipleLanguages);
  }

  if (m_languageOptionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LanguageOptions"));
    encoder.WriteArrayStart(m_languageOptions.size());
    for (const auto& item_0 : m_languageOptions) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(LanguageCodeMapper::GetNameForLanguageCode(item_0).c_str()));
    }
  }

  if (m_subtitlesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Subtitles"));
    m_subtitles.CborEncode(encoder);
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_languageIdSettingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LanguageIdSettings"));
    encoder.WriteMapStart(m_languageIdSettings.size());
    for (const auto& item_0 : m_languageIdSettings) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(LanguageCodeMapper::GetNameForLanguageCode(item_0.first).c_str()));
      item_0.second.CborEncode(encoder);
    }
  }

  if (m_toxicityDetectionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ToxicityDetection"));
    encoder.WriteArrayStart(m_toxicityDetection.size());
    for (const auto& item_0 : m_toxicityDetection) {
      item_0.CborEncode(encoder);
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection StartTranscriptionJobRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
