/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/ScheduledQueryDescription.h>
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

ScheduledQueryDescription::ScheduledQueryDescription() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_queryStringHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_state(ScheduledQueryState::NOT_SET),
    m_stateHasBeenSet(false),
    m_previousInvocationTimeHasBeenSet(false),
    m_nextInvocationTimeHasBeenSet(false),
    m_scheduleConfigurationHasBeenSet(false),
    m_notificationConfigurationHasBeenSet(false),
    m_targetConfigurationHasBeenSet(false),
    m_scheduledQueryExecutionRoleArnHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_errorReportConfigurationHasBeenSet(false),
    m_lastRunSummaryHasBeenSet(false),
    m_recentlyFailedRunsHasBeenSet(false)
{
}

ScheduledQueryDescription::ScheduledQueryDescription(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_queryStringHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_state(ScheduledQueryState::NOT_SET),
    m_stateHasBeenSet(false),
    m_previousInvocationTimeHasBeenSet(false),
    m_nextInvocationTimeHasBeenSet(false),
    m_scheduleConfigurationHasBeenSet(false),
    m_notificationConfigurationHasBeenSet(false),
    m_targetConfigurationHasBeenSet(false),
    m_scheduledQueryExecutionRoleArnHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_errorReportConfigurationHasBeenSet(false),
    m_lastRunSummaryHasBeenSet(false),
    m_recentlyFailedRunsHasBeenSet(false)
{
  *this = jsonValue;
}

ScheduledQueryDescription& ScheduledQueryDescription::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("QueryString"))
  {
    m_queryString = jsonValue.GetString("QueryString");

    m_queryStringHasBeenSet = true;
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

  if(jsonValue.ValueExists("ScheduleConfiguration"))
  {
    m_scheduleConfiguration = jsonValue.GetObject("ScheduleConfiguration");

    m_scheduleConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotificationConfiguration"))
  {
    m_notificationConfiguration = jsonValue.GetObject("NotificationConfiguration");

    m_notificationConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetConfiguration"))
  {
    m_targetConfiguration = jsonValue.GetObject("TargetConfiguration");

    m_targetConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScheduledQueryExecutionRoleArn"))
  {
    m_scheduledQueryExecutionRoleArn = jsonValue.GetString("ScheduledQueryExecutionRoleArn");

    m_scheduledQueryExecutionRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorReportConfiguration"))
  {
    m_errorReportConfiguration = jsonValue.GetObject("ErrorReportConfiguration");

    m_errorReportConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastRunSummary"))
  {
    m_lastRunSummary = jsonValue.GetObject("LastRunSummary");

    m_lastRunSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecentlyFailedRuns"))
  {
    Aws::Utils::Array<JsonView> recentlyFailedRunsJsonList = jsonValue.GetArray("RecentlyFailedRuns");
    for(unsigned recentlyFailedRunsIndex = 0; recentlyFailedRunsIndex < recentlyFailedRunsJsonList.GetLength(); ++recentlyFailedRunsIndex)
    {
      m_recentlyFailedRuns.push_back(recentlyFailedRunsJsonList[recentlyFailedRunsIndex].AsObject());
    }
    m_recentlyFailedRunsHasBeenSet = true;
  }

  return *this;
}

JsonValue ScheduledQueryDescription::Jsonize() const
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

  if(m_queryStringHasBeenSet)
  {
   payload.WithString("QueryString", m_queryString);

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

  if(m_scheduleConfigurationHasBeenSet)
  {
   payload.WithObject("ScheduleConfiguration", m_scheduleConfiguration.Jsonize());

  }

  if(m_notificationConfigurationHasBeenSet)
  {
   payload.WithObject("NotificationConfiguration", m_notificationConfiguration.Jsonize());

  }

  if(m_targetConfigurationHasBeenSet)
  {
   payload.WithObject("TargetConfiguration", m_targetConfiguration.Jsonize());

  }

  if(m_scheduledQueryExecutionRoleArnHasBeenSet)
  {
   payload.WithString("ScheduledQueryExecutionRoleArn", m_scheduledQueryExecutionRoleArn);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_errorReportConfigurationHasBeenSet)
  {
   payload.WithObject("ErrorReportConfiguration", m_errorReportConfiguration.Jsonize());

  }

  if(m_lastRunSummaryHasBeenSet)
  {
   payload.WithObject("LastRunSummary", m_lastRunSummary.Jsonize());

  }

  if(m_recentlyFailedRunsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recentlyFailedRunsJsonList(m_recentlyFailedRuns.size());
   for(unsigned recentlyFailedRunsIndex = 0; recentlyFailedRunsIndex < recentlyFailedRunsJsonList.GetLength(); ++recentlyFailedRunsIndex)
   {
     recentlyFailedRunsJsonList[recentlyFailedRunsIndex].AsObject(m_recentlyFailedRuns[recentlyFailedRunsIndex].Jsonize());
   }
   payload.WithArray("RecentlyFailedRuns", std::move(recentlyFailedRunsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
