/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/StartMedicalScribeJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TranscribeService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartMedicalScribeJobRequest::StartMedicalScribeJobRequest() : 
    m_medicalScribeJobNameHasBeenSet(false),
    m_mediaHasBeenSet(false),
    m_outputBucketNameHasBeenSet(false),
    m_outputEncryptionKMSKeyIdHasBeenSet(false),
    m_kMSEncryptionContextHasBeenSet(false),
    m_dataAccessRoleArnHasBeenSet(false),
    m_settingsHasBeenSet(false),
    m_channelDefinitionsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String StartMedicalScribeJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_medicalScribeJobNameHasBeenSet)
  {
   payload.WithString("MedicalScribeJobName", m_medicalScribeJobName);

  }

  if(m_mediaHasBeenSet)
  {
   payload.WithObject("Media", m_media.Jsonize());

  }

  if(m_outputBucketNameHasBeenSet)
  {
   payload.WithString("OutputBucketName", m_outputBucketName);

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

  if(m_dataAccessRoleArnHasBeenSet)
  {
   payload.WithString("DataAccessRoleArn", m_dataAccessRoleArn);

  }

  if(m_settingsHasBeenSet)
  {
   payload.WithObject("Settings", m_settings.Jsonize());

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

Aws::Http::HeaderValueCollection StartMedicalScribeJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Transcribe.StartMedicalScribeJob"));
  return headers;

}




