/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/PutTelemetryRecordsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::XRay::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutTelemetryRecordsRequest::PutTelemetryRecordsRequest() : 
    m_telemetryRecordsHasBeenSet(false),
    m_eC2InstanceIdHasBeenSet(false),
    m_hostnameHasBeenSet(false),
    m_resourceARNHasBeenSet(false)
{
}

Aws::String PutTelemetryRecordsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_telemetryRecordsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> telemetryRecordsJsonList(m_telemetryRecords.size());
   for(unsigned telemetryRecordsIndex = 0; telemetryRecordsIndex < telemetryRecordsJsonList.GetLength(); ++telemetryRecordsIndex)
   {
     telemetryRecordsJsonList[telemetryRecordsIndex].AsObject(m_telemetryRecords[telemetryRecordsIndex].Jsonize());
   }
   payload.WithArray("TelemetryRecords", std::move(telemetryRecordsJsonList));

  }

  if(m_eC2InstanceIdHasBeenSet)
  {
   payload.WithString("EC2InstanceId", m_eC2InstanceId);

  }

  if(m_hostnameHasBeenSet)
  {
   payload.WithString("Hostname", m_hostname);

  }

  if(m_resourceARNHasBeenSet)
  {
   payload.WithString("ResourceARN", m_resourceARN);

  }

  return payload.View().WriteReadable();
}




