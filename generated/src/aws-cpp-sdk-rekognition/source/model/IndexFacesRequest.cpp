/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/IndexFacesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

IndexFacesRequest::IndexFacesRequest() : 
    m_collectionIdHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_externalImageIdHasBeenSet(false),
    m_detectionAttributesHasBeenSet(false),
    m_maxFaces(0),
    m_maxFacesHasBeenSet(false),
    m_qualityFilter(QualityFilter::NOT_SET),
    m_qualityFilterHasBeenSet(false)
{
}

Aws::String IndexFacesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_collectionIdHasBeenSet)
  {
   payload.WithString("CollectionId", m_collectionId);

  }

  if(m_imageHasBeenSet)
  {
   payload.WithObject("Image", m_image.Jsonize());

  }

  if(m_externalImageIdHasBeenSet)
  {
   payload.WithString("ExternalImageId", m_externalImageId);

  }

  if(m_detectionAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> detectionAttributesJsonList(m_detectionAttributes.size());
   for(unsigned detectionAttributesIndex = 0; detectionAttributesIndex < detectionAttributesJsonList.GetLength(); ++detectionAttributesIndex)
   {
     detectionAttributesJsonList[detectionAttributesIndex].AsString(AttributeMapper::GetNameForAttribute(m_detectionAttributes[detectionAttributesIndex]));
   }
   payload.WithArray("DetectionAttributes", std::move(detectionAttributesJsonList));

  }

  if(m_maxFacesHasBeenSet)
  {
   payload.WithInteger("MaxFaces", m_maxFaces);

  }

  if(m_qualityFilterHasBeenSet)
  {
   payload.WithString("QualityFilter", QualityFilterMapper::GetNameForQualityFilter(m_qualityFilter));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection IndexFacesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RekognitionService.IndexFaces"));
  return headers;

}




