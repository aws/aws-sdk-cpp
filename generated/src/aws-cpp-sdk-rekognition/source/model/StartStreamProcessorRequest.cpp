﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/StartStreamProcessorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartStreamProcessorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_startSelectorHasBeenSet)
  {
   payload.WithObject("StartSelector", m_startSelector.Jsonize());

  }

  if(m_stopSelectorHasBeenSet)
  {
   payload.WithObject("StopSelector", m_stopSelector.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartStreamProcessorRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RekognitionService.StartStreamProcessor"));
  return headers;

}




