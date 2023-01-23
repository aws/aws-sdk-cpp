/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/CreatePrefetchScheduleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaTailor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreatePrefetchScheduleRequest::CreatePrefetchScheduleRequest() : 
    m_consumptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_playbackConfigurationNameHasBeenSet(false),
    m_retrievalHasBeenSet(false),
    m_streamIdHasBeenSet(false)
{
}

Aws::String CreatePrefetchScheduleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_consumptionHasBeenSet)
  {
   payload.WithObject("Consumption", m_consumption.Jsonize());

  }

  if(m_retrievalHasBeenSet)
  {
   payload.WithObject("Retrieval", m_retrieval.Jsonize());

  }

  if(m_streamIdHasBeenSet)
  {
   payload.WithString("StreamId", m_streamId);

  }

  return payload.View().WriteReadable();
}




