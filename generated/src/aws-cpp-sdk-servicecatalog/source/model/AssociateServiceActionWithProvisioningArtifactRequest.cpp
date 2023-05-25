/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/AssociateServiceActionWithProvisioningArtifactRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateServiceActionWithProvisioningArtifactRequest::AssociateServiceActionWithProvisioningArtifactRequest() : 
    m_productIdHasBeenSet(false),
    m_provisioningArtifactIdHasBeenSet(false),
    m_serviceActionIdHasBeenSet(false),
    m_acceptLanguageHasBeenSet(false)
{
}

Aws::String AssociateServiceActionWithProvisioningArtifactRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_productIdHasBeenSet)
  {
   payload.WithString("ProductId", m_productId);

  }

  if(m_provisioningArtifactIdHasBeenSet)
  {
   payload.WithString("ProvisioningArtifactId", m_provisioningArtifactId);

  }

  if(m_serviceActionIdHasBeenSet)
  {
   payload.WithString("ServiceActionId", m_serviceActionId);

  }

  if(m_acceptLanguageHasBeenSet)
  {
   payload.WithString("AcceptLanguage", m_acceptLanguage);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateServiceActionWithProvisioningArtifactRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWS242ServiceCatalogService.AssociateServiceActionWithProvisioningArtifact"));
  return headers;

}




