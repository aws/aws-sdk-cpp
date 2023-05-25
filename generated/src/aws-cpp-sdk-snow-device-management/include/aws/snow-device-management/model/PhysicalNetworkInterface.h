/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snow-device-management/model/IpAddressAssignment.h>
#include <aws/snow-device-management/model/PhysicalConnectorType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SnowDeviceManagement
{
namespace Model
{

  /**
   * <p>The details about the physical network interface for the
   * device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/PhysicalNetworkInterface">AWS
   * API Reference</a></p>
   */
  class PhysicalNetworkInterface
  {
  public:
    AWS_SNOWDEVICEMANAGEMENT_API PhysicalNetworkInterface();
    AWS_SNOWDEVICEMANAGEMENT_API PhysicalNetworkInterface(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWDEVICEMANAGEMENT_API PhysicalNetworkInterface& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWDEVICEMANAGEMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The default gateway of the device.</p>
     */
    inline const Aws::String& GetDefaultGateway() const{ return m_defaultGateway; }

    /**
     * <p>The default gateway of the device.</p>
     */
    inline bool DefaultGatewayHasBeenSet() const { return m_defaultGatewayHasBeenSet; }

    /**
     * <p>The default gateway of the device.</p>
     */
    inline void SetDefaultGateway(const Aws::String& value) { m_defaultGatewayHasBeenSet = true; m_defaultGateway = value; }

    /**
     * <p>The default gateway of the device.</p>
     */
    inline void SetDefaultGateway(Aws::String&& value) { m_defaultGatewayHasBeenSet = true; m_defaultGateway = std::move(value); }

    /**
     * <p>The default gateway of the device.</p>
     */
    inline void SetDefaultGateway(const char* value) { m_defaultGatewayHasBeenSet = true; m_defaultGateway.assign(value); }

    /**
     * <p>The default gateway of the device.</p>
     */
    inline PhysicalNetworkInterface& WithDefaultGateway(const Aws::String& value) { SetDefaultGateway(value); return *this;}

    /**
     * <p>The default gateway of the device.</p>
     */
    inline PhysicalNetworkInterface& WithDefaultGateway(Aws::String&& value) { SetDefaultGateway(std::move(value)); return *this;}

    /**
     * <p>The default gateway of the device.</p>
     */
    inline PhysicalNetworkInterface& WithDefaultGateway(const char* value) { SetDefaultGateway(value); return *this;}


    /**
     * <p>The IP address of the device.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }

    /**
     * <p>The IP address of the device.</p>
     */
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }

    /**
     * <p>The IP address of the device.</p>
     */
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p>The IP address of the device.</p>
     */
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }

    /**
     * <p>The IP address of the device.</p>
     */
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }

    /**
     * <p>The IP address of the device.</p>
     */
    inline PhysicalNetworkInterface& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}

    /**
     * <p>The IP address of the device.</p>
     */
    inline PhysicalNetworkInterface& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}

    /**
     * <p>The IP address of the device.</p>
     */
    inline PhysicalNetworkInterface& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}


    /**
     * <p>A value that describes whether the IP address is dynamic or persistent.</p>
     */
    inline const IpAddressAssignment& GetIpAddressAssignment() const{ return m_ipAddressAssignment; }

    /**
     * <p>A value that describes whether the IP address is dynamic or persistent.</p>
     */
    inline bool IpAddressAssignmentHasBeenSet() const { return m_ipAddressAssignmentHasBeenSet; }

    /**
     * <p>A value that describes whether the IP address is dynamic or persistent.</p>
     */
    inline void SetIpAddressAssignment(const IpAddressAssignment& value) { m_ipAddressAssignmentHasBeenSet = true; m_ipAddressAssignment = value; }

    /**
     * <p>A value that describes whether the IP address is dynamic or persistent.</p>
     */
    inline void SetIpAddressAssignment(IpAddressAssignment&& value) { m_ipAddressAssignmentHasBeenSet = true; m_ipAddressAssignment = std::move(value); }

    /**
     * <p>A value that describes whether the IP address is dynamic or persistent.</p>
     */
    inline PhysicalNetworkInterface& WithIpAddressAssignment(const IpAddressAssignment& value) { SetIpAddressAssignment(value); return *this;}

    /**
     * <p>A value that describes whether the IP address is dynamic or persistent.</p>
     */
    inline PhysicalNetworkInterface& WithIpAddressAssignment(IpAddressAssignment&& value) { SetIpAddressAssignment(std::move(value)); return *this;}


    /**
     * <p>The MAC address of the device.</p>
     */
    inline const Aws::String& GetMacAddress() const{ return m_macAddress; }

    /**
     * <p>The MAC address of the device.</p>
     */
    inline bool MacAddressHasBeenSet() const { return m_macAddressHasBeenSet; }

    /**
     * <p>The MAC address of the device.</p>
     */
    inline void SetMacAddress(const Aws::String& value) { m_macAddressHasBeenSet = true; m_macAddress = value; }

    /**
     * <p>The MAC address of the device.</p>
     */
    inline void SetMacAddress(Aws::String&& value) { m_macAddressHasBeenSet = true; m_macAddress = std::move(value); }

    /**
     * <p>The MAC address of the device.</p>
     */
    inline void SetMacAddress(const char* value) { m_macAddressHasBeenSet = true; m_macAddress.assign(value); }

    /**
     * <p>The MAC address of the device.</p>
     */
    inline PhysicalNetworkInterface& WithMacAddress(const Aws::String& value) { SetMacAddress(value); return *this;}

    /**
     * <p>The MAC address of the device.</p>
     */
    inline PhysicalNetworkInterface& WithMacAddress(Aws::String&& value) { SetMacAddress(std::move(value)); return *this;}

    /**
     * <p>The MAC address of the device.</p>
     */
    inline PhysicalNetworkInterface& WithMacAddress(const char* value) { SetMacAddress(value); return *this;}


    /**
     * <p>The netmask used to divide the IP address into subnets.</p>
     */
    inline const Aws::String& GetNetmask() const{ return m_netmask; }

    /**
     * <p>The netmask used to divide the IP address into subnets.</p>
     */
    inline bool NetmaskHasBeenSet() const { return m_netmaskHasBeenSet; }

    /**
     * <p>The netmask used to divide the IP address into subnets.</p>
     */
    inline void SetNetmask(const Aws::String& value) { m_netmaskHasBeenSet = true; m_netmask = value; }

    /**
     * <p>The netmask used to divide the IP address into subnets.</p>
     */
    inline void SetNetmask(Aws::String&& value) { m_netmaskHasBeenSet = true; m_netmask = std::move(value); }

    /**
     * <p>The netmask used to divide the IP address into subnets.</p>
     */
    inline void SetNetmask(const char* value) { m_netmaskHasBeenSet = true; m_netmask.assign(value); }

    /**
     * <p>The netmask used to divide the IP address into subnets.</p>
     */
    inline PhysicalNetworkInterface& WithNetmask(const Aws::String& value) { SetNetmask(value); return *this;}

    /**
     * <p>The netmask used to divide the IP address into subnets.</p>
     */
    inline PhysicalNetworkInterface& WithNetmask(Aws::String&& value) { SetNetmask(std::move(value)); return *this;}

    /**
     * <p>The netmask used to divide the IP address into subnets.</p>
     */
    inline PhysicalNetworkInterface& WithNetmask(const char* value) { SetNetmask(value); return *this;}


    /**
     * <p>The physical connector type.</p>
     */
    inline const PhysicalConnectorType& GetPhysicalConnectorType() const{ return m_physicalConnectorType; }

    /**
     * <p>The physical connector type.</p>
     */
    inline bool PhysicalConnectorTypeHasBeenSet() const { return m_physicalConnectorTypeHasBeenSet; }

    /**
     * <p>The physical connector type.</p>
     */
    inline void SetPhysicalConnectorType(const PhysicalConnectorType& value) { m_physicalConnectorTypeHasBeenSet = true; m_physicalConnectorType = value; }

    /**
     * <p>The physical connector type.</p>
     */
    inline void SetPhysicalConnectorType(PhysicalConnectorType&& value) { m_physicalConnectorTypeHasBeenSet = true; m_physicalConnectorType = std::move(value); }

    /**
     * <p>The physical connector type.</p>
     */
    inline PhysicalNetworkInterface& WithPhysicalConnectorType(const PhysicalConnectorType& value) { SetPhysicalConnectorType(value); return *this;}

    /**
     * <p>The physical connector type.</p>
     */
    inline PhysicalNetworkInterface& WithPhysicalConnectorType(PhysicalConnectorType&& value) { SetPhysicalConnectorType(std::move(value)); return *this;}


    /**
     * <p>The physical network interface ID.</p>
     */
    inline const Aws::String& GetPhysicalNetworkInterfaceId() const{ return m_physicalNetworkInterfaceId; }

    /**
     * <p>The physical network interface ID.</p>
     */
    inline bool PhysicalNetworkInterfaceIdHasBeenSet() const { return m_physicalNetworkInterfaceIdHasBeenSet; }

    /**
     * <p>The physical network interface ID.</p>
     */
    inline void SetPhysicalNetworkInterfaceId(const Aws::String& value) { m_physicalNetworkInterfaceIdHasBeenSet = true; m_physicalNetworkInterfaceId = value; }

    /**
     * <p>The physical network interface ID.</p>
     */
    inline void SetPhysicalNetworkInterfaceId(Aws::String&& value) { m_physicalNetworkInterfaceIdHasBeenSet = true; m_physicalNetworkInterfaceId = std::move(value); }

    /**
     * <p>The physical network interface ID.</p>
     */
    inline void SetPhysicalNetworkInterfaceId(const char* value) { m_physicalNetworkInterfaceIdHasBeenSet = true; m_physicalNetworkInterfaceId.assign(value); }

    /**
     * <p>The physical network interface ID.</p>
     */
    inline PhysicalNetworkInterface& WithPhysicalNetworkInterfaceId(const Aws::String& value) { SetPhysicalNetworkInterfaceId(value); return *this;}

    /**
     * <p>The physical network interface ID.</p>
     */
    inline PhysicalNetworkInterface& WithPhysicalNetworkInterfaceId(Aws::String&& value) { SetPhysicalNetworkInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The physical network interface ID.</p>
     */
    inline PhysicalNetworkInterface& WithPhysicalNetworkInterfaceId(const char* value) { SetPhysicalNetworkInterfaceId(value); return *this;}

  private:

    Aws::String m_defaultGateway;
    bool m_defaultGatewayHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    IpAddressAssignment m_ipAddressAssignment;
    bool m_ipAddressAssignmentHasBeenSet = false;

    Aws::String m_macAddress;
    bool m_macAddressHasBeenSet = false;

    Aws::String m_netmask;
    bool m_netmaskHasBeenSet = false;

    PhysicalConnectorType m_physicalConnectorType;
    bool m_physicalConnectorTypeHasBeenSet = false;

    Aws::String m_physicalNetworkInterfaceId;
    bool m_physicalNetworkInterfaceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
