﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/DetectModerationLabelsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DetectModerationLabelsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_imageHasBeenSet)
  {
   payload.WithObject("Image", m_image.Jsonize());

  }

  if(m_minConfidenceHasBeenSet)
  {
   payload.WithDouble("MinConfidence", m_minConfidence);

  }

  if(m_humanLoopConfigHasBeenSet)
  {
   payload.WithObject("HumanLoopConfig", m_humanLoopConfig.Jsonize());

  }

  if(m_projectVersionHasBeenSet)
  {
   payload.WithString("ProjectVersion", m_projectVersion);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DetectModerationLabelsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RekognitionService.DetectModerationLabels"));
  return headers;

}




