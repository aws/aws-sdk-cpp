/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UpdateInferenceComponentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateInferenceComponentRequest::UpdateInferenceComponentRequest() : 
    m_inferenceComponentNameHasBeenSet(false),
    m_specificationHasBeenSet(false),
    m_runtimeConfigHasBeenSet(false)
{
}

Aws::String UpdateInferenceComponentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_inferenceComponentNameHasBeenSet)
  {
   payload.WithString("InferenceComponentName", m_inferenceComponentName);

  }

  if(m_specificationHasBeenSet)
  {
   payload.WithObject("Specification", m_specification.Jsonize());

  }

  if(m_runtimeConfigHasBeenSet)
  {
   payload.WithObject("RuntimeConfig", m_runtimeConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateInferenceComponentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.UpdateInferenceComponent"));
  return headers;

}




