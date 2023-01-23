/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/HistoryEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SFN
{
namespace Model
{

HistoryEvent::HistoryEvent() : 
    m_timestampHasBeenSet(false),
    m_type(HistoryEventType::NOT_SET),
    m_typeHasBeenSet(false),
    m_id(0),
    m_idHasBeenSet(false),
    m_previousEventId(0),
    m_previousEventIdHasBeenSet(false),
    m_activityFailedEventDetailsHasBeenSet(false),
    m_activityScheduleFailedEventDetailsHasBeenSet(false),
    m_activityScheduledEventDetailsHasBeenSet(false),
    m_activityStartedEventDetailsHasBeenSet(false),
    m_activitySucceededEventDetailsHasBeenSet(false),
    m_activityTimedOutEventDetailsHasBeenSet(false),
    m_taskFailedEventDetailsHasBeenSet(false),
    m_taskScheduledEventDetailsHasBeenSet(false),
    m_taskStartFailedEventDetailsHasBeenSet(false),
    m_taskStartedEventDetailsHasBeenSet(false),
    m_taskSubmitFailedEventDetailsHasBeenSet(false),
    m_taskSubmittedEventDetailsHasBeenSet(false),
    m_taskSucceededEventDetailsHasBeenSet(false),
    m_taskTimedOutEventDetailsHasBeenSet(false),
    m_executionFailedEventDetailsHasBeenSet(false),
    m_executionStartedEventDetailsHasBeenSet(false),
    m_executionSucceededEventDetailsHasBeenSet(false),
    m_executionAbortedEventDetailsHasBeenSet(false),
    m_executionTimedOutEventDetailsHasBeenSet(false),
    m_mapStateStartedEventDetailsHasBeenSet(false),
    m_mapIterationStartedEventDetailsHasBeenSet(false),
    m_mapIterationSucceededEventDetailsHasBeenSet(false),
    m_mapIterationFailedEventDetailsHasBeenSet(false),
    m_mapIterationAbortedEventDetailsHasBeenSet(false),
    m_lambdaFunctionFailedEventDetailsHasBeenSet(false),
    m_lambdaFunctionScheduleFailedEventDetailsHasBeenSet(false),
    m_lambdaFunctionScheduledEventDetailsHasBeenSet(false),
    m_lambdaFunctionStartFailedEventDetailsHasBeenSet(false),
    m_lambdaFunctionSucceededEventDetailsHasBeenSet(false),
    m_lambdaFunctionTimedOutEventDetailsHasBeenSet(false),
    m_stateEnteredEventDetailsHasBeenSet(false),
    m_stateExitedEventDetailsHasBeenSet(false),
    m_mapRunStartedEventDetailsHasBeenSet(false),
    m_mapRunFailedEventDetailsHasBeenSet(false)
{
}

HistoryEvent::HistoryEvent(JsonView jsonValue) : 
    m_timestampHasBeenSet(false),
    m_type(HistoryEventType::NOT_SET),
    m_typeHasBeenSet(false),
    m_id(0),
    m_idHasBeenSet(false),
    m_previousEventId(0),
    m_previousEventIdHasBeenSet(false),
    m_activityFailedEventDetailsHasBeenSet(false),
    m_activityScheduleFailedEventDetailsHasBeenSet(false),
    m_activityScheduledEventDetailsHasBeenSet(false),
    m_activityStartedEventDetailsHasBeenSet(false),
    m_activitySucceededEventDetailsHasBeenSet(false),
    m_activityTimedOutEventDetailsHasBeenSet(false),
    m_taskFailedEventDetailsHasBeenSet(false),
    m_taskScheduledEventDetailsHasBeenSet(false),
    m_taskStartFailedEventDetailsHasBeenSet(false),
    m_taskStartedEventDetailsHasBeenSet(false),
    m_taskSubmitFailedEventDetailsHasBeenSet(false),
    m_taskSubmittedEventDetailsHasBeenSet(false),
    m_taskSucceededEventDetailsHasBeenSet(false),
    m_taskTimedOutEventDetailsHasBeenSet(false),
    m_executionFailedEventDetailsHasBeenSet(false),
    m_executionStartedEventDetailsHasBeenSet(false),
    m_executionSucceededEventDetailsHasBeenSet(false),
    m_executionAbortedEventDetailsHasBeenSet(false),
    m_executionTimedOutEventDetailsHasBeenSet(false),
    m_mapStateStartedEventDetailsHasBeenSet(false),
    m_mapIterationStartedEventDetailsHasBeenSet(false),
    m_mapIterationSucceededEventDetailsHasBeenSet(false),
    m_mapIterationFailedEventDetailsHasBeenSet(false),
    m_mapIterationAbortedEventDetailsHasBeenSet(false),
    m_lambdaFunctionFailedEventDetailsHasBeenSet(false),
    m_lambdaFunctionScheduleFailedEventDetailsHasBeenSet(false),
    m_lambdaFunctionScheduledEventDetailsHasBeenSet(false),
    m_lambdaFunctionStartFailedEventDetailsHasBeenSet(false),
    m_lambdaFunctionSucceededEventDetailsHasBeenSet(false),
    m_lambdaFunctionTimedOutEventDetailsHasBeenSet(false),
    m_stateEnteredEventDetailsHasBeenSet(false),
    m_stateExitedEventDetailsHasBeenSet(false),
    m_mapRunStartedEventDetailsHasBeenSet(false),
    m_mapRunFailedEventDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

HistoryEvent& HistoryEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("timestamp");

    m_timestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = HistoryEventTypeMapper::GetHistoryEventTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetInt64("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("previousEventId"))
  {
    m_previousEventId = jsonValue.GetInt64("previousEventId");

    m_previousEventIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("activityFailedEventDetails"))
  {
    m_activityFailedEventDetails = jsonValue.GetObject("activityFailedEventDetails");

    m_activityFailedEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("activityScheduleFailedEventDetails"))
  {
    m_activityScheduleFailedEventDetails = jsonValue.GetObject("activityScheduleFailedEventDetails");

    m_activityScheduleFailedEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("activityScheduledEventDetails"))
  {
    m_activityScheduledEventDetails = jsonValue.GetObject("activityScheduledEventDetails");

    m_activityScheduledEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("activityStartedEventDetails"))
  {
    m_activityStartedEventDetails = jsonValue.GetObject("activityStartedEventDetails");

    m_activityStartedEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("activitySucceededEventDetails"))
  {
    m_activitySucceededEventDetails = jsonValue.GetObject("activitySucceededEventDetails");

    m_activitySucceededEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("activityTimedOutEventDetails"))
  {
    m_activityTimedOutEventDetails = jsonValue.GetObject("activityTimedOutEventDetails");

    m_activityTimedOutEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskFailedEventDetails"))
  {
    m_taskFailedEventDetails = jsonValue.GetObject("taskFailedEventDetails");

    m_taskFailedEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskScheduledEventDetails"))
  {
    m_taskScheduledEventDetails = jsonValue.GetObject("taskScheduledEventDetails");

    m_taskScheduledEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskStartFailedEventDetails"))
  {
    m_taskStartFailedEventDetails = jsonValue.GetObject("taskStartFailedEventDetails");

    m_taskStartFailedEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskStartedEventDetails"))
  {
    m_taskStartedEventDetails = jsonValue.GetObject("taskStartedEventDetails");

    m_taskStartedEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskSubmitFailedEventDetails"))
  {
    m_taskSubmitFailedEventDetails = jsonValue.GetObject("taskSubmitFailedEventDetails");

    m_taskSubmitFailedEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskSubmittedEventDetails"))
  {
    m_taskSubmittedEventDetails = jsonValue.GetObject("taskSubmittedEventDetails");

    m_taskSubmittedEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskSucceededEventDetails"))
  {
    m_taskSucceededEventDetails = jsonValue.GetObject("taskSucceededEventDetails");

    m_taskSucceededEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskTimedOutEventDetails"))
  {
    m_taskTimedOutEventDetails = jsonValue.GetObject("taskTimedOutEventDetails");

    m_taskTimedOutEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionFailedEventDetails"))
  {
    m_executionFailedEventDetails = jsonValue.GetObject("executionFailedEventDetails");

    m_executionFailedEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionStartedEventDetails"))
  {
    m_executionStartedEventDetails = jsonValue.GetObject("executionStartedEventDetails");

    m_executionStartedEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionSucceededEventDetails"))
  {
    m_executionSucceededEventDetails = jsonValue.GetObject("executionSucceededEventDetails");

    m_executionSucceededEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionAbortedEventDetails"))
  {
    m_executionAbortedEventDetails = jsonValue.GetObject("executionAbortedEventDetails");

    m_executionAbortedEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionTimedOutEventDetails"))
  {
    m_executionTimedOutEventDetails = jsonValue.GetObject("executionTimedOutEventDetails");

    m_executionTimedOutEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mapStateStartedEventDetails"))
  {
    m_mapStateStartedEventDetails = jsonValue.GetObject("mapStateStartedEventDetails");

    m_mapStateStartedEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mapIterationStartedEventDetails"))
  {
    m_mapIterationStartedEventDetails = jsonValue.GetObject("mapIterationStartedEventDetails");

    m_mapIterationStartedEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mapIterationSucceededEventDetails"))
  {
    m_mapIterationSucceededEventDetails = jsonValue.GetObject("mapIterationSucceededEventDetails");

    m_mapIterationSucceededEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mapIterationFailedEventDetails"))
  {
    m_mapIterationFailedEventDetails = jsonValue.GetObject("mapIterationFailedEventDetails");

    m_mapIterationFailedEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mapIterationAbortedEventDetails"))
  {
    m_mapIterationAbortedEventDetails = jsonValue.GetObject("mapIterationAbortedEventDetails");

    m_mapIterationAbortedEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lambdaFunctionFailedEventDetails"))
  {
    m_lambdaFunctionFailedEventDetails = jsonValue.GetObject("lambdaFunctionFailedEventDetails");

    m_lambdaFunctionFailedEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lambdaFunctionScheduleFailedEventDetails"))
  {
    m_lambdaFunctionScheduleFailedEventDetails = jsonValue.GetObject("lambdaFunctionScheduleFailedEventDetails");

    m_lambdaFunctionScheduleFailedEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lambdaFunctionScheduledEventDetails"))
  {
    m_lambdaFunctionScheduledEventDetails = jsonValue.GetObject("lambdaFunctionScheduledEventDetails");

    m_lambdaFunctionScheduledEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lambdaFunctionStartFailedEventDetails"))
  {
    m_lambdaFunctionStartFailedEventDetails = jsonValue.GetObject("lambdaFunctionStartFailedEventDetails");

    m_lambdaFunctionStartFailedEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lambdaFunctionSucceededEventDetails"))
  {
    m_lambdaFunctionSucceededEventDetails = jsonValue.GetObject("lambdaFunctionSucceededEventDetails");

    m_lambdaFunctionSucceededEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lambdaFunctionTimedOutEventDetails"))
  {
    m_lambdaFunctionTimedOutEventDetails = jsonValue.GetObject("lambdaFunctionTimedOutEventDetails");

    m_lambdaFunctionTimedOutEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stateEnteredEventDetails"))
  {
    m_stateEnteredEventDetails = jsonValue.GetObject("stateEnteredEventDetails");

    m_stateEnteredEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stateExitedEventDetails"))
  {
    m_stateExitedEventDetails = jsonValue.GetObject("stateExitedEventDetails");

    m_stateExitedEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mapRunStartedEventDetails"))
  {
    m_mapRunStartedEventDetails = jsonValue.GetObject("mapRunStartedEventDetails");

    m_mapRunStartedEventDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mapRunFailedEventDetails"))
  {
    m_mapRunFailedEventDetails = jsonValue.GetObject("mapRunFailedEventDetails");

    m_mapRunFailedEventDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue HistoryEvent::Jsonize() const
{
  JsonValue payload;

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", HistoryEventTypeMapper::GetNameForHistoryEventType(m_type));
  }

  if(m_idHasBeenSet)
  {
   payload.WithInt64("id", m_id);

  }

  if(m_previousEventIdHasBeenSet)
  {
   payload.WithInt64("previousEventId", m_previousEventId);

  }

  if(m_activityFailedEventDetailsHasBeenSet)
  {
   payload.WithObject("activityFailedEventDetails", m_activityFailedEventDetails.Jsonize());

  }

  if(m_activityScheduleFailedEventDetailsHasBeenSet)
  {
   payload.WithObject("activityScheduleFailedEventDetails", m_activityScheduleFailedEventDetails.Jsonize());

  }

  if(m_activityScheduledEventDetailsHasBeenSet)
  {
   payload.WithObject("activityScheduledEventDetails", m_activityScheduledEventDetails.Jsonize());

  }

  if(m_activityStartedEventDetailsHasBeenSet)
  {
   payload.WithObject("activityStartedEventDetails", m_activityStartedEventDetails.Jsonize());

  }

  if(m_activitySucceededEventDetailsHasBeenSet)
  {
   payload.WithObject("activitySucceededEventDetails", m_activitySucceededEventDetails.Jsonize());

  }

  if(m_activityTimedOutEventDetailsHasBeenSet)
  {
   payload.WithObject("activityTimedOutEventDetails", m_activityTimedOutEventDetails.Jsonize());

  }

  if(m_taskFailedEventDetailsHasBeenSet)
  {
   payload.WithObject("taskFailedEventDetails", m_taskFailedEventDetails.Jsonize());

  }

  if(m_taskScheduledEventDetailsHasBeenSet)
  {
   payload.WithObject("taskScheduledEventDetails", m_taskScheduledEventDetails.Jsonize());

  }

  if(m_taskStartFailedEventDetailsHasBeenSet)
  {
   payload.WithObject("taskStartFailedEventDetails", m_taskStartFailedEventDetails.Jsonize());

  }

  if(m_taskStartedEventDetailsHasBeenSet)
  {
   payload.WithObject("taskStartedEventDetails", m_taskStartedEventDetails.Jsonize());

  }

  if(m_taskSubmitFailedEventDetailsHasBeenSet)
  {
   payload.WithObject("taskSubmitFailedEventDetails", m_taskSubmitFailedEventDetails.Jsonize());

  }

  if(m_taskSubmittedEventDetailsHasBeenSet)
  {
   payload.WithObject("taskSubmittedEventDetails", m_taskSubmittedEventDetails.Jsonize());

  }

  if(m_taskSucceededEventDetailsHasBeenSet)
  {
   payload.WithObject("taskSucceededEventDetails", m_taskSucceededEventDetails.Jsonize());

  }

  if(m_taskTimedOutEventDetailsHasBeenSet)
  {
   payload.WithObject("taskTimedOutEventDetails", m_taskTimedOutEventDetails.Jsonize());

  }

  if(m_executionFailedEventDetailsHasBeenSet)
  {
   payload.WithObject("executionFailedEventDetails", m_executionFailedEventDetails.Jsonize());

  }

  if(m_executionStartedEventDetailsHasBeenSet)
  {
   payload.WithObject("executionStartedEventDetails", m_executionStartedEventDetails.Jsonize());

  }

  if(m_executionSucceededEventDetailsHasBeenSet)
  {
   payload.WithObject("executionSucceededEventDetails", m_executionSucceededEventDetails.Jsonize());

  }

  if(m_executionAbortedEventDetailsHasBeenSet)
  {
   payload.WithObject("executionAbortedEventDetails", m_executionAbortedEventDetails.Jsonize());

  }

  if(m_executionTimedOutEventDetailsHasBeenSet)
  {
   payload.WithObject("executionTimedOutEventDetails", m_executionTimedOutEventDetails.Jsonize());

  }

  if(m_mapStateStartedEventDetailsHasBeenSet)
  {
   payload.WithObject("mapStateStartedEventDetails", m_mapStateStartedEventDetails.Jsonize());

  }

  if(m_mapIterationStartedEventDetailsHasBeenSet)
  {
   payload.WithObject("mapIterationStartedEventDetails", m_mapIterationStartedEventDetails.Jsonize());

  }

  if(m_mapIterationSucceededEventDetailsHasBeenSet)
  {
   payload.WithObject("mapIterationSucceededEventDetails", m_mapIterationSucceededEventDetails.Jsonize());

  }

  if(m_mapIterationFailedEventDetailsHasBeenSet)
  {
   payload.WithObject("mapIterationFailedEventDetails", m_mapIterationFailedEventDetails.Jsonize());

  }

  if(m_mapIterationAbortedEventDetailsHasBeenSet)
  {
   payload.WithObject("mapIterationAbortedEventDetails", m_mapIterationAbortedEventDetails.Jsonize());

  }

  if(m_lambdaFunctionFailedEventDetailsHasBeenSet)
  {
   payload.WithObject("lambdaFunctionFailedEventDetails", m_lambdaFunctionFailedEventDetails.Jsonize());

  }

  if(m_lambdaFunctionScheduleFailedEventDetailsHasBeenSet)
  {
   payload.WithObject("lambdaFunctionScheduleFailedEventDetails", m_lambdaFunctionScheduleFailedEventDetails.Jsonize());

  }

  if(m_lambdaFunctionScheduledEventDetailsHasBeenSet)
  {
   payload.WithObject("lambdaFunctionScheduledEventDetails", m_lambdaFunctionScheduledEventDetails.Jsonize());

  }

  if(m_lambdaFunctionStartFailedEventDetailsHasBeenSet)
  {
   payload.WithObject("lambdaFunctionStartFailedEventDetails", m_lambdaFunctionStartFailedEventDetails.Jsonize());

  }

  if(m_lambdaFunctionSucceededEventDetailsHasBeenSet)
  {
   payload.WithObject("lambdaFunctionSucceededEventDetails", m_lambdaFunctionSucceededEventDetails.Jsonize());

  }

  if(m_lambdaFunctionTimedOutEventDetailsHasBeenSet)
  {
   payload.WithObject("lambdaFunctionTimedOutEventDetails", m_lambdaFunctionTimedOutEventDetails.Jsonize());

  }

  if(m_stateEnteredEventDetailsHasBeenSet)
  {
   payload.WithObject("stateEnteredEventDetails", m_stateEnteredEventDetails.Jsonize());

  }

  if(m_stateExitedEventDetailsHasBeenSet)
  {
   payload.WithObject("stateExitedEventDetails", m_stateExitedEventDetails.Jsonize());

  }

  if(m_mapRunStartedEventDetailsHasBeenSet)
  {
   payload.WithObject("mapRunStartedEventDetails", m_mapRunStartedEventDetails.Jsonize());

  }

  if(m_mapRunFailedEventDetailsHasBeenSet)
  {
   payload.WithObject("mapRunFailedEventDetails", m_mapRunFailedEventDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws
