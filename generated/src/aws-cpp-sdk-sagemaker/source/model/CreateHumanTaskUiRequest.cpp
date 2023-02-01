/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateHumanTaskUiRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateHumanTaskUiRequest::CreateHumanTaskUiRequest() : 
    m_humanTaskUiNameHasBeenSet(false),
    m_uiTemplateHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateHumanTaskUiRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_humanTaskUiNameHasBeenSet)
  {
   payload.WithString("HumanTaskUiName", m_humanTaskUiName);

  }

  if(m_uiTemplateHasBeenSet)
  {
   payload.WithObject("UiTemplate", m_uiTemplate.Jsonize());

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

Aws::Http::HeaderValueCollection CreateHumanTaskUiRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateHumanTaskUi"));
  return headers;

}




