﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/scheduler/model/UpdateScheduleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Scheduler::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateScheduleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_actionAfterCompletionHasBeenSet)
  {
   payload.WithString("ActionAfterCompletion", ActionAfterCompletionMapper::GetNameForActionAfterCompletion(m_actionAfterCompletion));
  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_endDateHasBeenSet)
  {
   payload.WithDouble("EndDate", m_endDate.SecondsWithMSPrecision());
  }

  if(m_flexibleTimeWindowHasBeenSet)
  {
   payload.WithObject("FlexibleTimeWindow", m_flexibleTimeWindow.Jsonize());

  }

  if(m_groupNameHasBeenSet)
  {
   payload.WithString("GroupName", m_groupName);

  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("KmsKeyArn", m_kmsKeyArn);

  }

  if(m_scheduleExpressionHasBeenSet)
  {
   payload.WithString("ScheduleExpression", m_scheduleExpression);

  }

  if(m_scheduleExpressionTimezoneHasBeenSet)
  {
   payload.WithString("ScheduleExpressionTimezone", m_scheduleExpressionTimezone);

  }

  if(m_startDateHasBeenSet)
  {
   payload.WithDouble("StartDate", m_startDate.SecondsWithMSPrecision());
  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", ScheduleStateMapper::GetNameForScheduleState(m_state));
  }

  if(m_targetHasBeenSet)
  {
   payload.WithObject("Target", m_target.Jsonize());

  }

  return payload.View().WriteReadable();
}




