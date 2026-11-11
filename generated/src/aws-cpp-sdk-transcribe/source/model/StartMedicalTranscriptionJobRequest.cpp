/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/transcribe/model/StartMedicalTranscriptionJobRequest.h>

#include <utility>

using namespace Aws::TranscribeService::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String StartMedicalTranscriptionJobRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_medicalTranscriptionJobNameHasBeenSet) {
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
  if (m_contentIdentificationTypeHasBeenSet) {
    mapSize++;
  }
  if (m_specialtyHasBeenSet) {
    mapSize++;
  }
  if (m_typeHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_medicalTranscriptionJobNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MedicalTranscriptionJobName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_medicalTranscriptionJobName.c_str()));
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

  if (m_contentIdentificationTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ContentIdentificationType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        MedicalContentIdentificationTypeMapper::GetNameForMedicalContentIdentificationType(m_contentIdentificationType).c_str()));
  }

  if (m_specialtyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Specialty"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(SpecialtyMapper::GetNameForSpecialty(m_specialty).c_str()));
  }

  if (m_typeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Type"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(TypeMapper::GetNameForType(m_type).c_str()));
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection StartMedicalTranscriptionJobRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
