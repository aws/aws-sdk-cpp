/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize-events/model/PutActionInteractionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PersonalizeEvents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutActionInteractionsRequest::PutActionInteractionsRequest() : 
    m_trackingIdHasBeenSet(false),
    m_actionInteractionsHasBeenSet(false)
{
}

Aws::String PutActionInteractionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_trackingIdHasBeenSet)
  {
   payload.WithString("trackingId", m_trackingId);

  }

  if(m_actionInteractionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionInteractionsJsonList(m_actionInteractions.size());
   for(unsigned actionInteractionsIndex = 0; actionInteractionsIndex < actionInteractionsJsonList.GetLength(); ++actionInteractionsIndex)
   {
     actionInteractionsJsonList[actionInteractionsIndex].AsObject(m_actionInteractions[actionInteractionsIndex].Jsonize());
   }
   payload.WithArray("actionInteractions", std::move(actionInteractionsJsonList));

  }

  return payload.View().WriteReadable();
}




