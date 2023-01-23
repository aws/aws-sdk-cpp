/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/UpdateMaintenanceWindowTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateMaintenanceWindowTaskRequest::UpdateMaintenanceWindowTaskRequest() : 
    m_windowIdHasBeenSet(false),
    m_windowTaskIdHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_taskArnHasBeenSet(false),
    m_serviceRoleArnHasBeenSet(false),
    m_taskParametersHasBeenSet(false),
    m_taskInvocationParametersHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_maxConcurrencyHasBeenSet(false),
    m_maxErrorsHasBeenSet(false),
    m_loggingInfoHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_replace(false),
    m_replaceHasBeenSet(false),
    m_cutoffBehavior(MaintenanceWindowTaskCutoffBehavior::NOT_SET),
    m_cutoffBehaviorHasBeenSet(false),
    m_alarmConfigurationHasBeenSet(false)
{
}

Aws::String UpdateMaintenanceWindowTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_windowIdHasBeenSet)
  {
   payload.WithString("WindowId", m_windowId);

  }

  if(m_windowTaskIdHasBeenSet)
  {
   payload.WithString("WindowTaskId", m_windowTaskId);

  }

  if(m_targetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetsJsonList(m_targets.size());
   for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
   {
     targetsJsonList[targetsIndex].AsObject(m_targets[targetsIndex].Jsonize());
   }
   payload.WithArray("Targets", std::move(targetsJsonList));

  }

  if(m_taskArnHasBeenSet)
  {
   payload.WithString("TaskArn", m_taskArn);

  }

  if(m_serviceRoleArnHasBeenSet)
  {
   payload.WithString("ServiceRoleArn", m_serviceRoleArn);

  }

  if(m_taskParametersHasBeenSet)
  {
   JsonValue taskParametersJsonMap;
   for(auto& taskParametersItem : m_taskParameters)
   {
     taskParametersJsonMap.WithObject(taskParametersItem.first, taskParametersItem.second.Jsonize());
   }
   payload.WithObject("TaskParameters", std::move(taskParametersJsonMap));

  }

  if(m_taskInvocationParametersHasBeenSet)
  {
   payload.WithObject("TaskInvocationParameters", m_taskInvocationParameters.Jsonize());

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("Priority", m_priority);

  }

  if(m_maxConcurrencyHasBeenSet)
  {
   payload.WithString("MaxConcurrency", m_maxConcurrency);

  }

  if(m_maxErrorsHasBeenSet)
  {
   payload.WithString("MaxErrors", m_maxErrors);

  }

  if(m_loggingInfoHasBeenSet)
  {
   payload.WithObject("LoggingInfo", m_loggingInfo.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_replaceHasBeenSet)
  {
   payload.WithBool("Replace", m_replace);

  }

  if(m_cutoffBehaviorHasBeenSet)
  {
   payload.WithString("CutoffBehavior", MaintenanceWindowTaskCutoffBehaviorMapper::GetNameForMaintenanceWindowTaskCutoffBehavior(m_cutoffBehavior));
  }

  if(m_alarmConfigurationHasBeenSet)
  {
   payload.WithObject("AlarmConfiguration", m_alarmConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateMaintenanceWindowTaskRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.UpdateMaintenanceWindowTask"));
  return headers;

}




