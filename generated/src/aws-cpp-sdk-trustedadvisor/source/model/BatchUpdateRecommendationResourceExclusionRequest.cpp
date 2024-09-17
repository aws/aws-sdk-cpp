/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/trustedadvisor/model/BatchUpdateRecommendationResourceExclusionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TrustedAdvisor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchUpdateRecommendationResourceExclusionRequest::BatchUpdateRecommendationResourceExclusionRequest() : 
    m_recommendationResourceExclusionsHasBeenSet(false)
{
}

Aws::String BatchUpdateRecommendationResourceExclusionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_recommendationResourceExclusionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recommendationResourceExclusionsJsonList(m_recommendationResourceExclusions.size());
   for(unsigned recommendationResourceExclusionsIndex = 0; recommendationResourceExclusionsIndex < recommendationResourceExclusionsJsonList.GetLength(); ++recommendationResourceExclusionsIndex)
   {
     recommendationResourceExclusionsJsonList[recommendationResourceExclusionsIndex].AsObject(m_recommendationResourceExclusions[recommendationResourceExclusionsIndex].Jsonize());
   }
   payload.WithArray("recommendationResourceExclusions", std::move(recommendationResourceExclusionsJsonList));

  }

  return payload.View().WriteReadable();
}




