/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/StartTranscriptionJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TranscribeService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartTranscriptionJobRequest::StartTranscriptionJobRequest() : 
    m_transcriptionJobNameHasBeenSet(false),
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
    m_modelSettingsHasBeenSet(false),
    m_jobExecutionSettingsHasBeenSet(false),
    m_contentRedactionHasBeenSet(false),
    m_identifyLanguage(false),
    m_identifyLanguageHasBeenSet(false),
    m_identifyMultipleLanguages(false),
    m_identifyMultipleLanguagesHasBeenSet(false),
    m_languageOptionsHasBeenSet(false),
    m_subtitlesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_languageIdSettingsHasBeenSet(false)
{
}

Aws::String StartTranscriptionJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_transcriptionJobNameHasBeenSet)
  {
   payload.WithString("TranscriptionJobName", m_transcriptionJobName);

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

  if(m_modelSettingsHasBeenSet)
  {
   payload.WithObject("ModelSettings", m_modelSettings.Jsonize());

  }

  if(m_jobExecutionSettingsHasBeenSet)
  {
   payload.WithObject("JobExecutionSettings", m_jobExecutionSettings.Jsonize());

  }

  if(m_contentRedactionHasBeenSet)
  {
   payload.WithObject("ContentRedaction", m_contentRedaction.Jsonize());

  }

  if(m_identifyLanguageHasBeenSet)
  {
   payload.WithBool("IdentifyLanguage", m_identifyLanguage);

  }

  if(m_identifyMultipleLanguagesHasBeenSet)
  {
   payload.WithBool("IdentifyMultipleLanguages", m_identifyMultipleLanguages);

  }

  if(m_languageOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> languageOptionsJsonList(m_languageOptions.size());
   for(unsigned languageOptionsIndex = 0; languageOptionsIndex < languageOptionsJsonList.GetLength(); ++languageOptionsIndex)
   {
     languageOptionsJsonList[languageOptionsIndex].AsString(LanguageCodeMapper::GetNameForLanguageCode(m_languageOptions[languageOptionsIndex]));
   }
   payload.WithArray("LanguageOptions", std::move(languageOptionsJsonList));

  }

  if(m_subtitlesHasBeenSet)
  {
   payload.WithObject("Subtitles", m_subtitles.Jsonize());

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

  if(m_languageIdSettingsHasBeenSet)
  {
   JsonValue languageIdSettingsJsonMap;
   for(auto& languageIdSettingsItem : m_languageIdSettings)
   {
     languageIdSettingsJsonMap.WithObject(LanguageCodeMapper::GetNameForLanguageCode(languageIdSettingsItem.first), languageIdSettingsItem.second.Jsonize());
   }
   payload.WithObject("LanguageIdSettings", std::move(languageIdSettingsJsonMap));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartTranscriptionJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Transcribe.StartTranscriptionJob"));
  return headers;

}




