/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/SearchFacesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SearchFacesRequest::SearchFacesRequest() : 
    m_collectionIdHasBeenSet(false),
    m_faceIdHasBeenSet(false),
    m_maxFaces(0),
    m_maxFacesHasBeenSet(false),
    m_faceMatchThreshold(0.0),
    m_faceMatchThresholdHasBeenSet(false)
{
}

Aws::String SearchFacesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_collectionIdHasBeenSet)
  {
   payload.WithString("CollectionId", m_collectionId);

  }

  if(m_faceIdHasBeenSet)
  {
   payload.WithString("FaceId", m_faceId);

  }

  if(m_maxFacesHasBeenSet)
  {
   payload.WithInteger("MaxFaces", m_maxFaces);

  }

  if(m_faceMatchThresholdHasBeenSet)
  {
   payload.WithDouble("FaceMatchThreshold", m_faceMatchThreshold);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SearchFacesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RekognitionService.SearchFaces"));
  return headers;

}




