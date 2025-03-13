/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/SearchProductsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SearchProductsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_acceptLanguageHasBeenSet)
  {
   payload.WithString("AcceptLanguage", m_acceptLanguage);

  }

  if(m_filtersHasBeenSet)
  {
   JsonValue filtersJsonMap;
   for(auto& filtersItem : m_filters)
   {
     Aws::Utils::Array<JsonValue> productViewFilterValuesJsonList(filtersItem.second.size());
     for(unsigned productViewFilterValuesIndex = 0; productViewFilterValuesIndex < productViewFilterValuesJsonList.GetLength(); ++productViewFilterValuesIndex)
     {
       productViewFilterValuesJsonList[productViewFilterValuesIndex].AsString(filtersItem.second[productViewFilterValuesIndex]);
     }
     filtersJsonMap.WithArray(ProductViewFilterByMapper::GetNameForProductViewFilterBy(filtersItem.first), std::move(productViewFilterValuesJsonList));
   }
   payload.WithObject("Filters", std::move(filtersJsonMap));

  }

  if(m_pageSizeHasBeenSet)
  {
   payload.WithInteger("PageSize", m_pageSize);

  }

  if(m_sortByHasBeenSet)
  {
   payload.WithString("SortBy", ProductViewSortByMapper::GetNameForProductViewSortBy(m_sortBy));
  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("SortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  if(m_pageTokenHasBeenSet)
  {
   payload.WithString("PageToken", m_pageToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SearchProductsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWS242ServiceCatalogService.SearchProducts"));
  return headers;

}




