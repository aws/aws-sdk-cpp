/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/UpdateContactRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateContactRequest::UpdateContactRequest() : 
    m_contactListNameHasBeenSet(false),
    m_emailAddressHasBeenSet(false),
    m_topicPreferencesHasBeenSet(false),
    m_unsubscribeAll(false),
    m_unsubscribeAllHasBeenSet(false),
    m_attributesDataHasBeenSet(false)
{
}

Aws::String UpdateContactRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_topicPreferencesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> topicPreferencesJsonList(m_topicPreferences.size());
   for(unsigned topicPreferencesIndex = 0; topicPreferencesIndex < topicPreferencesJsonList.GetLength(); ++topicPreferencesIndex)
   {
     topicPreferencesJsonList[topicPreferencesIndex].AsObject(m_topicPreferences[topicPreferencesIndex].Jsonize());
   }
   payload.WithArray("TopicPreferences", std::move(topicPreferencesJsonList));

  }

  if(m_unsubscribeAllHasBeenSet)
  {
   payload.WithBool("UnsubscribeAll", m_unsubscribeAll);

  }

  if(m_attributesDataHasBeenSet)
  {
   payload.WithString("AttributesData", m_attributesData);

  }

  return payload.View().WriteReadable();
}




