/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/CompareFacesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CompareFacesRequest::CompareFacesRequest() : 
    m_sourceImageHasBeenSet(false),
    m_targetImageHasBeenSet(false),
    m_similarityThreshold(0.0),
    m_similarityThresholdHasBeenSet(false),
    m_qualityFilter(QualityFilter::NOT_SET),
    m_qualityFilterHasBeenSet(false)
{
}

Aws::String CompareFacesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sourceImageHasBeenSet)
  {
   payload.WithObject("SourceImage", m_sourceImage.Jsonize());

  }

  if(m_targetImageHasBeenSet)
  {
   payload.WithObject("TargetImage", m_targetImage.Jsonize());

  }

  if(m_similarityThresholdHasBeenSet)
  {
   payload.WithDouble("SimilarityThreshold", m_similarityThreshold);

  }

  if(m_qualityFilterHasBeenSet)
  {
   payload.WithString("QualityFilter", QualityFilterMapper::GetNameForQualityFilter(m_qualityFilter));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CompareFacesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RekognitionService.CompareFaces"));
  return headers;

}




