/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize-runtime/model/GetActionRecommendationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PersonalizeRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetActionRecommendationsRequest::GetActionRecommendationsRequest() : 
    m_campaignArnHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_numResults(0),
    m_numResultsHasBeenSet(false),
    m_filterArnHasBeenSet(false),
    m_filterValuesHasBeenSet(false)
{
}

Aws::String GetActionRecommendationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_campaignArnHasBeenSet)
  {
   payload.WithString("campaignArn", m_campaignArn);

  }

  if(m_userIdHasBeenSet)
  {
   payload.WithString("userId", m_userId);

  }

  if(m_numResultsHasBeenSet)
  {
   payload.WithInteger("numResults", m_numResults);

  }

  if(m_filterArnHasBeenSet)
  {
   payload.WithString("filterArn", m_filterArn);

  }

  if(m_filterValuesHasBeenSet)
  {
   JsonValue filterValuesJsonMap;
   for(auto& filterValuesItem : m_filterValues)
   {
     filterValuesJsonMap.WithString(filterValuesItem.first, filterValuesItem.second);
   }
   payload.WithObject("filterValues", std::move(filterValuesJsonMap));

  }

  return payload.View().WriteReadable();
}




