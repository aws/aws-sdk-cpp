/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/UpdateQueueRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaConvert::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateQueueRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_concurrentJobsHasBeenSet)
  {
   payload.WithInteger("concurrentJobs", m_concurrentJobs);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_reservationPlanSettingsHasBeenSet)
  {
   payload.WithObject("reservationPlanSettings", m_reservationPlanSettings.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", QueueStatusMapper::GetNameForQueueStatus(m_status));
  }

  return payload.View().WriteReadable();
}




