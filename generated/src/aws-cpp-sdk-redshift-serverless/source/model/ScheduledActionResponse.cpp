/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/ScheduledActionResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

ScheduledActionResponse::ScheduledActionResponse() : 
    m_endTimeHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_nextInvocationsHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_scheduledActionDescriptionHasBeenSet(false),
    m_scheduledActionNameHasBeenSet(false),
    m_scheduledActionUuidHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_state(State::NOT_SET),
    m_stateHasBeenSet(false),
    m_targetActionHasBeenSet(false)
{
}

ScheduledActionResponse::ScheduledActionResponse(JsonView jsonValue) : 
    m_endTimeHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_nextInvocationsHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_scheduledActionDescriptionHasBeenSet(false),
    m_scheduledActionNameHasBeenSet(false),
    m_scheduledActionUuidHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_state(State::NOT_SET),
    m_stateHasBeenSet(false),
    m_targetActionHasBeenSet(false)
{
  *this = jsonValue;
}

ScheduledActionResponse& ScheduledActionResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("namespaceName"))
  {
    m_namespaceName = jsonValue.GetString("namespaceName");

    m_namespaceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nextInvocations"))
  {
    Aws::Utils::Array<JsonView> nextInvocationsJsonList = jsonValue.GetArray("nextInvocations");
    for(unsigned nextInvocationsIndex = 0; nextInvocationsIndex < nextInvocationsJsonList.GetLength(); ++nextInvocationsIndex)
    {
      m_nextInvocations.push_back(nextInvocationsJsonList[nextInvocationsIndex].AsDouble());
    }
    m_nextInvocationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("schedule"))
  {
    m_schedule = jsonValue.GetObject("schedule");

    m_scheduleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scheduledActionDescription"))
  {
    m_scheduledActionDescription = jsonValue.GetString("scheduledActionDescription");

    m_scheduledActionDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scheduledActionName"))
  {
    m_scheduledActionName = jsonValue.GetString("scheduledActionName");

    m_scheduledActionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scheduledActionUuid"))
  {
    m_scheduledActionUuid = jsonValue.GetString("scheduledActionUuid");

    m_scheduledActionUuidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = StateMapper::GetStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetAction"))
  {
    m_targetAction = jsonValue.GetObject("targetAction");

    m_targetActionHasBeenSet = true;
  }

  return *this;
}

JsonValue ScheduledActionResponse::Jsonize() const
{
  JsonValue payload;

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_namespaceNameHasBeenSet)
  {
   payload.WithString("namespaceName", m_namespaceName);

  }

  if(m_nextInvocationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nextInvocationsJsonList(m_nextInvocations.size());
   for(unsigned nextInvocationsIndex = 0; nextInvocationsIndex < nextInvocationsJsonList.GetLength(); ++nextInvocationsIndex)
   {
     nextInvocationsJsonList[nextInvocationsIndex].AsDouble(m_nextInvocations[nextInvocationsIndex].SecondsWithMSPrecision());
   }
   payload.WithArray("nextInvocations", std::move(nextInvocationsJsonList));

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_scheduleHasBeenSet)
  {
   payload.WithObject("schedule", m_schedule.Jsonize());

  }

  if(m_scheduledActionDescriptionHasBeenSet)
  {
   payload.WithString("scheduledActionDescription", m_scheduledActionDescription);

  }

  if(m_scheduledActionNameHasBeenSet)
  {
   payload.WithString("scheduledActionName", m_scheduledActionName);

  }

  if(m_scheduledActionUuidHasBeenSet)
  {
   payload.WithString("scheduledActionUuid", m_scheduledActionUuid);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", StateMapper::GetNameForState(m_state));
  }

  if(m_targetActionHasBeenSet)
  {
   payload.WithObject("targetAction", m_targetAction.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
