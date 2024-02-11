/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/DisassociateFacesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateFacesRequest::DisassociateFacesRequest() : 
    m_collectionIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_faceIdsHasBeenSet(false)
{
}

Aws::String DisassociateFacesRequest::SerializePayload() const
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

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DisassociateFacesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RekognitionService.DisassociateFaces"));
  return headers;

}




