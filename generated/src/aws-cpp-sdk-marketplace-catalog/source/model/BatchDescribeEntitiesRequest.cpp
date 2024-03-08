/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/BatchDescribeEntitiesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MarketplaceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchDescribeEntitiesRequest::BatchDescribeEntitiesRequest() : 
    m_entityRequestListHasBeenSet(false)
{
}

Aws::String BatchDescribeEntitiesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_entityRequestListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> entityRequestListJsonList(m_entityRequestList.size());
   for(unsigned entityRequestListIndex = 0; entityRequestListIndex < entityRequestListJsonList.GetLength(); ++entityRequestListIndex)
   {
     entityRequestListJsonList[entityRequestListIndex].AsObject(m_entityRequestList[entityRequestListIndex].Jsonize());
   }
   payload.WithArray("EntityRequestList", std::move(entityRequestListJsonList));

  }

  return payload.View().WriteReadable();
}




