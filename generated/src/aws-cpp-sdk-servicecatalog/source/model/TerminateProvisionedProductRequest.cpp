/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/TerminateProvisionedProductRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String TerminateProvisionedProductRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_provisionedProductNameHasBeenSet)
  {
   payload.WithString("ProvisionedProductName", m_provisionedProductName);

  }

  if(m_provisionedProductIdHasBeenSet)
  {
   payload.WithString("ProvisionedProductId", m_provisionedProductId);

  }

  if(m_terminateTokenHasBeenSet)
  {
   payload.WithString("TerminateToken", m_terminateToken);

  }

  if(m_ignoreErrorsHasBeenSet)
  {
   payload.WithBool("IgnoreErrors", m_ignoreErrors);

  }

  if(m_acceptLanguageHasBeenSet)
  {
   payload.WithString("AcceptLanguage", m_acceptLanguage);

  }

  if(m_retainPhysicalResourcesHasBeenSet)
  {
   payload.WithBool("RetainPhysicalResources", m_retainPhysicalResources);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection TerminateProvisionedProductRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWS242ServiceCatalogService.TerminateProvisionedProduct"));
  return headers;

}




