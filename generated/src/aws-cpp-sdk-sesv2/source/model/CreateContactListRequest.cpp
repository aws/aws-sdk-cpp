/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/CreateContactListRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateContactListRequest::CreateContactListRequest() : 
    m_contactListNameHasBeenSet(false),
    m_topicsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateContactListRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_contactListNameHasBeenSet)
  {
   payload.WithString("ContactListName", m_contactListName);

  }

  if(m_topicsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> topicsJsonList(m_topics.size());
   for(unsigned topicsIndex = 0; topicsIndex < topicsJsonList.GetLength(); ++topicsIndex)
   {
     topicsJsonList[topicsIndex].AsObject(m_topics[topicsIndex].Jsonize());
   }
   payload.WithArray("Topics", std::move(topicsJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}




