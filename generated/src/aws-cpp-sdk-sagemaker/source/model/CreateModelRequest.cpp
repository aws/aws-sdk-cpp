/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateModelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateModelRequest::CreateModelRequest() : 
    m_modelNameHasBeenSet(false),
    m_primaryContainerHasBeenSet(false),
    m_containersHasBeenSet(false),
    m_inferenceExecutionConfigHasBeenSet(false),
    m_executionRoleArnHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_enableNetworkIsolation(false),
    m_enableNetworkIsolationHasBeenSet(false)
{
}

Aws::String CreateModelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_modelNameHasBeenSet)
  {
   payload.WithString("ModelName", m_modelName);

  }

  if(m_primaryContainerHasBeenSet)
  {
   payload.WithObject("PrimaryContainer", m_primaryContainer.Jsonize());

  }

  if(m_containersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> containersJsonList(m_containers.size());
   for(unsigned containersIndex = 0; containersIndex < containersJsonList.GetLength(); ++containersIndex)
   {
     containersJsonList[containersIndex].AsObject(m_containers[containersIndex].Jsonize());
   }
   payload.WithArray("Containers", std::move(containersJsonList));

  }

  if(m_inferenceExecutionConfigHasBeenSet)
  {
   payload.WithObject("InferenceExecutionConfig", m_inferenceExecutionConfig.Jsonize());

  }

  if(m_executionRoleArnHasBeenSet)
  {
   payload.WithString("ExecutionRoleArn", m_executionRoleArn);

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

  if(m_vpcConfigHasBeenSet)
  {
   payload.WithObject("VpcConfig", m_vpcConfig.Jsonize());

  }

  if(m_enableNetworkIsolationHasBeenSet)
  {
   payload.WithBool("EnableNetworkIsolation", m_enableNetworkIsolation);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateModelRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateModel"));
  return headers;

}




