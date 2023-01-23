/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateEdgeDeploymentPlanRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateEdgeDeploymentPlanRequest::CreateEdgeDeploymentPlanRequest() : 
    m_edgeDeploymentPlanNameHasBeenSet(false),
    m_modelConfigsHasBeenSet(false),
    m_deviceFleetNameHasBeenSet(false),
    m_stagesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateEdgeDeploymentPlanRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_edgeDeploymentPlanNameHasBeenSet)
  {
   payload.WithString("EdgeDeploymentPlanName", m_edgeDeploymentPlanName);

  }

  if(m_modelConfigsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> modelConfigsJsonList(m_modelConfigs.size());
   for(unsigned modelConfigsIndex = 0; modelConfigsIndex < modelConfigsJsonList.GetLength(); ++modelConfigsIndex)
   {
     modelConfigsJsonList[modelConfigsIndex].AsObject(m_modelConfigs[modelConfigsIndex].Jsonize());
   }
   payload.WithArray("ModelConfigs", std::move(modelConfigsJsonList));

  }

  if(m_deviceFleetNameHasBeenSet)
  {
   payload.WithString("DeviceFleetName", m_deviceFleetName);

  }

  if(m_stagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stagesJsonList(m_stages.size());
   for(unsigned stagesIndex = 0; stagesIndex < stagesJsonList.GetLength(); ++stagesIndex)
   {
     stagesJsonList[stagesIndex].AsObject(m_stages[stagesIndex].Jsonize());
   }
   payload.WithArray("Stages", std::move(stagesJsonList));

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateEdgeDeploymentPlanRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateEdgeDeploymentPlan"));
  return headers;

}




