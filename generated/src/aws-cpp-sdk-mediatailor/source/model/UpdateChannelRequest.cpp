/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/UpdateChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaTailor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateChannelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fillerSlateHasBeenSet)
  {
   payload.WithObject("FillerSlate", m_fillerSlate.Jsonize());

  }

  if(m_outputsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputsJsonList(m_outputs.size());
   for(unsigned outputsIndex = 0; outputsIndex < outputsJsonList.GetLength(); ++outputsIndex)
   {
     outputsJsonList[outputsIndex].AsObject(m_outputs[outputsIndex].Jsonize());
   }
   payload.WithArray("Outputs", std::move(outputsJsonList));

  }

  if(m_timeShiftConfigurationHasBeenSet)
  {
   payload.WithObject("TimeShiftConfiguration", m_timeShiftConfiguration.Jsonize());

  }

  if(m_audiencesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> audiencesJsonList(m_audiences.size());
   for(unsigned audiencesIndex = 0; audiencesIndex < audiencesJsonList.GetLength(); ++audiencesIndex)
   {
     audiencesJsonList[audiencesIndex].AsString(m_audiences[audiencesIndex]);
   }
   payload.WithArray("Audiences", std::move(audiencesJsonList));

  }

  return payload.View().WriteReadable();
}




