/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/AssociateFacesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateFacesRequest::AssociateFacesRequest() : 
    m_collectionIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_faceIdsHasBeenSet(false),
    m_userMatchThreshold(0.0),
    m_userMatchThresholdHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientRequestTokenHasBeenSet(true)
{
}

Aws::String AssociateFacesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_collectionIdHasBeenSet)
  {
   payload.WithString("CollectionId", m_collectionId);

  }

  if(m_userIdHasBeenSet)
  {
   payload.WithString("UserId", m_userId);

  }

  if(m_faceIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> faceIdsJsonList(m_faceIds.size());
   for(unsigned faceIdsIndex = 0; faceIdsIndex < faceIdsJsonList.GetLength(); ++faceIdsIndex)
   {
     faceIdsJsonList[faceIdsIndex].AsString(m_faceIds[faceIdsIndex]);
   }
   payload.WithArray("FaceIds", std::move(faceIdsJsonList));

  }

  if(m_userMatchThresholdHasBeenSet)
  {
   payload.WithDouble("UserMatchThreshold", m_userMatchThreshold);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateFacesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RekognitionService.AssociateFaces"));
  return headers;

}




