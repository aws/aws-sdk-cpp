/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateStudioLifecycleConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateStudioLifecycleConfigRequest::CreateStudioLifecycleConfigRequest() : 
    m_studioLifecycleConfigNameHasBeenSet(false),
    m_studioLifecycleConfigContentHasBeenSet(false),
    m_studioLifecycleConfigAppType(StudioLifecycleConfigAppType::NOT_SET),
    m_studioLifecycleConfigAppTypeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateStudioLifecycleConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_studioLifecycleConfigNameHasBeenSet)
  {
   payload.WithString("StudioLifecycleConfigName", m_studioLifecycleConfigName);

  }

  if(m_studioLifecycleConfigContentHasBeenSet)
  {
   payload.WithString("StudioLifecycleConfigContent", m_studioLifecycleConfigContent);

  }

  if(m_studioLifecycleConfigAppTypeHasBeenSet)
  {
   payload.WithString("StudioLifecycleConfigAppType", StudioLifecycleConfigAppTypeMapper::GetNameForStudioLifecycleConfigAppType(m_studioLifecycleConfigAppType));
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

Aws::Http::HeaderValueCollection CreateStudioLifecycleConfigRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateStudioLifecycleConfig"));
  return headers;

}




