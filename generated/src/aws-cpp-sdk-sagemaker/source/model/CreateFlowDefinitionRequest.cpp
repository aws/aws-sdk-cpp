/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateFlowDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateFlowDefinitionRequest::CreateFlowDefinitionRequest() : 
    m_flowDefinitionNameHasBeenSet(false),
    m_humanLoopRequestSourceHasBeenSet(false),
    m_humanLoopActivationConfigHasBeenSet(false),
    m_humanLoopConfigHasBeenSet(false),
    m_outputConfigHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateFlowDefinitionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_flowDefinitionNameHasBeenSet)
  {
   payload.WithString("FlowDefinitionName", m_flowDefinitionName);

  }

  if(m_humanLoopRequestSourceHasBeenSet)
  {
   payload.WithObject("HumanLoopRequestSource", m_humanLoopRequestSource.Jsonize());

  }

  if(m_humanLoopActivationConfigHasBeenSet)
  {
   payload.WithObject("HumanLoopActivationConfig", m_humanLoopActivationConfig.Jsonize());

  }

  if(m_humanLoopConfigHasBeenSet)
  {
   payload.WithObject("HumanLoopConfig", m_humanLoopConfig.Jsonize());

  }

  if(m_outputConfigHasBeenSet)
  {
   payload.WithObject("OutputConfig", m_outputConfig.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

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

Aws::Http::HeaderValueCollection CreateFlowDefinitionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateFlowDefinition"));
  return headers;

}




