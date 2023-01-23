/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snow-device-management/model/Instance.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SnowDeviceManagement
{
namespace Model
{

Instance::Instance() : 
    m_amiLaunchIndex(0),
    m_amiLaunchIndexHasBeenSet(false),
    m_blockDeviceMappingsHasBeenSet(false),
    m_cpuOptionsHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false),
    m_publicIpAddressHasBeenSet(false),
    m_rootDeviceNameHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

Instance::Instance(JsonView jsonValue) : 
    m_amiLaunchIndex(0),
    m_amiLaunchIndexHasBeenSet(false),
    m_blockDeviceMappingsHasBeenSet(false),
    m_cpuOptionsHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false),
    m_publicIpAddressHasBeenSet(false),
    m_rootDeviceNameHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

Instance& Instance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("amiLaunchIndex"))
  {
    m_amiLaunchIndex = jsonValue.GetInteger("amiLaunchIndex");

    m_amiLaunchIndexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("blockDeviceMappings"))
  {
    Aws::Utils::Array<JsonView> blockDeviceMappingsJsonList = jsonValue.GetArray("blockDeviceMappings");
    for(unsigned blockDeviceMappingsIndex = 0; blockDeviceMappingsIndex < blockDeviceMappingsJsonList.GetLength(); ++blockDeviceMappingsIndex)
    {
      m_blockDeviceMappings.push_back(blockDeviceMappingsJsonList[blockDeviceMappingsIndex].AsObject());
    }
    m_blockDeviceMappingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cpuOptions"))
  {
    m_cpuOptions = jsonValue.GetObject("cpuOptions");

    m_cpuOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageId"))
  {
    m_imageId = jsonValue.GetString("imageId");

    m_imageIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceId"))
  {
    m_instanceId = jsonValue.GetString("instanceId");

    m_instanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceType"))
  {
    m_instanceType = jsonValue.GetString("instanceType");

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("privateIpAddress"))
  {
    m_privateIpAddress = jsonValue.GetString("privateIpAddress");

    m_privateIpAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("publicIpAddress"))
  {
    m_publicIpAddress = jsonValue.GetString("publicIpAddress");

    m_publicIpAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rootDeviceName"))
  {
    m_rootDeviceName = jsonValue.GetString("rootDeviceName");

    m_rootDeviceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("securityGroups"))
  {
    Aws::Utils::Array<JsonView> securityGroupsJsonList = jsonValue.GetArray("securityGroups");
    for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
    {
      m_securityGroups.push_back(securityGroupsJsonList[securityGroupsIndex].AsObject());
    }
    m_securityGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = jsonValue.GetObject("state");

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue Instance::Jsonize() const
{
  JsonValue payload;

  if(m_amiLaunchIndexHasBeenSet)
  {
   payload.WithInteger("amiLaunchIndex", m_amiLaunchIndex);

  }

  if(m_blockDeviceMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> blockDeviceMappingsJsonList(m_blockDeviceMappings.size());
   for(unsigned blockDeviceMappingsIndex = 0; blockDeviceMappingsIndex < blockDeviceMappingsJsonList.GetLength(); ++blockDeviceMappingsIndex)
   {
     blockDeviceMappingsJsonList[blockDeviceMappingsIndex].AsObject(m_blockDeviceMappings[blockDeviceMappingsIndex].Jsonize());
   }
   payload.WithArray("blockDeviceMappings", std::move(blockDeviceMappingsJsonList));

  }

  if(m_cpuOptionsHasBeenSet)
  {
   payload.WithObject("cpuOptions", m_cpuOptions.Jsonize());

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_imageIdHasBeenSet)
  {
   payload.WithString("imageId", m_imageId);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("instanceId", m_instanceId);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("instanceType", m_instanceType);

  }

  if(m_privateIpAddressHasBeenSet)
  {
   payload.WithString("privateIpAddress", m_privateIpAddress);

  }

  if(m_publicIpAddressHasBeenSet)
  {
   payload.WithString("publicIpAddress", m_publicIpAddress);

  }

  if(m_rootDeviceNameHasBeenSet)
  {
   payload.WithString("rootDeviceName", m_rootDeviceName);

  }

  if(m_securityGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupsJsonList(m_securityGroups.size());
   for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
   {
     securityGroupsJsonList[securityGroupsIndex].AsObject(m_securityGroups[securityGroupsIndex].Jsonize());
   }
   payload.WithArray("securityGroups", std::move(securityGroupsJsonList));

  }

  if(m_stateHasBeenSet)
  {
   payload.WithObject("state", m_state.Jsonize());

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
