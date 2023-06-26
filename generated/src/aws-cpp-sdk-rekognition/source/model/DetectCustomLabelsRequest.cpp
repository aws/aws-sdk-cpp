/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/DetectCustomLabelsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DetectCustomLabelsRequest::DetectCustomLabelsRequest() : 
    m_projectVersionArnHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_minConfidence(0.0),
    m_minConfidenceHasBeenSet(false)
{
}

Aws::String DetectCustomLabelsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_projectVersionArnHasBeenSet)
  {
   payload.WithString("ProjectVersionArn", m_projectVersionArn);

  }

  if(m_imageHasBeenSet)
  {
   payload.WithObject("Image", m_image.Jsonize());

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_minConfidenceHasBeenSet)
  {
   payload.WithDouble("MinConfidence", m_minConfidence);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DetectCustomLabelsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RekognitionService.DetectCustomLabels"));
  return headers;

}




