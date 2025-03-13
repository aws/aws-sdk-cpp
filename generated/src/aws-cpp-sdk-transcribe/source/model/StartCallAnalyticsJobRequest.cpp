/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/StartCallAnalyticsJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TranscribeService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartCallAnalyticsJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_callAnalyticsJobNameHasBeenSet)
  {
   payload.WithString("CallAnalyticsJobName", m_callAnalyticsJobName);

  }

  if(m_mediaHasBeenSet)
  {
   payload.WithObject("Media", m_media.Jsonize());

  }

  if(m_outputLocationHasBeenSet)
  {
   payload.WithString("OutputLocation", m_outputLocation);

  }

  if(m_outputEncryptionKMSKeyIdHasBeenSet)
  {
   payload.WithString("OutputEncryptionKMSKeyId", m_outputEncryptionKMSKeyId);

  }

  if(m_dataAccessRoleArnHasBeenSet)
  {
   payload.WithString("DataAccessRoleArn", m_dataAccessRoleArn);

  }

  if(m_settingsHasBeenSet)
  {
   payload.WithObject("Settings", m_settings.Jsonize());

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

  if(m_channelDefinitionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> channelDefinitionsJsonList(m_channelDefinitions.size());
   for(unsigned channelDefinitionsIndex = 0; channelDefinitionsIndex < channelDefinitionsJsonList.GetLength(); ++channelDefinitionsIndex)
   {
     channelDefinitionsJsonList[channelDefinitionsIndex].AsObject(m_channelDefinitions[channelDefinitionsIndex].Jsonize());
   }
   payload.WithArray("ChannelDefinitions", std::move(channelDefinitionsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartCallAnalyticsJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Transcribe.StartCallAnalyticsJob"));
  return headers;

}




