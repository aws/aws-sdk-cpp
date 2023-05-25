/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateMonitoringScheduleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateMonitoringScheduleRequest::CreateMonitoringScheduleRequest() : 
    m_monitoringScheduleNameHasBeenSet(false),
    m_monitoringScheduleConfigHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateMonitoringScheduleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_monitoringScheduleNameHasBeenSet)
  {
   payload.WithString("MonitoringScheduleName", m_monitoringScheduleName);

  }

  if(m_monitoringScheduleConfigHasBeenSet)
  {
   payload.WithObject("MonitoringScheduleConfig", m_monitoringScheduleConfig.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateMonitoringScheduleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateMonitoringSchedule"));
  return headers;

}




