﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/UpdateProvisioningArtifactRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateProvisioningArtifactRequest::UpdateProvisioningArtifactRequest() : 
    m_acceptLanguageHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_provisioningArtifactIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_active(false),
    m_activeHasBeenSet(false),
    m_guidance(ProvisioningArtifactGuidance::NOT_SET),
    m_guidanceHasBeenSet(false)
{
}

Aws::String UpdateProvisioningArtifactRequest::SerializePayload() const
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

  if(m_provisioningArtifactIdHasBeenSet)
  {
   payload.WithString("ProvisioningArtifactId", m_provisioningArtifactId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_activeHasBeenSet)
  {
   payload.WithBool("Active", m_active);

  }

  if(m_guidanceHasBeenSet)
  {
   payload.WithString("Guidance", ProvisioningArtifactGuidanceMapper::GetNameForProvisioningArtifactGuidance(m_guidance));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateProvisioningArtifactRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWS242ServiceCatalogService.UpdateProvisioningArtifact"));
  return headers;

}




