/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/StartProjectVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartProjectVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_projectVersionArnHasBeenSet)
  {
   payload.WithString("ProjectVersionArn", m_projectVersionArn);

  }

  if(m_minInferenceUnitsHasBeenSet)
  {
   payload.WithInteger("MinInferenceUnits", m_minInferenceUnits);

  }

  if(m_maxInferenceUnitsHasBeenSet)
  {
   payload.WithInteger("MaxInferenceUnits", m_maxInferenceUnits);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartProjectVersionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RekognitionService.StartProjectVersion"));
  return headers;

}




