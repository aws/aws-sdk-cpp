/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UpdateInferenceComponentRuntimeConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateInferenceComponentRuntimeConfigRequest::UpdateInferenceComponentRuntimeConfigRequest() : 
    m_inferenceComponentNameHasBeenSet(false),
    m_desiredRuntimeConfigHasBeenSet(false)
{
}

Aws::String UpdateInferenceComponentRuntimeConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_inferenceComponentNameHasBeenSet)
  {
   payload.WithString("InferenceComponentName", m_inferenceComponentName);

  }

  if(m_desiredRuntimeConfigHasBeenSet)
  {
   payload.WithObject("DesiredRuntimeConfig", m_desiredRuntimeConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateInferenceComponentRuntimeConfigRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.UpdateInferenceComponentRuntimeConfig"));
  return headers;

}




