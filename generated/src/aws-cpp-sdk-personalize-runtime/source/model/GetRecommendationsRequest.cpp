/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize-runtime/model/GetRecommendationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PersonalizeRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetRecommendationsRequest::GetRecommendationsRequest() : 
    m_campaignArnHasBeenSet(false),
    m_itemIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_numResults(0),
    m_numResultsHasBeenSet(false),
    m_contextHasBeenSet(false),
    m_filterArnHasBeenSet(false),
    m_filterValuesHasBeenSet(false),
    m_recommenderArnHasBeenSet(false),
    m_promotionsHasBeenSet(false)
{
}

Aws::String GetRecommendationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_campaignArnHasBeenSet)
  {
   payload.WithString("campaignArn", m_campaignArn);

  }

  if(m_itemIdHasBeenSet)
  {
   payload.WithString("itemId", m_itemId);

  }

  if(m_userIdHasBeenSet)
  {
   payload.WithString("userId", m_userId);

  }

  if(m_numResultsHasBeenSet)
  {
   payload.WithInteger("numResults", m_numResults);

  }

  if(m_contextHasBeenSet)
  {
   JsonValue contextJsonMap;
   for(auto& contextItem : m_context)
   {
     contextJsonMap.WithString(contextItem.first, contextItem.second);
   }
   payload.WithObject("context", std::move(contextJsonMap));

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

  if(m_recommenderArnHasBeenSet)
  {
   payload.WithString("recommenderArn", m_recommenderArn);

  }

  if(m_promotionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> promotionsJsonList(m_promotions.size());
   for(unsigned promotionsIndex = 0; promotionsIndex < promotionsJsonList.GetLength(); ++promotionsIndex)
   {
     promotionsJsonList[promotionsIndex].AsObject(m_promotions[promotionsIndex].Jsonize());
   }
   payload.WithArray("promotions", std::move(promotionsJsonList));

  }

  return payload.View().WriteReadable();
}




