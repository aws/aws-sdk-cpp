/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ListAcceptedPortfolioSharesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListAcceptedPortfolioSharesRequest::ListAcceptedPortfolioSharesRequest() : 
    m_acceptLanguageHasBeenSet(false),
    m_pageTokenHasBeenSet(false),
    m_pageSize(0),
    m_pageSizeHasBeenSet(false),
    m_portfolioShareType(PortfolioShareType::NOT_SET),
    m_portfolioShareTypeHasBeenSet(false)
{
}

Aws::String ListAcceptedPortfolioSharesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_acceptLanguageHasBeenSet)
  {
   payload.WithString("AcceptLanguage", m_acceptLanguage);

  }

  if(m_pageTokenHasBeenSet)
  {
   payload.WithString("PageToken", m_pageToken);

  }

  if(m_pageSizeHasBeenSet)
  {
   payload.WithInteger("PageSize", m_pageSize);

  }

  if(m_portfolioShareTypeHasBeenSet)
  {
   payload.WithString("PortfolioShareType", PortfolioShareTypeMapper::GetNameForPortfolioShareType(m_portfolioShareType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListAcceptedPortfolioSharesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWS242ServiceCatalogService.ListAcceptedPortfolioShares"));
  return headers;

}




