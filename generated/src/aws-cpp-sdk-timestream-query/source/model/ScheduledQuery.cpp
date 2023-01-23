/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/ScheduledQuery.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamQuery
{
namespace Model
{

ScheduledQuery::ScheduledQuery() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_state(ScheduledQueryState::NOT_SET),
    m_stateHasBeenSet(false),
    m_previousInvocationTimeHasBeenSet(false),
    m_nextInvocationTimeHasBeenSet(false),
    m_errorReportConfigurationHasBeenSet(false),
    m_targetDestinationHasBeenSet(false),
    m_lastRunStatus(ScheduledQueryRunStatus::NOT_SET),
    m_lastRunStatusHasBeenSet(false)
{
}

ScheduledQuery::ScheduledQuery(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_state(ScheduledQueryState::NOT_SET),
    m_stateHasBeenSet(false),
    m_previousInvocationTimeHasBeenSet(false),
    m_nextInvocationTimeHasBeenSet(false),
    m_errorReportConfigurationHasBeenSet(false),
    m_targetDestinationHasBeenSet(false),
    m_lastRunStatus(ScheduledQueryRunStatus::NOT_SET),
    m_lastRunStatusHasBeenSet(false)
{
  *this = jsonValue;
}

ScheduledQuery& ScheduledQuery::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = ScheduledQueryStateMapper::GetScheduledQueryStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PreviousInvocationTime"))
  {
    m_previousInvocationTime = jsonValue.GetDouble("PreviousInvocationTime");

    m_previousInvocationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NextInvocationTime"))
  {
    m_nextInvocationTime = jsonValue.GetDouble("NextInvocationTime");

    m_nextInvocationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorReportConfiguration"))
  {
    m_errorReportConfiguration = jsonValue.GetObject("ErrorReportConfiguration");

    m_errorReportConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetDestination"))
  {
    m_targetDestination = jsonValue.GetObject("TargetDestination");

    m_targetDestinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastRunStatus"))
  {
    m_lastRunStatus = ScheduledQueryRunStatusMapper::GetScheduledQueryRunStatusForName(jsonValue.GetString("LastRunStatus"));

    m_lastRunStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue ScheduledQuery::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", ScheduledQueryStateMapper::GetNameForScheduledQueryState(m_state));
  }

  if(m_previousInvocationTimeHasBeenSet)
  {
   payload.WithDouble("PreviousInvocationTime", m_previousInvocationTime.SecondsWithMSPrecision());
  }

  if(m_nextInvocationTimeHasBeenSet)
  {
   payload.WithDouble("NextInvocationTime", m_nextInvocationTime.SecondsWithMSPrecision());
  }

  if(m_errorReportConfigurationHasBeenSet)
  {
   payload.WithObject("ErrorReportConfiguration", m_errorReportConfiguration.Jsonize());

  }

  if(m_targetDestinationHasBeenSet)
  {
   payload.WithObject("TargetDestination", m_targetDestination.Jsonize());

  }

  if(m_lastRunStatusHasBeenSet)
  {
   payload.WithString("LastRunStatus", ScheduledQueryRunStatusMapper::GetNameForScheduledQueryRunStatus(m_lastRunStatus));
  }

  return payload;
}

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
