/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateHubRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateHubRequest::CreateHubRequest() : 
    m_hubNameHasBeenSet(false),
    m_hubDescriptionHasBeenSet(false),
    m_hubDisplayNameHasBeenSet(false),
    m_hubSearchKeywordsHasBeenSet(false),
    m_s3StorageConfigHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateHubRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_hubNameHasBeenSet)
  {
   payload.WithString("HubName", m_hubName);

  }

  if(m_hubDescriptionHasBeenSet)
  {
   payload.WithString("HubDescription", m_hubDescription);

  }

  if(m_hubDisplayNameHasBeenSet)
  {
   payload.WithString("HubDisplayName", m_hubDisplayName);

  }

  if(m_hubSearchKeywordsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> hubSearchKeywordsJsonList(m_hubSearchKeywords.size());
   for(unsigned hubSearchKeywordsIndex = 0; hubSearchKeywordsIndex < hubSearchKeywordsJsonList.GetLength(); ++hubSearchKeywordsIndex)
   {
     hubSearchKeywordsJsonList[hubSearchKeywordsIndex].AsString(m_hubSearchKeywords[hubSearchKeywordsIndex]);
   }
   payload.WithArray("HubSearchKeywords", std::move(hubSearchKeywordsJsonList));

  }

  if(m_s3StorageConfigHasBeenSet)
  {
   payload.WithObject("S3StorageConfig", m_s3StorageConfig.Jsonize());

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

Aws::Http::HeaderValueCollection CreateHubRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateHub"));
  return headers;

}




