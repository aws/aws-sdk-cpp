/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/UpdateSubscriberRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSubscriberRequest::UpdateSubscriberRequest() : 
    m_sourcesHasBeenSet(false),
    m_subscriberDescriptionHasBeenSet(false),
    m_subscriberIdHasBeenSet(false),
    m_subscriberIdentityHasBeenSet(false),
    m_subscriberNameHasBeenSet(false)
{
}

Aws::String UpdateSubscriberRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourcesJsonList(m_sources.size());
   for(unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex)
   {
     sourcesJsonList[sourcesIndex].AsObject(m_sources[sourcesIndex].Jsonize());
   }
   payload.WithArray("sources", std::move(sourcesJsonList));

  }

  if(m_subscriberDescriptionHasBeenSet)
  {
   payload.WithString("subscriberDescription", m_subscriberDescription);

  }

  if(m_subscriberIdentityHasBeenSet)
  {
   payload.WithObject("subscriberIdentity", m_subscriberIdentity.Jsonize());

  }

  if(m_subscriberNameHasBeenSet)
  {
   payload.WithString("subscriberName", m_subscriberName);

  }

  return payload.View().WriteReadable();
}




