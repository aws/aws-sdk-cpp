/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateAutoMLJobV2Request.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAutoMLJobV2Request::CreateAutoMLJobV2Request() : 
    m_autoMLJobNameHasBeenSet(false),
    m_autoMLJobInputDataConfigHasBeenSet(false),
    m_outputDataConfigHasBeenSet(false),
    m_autoMLProblemTypeConfigHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_securityConfigHasBeenSet(false),
    m_autoMLJobObjectiveHasBeenSet(false),
    m_modelDeployConfigHasBeenSet(false),
    m_dataSplitConfigHasBeenSet(false)
{
}

Aws::String CreateAutoMLJobV2Request::SerializePayload() const
{
  JsonValue payload;

  if(m_autoMLJobNameHasBeenSet)
  {
   payload.WithString("AutoMLJobName", m_autoMLJobName);

  }

  if(m_autoMLJobInputDataConfigHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> autoMLJobInputDataConfigJsonList(m_autoMLJobInputDataConfig.size());
   for(unsigned autoMLJobInputDataConfigIndex = 0; autoMLJobInputDataConfigIndex < autoMLJobInputDataConfigJsonList.GetLength(); ++autoMLJobInputDataConfigIndex)
   {
     autoMLJobInputDataConfigJsonList[autoMLJobInputDataConfigIndex].AsObject(m_autoMLJobInputDataConfig[autoMLJobInputDataConfigIndex].Jsonize());
   }
   payload.WithArray("AutoMLJobInputDataConfig", std::move(autoMLJobInputDataConfigJsonList));

  }

  if(m_outputDataConfigHasBeenSet)
  {
   payload.WithObject("OutputDataConfig", m_outputDataConfig.Jsonize());

  }

  if(m_autoMLProblemTypeConfigHasBeenSet)
  {
   payload.WithObject("AutoMLProblemTypeConfig", m_autoMLProblemTypeConfig.Jsonize());

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

  if(m_securityConfigHasBeenSet)
  {
   payload.WithObject("SecurityConfig", m_securityConfig.Jsonize());

  }

  if(m_autoMLJobObjectiveHasBeenSet)
  {
   payload.WithObject("AutoMLJobObjective", m_autoMLJobObjective.Jsonize());

  }

  if(m_modelDeployConfigHasBeenSet)
  {
   payload.WithObject("ModelDeployConfig", m_modelDeployConfig.Jsonize());

  }

  if(m_dataSplitConfigHasBeenSet)
  {
   payload.WithObject("DataSplitConfig", m_dataSplitConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateAutoMLJobV2Request::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateAutoMLJobV2"));
  return headers;

}




