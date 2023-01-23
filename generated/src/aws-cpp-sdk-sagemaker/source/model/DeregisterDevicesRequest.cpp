/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DeregisterDevicesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeregisterDevicesRequest::DeregisterDevicesRequest() : 
    m_deviceFleetNameHasBeenSet(false),
    m_deviceNamesHasBeenSet(false)
{
}

Aws::String DeregisterDevicesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deviceFleetNameHasBeenSet)
  {
   payload.WithString("DeviceFleetName", m_deviceFleetName);

  }

  if(m_deviceNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deviceNamesJsonList(m_deviceNames.size());
   for(unsigned deviceNamesIndex = 0; deviceNamesIndex < deviceNamesJsonList.GetLength(); ++deviceNamesIndex)
   {
     deviceNamesJsonList[deviceNamesIndex].AsString(m_deviceNames[deviceNamesIndex]);
   }
   payload.WithArray("DeviceNames", std::move(deviceNamesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeregisterDevicesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DeregisterDevices"));
  return headers;

}




