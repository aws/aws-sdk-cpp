/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize-events/model/PutItemsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PersonalizeEvents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutItemsRequest::PutItemsRequest() : 
    m_datasetArnHasBeenSet(false),
    m_itemsHasBeenSet(false)
{
}

Aws::String PutItemsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_datasetArnHasBeenSet)
  {
   payload.WithString("datasetArn", m_datasetArn);

  }

  if(m_itemsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> itemsJsonList(m_items.size());
   for(unsigned itemsIndex = 0; itemsIndex < itemsJsonList.GetLength(); ++itemsIndex)
   {
     itemsJsonList[itemsIndex].AsObject(m_items[itemsIndex].Jsonize());
   }
   payload.WithArray("items", std::move(itemsJsonList));

  }

  return payload.View().WriteReadable();
}




