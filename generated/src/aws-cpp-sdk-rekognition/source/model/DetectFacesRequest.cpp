/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/DetectFacesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DetectFacesRequest::DetectFacesRequest() : 
    m_imageHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
}

Aws::String DetectFacesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_imageHasBeenSet)
  {
   payload.WithObject("Image", m_image.Jsonize());

  }

  if(m_attributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributesJsonList(m_attributes.size());
   for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
   {
     attributesJsonList[attributesIndex].AsString(AttributeMapper::GetNameForAttribute(m_attributes[attributesIndex]));
   }
   payload.WithArray("Attributes", std::move(attributesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DetectFacesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RekognitionService.DetectFaces"));
  return headers;

}




