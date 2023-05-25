/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/NotifyRecommendationsReceivedRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectWisdomService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

NotifyRecommendationsReceivedRequest::NotifyRecommendationsReceivedRequest() : 
    m_assistantIdHasBeenSet(false),
    m_recommendationIdsHasBeenSet(false),
    m_sessionIdHasBeenSet(false)
{
}

Aws::String NotifyRecommendationsReceivedRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_recommendationIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recommendationIdsJsonList(m_recommendationIds.size());
   for(unsigned recommendationIdsIndex = 0; recommendationIdsIndex < recommendationIdsJsonList.GetLength(); ++recommendationIdsIndex)
   {
     recommendationIdsJsonList[recommendationIdsIndex].AsString(m_recommendationIds[recommendationIdsIndex]);
   }
   payload.WithArray("recommendationIds", std::move(recommendationIdsJsonList));

  }

  return payload.View().WriteReadable();
}




