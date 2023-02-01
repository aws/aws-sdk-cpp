/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/CreatePortfolioShareRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreatePortfolioShareRequest::CreatePortfolioShareRequest() : 
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

Aws::String CreatePortfolioShareRequest::SerializePayload() const
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

Aws::Http::HeaderValueCollection CreatePortfolioShareRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWS242ServiceCatalogService.CreatePortfolioShare"));
  return headers;

}




