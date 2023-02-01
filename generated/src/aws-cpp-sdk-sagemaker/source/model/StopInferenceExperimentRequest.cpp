/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/StopInferenceExperimentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopInferenceExperimentRequest::StopInferenceExperimentRequest() : 
    m_nameHasBeenSet(false),
    m_modelVariantActionsHasBeenSet(false),
    m_desiredModelVariantsHasBeenSet(false),
    m_desiredState(InferenceExperimentStopDesiredState::NOT_SET),
    m_desiredStateHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

Aws::String StopInferenceExperimentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_modelVariantActionsHasBeenSet)
  {
   JsonValue modelVariantActionsJsonMap;
   for(auto& modelVariantActionsItem : m_modelVariantActions)
   {
     modelVariantActionsJsonMap.WithString(modelVariantActionsItem.first, ModelVariantActionMapper::GetNameForModelVariantAction(modelVariantActionsItem.second));
   }
   payload.WithObject("ModelVariantActions", std::move(modelVariantActionsJsonMap));

  }

  if(m_desiredModelVariantsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> desiredModelVariantsJsonList(m_desiredModelVariants.size());
   for(unsigned desiredModelVariantsIndex = 0; desiredModelVariantsIndex < desiredModelVariantsJsonList.GetLength(); ++desiredModelVariantsIndex)
   {
     desiredModelVariantsJsonList[desiredModelVariantsIndex].AsObject(m_desiredModelVariants[desiredModelVariantsIndex].Jsonize());
   }
   payload.WithArray("DesiredModelVariants", std::move(desiredModelVariantsJsonList));

  }

  if(m_desiredStateHasBeenSet)
  {
   payload.WithString("DesiredState", InferenceExperimentStopDesiredStateMapper::GetNameForInferenceExperimentStopDesiredState(m_desiredState));
  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", m_reason);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StopInferenceExperimentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.StopInferenceExperiment"));
  return headers;

}




