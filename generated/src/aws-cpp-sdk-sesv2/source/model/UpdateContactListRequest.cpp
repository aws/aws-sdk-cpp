/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/UpdateContactListRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateContactListRequest::UpdateContactListRequest() : 
    m_contactListNameHasBeenSet(false),
    m_topicsHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

Aws::String UpdateContactListRequest::SerializePayload() const
{
  JsonValue payload;

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

  return payload.View().WriteReadable();
}




