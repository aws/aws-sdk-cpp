/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/SearchUsersByImageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SearchUsersByImageRequest::SearchUsersByImageRequest() : 
    m_collectionIdHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_userMatchThreshold(0.0),
    m_userMatchThresholdHasBeenSet(false),
    m_maxUsers(0),
    m_maxUsersHasBeenSet(false),
    m_qualityFilter(QualityFilter::NOT_SET),
    m_qualityFilterHasBeenSet(false)
{
}

Aws::String SearchUsersByImageRequest::SerializePayload() const
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

  if(m_userMatchThresholdHasBeenSet)
  {
   payload.WithDouble("UserMatchThreshold", m_userMatchThreshold);

  }

  if(m_maxUsersHasBeenSet)
  {
   payload.WithInteger("MaxUsers", m_maxUsers);

  }

  if(m_qualityFilterHasBeenSet)
  {
   payload.WithString("QualityFilter", QualityFilterMapper::GetNameForQualityFilter(m_qualityFilter));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SearchUsersByImageRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RekognitionService.SearchUsersByImage"));
  return headers;

}




