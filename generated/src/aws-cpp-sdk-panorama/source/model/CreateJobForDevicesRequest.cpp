/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/CreateJobForDevicesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Panorama::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateJobForDevicesRequest::CreateJobForDevicesRequest() : 
    m_deviceIdsHasBeenSet(false),
    m_deviceJobConfigHasBeenSet(false),
    m_jobType(JobType::NOT_SET),
    m_jobTypeHasBeenSet(false)
{
}

Aws::String CreateJobForDevicesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deviceIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deviceIdsJsonList(m_deviceIds.size());
   for(unsigned deviceIdsIndex = 0; deviceIdsIndex < deviceIdsJsonList.GetLength(); ++deviceIdsIndex)
   {
     deviceIdsJsonList[deviceIdsIndex].AsString(m_deviceIds[deviceIdsIndex]);
   }
   payload.WithArray("DeviceIds", std::move(deviceIdsJsonList));

  }

  if(m_deviceJobConfigHasBeenSet)
  {
   payload.WithObject("DeviceJobConfig", m_deviceJobConfig.Jsonize());

  }

  if(m_jobTypeHasBeenSet)
  {
   payload.WithString("JobType", JobTypeMapper::GetNameForJobType(m_jobType));
  }

  return payload.View().WriteReadable();
}




