/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UpdateProjectRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateProjectRequest::SerializePayload() const
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

  if(m_serviceCatalogProvisioningUpdateDetailsHasBeenSet)
  {
   payload.WithObject("ServiceCatalogProvisioningUpdateDetails", m_serviceCatalogProvisioningUpdateDetails.Jsonize());

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

  if(m_templateProvidersToUpdateHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> templateProvidersToUpdateJsonList(m_templateProvidersToUpdate.size());
   for(unsigned templateProvidersToUpdateIndex = 0; templateProvidersToUpdateIndex < templateProvidersToUpdateJsonList.GetLength(); ++templateProvidersToUpdateIndex)
   {
     templateProvidersToUpdateJsonList[templateProvidersToUpdateIndex].AsObject(m_templateProvidersToUpdate[templateProvidersToUpdateIndex].Jsonize());
   }
   payload.WithArray("TemplateProvidersToUpdate", std::move(templateProvidersToUpdateJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateProjectRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.UpdateProject"));
  return headers;

}




