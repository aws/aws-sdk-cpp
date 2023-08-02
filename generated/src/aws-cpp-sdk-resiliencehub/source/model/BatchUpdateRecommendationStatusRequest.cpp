/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/BatchUpdateRecommendationStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchUpdateRecommendationStatusRequest::BatchUpdateRecommendationStatusRequest() : 
    m_appArnHasBeenSet(false),
    m_requestEntriesHasBeenSet(false)
{
}

Aws::String BatchUpdateRecommendationStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appArnHasBeenSet)
  {
   payload.WithString("appArn", m_appArn);

  }

  if(m_requestEntriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> requestEntriesJsonList(m_requestEntries.size());
   for(unsigned requestEntriesIndex = 0; requestEntriesIndex < requestEntriesJsonList.GetLength(); ++requestEntriesIndex)
   {
     requestEntriesJsonList[requestEntriesIndex].AsObject(m_requestEntries[requestEntriesIndex].Jsonize());
   }
   payload.WithArray("requestEntries", std::move(requestEntriesJsonList));

  }

  return payload.View().WriteReadable();
}




