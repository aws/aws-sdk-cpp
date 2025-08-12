/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/MedicalScribeStreamDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{

MedicalScribeStreamDetails::MedicalScribeStreamDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

MedicalScribeStreamDetails& MedicalScribeStreamDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SessionId"))
  {
    m_sessionId = jsonValue.GetString("SessionId");
    m_sessionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StreamCreatedAt"))
  {
    m_streamCreatedAt = jsonValue.GetDouble("StreamCreatedAt");
    m_streamCreatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StreamEndedAt"))
  {
    m_streamEndedAt = jsonValue.GetDouble("StreamEndedAt");
    m_streamEndedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LanguageCode"))
  {
    m_languageCode = MedicalScribeLanguageCodeMapper::GetMedicalScribeLanguageCodeForName(jsonValue.GetString("LanguageCode"));
    m_languageCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MediaSampleRateHertz"))
  {
    m_mediaSampleRateHertz = jsonValue.GetInteger("MediaSampleRateHertz");
    m_mediaSampleRateHertzHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MediaEncoding"))
  {
    m_mediaEncoding = MedicalScribeMediaEncodingMapper::GetMedicalScribeMediaEncodingForName(jsonValue.GetString("MediaEncoding"));
    m_mediaEncodingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VocabularyName"))
  {
    m_vocabularyName = jsonValue.GetString("VocabularyName");
    m_vocabularyNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VocabularyFilterName"))
  {
    m_vocabularyFilterName = jsonValue.GetString("VocabularyFilterName");
    m_vocabularyFilterNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VocabularyFilterMethod"))
  {
    m_vocabularyFilterMethod = MedicalScribeVocabularyFilterMethodMapper::GetMedicalScribeVocabularyFilterMethodForName(jsonValue.GetString("VocabularyFilterMethod"));
    m_vocabularyFilterMethodHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceAccessRoleArn"))
  {
    m_resourceAccessRoleArn = jsonValue.GetString("ResourceAccessRoleArn");
    m_resourceAccessRoleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ChannelDefinitions"))
  {
    Aws::Utils::Array<JsonView> channelDefinitionsJsonList = jsonValue.GetArray("ChannelDefinitions");
    for(unsigned channelDefinitionsIndex = 0; channelDefinitionsIndex < channelDefinitionsJsonList.GetLength(); ++channelDefinitionsIndex)
    {
      m_channelDefinitions.push_back(channelDefinitionsJsonList[channelDefinitionsIndex].AsObject());
    }
    m_channelDefinitionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EncryptionSettings"))
  {
    m_encryptionSettings = jsonValue.GetObject("EncryptionSettings");
    m_encryptionSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StreamStatus"))
  {
    m_streamStatus = MedicalScribeStreamStatusMapper::GetMedicalScribeStreamStatusForName(jsonValue.GetString("StreamStatus"));
    m_streamStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PostStreamAnalyticsSettings"))
  {
    m_postStreamAnalyticsSettings = jsonValue.GetObject("PostStreamAnalyticsSettings");
    m_postStreamAnalyticsSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PostStreamAnalyticsResult"))
  {
    m_postStreamAnalyticsResult = jsonValue.GetObject("PostStreamAnalyticsResult");
    m_postStreamAnalyticsResultHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MedicalScribeContextProvided"))
  {
    m_medicalScribeContextProvided = jsonValue.GetBool("MedicalScribeContextProvided");
    m_medicalScribeContextProvidedHasBeenSet = true;
  }
  return *this;
}

JsonValue MedicalScribeStreamDetails::Jsonize() const
{
  JsonValue payload;

  if(m_sessionIdHasBeenSet)
  {
   payload.WithString("SessionId", m_sessionId);

  }

  if(m_streamCreatedAtHasBeenSet)
  {
   payload.WithDouble("StreamCreatedAt", m_streamCreatedAt.SecondsWithMSPrecision());
  }

  if(m_streamEndedAtHasBeenSet)
  {
   payload.WithDouble("StreamEndedAt", m_streamEndedAt.SecondsWithMSPrecision());
  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", MedicalScribeLanguageCodeMapper::GetNameForMedicalScribeLanguageCode(m_languageCode));
  }

  if(m_mediaSampleRateHertzHasBeenSet)
  {
   payload.WithInteger("MediaSampleRateHertz", m_mediaSampleRateHertz);

  }

  if(m_mediaEncodingHasBeenSet)
  {
   payload.WithString("MediaEncoding", MedicalScribeMediaEncodingMapper::GetNameForMedicalScribeMediaEncoding(m_mediaEncoding));
  }

  if(m_vocabularyNameHasBeenSet)
  {
   payload.WithString("VocabularyName", m_vocabularyName);

  }

  if(m_vocabularyFilterNameHasBeenSet)
  {
   payload.WithString("VocabularyFilterName", m_vocabularyFilterName);

  }

  if(m_vocabularyFilterMethodHasBeenSet)
  {
   payload.WithString("VocabularyFilterMethod", MedicalScribeVocabularyFilterMethodMapper::GetNameForMedicalScribeVocabularyFilterMethod(m_vocabularyFilterMethod));
  }

  if(m_resourceAccessRoleArnHasBeenSet)
  {
   payload.WithString("ResourceAccessRoleArn", m_resourceAccessRoleArn);

  }

  if(m_channelDefinitionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> channelDefinitionsJsonList(m_channelDefinitions.size());
   for(unsigned channelDefinitionsIndex = 0; channelDefinitionsIndex < channelDefinitionsJsonList.GetLength(); ++channelDefinitionsIndex)
   {
     channelDefinitionsJsonList[channelDefinitionsIndex].AsObject(m_channelDefinitions[channelDefinitionsIndex].Jsonize());
   }
   payload.WithArray("ChannelDefinitions", std::move(channelDefinitionsJsonList));

  }

  if(m_encryptionSettingsHasBeenSet)
  {
   payload.WithObject("EncryptionSettings", m_encryptionSettings.Jsonize());

  }

  if(m_streamStatusHasBeenSet)
  {
   payload.WithString("StreamStatus", MedicalScribeStreamStatusMapper::GetNameForMedicalScribeStreamStatus(m_streamStatus));
  }

  if(m_postStreamAnalyticsSettingsHasBeenSet)
  {
   payload.WithObject("PostStreamAnalyticsSettings", m_postStreamAnalyticsSettings.Jsonize());

  }

  if(m_postStreamAnalyticsResultHasBeenSet)
  {
   payload.WithObject("PostStreamAnalyticsResult", m_postStreamAnalyticsResult.Jsonize());

  }

  if(m_medicalScribeContextProvidedHasBeenSet)
  {
   payload.WithBool("MedicalScribeContextProvided", m_medicalScribeContextProvided);

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
