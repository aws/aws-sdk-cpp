/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateInferenceExperimentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateInferenceExperimentRequest::CreateInferenceExperimentRequest() : 
    m_nameHasBeenSet(false),
    m_type(InferenceExperimentType::NOT_SET),
    m_typeHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_endpointNameHasBeenSet(false),
    m_modelVariantsHasBeenSet(false),
    m_dataStorageConfigHasBeenSet(false),
    m_shadowModeConfigHasBeenSet(false),
    m_kmsKeyHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateInferenceExperimentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", InferenceExperimentTypeMapper::GetNameForInferenceExperimentType(m_type));
  }

  if(m_scheduleHasBeenSet)
  {
   payload.WithObject("Schedule", m_schedule.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_endpointNameHasBeenSet)
  {
   payload.WithString("EndpointName", m_endpointName);

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

  if(m_kmsKeyHasBeenSet)
  {
   payload.WithString("KmsKey", m_kmsKey);

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

Aws::Http::HeaderValueCollection CreateInferenceExperimentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateInferenceExperiment"));
  return headers;

}




