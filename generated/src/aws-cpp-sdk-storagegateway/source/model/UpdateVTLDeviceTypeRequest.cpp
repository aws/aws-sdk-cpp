/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/UpdateVTLDeviceTypeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateVTLDeviceTypeRequest::UpdateVTLDeviceTypeRequest() : 
    m_vTLDeviceARNHasBeenSet(false),
    m_deviceTypeHasBeenSet(false)
{
}

Aws::String UpdateVTLDeviceTypeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_vTLDeviceARNHasBeenSet)
  {
   payload.WithString("VTLDeviceARN", m_vTLDeviceARN);

  }

  if(m_deviceTypeHasBeenSet)
  {
   payload.WithString("DeviceType", m_deviceType);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateVTLDeviceTypeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.UpdateVTLDeviceType"));
  return headers;

}




