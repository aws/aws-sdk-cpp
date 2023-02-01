/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UpdateInferenceExperimentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateInferenceExperimentRequest::UpdateInferenceExperimentRequest() : 
    m_nameHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_modelVariantsHasBeenSet(false),
    m_dataStorageConfigHasBeenSet(false),
    m_shadowModeConfigHasBeenSet(false)
{
}

Aws::String UpdateInferenceExperimentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_scheduleHasBeenSet)
  {
   payload.WithObject("Schedule", m_schedule.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_modelVariantsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> modelVariantsJsonList(m_modelVariants.size());
   for(unsigned modelVariantsIndex = 0; modelVariantsIndex < modelVariantsJsonList.GetLength(); ++modelVariantsIndex)
   {
     modelVariantsJsonList[modelVariantsIndex].AsObject(m_modelVariants[modelVariantsIndex].Jsonize());
   }
   payload.WithArray("ModelVariants", std::move(modelVariantsJsonList));

  }

  if(m_dataStorageConfigHasBeenSet)
  {
   payload.WithObject("DataStorageConfig", m_dataStorageConfig.Jsonize());

  }

  if(m_shadowModeConfigHasBeenSet)
  {
   payload.WithObject("ShadowModeConfig", m_shadowModeConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateInferenceExperimentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.UpdateInferenceExperiment"));
  return headers;

}




