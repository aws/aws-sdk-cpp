/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateCompilationJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateCompilationJobRequest::CreateCompilationJobRequest() : 
    m_compilationJobNameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_modelPackageVersionArnHasBeenSet(false),
    m_inputConfigHasBeenSet(false),
    m_outputConfigHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_stoppingConditionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateCompilationJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_compilationJobNameHasBeenSet)
  {
   payload.WithString("CompilationJobName", m_compilationJobName);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_modelPackageVersionArnHasBeenSet)
  {
   payload.WithString("ModelPackageVersionArn", m_modelPackageVersionArn);

  }

  if(m_inputConfigHasBeenSet)
  {
   payload.WithObject("InputConfig", m_inputConfig.Jsonize());

  }

  if(m_outputConfigHasBeenSet)
  {
   payload.WithObject("OutputConfig", m_outputConfig.Jsonize());

  }

  if(m_vpcConfigHasBeenSet)
  {
   payload.WithObject("VpcConfig", m_vpcConfig.Jsonize());

  }

  if(m_stoppingConditionHasBeenSet)
  {
   payload.WithObject("StoppingCondition", m_stoppingCondition.Jsonize());

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

Aws::Http::HeaderValueCollection CreateCompilationJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateCompilationJob"));
  return headers;

}




