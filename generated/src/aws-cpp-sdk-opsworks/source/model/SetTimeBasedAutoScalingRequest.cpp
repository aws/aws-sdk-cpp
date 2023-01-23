/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/SetTimeBasedAutoScalingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SetTimeBasedAutoScalingRequest::SetTimeBasedAutoScalingRequest() : 
    m_instanceIdHasBeenSet(false),
    m_autoScalingScheduleHasBeenSet(false)
{
}

Aws::String SetTimeBasedAutoScalingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_autoScalingScheduleHasBeenSet)
  {
   payload.WithObject("AutoScalingSchedule", m_autoScalingSchedule.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SetTimeBasedAutoScalingRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.SetTimeBasedAutoScaling"));
  return headers;

}




