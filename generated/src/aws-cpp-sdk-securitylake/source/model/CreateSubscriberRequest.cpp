/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/CreateSubscriberRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSubscriberRequest::CreateSubscriberRequest() : 
    m_accessTypesHasBeenSet(false),
    m_sourcesHasBeenSet(false),
    m_subscriberDescriptionHasBeenSet(false),
    m_subscriberIdentityHasBeenSet(false),
    m_subscriberNameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateSubscriberRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accessTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accessTypesJsonList(m_accessTypes.size());
   for(unsigned accessTypesIndex = 0; accessTypesIndex < accessTypesJsonList.GetLength(); ++accessTypesIndex)
   {
     accessTypesJsonList[accessTypesIndex].AsString(AccessTypeMapper::GetNameForAccessType(m_accessTypes[accessTypesIndex]));
   }
   payload.WithArray("accessTypes", std::move(accessTypesJsonList));

  }

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

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}




