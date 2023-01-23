/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UpdateImageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateImageRequest::UpdateImageRequest() : 
    m_deletePropertiesHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

Aws::String UpdateImageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deletePropertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deletePropertiesJsonList(m_deleteProperties.size());
   for(unsigned deletePropertiesIndex = 0; deletePropertiesIndex < deletePropertiesJsonList.GetLength(); ++deletePropertiesIndex)
   {
     deletePropertiesJsonList[deletePropertiesIndex].AsString(m_deleteProperties[deletePropertiesIndex]);
   }
   payload.WithArray("DeleteProperties", std::move(deletePropertiesJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_imageNameHasBeenSet)
  {
   payload.WithString("ImageName", m_imageName);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateImageRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.UpdateImage"));
  return headers;

}




