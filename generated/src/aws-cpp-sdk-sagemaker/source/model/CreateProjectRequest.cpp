/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateProjectRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateProjectRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_projectNameHasBeenSet)
  {
   payload.WithString("ProjectName", m_projectName);

  }

  if(m_projectDescriptionHasBeenSet)
  {
   payload.WithString("ProjectDescription", m_projectDescription);

  }

  if(m_serviceCatalogProvisioningDetailsHasBeenSet)
  {
   payload.WithObject("ServiceCatalogProvisioningDetails", m_serviceCatalogProvisioningDetails.Jsonize());

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

  if(m_templateProvidersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> templateProvidersJsonList(m_templateProviders.size());
   for(unsigned templateProvidersIndex = 0; templateProvidersIndex < templateProvidersJsonList.GetLength(); ++templateProvidersIndex)
   {
     templateProvidersJsonList[templateProvidersIndex].AsObject(m_templateProviders[templateProvidersIndex].Jsonize());
   }
   payload.WithArray("TemplateProviders", std::move(templateProvidersJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateProjectRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateProject"));
  return headers;

}




