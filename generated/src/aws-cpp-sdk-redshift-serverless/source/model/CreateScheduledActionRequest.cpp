/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/CreateScheduledActionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateScheduledActionRequest::CreateScheduledActionRequest() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_scheduledActionDescriptionHasBeenSet(false),
    m_scheduledActionNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_targetActionHasBeenSet(false)
{
}

Aws::String CreateScheduledActionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_namespaceNameHasBeenSet)
  {
   payload.WithString("namespaceName", m_namespaceName);

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

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_targetActionHasBeenSet)
  {
   payload.WithObject("targetAction", m_targetAction.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateScheduledActionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RedshiftServerless.CreateScheduledAction"));
  return headers;

}




