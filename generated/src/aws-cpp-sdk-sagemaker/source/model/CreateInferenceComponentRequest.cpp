/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateInferenceComponentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateInferenceComponentRequest::CreateInferenceComponentRequest() : 
    m_inferenceComponentNameHasBeenSet(false),
    m_endpointNameHasBeenSet(false),
    m_variantNameHasBeenSet(false),
    m_specificationHasBeenSet(false),
    m_runtimeConfigHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateInferenceComponentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_inferenceComponentNameHasBeenSet)
  {
   payload.WithString("InferenceComponentName", m_inferenceComponentName);

  }

  if(m_endpointNameHasBeenSet)
  {
   payload.WithString("EndpointName", m_endpointName);

  }

  if(m_variantNameHasBeenSet)
  {
   payload.WithString("VariantName", m_variantName);

  }

  if(m_specificationHasBeenSet)
  {
   payload.WithObject("Specification", m_specification.Jsonize());

  }

  if(m_runtimeConfigHasBeenSet)
  {
   payload.WithObject("RuntimeConfig", m_runtimeConfig.Jsonize());

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

Aws::Http::HeaderValueCollection CreateInferenceComponentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateInferenceComponent"));
  return headers;

}




