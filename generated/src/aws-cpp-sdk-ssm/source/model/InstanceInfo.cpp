/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/InstanceInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

InstanceInfo::InstanceInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

InstanceInfo& InstanceInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AgentType"))
  {
    m_agentType = jsonValue.GetString("AgentType");
    m_agentTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AgentVersion"))
  {
    m_agentVersion = jsonValue.GetString("AgentVersion");
    m_agentVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ComputerName"))
  {
    m_computerName = jsonValue.GetString("ComputerName");
    m_computerNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceStatus"))
  {
    m_instanceStatus = jsonValue.GetString("InstanceStatus");
    m_instanceStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IpAddress"))
  {
    m_ipAddress = jsonValue.GetString("IpAddress");
    m_ipAddressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ManagedStatus"))
  {
    m_managedStatus = ManagedStatusMapper::GetManagedStatusForName(jsonValue.GetString("ManagedStatus"));
    m_managedStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PlatformType"))
  {
    m_platformType = PlatformTypeMapper::GetPlatformTypeForName(jsonValue.GetString("PlatformType"));
    m_platformTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PlatformName"))
  {
    m_platformName = jsonValue.GetString("PlatformName");
    m_platformNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PlatformVersion"))
  {
    m_platformVersion = jsonValue.GetString("PlatformVersion");
    m_platformVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("ResourceType"));
    m_resourceTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue InstanceInfo::Jsonize() const
{
  JsonValue payload;

  if(m_agentTypeHasBeenSet)
  {
   payload.WithString("AgentType", m_agentType);

  }

  if(m_agentVersionHasBeenSet)
  {
   payload.WithString("AgentVersion", m_agentVersion);

  }

  if(m_computerNameHasBeenSet)
  {
   payload.WithString("ComputerName", m_computerName);

  }

  if(m_instanceStatusHasBeenSet)
  {
   payload.WithString("InstanceStatus", m_instanceStatus);

  }

  if(m_ipAddressHasBeenSet)
  {
   payload.WithString("IpAddress", m_ipAddress);

  }

  if(m_managedStatusHasBeenSet)
  {
   payload.WithString("ManagedStatus", ManagedStatusMapper::GetNameForManagedStatus(m_managedStatus));
  }

  if(m_platformTypeHasBeenSet)
  {
   payload.WithString("PlatformType", PlatformTypeMapper::GetNameForPlatformType(m_platformType));
  }

  if(m_platformNameHasBeenSet)
  {
   payload.WithString("PlatformName", m_platformName);

  }

  if(m_platformVersionHasBeenSet)
  {
   payload.WithString("PlatformVersion", m_platformVersion);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
