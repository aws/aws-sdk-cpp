/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/StartMedicalTranscriptionJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TranscribeService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartMedicalTranscriptionJobRequest::StartMedicalTranscriptionJobRequest() : 
    m_medicalTranscriptionJobNameHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_mediaSampleRateHertz(0),
    m_mediaSampleRateHertzHasBeenSet(false),
    m_mediaFormat(MediaFormat::NOT_SET),
    m_mediaFormatHasBeenSet(false),
    m_mediaHasBeenSet(false),
    m_outputBucketNameHasBeenSet(false),
    m_outputKeyHasBeenSet(false),
    m_outputEncryptionKMSKeyIdHasBeenSet(false),
    m_kMSEncryptionContextHasBeenSet(false),
    m_settingsHasBeenSet(false),
    m_contentIdentificationType(MedicalContentIdentificationType::NOT_SET),
    m_contentIdentificationTypeHasBeenSet(false),
    m_specialty(Specialty::NOT_SET),
    m_specialtyHasBeenSet(false),
    m_type(Type::NOT_SET),
    m_typeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String StartMedicalTranscriptionJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_medicalTranscriptionJobNameHasBeenSet)
  {
   payload.WithString("MedicalTranscriptionJobName", m_medicalTranscriptionJobName);

  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", LanguageCodeMapper::GetNameForLanguageCode(m_languageCode));
  }

  if(m_mediaSampleRateHertzHasBeenSet)
  {
   payload.WithInteger("MediaSampleRateHertz", m_mediaSampleRateHertz);

  }

  if(m_mediaFormatHasBeenSet)
  {
   payload.WithString("MediaFormat", MediaFormatMapper::GetNameForMediaFormat(m_mediaFormat));
  }

  if(m_mediaHasBeenSet)
  {
   payload.WithObject("Media", m_media.Jsonize());

  }

  if(m_outputBucketNameHasBeenSet)
  {
   payload.WithString("OutputBucketName", m_outputBucketName);

  }

  if(m_outputKeyHasBeenSet)
  {
   payload.WithString("OutputKey", m_outputKey);

  }

  if(m_outputEncryptionKMSKeyIdHasBeenSet)
  {
   payload.WithString("OutputEncryptionKMSKeyId", m_outputEncryptionKMSKeyId);

  }

  if(m_kMSEncryptionContextHasBeenSet)
  {
   JsonValue kMSEncryptionContextJsonMap;
   for(auto& kMSEncryptionContextItem : m_kMSEncryptionContext)
   {
     kMSEncryptionContextJsonMap.WithString(kMSEncryptionContextItem.first, kMSEncryptionContextItem.second);
   }
   payload.WithObject("KMSEncryptionContext", std::move(kMSEncryptionContextJsonMap));

  }

  if(m_settingsHasBeenSet)
  {
   payload.WithObject("Settings", m_settings.Jsonize());

  }

  if(m_contentIdentificationTypeHasBeenSet)
  {
   payload.WithString("ContentIdentificationType", MedicalContentIdentificationTypeMapper::GetNameForMedicalContentIdentificationType(m_contentIdentificationType));
  }

  if(m_specialtyHasBeenSet)
  {
   payload.WithString("Specialty", SpecialtyMapper::GetNameForSpecialty(m_specialty));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", TypeMapper::GetNameForType(m_type));
  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartMedicalTranscriptionJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Transcribe.StartMedicalTranscriptionJob"));
  return headers;

}




