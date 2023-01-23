/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/ListOrdersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PrivateNetworks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListOrdersRequest::ListOrdersRequest() : 
    m_filtersHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_networkArnHasBeenSet(false),
    m_startTokenHasBeenSet(false)
{
}

Aws::String ListOrdersRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_filtersHasBeenSet)
  {
   JsonValue filtersJsonMap;
   for(auto& filtersItem : m_filters)
   {
     Aws::Utils::Array<JsonValue> orderFilterValuesJsonList(filtersItem.second.size());
     for(unsigned orderFilterValuesIndex = 0; orderFilterValuesIndex < orderFilterValuesJsonList.GetLength(); ++orderFilterValuesIndex)
     {
       orderFilterValuesJsonList[orderFilterValuesIndex].AsString(filtersItem.second[orderFilterValuesIndex]);
     }
     filtersJsonMap.WithArray(OrderFilterKeysMapper::GetNameForOrderFilterKeys(filtersItem.first), std::move(orderFilterValuesJsonList));
   }
   payload.WithObject("filters", std::move(filtersJsonMap));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_networkArnHasBeenSet)
  {
   payload.WithString("networkArn", m_networkArn);

  }

  if(m_startTokenHasBeenSet)
  {
   payload.WithString("startToken", m_startToken);

  }

  return payload.View().WriteReadable();
}




