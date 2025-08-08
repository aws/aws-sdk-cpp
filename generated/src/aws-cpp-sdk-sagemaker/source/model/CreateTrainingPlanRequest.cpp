/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateTrainingPlanRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateTrainingPlanRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_trainingPlanNameHasBeenSet)
  {
   payload.WithString("TrainingPlanName", m_trainingPlanName);

  }

  if(m_trainingPlanOfferingIdHasBeenSet)
  {
   payload.WithString("TrainingPlanOfferingId", m_trainingPlanOfferingId);

  }

  if(m_spareInstanceCountPerUltraServerHasBeenSet)
  {
   payload.WithInteger("SpareInstanceCountPerUltraServer", m_spareInstanceCountPerUltraServer);

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

Aws::Http::HeaderValueCollection CreateTrainingPlanRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateTrainingPlan"));
  return headers;

}




