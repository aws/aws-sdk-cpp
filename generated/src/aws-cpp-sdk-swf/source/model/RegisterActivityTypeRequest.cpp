/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/RegisterActivityTypeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SWF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RegisterActivityTypeRequest::RegisterActivityTypeRequest() : 
    m_domainHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_defaultTaskStartToCloseTimeoutHasBeenSet(false),
    m_defaultTaskHeartbeatTimeoutHasBeenSet(false),
    m_defaultTaskListHasBeenSet(false),
    m_defaultTaskPriorityHasBeenSet(false),
    m_defaultTaskScheduleToStartTimeoutHasBeenSet(false),
    m_defaultTaskScheduleToCloseTimeoutHasBeenSet(false)
{
}

Aws::String RegisterActivityTypeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainHasBeenSet)
  {
   payload.WithString("domain", m_domain);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_defaultTaskStartToCloseTimeoutHasBeenSet)
  {
   payload.WithString("defaultTaskStartToCloseTimeout", m_defaultTaskStartToCloseTimeout);

  }

  if(m_defaultTaskHeartbeatTimeoutHasBeenSet)
  {
   payload.WithString("defaultTaskHeartbeatTimeout", m_defaultTaskHeartbeatTimeout);

  }

  if(m_defaultTaskListHasBeenSet)
  {
   payload.WithObject("defaultTaskList", m_defaultTaskList.Jsonize());

  }

  if(m_defaultTaskPriorityHasBeenSet)
  {
   payload.WithString("defaultTaskPriority", m_defaultTaskPriority);

  }

  if(m_defaultTaskScheduleToStartTimeoutHasBeenSet)
  {
   payload.WithString("defaultTaskScheduleToStartTimeout", m_defaultTaskScheduleToStartTimeout);

  }

  if(m_defaultTaskScheduleToCloseTimeoutHasBeenSet)
  {
   payload.WithString("defaultTaskScheduleToCloseTimeout", m_defaultTaskScheduleToCloseTimeout);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RegisterActivityTypeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SimpleWorkflowService.RegisterActivityType"));
  return headers;

}




