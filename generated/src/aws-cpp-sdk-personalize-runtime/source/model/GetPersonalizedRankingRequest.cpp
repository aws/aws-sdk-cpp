/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize-runtime/model/GetPersonalizedRankingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PersonalizeRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetPersonalizedRankingRequest::GetPersonalizedRankingRequest() : 
    m_campaignArnHasBeenSet(false),
    m_inputListHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_contextHasBeenSet(false),
    m_filterArnHasBeenSet(false),
    m_filterValuesHasBeenSet(false)
{
}

Aws::String GetPersonalizedRankingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_campaignArnHasBeenSet)
  {
   payload.WithString("campaignArn", m_campaignArn);

  }

  if(m_inputListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputListJsonList(m_inputList.size());
   for(unsigned inputListIndex = 0; inputListIndex < inputListJsonList.GetLength(); ++inputListIndex)
   {
     inputListJsonList[inputListIndex].AsString(m_inputList[inputListIndex]);
   }
   payload.WithArray("inputList", std::move(inputListJsonList));

  }

  if(m_userIdHasBeenSet)
  {
   payload.WithString("userId", m_userId);

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

  return payload.View().WriteReadable();
}




