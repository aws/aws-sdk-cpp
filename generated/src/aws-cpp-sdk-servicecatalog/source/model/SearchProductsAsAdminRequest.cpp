/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/SearchProductsAsAdminRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SearchProductsAsAdminRequest::SearchProductsAsAdminRequest() : 
    m_acceptLanguageHasBeenSet(false),
    m_portfolioIdHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_sortBy(ProductViewSortBy::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false),
    m_pageTokenHasBeenSet(false),
    m_pageSize(0),
    m_pageSizeHasBeenSet(false),
    m_productSource(ProductSource::NOT_SET),
    m_productSourceHasBeenSet(false)
{
}

Aws::String SearchProductsAsAdminRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_acceptLanguageHasBeenSet)
  {
   payload.WithString("AcceptLanguage", m_acceptLanguage);

  }

  if(m_portfolioIdHasBeenSet)
  {
   payload.WithString("PortfolioId", m_portfolioId);

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

  if(m_pageSizeHasBeenSet)
  {
   payload.WithInteger("PageSize", m_pageSize);

  }

  if(m_productSourceHasBeenSet)
  {
   payload.WithString("ProductSource", ProductSourceMapper::GetNameForProductSource(m_productSource));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SearchProductsAsAdminRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWS242ServiceCatalogService.SearchProductsAsAdmin"));
  return headers;

}




