/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snow-device-management/model/PhysicalNetworkInterface.h>
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

PhysicalNetworkInterface::PhysicalNetworkInterface() : 
    m_defaultGatewayHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_ipAddressAssignment(IpAddressAssignment::NOT_SET),
    m_ipAddressAssignmentHasBeenSet(false),
    m_macAddressHasBeenSet(false),
    m_netmaskHasBeenSet(false),
    m_physicalConnectorType(PhysicalConnectorType::NOT_SET),
    m_physicalConnectorTypeHasBeenSet(false),
    m_physicalNetworkInterfaceIdHasBeenSet(false)
{
}

PhysicalNetworkInterface::PhysicalNetworkInterface(JsonView jsonValue) : 
    m_defaultGatewayHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_ipAddressAssignment(IpAddressAssignment::NOT_SET),
    m_ipAddressAssignmentHasBeenSet(false),
    m_macAddressHasBeenSet(false),
    m_netmaskHasBeenSet(false),
    m_physicalConnectorType(PhysicalConnectorType::NOT_SET),
    m_physicalConnectorTypeHasBeenSet(false),
    m_physicalNetworkInterfaceIdHasBeenSet(false)
{
  *this = jsonValue;
}

PhysicalNetworkInterface& PhysicalNetworkInterface::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("defaultGateway"))
  {
    m_defaultGateway = jsonValue.GetString("defaultGateway");

    m_defaultGatewayHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ipAddress"))
  {
    m_ipAddress = jsonValue.GetString("ipAddress");

    m_ipAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ipAddressAssignment"))
  {
    m_ipAddressAssignment = IpAddressAssignmentMapper::GetIpAddressAssignmentForName(jsonValue.GetString("ipAddressAssignment"));

    m_ipAddressAssignmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("macAddress"))
  {
    m_macAddress = jsonValue.GetString("macAddress");

    m_macAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("netmask"))
  {
    m_netmask = jsonValue.GetString("netmask");

    m_netmaskHasBeenSet = true;
  }

  if(jsonValue.ValueExists("physicalConnectorType"))
  {
    m_physicalConnectorType = PhysicalConnectorTypeMapper::GetPhysicalConnectorTypeForName(jsonValue.GetString("physicalConnectorType"));

    m_physicalConnectorTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("physicalNetworkInterfaceId"))
  {
    m_physicalNetworkInterfaceId = jsonValue.GetString("physicalNetworkInterfaceId");

    m_physicalNetworkInterfaceIdHasBeenSet = true;
  }

  return *this;
}

JsonValue PhysicalNetworkInterface::Jsonize() const
{
  JsonValue payload;

  if(m_defaultGatewayHasBeenSet)
  {
   payload.WithString("defaultGateway", m_defaultGateway);

  }

  if(m_ipAddressHasBeenSet)
  {
   payload.WithString("ipAddress", m_ipAddress);

  }

  if(m_ipAddressAssignmentHasBeenSet)
  {
   payload.WithString("ipAddressAssignment", IpAddressAssignmentMapper::GetNameForIpAddressAssignment(m_ipAddressAssignment));
  }

  if(m_macAddressHasBeenSet)
  {
   payload.WithString("macAddress", m_macAddress);

  }

  if(m_netmaskHasBeenSet)
  {
   payload.WithString("netmask", m_netmask);

  }

  if(m_physicalConnectorTypeHasBeenSet)
  {
   payload.WithString("physicalConnectorType", PhysicalConnectorTypeMapper::GetNameForPhysicalConnectorType(m_physicalConnectorType));
  }

  if(m_physicalNetworkInterfaceIdHasBeenSet)
  {
   payload.WithString("physicalNetworkInterfaceId", m_physicalNetworkInterfaceId);

  }

  return payload;
}

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
