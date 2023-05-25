/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ListProvisioningArtifactsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListProvisioningArtifactsRequest::ListProvisioningArtifactsRequest() : 
    m_acceptLanguageHasBeenSet(false),
    m_productIdHasBeenSet(false)
{
}

Aws::String ListProvisioningArtifactsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_acceptLanguageHasBeenSet)
  {
   payload.WithString("AcceptLanguage", m_acceptLanguage);

  }

  if(m_productIdHasBeenSet)
  {
   payload.WithString("ProductId", m_productId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListProvisioningArtifactsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWS242ServiceCatalogService.ListProvisioningArtifacts"));
  return headers;

}




