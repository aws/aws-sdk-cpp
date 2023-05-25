/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/ListNetworksRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PrivateNetworks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListNetworksRequest::ListNetworksRequest() : 
    m_filtersHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_startTokenHasBeenSet(false)
{
}

Aws::String ListNetworksRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_filtersHasBeenSet)
  {
   JsonValue filtersJsonMap;
   for(auto& filtersItem : m_filters)
   {
     Aws::Utils::Array<JsonValue> networkFilterValuesJsonList(filtersItem.second.size());
     for(unsigned networkFilterValuesIndex = 0; networkFilterValuesIndex < networkFilterValuesJsonList.GetLength(); ++networkFilterValuesIndex)
     {
       networkFilterValuesJsonList[networkFilterValuesIndex].AsString(filtersItem.second[networkFilterValuesIndex]);
     }
     filtersJsonMap.WithArray(NetworkFilterKeysMapper::GetNameForNetworkFilterKeys(filtersItem.first), std::move(networkFilterValuesJsonList));
   }
   payload.WithObject("filters", std::move(filtersJsonMap));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_startTokenHasBeenSet)
  {
   payload.WithString("startToken", m_startToken);

  }

  return payload.View().WriteReadable();
}




