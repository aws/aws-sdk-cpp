/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/UpdateScheduledActionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateScheduledActionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_actionIDHasBeenSet)
  {
   payload.WithString("ActionID", m_actionID);

  }

  if(m_actionTypeHasBeenSet)
  {
   payload.WithString("ActionType", ActionTypeMapper::GetNameForActionType(m_actionType));
  }

  if(m_scheduleAtHasBeenSet)
  {
   payload.WithString("ScheduleAt", ScheduleAtMapper::GetNameForScheduleAt(m_scheduleAt));
  }

  if(m_desiredStartTimeHasBeenSet)
  {
   payload.WithInt64("DesiredStartTime", m_desiredStartTime);

  }

  return payload.View().WriteReadable();
}




