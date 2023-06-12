/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/SearchUsersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SearchUsersRequest::SearchUsersRequest() : 
    m_collectionIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_faceIdHasBeenSet(false),
    m_userMatchThreshold(0.0),
    m_userMatchThresholdHasBeenSet(false),
    m_maxUsers(0),
    m_maxUsersHasBeenSet(false)
{
}

Aws::String SearchUsersRequest::SerializePayload() const
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

  if(m_faceIdHasBeenSet)
  {
   payload.WithString("FaceId", m_faceId);

  }

  if(m_userMatchThresholdHasBeenSet)
  {
   payload.WithDouble("UserMatchThreshold", m_userMatchThreshold);

  }

  if(m_maxUsersHasBeenSet)
  {
   payload.WithInteger("MaxUsers", m_maxUsers);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SearchUsersRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RekognitionService.SearchUsers"));
  return headers;

}




