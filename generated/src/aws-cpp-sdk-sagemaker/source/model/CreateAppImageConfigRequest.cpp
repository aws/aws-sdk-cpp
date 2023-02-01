/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateAppImageConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAppImageConfigRequest::CreateAppImageConfigRequest() : 
    m_appImageConfigNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_kernelGatewayImageConfigHasBeenSet(false)
{
}

Aws::String CreateAppImageConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appImageConfigNameHasBeenSet)
  {
   payload.WithString("AppImageConfigName", m_appImageConfigName);

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

  if(m_kernelGatewayImageConfigHasBeenSet)
  {
   payload.WithObject("KernelGatewayImageConfig", m_kernelGatewayImageConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateAppImageConfigRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateAppImageConfig"));
  return headers;

}




