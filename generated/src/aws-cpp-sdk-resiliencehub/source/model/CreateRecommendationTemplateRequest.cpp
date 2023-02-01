/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/CreateRecommendationTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateRecommendationTemplateRequest::CreateRecommendationTemplateRequest() : 
    m_assessmentArnHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_format(TemplateFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_recommendationIdsHasBeenSet(false),
    m_recommendationTypesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateRecommendationTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_assessmentArnHasBeenSet)
  {
   payload.WithString("assessmentArn", m_assessmentArn);

  }

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("bucketName", m_bucketName);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("format", TemplateFormatMapper::GetNameForTemplateFormat(m_format));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_recommendationIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recommendationIdsJsonList(m_recommendationIds.size());
   for(unsigned recommendationIdsIndex = 0; recommendationIdsIndex < recommendationIdsJsonList.GetLength(); ++recommendationIdsIndex)
   {
     recommendationIdsJsonList[recommendationIdsIndex].AsString(m_recommendationIds[recommendationIdsIndex]);
   }
   payload.WithArray("recommendationIds", std::move(recommendationIdsJsonList));

  }

  if(m_recommendationTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recommendationTypesJsonList(m_recommendationTypes.size());
   for(unsigned recommendationTypesIndex = 0; recommendationTypesIndex < recommendationTypesJsonList.GetLength(); ++recommendationTypesIndex)
   {
     recommendationTypesJsonList[recommendationTypesIndex].AsString(RenderRecommendationTypeMapper::GetNameForRenderRecommendationType(m_recommendationTypes[recommendationTypesIndex]));
   }
   payload.WithArray("recommendationTypes", std::move(recommendationTypesJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




