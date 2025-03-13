/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-reporting/model/GetBuyerDashboardRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MarketplaceReporting::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetBuyerDashboardRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_dashboardIdentifierHasBeenSet)
  {
   payload.WithString("dashboardIdentifier", m_dashboardIdentifier);

  }

  if(m_embeddingDomainsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> embeddingDomainsJsonList(m_embeddingDomains.size());
   for(unsigned embeddingDomainsIndex = 0; embeddingDomainsIndex < embeddingDomainsJsonList.GetLength(); ++embeddingDomainsIndex)
   {
     embeddingDomainsJsonList[embeddingDomainsIndex].AsString(m_embeddingDomains[embeddingDomainsIndex]);
   }
   payload.WithArray("embeddingDomains", std::move(embeddingDomainsJsonList));

  }

  return payload.View().WriteReadable();
}




