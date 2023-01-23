/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/scheduler/model/CreateScheduleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Scheduler::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateScheduleRequest::CreateScheduleRequest() : 
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_descriptionHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_flexibleTimeWindowHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_scheduleExpressionHasBeenSet(false),
    m_scheduleExpressionTimezoneHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_state(ScheduleState::NOT_SET),
    m_stateHasBeenSet(false),
    m_targetHasBeenSet(false)
{
}

Aws::String CreateScheduleRequest::SerializePayload() const
{
  JsonValue payload;

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




