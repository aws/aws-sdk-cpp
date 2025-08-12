/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/MedicalScribeConfigurationEvent.h>
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

MedicalScribeConfigurationEvent::MedicalScribeConfigurationEvent(JsonView jsonValue)
{
  *this = jsonValue;
}

MedicalScribeConfigurationEvent& MedicalScribeConfigurationEvent::operator =(JsonView jsonValue)
{
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
  if(jsonValue.ValueExists("PostStreamAnalyticsSettings"))
  {
    m_postStreamAnalyticsSettings = jsonValue.GetObject("PostStreamAnalyticsSettings");
    m_postStreamAnalyticsSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MedicalScribeContext"))
  {
    m_medicalScribeContext = jsonValue.GetObject("MedicalScribeContext");
    m_medicalScribeContextHasBeenSet = true;
  }
  return *this;
}

JsonValue MedicalScribeConfigurationEvent::Jsonize() const
{
  JsonValue payload;

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

  if(m_postStreamAnalyticsSettingsHasBeenSet)
  {
   payload.WithObject("PostStreamAnalyticsSettings", m_postStreamAnalyticsSettings.Jsonize());

  }

  if(m_medicalScribeContextHasBeenSet)
  {
   payload.WithObject("MedicalScribeContext", m_medicalScribeContext.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
