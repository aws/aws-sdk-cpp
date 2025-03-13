/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/socialmessaging/model/PutWhatsAppBusinessAccountEventDestinationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SocialMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutWhatsAppBusinessAccountEventDestinationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_eventDestinationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventDestinationsJsonList(m_eventDestinations.size());
   for(unsigned eventDestinationsIndex = 0; eventDestinationsIndex < eventDestinationsJsonList.GetLength(); ++eventDestinationsIndex)
   {
     eventDestinationsJsonList[eventDestinationsIndex].AsObject(m_eventDestinations[eventDestinationsIndex].Jsonize());
   }
   payload.WithArray("eventDestinations", std::move(eventDestinationsJsonList));

  }

  return payload.View().WriteReadable();
}




