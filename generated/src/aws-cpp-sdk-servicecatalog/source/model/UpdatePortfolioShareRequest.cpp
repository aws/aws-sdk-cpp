/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/UpdatePortfolioShareRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePortfolioShareRequest::UpdatePortfolioShareRequest() : 
    m_acceptLanguageHasBeenSet(false),
    m_portfolioIdHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_organizationNodeHasBeenSet(false),
    m_shareTagOptions(false),
    m_shareTagOptionsHasBeenSet(false),
    m_sharePrincipals(false),
    m_sharePrincipalsHasBeenSet(false)
{
}

Aws::String UpdatePortfolioShareRequest::SerializePayload() const
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

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_organizationNodeHasBeenSet)
  {
   payload.WithObject("OrganizationNode", m_organizationNode.Jsonize());

  }

  if(m_shareTagOptionsHasBeenSet)
  {
   payload.WithBool("ShareTagOptions", m_shareTagOptions);

  }

  if(m_sharePrincipalsHasBeenSet)
  {
   payload.WithBool("SharePrincipals", m_sharePrincipals);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdatePortfolioShareRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWS242ServiceCatalogService.UpdatePortfolioShare"));
  return headers;

}




