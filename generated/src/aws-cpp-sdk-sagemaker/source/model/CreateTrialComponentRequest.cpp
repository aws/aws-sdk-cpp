/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateTrialComponentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateTrialComponentRequest::CreateTrialComponentRequest() : 
    m_trialComponentNameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_inputArtifactsHasBeenSet(false),
    m_outputArtifactsHasBeenSet(false),
    m_metadataPropertiesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateTrialComponentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_trialComponentNameHasBeenSet)
  {
   payload.WithString("TrialComponentName", m_trialComponentName);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("Status", m_status.Jsonize());

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     parametersJsonMap.WithObject(parametersItem.first, parametersItem.second.Jsonize());
   }
   payload.WithObject("Parameters", std::move(parametersJsonMap));

  }

  if(m_inputArtifactsHasBeenSet)
  {
   JsonValue inputArtifactsJsonMap;
   for(auto& inputArtifactsItem : m_inputArtifacts)
   {
     inputArtifactsJsonMap.WithObject(inputArtifactsItem.first, inputArtifactsItem.second.Jsonize());
   }
   payload.WithObject("InputArtifacts", std::move(inputArtifactsJsonMap));

  }

  if(m_outputArtifactsHasBeenSet)
  {
   JsonValue outputArtifactsJsonMap;
   for(auto& outputArtifactsItem : m_outputArtifacts)
   {
     outputArtifactsJsonMap.WithObject(outputArtifactsItem.first, outputArtifactsItem.second.Jsonize());
   }
   payload.WithObject("OutputArtifacts", std::move(outputArtifactsJsonMap));

  }

  if(m_metadataPropertiesHasBeenSet)
  {
   payload.WithObject("MetadataProperties", m_metadataProperties.Jsonize());

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

Aws::Http::HeaderValueCollection CreateTrialComponentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateTrialComponent"));
  return headers;

}




