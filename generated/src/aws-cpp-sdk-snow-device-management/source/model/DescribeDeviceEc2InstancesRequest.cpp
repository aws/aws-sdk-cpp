/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snow-device-management/model/DescribeDeviceEc2InstancesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SnowDeviceManagement::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeDeviceEc2InstancesRequest::DescribeDeviceEc2InstancesRequest() : 
    m_instanceIdsHasBeenSet(false),
    m_managedDeviceIdHasBeenSet(false)
{
}

Aws::String DescribeDeviceEc2InstancesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceIdsJsonList(m_instanceIds.size());
   for(unsigned instanceIdsIndex = 0; instanceIdsIndex < instanceIdsJsonList.GetLength(); ++instanceIdsIndex)
   {
     instanceIdsJsonList[instanceIdsIndex].AsString(m_instanceIds[instanceIdsIndex]);
   }
   payload.WithArray("instanceIds", std::move(instanceIdsJsonList));

  }

  return payload.View().WriteReadable();
}




