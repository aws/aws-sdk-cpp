﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/CreateProductRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateProductRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_acceptLanguageHasBeenSet)
  {
   payload.WithString("AcceptLanguage", m_acceptLanguage);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("Owner", m_owner);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_distributorHasBeenSet)
  {
   payload.WithString("Distributor", m_distributor);

  }

  if(m_supportDescriptionHasBeenSet)
  {
   payload.WithString("SupportDescription", m_supportDescription);

  }

  if(m_supportEmailHasBeenSet)
  {
   payload.WithString("SupportEmail", m_supportEmail);

  }

  if(m_supportUrlHasBeenSet)
  {
   payload.WithString("SupportUrl", m_supportUrl);

  }

  if(m_productTypeHasBeenSet)
  {
   payload.WithString("ProductType", ProductTypeMapper::GetNameForProductType(m_productType));
  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_provisioningArtifactParametersHasBeenSet)
  {
   payload.WithObject("ProvisioningArtifactParameters", m_provisioningArtifactParameters.Jsonize());

  }

  if(m_idempotencyTokenHasBeenSet)
  {
   payload.WithString("IdempotencyToken", m_idempotencyToken);

  }

  if(m_sourceConnectionHasBeenSet)
  {
   payload.WithObject("SourceConnection", m_sourceConnection.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateProductRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWS242ServiceCatalogService.CreateProduct"));
  return headers;

}




