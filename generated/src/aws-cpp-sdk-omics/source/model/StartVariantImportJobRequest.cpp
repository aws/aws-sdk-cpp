/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/StartVariantImportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartVariantImportJobRequest::StartVariantImportJobRequest() : 
    m_destinationNameHasBeenSet(false),
    m_itemsHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_runLeftNormalization(false),
    m_runLeftNormalizationHasBeenSet(false)
{
}

Aws::String StartVariantImportJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_destinationNameHasBeenSet)
  {
   payload.WithString("destinationName", m_destinationName);

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

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_runLeftNormalizationHasBeenSet)
  {
   payload.WithBool("runLeftNormalization", m_runLeftNormalization);

  }

  return payload.View().WriteReadable();
}




