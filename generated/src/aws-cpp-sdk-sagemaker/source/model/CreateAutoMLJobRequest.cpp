/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateAutoMLJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAutoMLJobRequest::CreateAutoMLJobRequest() : 
    m_autoMLJobNameHasBeenSet(false),
    m_inputDataConfigHasBeenSet(false),
    m_outputDataConfigHasBeenSet(false),
    m_problemType(ProblemType::NOT_SET),
    m_problemTypeHasBeenSet(false),
    m_autoMLJobObjectiveHasBeenSet(false),
    m_autoMLJobConfigHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_generateCandidateDefinitionsOnly(false),
    m_generateCandidateDefinitionsOnlyHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_modelDeployConfigHasBeenSet(false)
{
}

Aws::String CreateAutoMLJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_autoMLJobNameHasBeenSet)
  {
   payload.WithString("AutoMLJobName", m_autoMLJobName);

  }

  if(m_inputDataConfigHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputDataConfigJsonList(m_inputDataConfig.size());
   for(unsigned inputDataConfigIndex = 0; inputDataConfigIndex < inputDataConfigJsonList.GetLength(); ++inputDataConfigIndex)
   {
     inputDataConfigJsonList[inputDataConfigIndex].AsObject(m_inputDataConfig[inputDataConfigIndex].Jsonize());
   }
   payload.WithArray("InputDataConfig", std::move(inputDataConfigJsonList));

  }

  if(m_outputDataConfigHasBeenSet)
  {
   payload.WithObject("OutputDataConfig", m_outputDataConfig.Jsonize());

  }

  if(m_problemTypeHasBeenSet)
  {
   payload.WithString("ProblemType", ProblemTypeMapper::GetNameForProblemType(m_problemType));
  }

  if(m_autoMLJobObjectiveHasBeenSet)
  {
   payload.WithObject("AutoMLJobObjective", m_autoMLJobObjective.Jsonize());

  }

  if(m_autoMLJobConfigHasBeenSet)
  {
   payload.WithObject("AutoMLJobConfig", m_autoMLJobConfig.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_generateCandidateDefinitionsOnlyHasBeenSet)
  {
   payload.WithBool("GenerateCandidateDefinitionsOnly", m_generateCandidateDefinitionsOnly);

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

  if(m_modelDeployConfigHasBeenSet)
  {
   payload.WithObject("ModelDeployConfig", m_modelDeployConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateAutoMLJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateAutoMLJob"));
  return headers;

}




