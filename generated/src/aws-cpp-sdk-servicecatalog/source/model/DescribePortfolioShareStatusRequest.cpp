/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/DescribePortfolioShareStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribePortfolioShareStatusRequest::DescribePortfolioShareStatusRequest() : 
    m_portfolioShareTokenHasBeenSet(false)
{
}

Aws::String DescribePortfolioShareStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_portfolioShareTokenHasBeenSet)
  {
   payload.WithString("PortfolioShareToken", m_portfolioShareToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribePortfolioShareStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWS242ServiceCatalogService.DescribePortfolioShareStatus"));
  return headers;

}




