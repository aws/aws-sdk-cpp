/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/ListChangeSetsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MarketplaceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListChangeSetsRequest::ListChangeSetsRequest() : 
    m_catalogHasBeenSet(false),
    m_filterListHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListChangeSetsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_catalogHasBeenSet)
  {
   payload.WithString("Catalog", m_catalog);

  }

  if(m_filterListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filterListJsonList(m_filterList.size());
   for(unsigned filterListIndex = 0; filterListIndex < filterListJsonList.GetLength(); ++filterListIndex)
   {
     filterListJsonList[filterListIndex].AsObject(m_filterList[filterListIndex].Jsonize());
   }
   payload.WithArray("FilterList", std::move(filterListJsonList));

  }

  if(m_sortHasBeenSet)
  {
   payload.WithObject("Sort", m_sort.Jsonize());

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}




